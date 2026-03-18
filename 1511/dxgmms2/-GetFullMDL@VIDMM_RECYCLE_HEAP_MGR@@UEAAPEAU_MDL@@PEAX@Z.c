/*
 * XREFs of ?GetFullMDL@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX@Z @ 0x1C005A390
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1C005BA70 (-GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_HEAP_MGR::GetFullMDL(
        VIDMM_RECYCLE_HEAP_MGR *this,
        VIDMM_RECYCLE_MULTIRANGE *a2,
        __int64 a3,
        __int64 a4)
{
  bool v5; // zf
  union _LARGE_INTEGER *v6; // rcx
  struct _MDL *result; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  struct _MDL *v10; // rdi
  union _LARGE_INTEGER *v11; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  union _LARGE_INTEGER *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  union _LARGE_INTEGER *v22; // [rsp+20h] [rbp-18h] BYREF
  char v23; // [rsp+28h] [rbp-10h]

  v5 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416) == 0LL;
  v6 = (union _LARGE_INTEGER *)((char *)this + 416);
  v23 = 0;
  v22 = v6;
  if ( v5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 451LL;
    WdLogEvent5_WdAssertion(v14);
    if ( v23 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17, v18);
      v19[5] = &v22;
      v19[3] = 275LL;
      v19[4] = 4LL;
      v19[6] = 0LL;
      v19[7] = 0LL;
      WdLogEvent5_WdCriticalError(v19);
    }
    v6 = v22;
  }
  DXGFASTMUTEX::Acquire(v6);
  v23 = 1;
  result = VIDMM_RECYCLE_MULTIRANGE::GetFullMDL(a2);
  v10 = result;
  if ( v23 )
  {
    v11 = v22;
    v23 = 0;
    CurrentThread = KeGetCurrentThread();
    v13 = v22;
    if ( (struct _KTHREAD *)v22->QuadPart != CurrentThread )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, CurrentThread, v8, v9);
      v20[3] = 275LL;
      v20[4] = 4LL;
      v20[5] = v11;
      v20[6] = 0LL;
      v20[7] = 0LL;
      WdLogEvent5_WdCriticalError(v20);
    }
    if ( v11[1].HighPart <= 0 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v13, CurrentThread, v8, v9);
      *(_QWORD *)(v21 + 24) = 374LL;
      WdLogEvent5_WdAssertion(v21);
    }
    v5 = v11[1].HighPart-- == 1;
    if ( v5 )
    {
      v11->QuadPart = 0LL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11[1], 0xFFFFFFFF) != 1 )
        KeSetEvent((PRKEVENT)&v11[3], 0, 0);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)&v11[1]);
    }
    KeLeaveCriticalRegion();
    return v10;
  }
  return result;
}
