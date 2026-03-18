/*
 * XREFs of ?CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x18007EF9C
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x18007F914 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CheckD3D11Caps(CD3DDeviceLevel1 *this, struct ID3D11Device1 *a2)
{
  struct ID3D11Device1Vtbl *lpVtbl; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 v10; // rcx
  int v11; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v13[16]; // [rsp+40h] [rbp-48h] BYREF
  int v14; // [rsp+50h] [rbp-38h]

  lpVtbl = a2->lpVtbl;
  v12 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_07f857e7_077f_4119_86b9_e7ae7104cf33,
         &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( IsOOM(v5) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x47Au);
  }
  else
  {
    v7 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, __int64, _BYTE *))a2->lpVtbl->CheckFeatureSupport)(
           a2,
           5LL,
           v13);
    v6 = v7;
    if ( v7 < 0 )
    {
      if ( IsOOM(v7) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x47Du);
    }
    else
    {
      if ( v14 )
        *((_BYTE *)this + 712) = 1;
      v8 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, __int64, int *))a2->lpVtbl->CheckFeatureSupport)(
             a2,
             6LL,
             &v11);
      v6 = v8;
      if ( v8 < 0 )
      {
        if ( IsOOM(v8) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x484u);
      }
      else if ( v11 )
      {
        v10 = v12;
        *((_BYTE *)this + 713) = 1;
        if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 88LL))(v10) & 1) == 0 )
          *((_BYTE *)this + 714) = 1;
      }
    }
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v6;
}
