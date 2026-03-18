/*
 * XREFs of ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C0087EC8
 * Callers:
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C001D828 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000D0F4 (VidSchiReleaseSyncObjectReference.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FA58 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0012F08 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ @ 0x1C001D0E0 (-DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE_COMMAND_UPDATEGPUVA::~VIDMM_DEVICE_COMMAND_UPDATEGPUVA(
        VIDMM_DEVICE_COMMAND_UPDATEGPUVA *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 i; // rdi
  __int64 v7; // rax
  VIDMM_GLOBAL *v8; // rcx
  __int64 **v9; // rbx
  __int64 *v10; // rcx
  __int64 v11; // rax
  VIDMM_MAPPED_VA_RANGE *v12; // rcx
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *((_QWORD *)this + 9);
  if ( v5 )
    VidSchiReleaseSyncObjectReference(v5);
  if ( *((_QWORD *)this + 8) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
      VIDMM_ALLOC::DecrementPagingPacketReferenceCount(*(VIDMM_ALLOC **)(*((_QWORD *)this + 8) + 8 * i), a2, a3, a4);
    operator delete[](*((void **)this + 8));
  }
  v7 = *((_QWORD *)this + 11);
  if ( v7 )
  {
    if ( *(_QWORD *)v7 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v13,
        (struct _KTHREAD **)(*(_QWORD *)v7 + 40LL));
      if ( *((_QWORD *)this + 14) )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v8, (struct _LIST_ENTRY *)this + 8);
      if ( *((_QWORD *)this + 15) )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v8, (struct _LIST_ENTRY *)((char *)this + 152));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
    }
    KeReleaseSemaphore((PRKSEMAPHORE)(*((_QWORD *)this + 11) + 24LL), 0, 1, 0);
  }
  operator delete[](*((void **)this + 3));
  v9 = (__int64 **)((char *)this + 96);
  while ( *v9 != (__int64 *)v9 )
  {
    v10 = *v9;
    v11 = **v9;
    if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v11 + 8) != v10 )
      __fastfail(3u);
    *v9 = (__int64 *)v11;
    v12 = (VIDMM_MAPPED_VA_RANGE *)(v10 - 1);
    *(_QWORD *)(v11 + 8) = v9;
    *((_QWORD *)v12 + 1) = 0LL;
    *((_QWORD *)v12 + 2) = 0LL;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v12);
  }
}
