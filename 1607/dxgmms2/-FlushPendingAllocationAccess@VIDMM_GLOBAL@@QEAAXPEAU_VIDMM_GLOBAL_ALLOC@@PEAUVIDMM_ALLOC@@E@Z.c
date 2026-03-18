/*
 * XREFs of ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00890E4
 * Callers:
 *     ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z @ 0x1C0057A30 (-WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00891C0 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     VidSchIsDeviceBusy @ 0x1C00019C8 (VidSchIsDeviceBusy.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchFlushDevice @ 0x1C0041290 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::FlushPendingAllocationAccess(
        VIDMM_GLOBAL *this,
        DXGFASTMUTEX **a2,
        struct VIDMM_ALLOC *a3,
        char a4)
{
  _QWORD **v5; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdx
  _QWORD *i; // r8
  __int64 v11; // r9
  _QWORD *v12; // r10
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // [rsp+20h] [rbp-18h] BYREF
  __int64 v20; // [rsp+28h] [rbp-10h]

  v5 = (_QWORD **)(a2 + 37);
  while ( 1 )
  {
    v8 = 0LL;
    DXGFASTMUTEX::Acquire(a2[40]);
    v12 = *v5;
LABEL_12:
    if ( v12 != v5 )
    {
      v11 = (__int64)(v12 - 2);
      for ( i = (_QWORD *)*(v12 - 2); ; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)v11 )
        {
          v12 = (_QWORD *)*v12;
          goto LABEL_12;
        }
        if ( i - 5 != (_QWORD *)a3 )
        {
          v13 = *(i - 4);
          v14 = *(_QWORD *)(v13 + 32);
          v15 = *(_QWORD *)(v13 + 24);
          if ( !a4 || v15 && !*(_BYTE *)(*(_QWORD *)(v15 + 40) + 290LL) )
          {
            if ( VidSchIsDeviceBusy(v14) )
              break;
          }
        }
      }
      v8 = v16;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40], v9, (__int64)i, v11);
    if ( !v8 )
      break;
    v20 = 0LL;
    v19 = 5;
    VidSchFlushDevice(v8, &v19, v17, v18);
  }
}
