/*
 * XREFs of ?EvictAllocationCallback@@YAEPEAX0@Z @ 0x1C006FD44
 * Callers:
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_NPEAPEAV3@@Z @ 0x1C0057C04 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C00506B0 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 */

unsigned __int8 __fastcall EvictAllocationCallback(_BYTE *a1, char *a2)
{
  VIDMM_GLOBAL *v4; // r13
  _QWORD *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char *i; // rsi
  VIDMM_DEVICE **j; // r14
  _QWORD *v10; // rax
  __int64 v11; // rcx

  if ( *((_DWORD *)a2 + 39) )
  {
    a1[8] = 0;
    return 0;
  }
  else
  {
    v4 = *(VIDMM_GLOBAL **)(*((_QWORD *)a2 + 16) + 8LL);
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 39));
    for ( i = (char *)*((_QWORD *)a2 + 36); i != a2 + 288; i = *(char **)i )
    {
      for ( j = (VIDMM_DEVICE **)*((_QWORD *)i - 2); j != (VIDMM_DEVICE **)(i - 16); j = (VIDMM_DEVICE **)*j )
      {
        VIDMM_GLOBAL::NotifyAllocationEviction(v4, j - 5, 1, 0LL, 0LL);
        v10 = (_QWORD *)((char *)*(j - 4) + 168);
        if ( !*v10 )
        {
          v11 = *(_QWORD *)a1;
          v5 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
          *v10 = *(_QWORD *)a1;
          v10[1] = v5;
          if ( *v5 != v11 )
            __fastfail(3u);
          *v5 = v10;
          *(_QWORD *)(v11 + 8) = v10;
        }
      }
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), (__int64)v5, v6, v7);
    return 1;
  }
}
