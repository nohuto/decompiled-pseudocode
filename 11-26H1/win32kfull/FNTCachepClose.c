/*
 * XREFs of FNTCachepClose @ 0x14031BBBC
 * Callers:
 *     EngFntCacheAllocInternal @ 0x14029054C (EngFntCacheAllocInternal.c)
 *     CloseFNTCache @ 0x14031BB10 (CloseFNTCache.c)
 * Callees:
 *     ComputeFileviewCheckSum @ 0x140140440 (ComputeFileviewCheckSum.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1401C6398 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bSetFntCacheReg @ 0x14029678C (bSetFntCacheReg.c)
 */

void __fastcall FNTCachepClose(int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // ecx

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v4 = *(_DWORD *)(v2 + 19584);
  if ( (v4 & 3) != 0 )
  {
    v5 = *(_QWORD *)(v2 + 19592);
    if ( v5 )
    {
      if ( (v4 & 2) != 0 )
      {
        v6 = *(_QWORD *)(v5 + 8);
        if ( v6 )
        {
          if ( *(_DWORD *)(v5 + 28) )
          {
            *(_DWORD *)(v6 + 16) = *(_DWORD *)(v5 + 16);
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 19592) + 8LL) + 32LL) = *(_DWORD *)(*(_QWORD *)(v2 + 19592) + 40LL)
                                                                           - *(_DWORD *)(*(_QWORD *)(v2 + 19592) + 32LL);
            **(_DWORD **)(*(_QWORD *)(v2 + 19592) + 8LL) = ComputeFileviewCheckSum(
                                                             *(_DWORD **)(*(_QWORD *)(v2 + 19592) + 8LL),
                                                             *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v2 + 19592) + 8LL)
                                                                             + 20LL));
          }
        }
      }
      v7 = *(_QWORD *)(v2 + 19592);
      v8 = *(unsigned int *)(v7 + 24);
      if ( (*(_DWORD *)(v2 + 19584) & 2) != 0 )
      {
        if ( *(_DWORD *)(v7 + 20) != (_DWORD)v8 )
          bSetFntCacheReg(1u, v8);
        v8 = 0LL;
        v9 = 0;
      }
      else
      {
        if ( (v8 & 3) == 0 )
        {
LABEL_14:
          vCleanUpFntCacheInternal(v7, v8, v3);
          return;
        }
        v9 = 1;
      }
      bSetFntCacheReg(v9, v8);
      goto LABEL_14;
    }
  }
  *(_DWORD *)(v2 + 19584) = 0;
  *(_BYTE *)(v2 + 19604) = 1;
}
