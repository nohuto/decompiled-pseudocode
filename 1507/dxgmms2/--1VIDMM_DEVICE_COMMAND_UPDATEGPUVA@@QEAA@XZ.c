/*
 * XREFs of ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C004B2E4
 * Callers:
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C000EA58 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C00058B4 (VidSchiReleaseSyncObjectReference.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ?DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ @ 0x1C000EBC0 (-DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C000F228 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000F264 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall VIDMM_DEVICE_COMMAND_UPDATEGPUVA::~VIDMM_DEVICE_COMMAND_UPDATEGPUVA(
        VIDMM_DEVICE_COMMAND_UPDATEGPUVA *this)
{
  __int64 v2; // rcx
  __int64 i; // rdi
  __int64 v4; // rax
  VIDMM_GLOBAL *v5; // rcx
  __int64 **v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  VIDMM_MAPPED_VA_RANGE *v9; // rcx
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
    VidSchiReleaseSyncObjectReference(v2);
  if ( *((_QWORD *)this + 8) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
      VIDMM_ALLOC::DecrementPagingPacketReferenceCount(*(VIDMM_ALLOC **)(*((_QWORD *)this + 8) + 8 * i));
    operator delete(*((void **)this + 8));
  }
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    if ( *(_QWORD *)v4 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v10,
        (struct DXGPUSHLOCK *const)(*(_QWORD *)v4 + 40LL));
      if ( *((_QWORD *)this + 14) )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v5, (struct _LIST_ENTRY *)this + 8);
      if ( *((_QWORD *)this + 15) )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v5, (struct _LIST_ENTRY *)((char *)this + 152));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    }
    KeReleaseSemaphore((PRKSEMAPHORE)(*((_QWORD *)this + 11) + 24LL), 0, 1, 0);
  }
  operator delete(*((void **)this + 3));
  v6 = (__int64 **)((char *)this + 96);
  while ( *v6 != (__int64 *)v6 )
  {
    v7 = *v6;
    v8 = **v6;
    if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
      __fastfail(3u);
    *v6 = (__int64 *)v8;
    v9 = (VIDMM_MAPPED_VA_RANGE *)(v7 - 1);
    *(_QWORD *)(v8 + 8) = v6;
    *((_QWORD *)v9 + 1) = 0LL;
    *((_QWORD *)v9 + 2) = 0LL;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v9);
  }
}
