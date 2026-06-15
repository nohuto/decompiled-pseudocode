/*
 * XREFs of ?FindVolumeStrip@CVolumeProvider@@AEAAPEAVCVolumeStrip@@PEBG@Z @ 0x18002BB30
 * Callers:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002B7C0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddRef@CVolumeStrip@@UEAAKXZ @ 0x180017BD0 (-AddRef@CVolumeStrip@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

PCNZWCH *__fastcall CVolumeProvider::FindVolumeStrip(CVolumeProvider *this, const unsigned __int16 *a2)
{
  PCNZWCH *v3; // rdi
  _QWORD *v5; // rbx
  __int64 (__fastcall *v6)(CVolumeStrip *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  v3 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = (_QWORD *)*((_QWORD *)this + 7);
  while ( v5 )
  {
    v3 = (PCNZWCH *)v5[2];
    v5 = (_QWORD *)*v5;
    if ( CompareStringW(0x7Fu, 1u, v3[28], -1, a2, -1) == 2 )
    {
      v6 = (__int64 (__fastcall *)(CVolumeStrip *))*((_QWORD *)*v3 + 1);
      if ( v6 == CVolumeStrip::AddRef )
        CVolumeStrip::AddRef((CVolumeStrip *)v3);
      else
        v6((CVolumeStrip *)v3);
      break;
    }
    v3 = 0LL;
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
