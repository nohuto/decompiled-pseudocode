/*
 * XREFs of ??1CLegacySurfaceManager@@UEAA@XZ @ 0x1800E9118
 * Callers:
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x1800E91F4 (--1CSurfaceManager@@MEAA@XZ.c)
 *     ??_ECLegacySurfaceManager@@UEAAPEAXI@Z @ 0x1800E9380 (--_ECLegacySurfaceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800625C0 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ @ 0x1800DF094 (-ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ.c)
 *     ?FreeUnclaimedTokens@CLegacySurfaceManager@@IEAAXXZ @ 0x1800EFE28 (-FreeUnclaimedTokens@CLegacySurfaceManager@@IEAAXXZ.c)
 */

void __fastcall CLegacySurfaceManager::~CLegacySurfaceManager(CLegacySurfaceManager *this)
{
  PVOID v2; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CLegacySurfaceManager::`vftable';
  CLegacySurfaceManager::ReleaseCaptureBitsResponse(this);
  CLegacySurfaceManager::ProcessPostPresentResponseItems(this);
  CLegacySurfaceManager::FreeUnclaimedTokens(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 31);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 27);
  while ( 1 )
  {
    RestartKey = 0LL;
    v2 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 136), &RestartKey);
    if ( !v2 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 136), v2);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 13);
  CLogicalSurfaceHandleMap::~CLogicalSurfaceHandleMap(this);
}
