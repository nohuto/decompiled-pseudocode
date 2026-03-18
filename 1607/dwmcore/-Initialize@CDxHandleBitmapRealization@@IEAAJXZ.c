/*
 * XREFs of ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180055388
 * Callers:
 *     ?Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1800B22B4 (-Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800B271C (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180190104 (-Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALI.c)
 * Callees:
 *     ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x1800355FC (-IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 *     ?RequiresHDRConversion@CDxHandleBitmapRealization@@IEAA_NXZ @ 0x180054A1C (-RequiresHDRConversion@CDxHandleBitmapRealization@@IEAA_NXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180054A70 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x180090140 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::Initialize(CDxHandleBitmapRealization *this)
{
  __int64 (*v2)(void); // rax
  int v3; // eax
  unsigned int v4; // edi
  CBitmapRealization *v5; // rcx
  struct _LUID *AdapterLuid; // rax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(__int64 (**)(void))(*(_QWORD *)this + 112LL);
  if ( (char *)v2 == (char *)CDxHandleBitmapRealization::EnsureD2DBitmap )
    v3 = CDxHandleBitmapRealization::EnsureD2DBitmap(this);
  else
    v3 = v2();
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( *((_DWORD *)this + 42) == 1
      || CDxHandleBitmapRealization::RequiresHDRConversion(this)
      || (AdapterLuid = (struct _LUID *)CBitmapRealization::GetAdapterLuid(v5),
          CD3DDeviceManager::IsXboxAdapterLuid((CD3DDeviceManager *)&g_D3DDeviceManager, *AdapterLuid))
      && ((*(void (__fastcall **)(__int64, char *, unsigned int *))(*(_QWORD *)(*((_QWORD *)this + 52) + 104LL) + 48LL))(
            *((_QWORD *)this + 52) + 104LL,
            &v9,
            &v8),
          v8 > 0x438) )
    {
      *((_BYTE *)this + 428) = 0;
    }
  }
  return v4;
}
