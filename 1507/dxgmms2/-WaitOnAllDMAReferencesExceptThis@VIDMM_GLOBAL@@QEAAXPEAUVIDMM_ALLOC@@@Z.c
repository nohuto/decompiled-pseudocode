/*
 * XREFs of ?WaitOnAllDMAReferencesExceptThis@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0056C5C
 * Callers:
 *     ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z @ 0x1C0031520 (-WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z.c)
 * Callees:
 *     VidSchIsDeviceBusy @ 0x1C0001000 (VidSchIsDeviceBusy.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchFlushDevice @ 0x1C002F300 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::WaitOnAllDMAReferencesExceptThis(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 v3; // rsi
  _QWORD **v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  _QWORD *i; // r9
  _QWORD *v8; // r8
  _QWORD *v9; // r10
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  v3 = **a2;
  v4 = (_QWORD **)(v3 + 288);
  while ( 1 )
  {
    v5 = 0LL;
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v3 + 312));
    v8 = *v4;
LABEL_9:
    if ( v8 != v4 )
    {
      v9 = v8 - 2;
      for ( i = (_QWORD *)*(v8 - 2); ; i = (_QWORD *)*i )
      {
        if ( i == v9 )
        {
          v8 = (_QWORD *)*v8;
          goto LABEL_9;
        }
        if ( i - 5 != a2 && VidSchIsDeviceBusy(*(_DWORD **)(*(i - 4) + 32LL)) )
          break;
      }
      v5 = v10;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v3 + 312), v6, (__int64)v8, (__int64)i);
    if ( !v5 )
      break;
    v14 = 0LL;
    v13 = 3;
    VidSchFlushDevice(v5, &v13, v11, v12);
  }
}
