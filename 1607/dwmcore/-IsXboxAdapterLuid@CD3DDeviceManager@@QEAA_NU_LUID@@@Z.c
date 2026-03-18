/*
 * XREFs of ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x1800355FC
 * Callers:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180055388 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ @ 0x180035C84 (-EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ.c)
 *     ?IsXboxAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x180036DFC (-IsXboxAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

bool __fastcall CD3DDeviceManager::IsXboxAdapterLuid(CD3DDeviceManager *this, struct _LUID a2)
{
  bool IsXboxAdapterLuid; // bl
  char *v5; // [rsp+30h] [rbp+8h] BYREF
  struct _LUID v6; // [rsp+38h] [rbp+10h]

  v6 = a2;
  IsXboxAdapterLuid = 0;
  v5 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  if ( (int)CD3DDeviceManager::EnsureDXGIEnumeration(this) >= 0 )
    IsXboxAdapterLuid = CDXGIEnumeration::IsXboxAdapterLuid(*((CDXGIEnumeration **)this + 9), v6);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v5);
  return IsXboxAdapterLuid;
}
