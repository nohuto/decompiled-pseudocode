/*
 * XREFs of ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0088294
 * Callers:
 *     VidMmAsyncUnpinAllocation @ 0x1C001D4E0 (VidMmAsyncUnpinAllocation.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000FCC0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireInverseSemaphore@DXGINVERSESEMAPHORE@@QEAAXXZ @ 0x1C001D848 (-AcquireInverseSemaphore@DXGINVERSESEMAPHORE@@QEAAXXZ.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1C0067134 (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AsyncUnpinAllocation(
        struct _KTHREAD **this,
        struct DXGALLOCATION *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v15; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-68h] BYREF
  DXGPUSHLOCK *v17; // [rsp+28h] [rbp-60h]
  int v18; // [rsp+30h] [rbp-58h]
  _BYTE v19[32]; // [rsp+40h] [rbp-48h] BYREF
  int v20; // [rsp+60h] [rbp-28h]
  struct _KTHREAD **v21; // [rsp+68h] [rbp-20h]
  struct DXGALLOCATION *v22; // [rsp+70h] [rbp-18h]

  v4 = 0;
  v5 = *((_QWORD *)a2 + 3);
  if ( *((_BYTE *)this[3] + 2091) || *((_BYTE *)this + 6496) )
  {
    v15 = WdLogNewEntry5_WdEvent(this, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = a2;
    WdLogEvent5_WdEvent(v15);
    return 3221225473LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, this + 5209, 0);
    DXGPUSHLOCK::AcquireExclusive(v17);
    v8 = *(_BYTE *)(v5 + 25);
    v18 = 2;
    if ( (v8 & 2) != 0 )
    {
      *(_BYTE *)(v5 + 25) = v8 & 0xFB;
      DxgkUnreferenceDxgResource(*((struct DXGRESOURCE **)a2 + 5));
      DxgkUnreferenceDxgAllocation(a2);
    }
    else
    {
      v20 = 3;
      v21 = this;
      v22 = a2;
      if ( (unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v19) )
      {
        v13 = WdLogNewEntry5_WdEvent(v10, v9, v11, v12);
        *(_QWORD *)(v13 + 24) = v5;
        *(_QWORD *)(v13 + 32) = a2;
        WdLogEvent5_WdEvent(v13);
        *(_BYTE *)(v5 + 25) = *(_BYTE *)(v5 + 25) & 0xF9 | 2;
        DXGINVERSESEMAPHORE::AcquireInverseSemaphore((DXGINVERSESEMAPHORE *)(this + 5144));
      }
      else
      {
        v4 = -1073741801;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
    return v4;
  }
}
