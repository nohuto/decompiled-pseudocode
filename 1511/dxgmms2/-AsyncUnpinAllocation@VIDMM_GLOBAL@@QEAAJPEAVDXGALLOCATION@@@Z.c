/*
 * XREFs of ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C003807C
 * Callers:
 *     VidMmAsyncUnpinAllocation @ 0x1C0001760 (VidMmAsyncUnpinAllocation.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011AFC (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1C005E748 (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AsyncUnpinAllocation(
        VIDMM_GLOBAL *this,
        struct DXGALLOCATION *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v7; // ebx
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-68h] BYREF
  DXGPUSHLOCK *v14; // [rsp+28h] [rbp-60h]
  int v15; // [rsp+30h] [rbp-58h]
  _BYTE v16[32]; // [rsp+40h] [rbp-48h] BYREF
  int v17; // [rsp+60h] [rbp-28h]
  VIDMM_GLOBAL *v18; // [rsp+68h] [rbp-20h]
  struct DXGALLOCATION *v19; // [rsp+70h] [rbp-18h]

  v4 = *((_QWORD *)a2 + 3);
  v7 = 0;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)this + 5166, 0LL, a4);
  DXGPUSHLOCK::AcquireExclusive(v14);
  v8 = *(_BYTE *)(v4 + 25);
  v15 = 2;
  if ( (v8 & 2) != 0 )
  {
    *(_BYTE *)(v4 + 25) = v8 & 0xFB;
    DxgkUnreferenceDxgResource(*((struct DXGRESOURCE **)a2 + 5));
    DxgkUnreferenceDxgAllocation(a2);
  }
  else
  {
    v17 = 3;
    v18 = this;
    v19 = a2;
    if ( (unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v16) )
    {
      v11 = WdLogNewEntry5_WdEvent(v10, v9);
      *(_QWORD *)(v11 + 24) = v4;
      *(_QWORD *)(v11 + 32) = a2;
      WdLogEvent5_WdEvent(v11);
      *(_BYTE *)(v4 + 25) = *(_BYTE *)(v4 + 25) & 0xF9 | 2;
      _InterlockedIncrement((volatile signed __int32 *)this + 10001);
    }
    else
    {
      v7 = -1073741801;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v7;
}
