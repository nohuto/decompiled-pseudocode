/*
 * XREFs of MiMapSystemImage @ 0x14048327C
 * Callers:
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 *     MiChargeSystemImageCommitment @ 0x140483538 (MiChargeSystemImageCommitment.c)
 *     MiAddMappedPtes @ 0x140509080 (MiAddMappedPtes.c)
 *     MiDeleteSessionDriverProtos @ 0x140546890 (MiDeleteSessionDriverProtos.c)
 *     MiCreatePerSessionProtos @ 0x140661C44 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x140661DDC (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiMapSystemImage(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rbx
  unsigned int v6; // ebp
  char v7; // r8
  int v8; // r14d
  unsigned int v9; // esi
  __int64 result; // rax
  int PteAddress; // eax
  int v12; // r12d
  unsigned int SessionId; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // [rsp+78h] [rbp+20h] BYREF
  int v17; // [rsp+7Ch] [rbp+24h]

  v16 = 0;
  v17 = 0;
  v5 = (_DWORD *)MiSectionControlArea(a1);
  v6 = *(_DWORD *)(*(_QWORD *)v5 + 8LL);
  if ( (v7 & 1) == 0 )
  {
    v8 = 1;
    v9 = -1;
    result = MiChargeSystemImageCommitment(v4, 1LL);
    if ( (int)result < 0 )
      return result;
LABEL_3:
    PteAddress = MiGetPteAddress(a2);
    v12 = MiAddMappedPtes(PteAddress, v6, (_DWORD)v5, (unsigned int)&v16, v9);
    if ( v12 < 0 )
    {
      if ( v8 == 1 )
      {
        MiChargeSystemImageCommitment(a1, 0LL);
      }
      else if ( (v5[14] & 0x4000000) != 0 )
      {
        MiDereferencePerSessionProtos(v5, v9);
      }
      if ( a2 >= qword_140326950 && a2 < qword_140326950 + 0x8000000000LL && a2 != *(_QWORD *)(*(_QWORD *)v5 + 32LL) )
        MiDeleteSessionDriverProtos(v5);
      return (unsigned int)v12;
    }
    else
    {
      if ( v8 == 1 )
        _InterlockedExchangeAdd((_DWORD *)&xmmword_1403268A8 + 3, v6);
      return 0LL;
    }
  }
  v8 = 0;
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  v9 = SessionId;
  if ( (v5[14] & 0x4000000) != 0 )
  {
    result = MiCreatePerSessionProtos(v5, SessionId);
    if ( (int)result < 0 )
      return result;
  }
  MiGetPteAddress(((unsigned __int64)v6 << 12) + a2 - 1);
  v14 = MiGetPteAddress(a2);
  if ( (unsigned int)MiMakeZeroedPageTables(v14, v15, 1, 1u) )
    goto LABEL_3;
  if ( (v5[14] & 0x4000000) != 0 )
    MiDereferencePerSessionProtos(v5, v9);
  return 3221225495LL;
}
