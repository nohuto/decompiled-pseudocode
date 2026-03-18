/*
 * XREFs of MiMapSystemImage @ 0x1403CC804
 * Callers:
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiAddMappedPtes @ 0x1403C7E10 (MiAddMappedPtes.c)
 *     MiChargeSystemImageCommitment @ 0x1403CC2F8 (MiChargeSystemImageCommitment.c)
 *     MiDeleteSessionDriverProtos @ 0x14050BE0C (MiDeleteSessionDriverProtos.c)
 *     MiCreatePerSessionProtos @ 0x14062BE88 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x14062C01C (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiMapSystemImage(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  __int64 v6; // rbp
  char v7; // r8
  int v8; // r15d
  unsigned int v9; // esi
  __int64 result; // rax
  __int64 *PteAddress; // rax
  int v12; // ebx
  unsigned int SessionId; // eax
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0LL;
  v5 = (_DWORD *)MiSectionControlArea(a1);
  v6 = *(unsigned int *)(*(_QWORD *)v5 + 8LL);
  if ( (v7 & 1) == 0 )
  {
    v8 = 1;
    v9 = -1;
    result = MiChargeSystemImageCommitment(v4);
    if ( (int)result < 0 )
      return result;
LABEL_3:
    PteAddress = (__int64 *)MiGetPteAddress(a2);
    v12 = MiAddMappedPtes(PteAddress, v6, (__int64)v5, &v16, v9);
    if ( v12 < 0 )
    {
      if ( v8 == 1 )
      {
        MiChargeSystemImageCommitment(a1);
      }
      else if ( (v5[14] & 0x4000000) != 0 )
      {
        MiDereferencePerSessionProtos(v5, v9);
      }
      if ( a2 + 0x70000000000LL <= 0x7FFFFFFFFFLL && a2 != *(_QWORD *)(*(_QWORD *)v5 + 32LL) )
        MiDeleteSessionDriverProtos(v5);
      return (unsigned int)v12;
    }
    else
    {
      if ( v8 == 1 )
        _InterlockedExchangeAdd((_DWORD *)&xmmword_1402FE598 + 3, v6);
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
  v14 = MiGetPteAddress((v6 << 12) + a2 - 1);
  v15 = MiGetPteAddress(a2);
  if ( (unsigned int)MiMakeZeroedPageTables(v15, v14, 1, 1u) )
    goto LABEL_3;
  if ( (v5[14] & 0x4000000) != 0 )
    MiDereferencePerSessionProtos(v5, v9);
  return 3221225495LL;
}
