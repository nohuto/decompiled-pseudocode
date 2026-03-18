/*
 * XREFs of vCleanupPrivateFonts @ 0x1400FD9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FE100 (--$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850 (-PffBucket@PFT@@QEBA-AVPffIterator@@K@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z @ 0x14028B4D4 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z.c)
 *     ??0PffIterator@@QEAA@PEAVPFF@@@Z @ 0x140297050 (--0PffIterator@@QEAA@PEAVPFF@@@Z.c)
 *     ??0PFF_PLACEHOLDER@@QEAA@XZ @ 0x140326904 (--0PFF_PLACEHOLDER@@QEAA@XZ.c)
 *     ?vRemovePFF@PFF@@QEAAXXZ @ 0x140327A04 (-vRemovePFF@PFF@@QEAAXXZ.c)
 */

void __fastcall vCleanupPrivateFonts(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // r14
  __int64 v10; // rsi
  struct PFF *v11; // r10
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 SessionState; // rax
  struct PFF **v17; // rax
  __int64 v18; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v19[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h]
  struct PFF *v21; // [rsp+40h] [rbp-C0h]
  struct PFF *v22; // [rsp+180h] [rbp+80h] BYREF
  HSEMAPHORE v23; // [rsp+188h] [rbp+88h] BYREF
  char v24; // [rsp+190h] [rbp+90h] BYREF

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  if ( *(_QWORD *)(v3 + 20320) )
  {
    v23 = *(HSEMAPHORE *)(v3 + 20320);
    GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
    v4 = *(_QWORD *)(v3 + 20384);
    v18 = v4;
    if ( v4 )
    {
      PFF_PLACEHOLDER::PFF_PLACEHOLDER((PFF_PLACEHOLDER *)v19);
      v8 = 0;
      v9 = *(_QWORD *)(W32GetSessionState(v6, v5, v7) + 96);
      v10 = 40LL;
      do
      {
        PFT::PffBucket(v4, &v22, v8);
        v11 = v22;
        while ( v11 )
        {
          v20 = *((_QWORD *)v11 + 1);
          v12 = v20;
          v21 = v11;
          *((_QWORD *)v11 + 1) = v19;
          if ( v12 )
            *(_QWORD *)(v12 + 16) = v19;
          if ( (unsigned int)PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v18, v11, v8, 0x80u) )
            GreQuerySystemTime(v9 + 20408);
          SessionState = W32GetSessionState(v14, v13, v15);
          GreAcquireSemaphore<17,>(*(_QWORD *)(SessionState + 96) + 4864LL);
          v4 = v18;
          if ( *(_BYTE **)(v10 + v18) == v19 )
            *(_QWORD *)(v10 + v18) = v20;
          v17 = (struct PFF **)PffIterator::PffIterator((PffIterator *)&v24, (struct PFF *)v19);
          v22 = *v17;
          *v17 = 0LL;
          PFF::vRemovePFF((PFF *)v19);
        }
        ++v8;
        v10 += 8LL;
      }
      while ( v8 < 0x14 );
    }
    SEMOBJ<17>::vUnlock(&v23);
  }
}
