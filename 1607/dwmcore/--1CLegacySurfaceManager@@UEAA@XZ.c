/*
 * XREFs of ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18011B598
 * Callers:
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x18011B6BC (--1CSurfaceManager@@MEAA@XZ.c)
 *     ??_ECLegacySurfaceManager@@UEAAPEAXI@Z @ 0x18011B840 (--_ECLegacySurfaceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x180009DB8 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ @ 0x1801115D0 (-ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ.c)
 */

void __fastcall CLegacySurfaceManager::~CLegacySurfaceManager(CLegacySurfaceManager *this)
{
  int i; // edi
  PVOID v3; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CLegacySurfaceManager::`vftable';
  CLegacySurfaceManager::ReleaseCaptureBitsResponse(this);
  CLegacySurfaceManager::ProcessPostPresentResponseItems(this);
  for ( i = *((_DWORD *)this + 32); i > 0; --i )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(*((_QWORD *)this + 13) + 16LL * (unsigned int)(i - 1) + 8));
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 104, 0x10u);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 248);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 216);
  while ( 1 )
  {
    RestartKey = 0LL;
    v3 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 136), &RestartKey);
    if ( !v3 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 136), v3);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 104);
  CLogicalSurfaceHandleMap::~CLogicalSurfaceHandleMap(this);
}
