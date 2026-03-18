/*
 * XREFs of MiMapSystemImage @ 0x140575D34
 * Callers:
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiDereferencePerSessionProtos @ 0x14021BF98 (MiDereferencePerSessionProtos.c)
 *     MiAddMappedPtes @ 0x14051C0C0 (MiAddMappedPtes.c)
 *     MiChargeSystemImageCommitment @ 0x140576D98 (MiChargeSystemImageCommitment.c)
 *     MiDeleteSessionDriverProtos @ 0x1405833BC (MiDeleteSessionDriverProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406A3478 (MiCreatePerSessionProtos.c)
 */

__int64 __fastcall MiMapSystemImage(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rsi
  char v7; // r8
  int v8; // ebp
  unsigned int v9; // edi
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r12d
  unsigned int SessionId; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  v5 = MiSectionControlArea(a1);
  v6 = *(unsigned int *)(*(_QWORD *)v5 + 8LL);
  if ( (v7 & 1) == 0 )
  {
    v8 = 1;
    v9 = -1;
    result = MiChargeSystemImageCommitment(v4, 1LL);
    if ( (int)result < 0 )
      return result;
LABEL_3:
    v13 = MiAddMappedPtes((__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v6, v5, &v17);
    if ( v13 < 0 )
    {
      if ( v8 == 1 )
      {
        MiChargeSystemImageCommitment(a1, 0LL);
      }
      else if ( (*(_DWORD *)(v5 + 56) & 0x4000000) != 0 )
      {
        MiDereferencePerSessionProtos((_QWORD *)v5, v9, v11, v12);
      }
      if ( a2 + 0x70000000000LL <= 0x7FFFFFFFFFLL && a2 != *(_QWORD *)(*(_QWORD *)v5 + 32LL) )
        MiDeleteSessionDriverProtos(v5);
      return (unsigned int)v13;
    }
    else
    {
      if ( v8 == 1 )
        _InterlockedExchangeAdd((_DWORD *)&xmmword_14034EA58 + 3, v6);
      return 0LL;
    }
  }
  v8 = 0;
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  v9 = SessionId;
  if ( (*(_DWORD *)(v5 + 56) & 0x4000000) != 0 )
  {
    result = MiCreatePerSessionProtos(v5, SessionId);
    if ( (int)result < 0 )
      return result;
  }
  if ( (unsigned int)MiMakeZeroedPageTables(
                       ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                       ((((v6 << 12) + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                       1,
                       1) )
    goto LABEL_3;
  if ( (*(_DWORD *)(v5 + 56) & 0x4000000) != 0 )
    MiDereferencePerSessionProtos((_QWORD *)v5, v9, v15, v16);
  return 3221225495LL;
}
