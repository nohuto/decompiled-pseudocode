/*
 * XREFs of MiLogStrongCodeDriverLoadFailure @ 0x1406596A4
 * Callers:
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     _TlgCreateSz @ 0x1401CDD4C (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall MiLogStrongCodeDriverLoadFailure(const CHAR *Src, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rax
  TraceLoggingHProvider v6; // r10
  __int64 v7; // rdi
  _QWORD *PoolWithTag; // rax
  __int64 v9; // rbx
  void *v10; // rcx
  __int64 *v11; // rax
  int v12; // [rsp+60h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL;
  if ( qword_1403277E0 )
  {
    if ( qword_1403277E0->LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(qword_1403277E0, 0x400000000000uLL) )
      {
        *(_DWORD *)v2 = *(_DWORD *)(a2 + 120);
        *(_DWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = *(_DWORD *)(a2 + 156);
        TlgCreateSz((PEVENT_DATA_DESCRIPTOR)(v2 + 48), Src);
        v5 = *(_QWORD *)(a2 + 96);
        *(_DWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C) = 0;
        *(_DWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x5C) = 0;
        *(_DWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C) = 0;
        *(_DWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x7C) = 0;
        *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = v5;
        *(_DWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = *(unsigned __int16 *)(a2 + 88);
        *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = (unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL;
        *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                             + 88;
        *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                             + 4;
        *(_DWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 2;
        *(_DWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 4;
        *(_DWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = 4;
        TlgWriteEx(v6, &unk_14027C49A, 0LL, 1u, 0LL, 0LL, 7u, (EVENT_DATA_DESCRIPTOR *)(v2 + 16));
      }
    }
  }
  else
  {
    v7 = -1LL;
    do
      ++v7;
    while ( Src[v7] );
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7 + *(unsigned __int16 *)(a2 + 88) + 49LL, 0x46446D4Du);
    v9 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[2] = PoolWithTag + 6;
      memmove(PoolWithTag + 6, Src, v7 + 1);
      v10 = (void *)(v9 + v7 + 49);
      *(_QWORD *)(v9 + 32) = v10;
      memmove(v10, *(const void **)(a2 + 96), *(unsigned __int16 *)(a2 + 88));
      *(_WORD *)(v9 + 24) = *(_WORD *)(a2 + 88);
      *(_WORD *)(v9 + 26) = *(_WORD *)(a2 + 88);
      *(_DWORD *)(v9 + 40) = *(_DWORD *)(a2 + 120);
      *(_DWORD *)(v9 + 44) = *(_DWORD *)(a2 + 156);
      v11 = (__int64 *)qword_140326878;
      if ( *(PVOID **)qword_140326878 != &qword_140326870 )
        __fastfail(3u);
      *(_QWORD *)v9 = &qword_140326870;
      *(_QWORD *)(v9 + 8) = v11;
      *v11 = v9;
      qword_140326878 = v9;
    }
  }
}
