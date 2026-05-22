/*
 * XREFs of HidStatus @ 0x1800656A8
 * Callers:
 *     ?HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z @ 0x180065884 (-HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z.c)
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x180065BBC (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 *     ?HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGGGPEAM@Z @ 0x18006630C (-HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGGGPEAM@Z.c)
 *     ?HIDSetInteger@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGI@Z @ 0x180066468 (-HIDSetInteger@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGI@Z.c)
 * Callees:
 *     ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x18006681C (--$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HidStatus(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  void *v4; // rsi
  IErrorInfo *v5; // rcx
  ICreateErrorInfo *v6; // rcx
  IErrorInfo *perrinfo; // [rsp+28h] [rbp-69h] BYREF
  ICreateErrorInfo *pperrinfo[3]; // [rsp+30h] [rbp-61h] BYREF
  _WORD v10[64]; // [rsp+48h] [rbp-49h] BYREF

  pperrinfo[1] = (ICreateErrorInfo *)-2LL;
  if ( a1 < 0 )
  {
    pperrinfo[0] = 0LL;
    if ( CreateErrorInfo(pperrinfo) >= 0 )
    {
      swprintf_s<64>(v10, L"Initial Error: 0x%08x", (unsigned int)a1);
      v2 = -1LL;
      do
        ++v2;
      while ( v10[v2] );
      v3 = v2 + 1;
      v4 = CoTaskMemAlloc(2 * v3);
      _o_wcscpy_s(v4, v3, v10);
      v5 = 0LL;
      perrinfo = 0LL;
      if ( v4 )
      {
        if ( ((int (__fastcall *)(ICreateErrorInfo *, void *))pperrinfo[0]->lpVtbl->SetDescription)(pperrinfo[0], v4) >= 0
          && ((__int64 (__fastcall *)(ICreateErrorInfo *, GUID *, IErrorInfo **))pperrinfo[0]->lpVtbl->QueryInterface)(
               pperrinfo[0],
               &GUID_1cf2b120_547d_101b_8e65_08002b2bd119,
               &perrinfo) >= 0 )
        {
          SetErrorInfo(0, perrinfo);
        }
        CoTaskMemFree(v4);
        v5 = perrinfo;
      }
      if ( v5 )
      {
        perrinfo = 0LL;
        ((void (__fastcall *)(IErrorInfo *))v5->lpVtbl->Release)(v5);
      }
    }
    v6 = pperrinfo[0];
    if ( pperrinfo[0] )
    {
      pperrinfo[0] = 0LL;
      ((void (__fastcall *)(ICreateErrorInfo *))v6->lpVtbl->Release)(v6);
    }
  }
  return (unsigned int)a1;
}
