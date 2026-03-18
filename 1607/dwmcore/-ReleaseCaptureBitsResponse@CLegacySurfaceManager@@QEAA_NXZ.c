/*
 * XREFs of ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x180009DB8
 * Callers:
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x1800097E0 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ?ExpireCaptureBitsResponse@CLegacySurfaceManager@@QEAA_N_N@Z @ 0x1800378F8 (-ExpireCaptureBitsResponse@CLegacySurfaceManager@@QEAA_N_N@Z.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18011B598 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800AAB2C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800AAB54 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CLegacySurfaceManager::ReleaseCaptureBitsResponse(CLegacySurfaceManager *this)
{
  char v2; // bl
  CResponseItem *v3; // rcx

  v2 = 0;
  v3 = (CResponseItem *)*((_QWORD *)this + 35);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 292) )
    {
      CResponseItem::ReleaseResponseRef(v3);
      *((_BYTE *)this + 292) = 0;
    }
    CResponseItem::QueueResponse(*((CResponseItem **)this + 35));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 8LL))(*((_QWORD *)this + 35));
    *((_QWORD *)this + 35) = 0LL;
    *((_DWORD *)this + 72) = 0;
    return 1;
  }
  return v2;
}
