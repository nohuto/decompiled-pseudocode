/*
 * XREFs of ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x1800060B0
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001F6C0 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180021314 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x18006AEA0 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800284D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

__int64 __fastcall ResourceHelper::CreateGeometryFromHRGN(HRGN hrgn, struct CResource **a2)
{
  __int64 v2; // rbx
  struct _RGNDATA *v3; // rbp
  int v6; // eax
  signed int v7; // esi
  DWORD RegionData; // eax
  size_t v9; // rsi
  signed int LastError; // eax
  int v11; // r9d
  void *(__fastcall *v12)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rbp
  struct _RGNDATA *v13; // rax
  signed int v14; // eax
  int v15; // eax
  struct MIL_CHANNEL__ *v16; // r15
  unsigned __int64 v17; // rsi
  int v18; // eax
  int v19; // edi
  int appended; // eax
  int v21; // eax
  int v22; // esi
  __int64 v23; // rdi
  unsigned int v25; // [rsp+20h] [rbp-98h]
  unsigned int v26; // [rsp+20h] [rbp-98h]
  _DWORD v27[4]; // [rsp+40h] [rbp-78h] BYREF
  int v28; // [rsp+50h] [rbp-68h] BYREF
  __int64 v29; // [rsp+54h] [rbp-64h]
  __int64 v30; // [rsp+5Ch] [rbp-5Ch]
  __int64 v31; // [rsp+64h] [rbp-54h]
  __int64 v32; // [rsp+6Ch] [rbp-4Ch]

  v2 = (__int64)*a2;
  v3 = 0LL;
  v28 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  }
  else
  {
    v6 = CResource::Create(65LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x98u);
      goto LABEL_47;
    }
  }
  if ( hrgn )
  {
    SetLastError(0);
    RegionData = GetRegionData(hrgn, 0, 0LL);
    v9 = RegionData;
    if ( !RegionData )
    {
      LastError = GetLastError();
      v7 = LastError;
      if ( LastError > 0 )
        v7 = (unsigned __int16)LastError | 0x80070000;
      v25 = 157;
      if ( v7 >= 0 )
        v7 = -2003304445;
      v11 = v7;
      goto LABEL_46;
    }
    v12 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v12 == WPF::ProcessHeapImpl::Alloc )
      v13 = (struct _RGNDATA *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, RegionData);
    else
      v13 = (struct _RGNDATA *)v12(WPF::g_pProcessHeap, RegionData);
    v3 = v13;
    if ( !v13 )
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xA0u);
      goto LABEL_47;
    }
    memset_0(v13, 0, v9);
    SetLastError(0);
    if ( !GetRegionData(hrgn, v9, v3) )
    {
      v14 = GetLastError();
      v7 = v14;
      if ( v14 > 0 )
        v7 = (unsigned __int16)v14 | 0x80070000;
      v25 = 168;
      if ( v7 >= 0 )
        v7 = -2003304445;
      v11 = v7;
      goto LABEL_46;
    }
  }
  else
  {
    v3 = (struct _RGNDATA *)&v28;
  }
  v15 = *(_DWORD *)(v2 + 24);
  v16 = *(struct MIL_CHANNEL__ **)(v2 + 16);
  v17 = 16LL * v3->rdh.nCount;
  if ( v17 > 0xFFFFFFFF )
  {
    v26 = 42;
LABEL_44:
    v19 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, v26);
    v7 = -2147024362;
LABEL_45:
    v25 = 175;
    v11 = v19;
LABEL_46:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, v25);
    goto LABEL_47;
  }
  if ( (int)v17 + 12 < (unsigned int)v17 )
  {
    v26 = 43;
    goto LABEL_44;
  }
  v27[0] = 247;
  v27[1] = v15;
  v27[2] = v17;
  v18 = MilChannel_BeginCommand(v16, v27, 0xCu, v17 + 12);
  v19 = v18;
  if ( v18 >= 0 )
  {
    appended = MilChannel_AppendCommandData(v16, v3->Buffer, v17);
    v19 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, appended, 0x3Du);
    v21 = MilChannel_EndCommand(v16);
    v22 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0x42u);
    if ( !v19 || v19 >= 0 && v22 < 0 )
      v19 = v22;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x38u);
  }
  v7 = v19;
  if ( v19 < 0 )
    goto LABEL_45;
  v23 = (__int64)*a2;
  if ( *a2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 8), 0xFFFFFFFF) == 1 && v23 )
    (**(void (__fastcall ***)(__int64, __int64))v23)(v23, 1LL);
  *a2 = (struct CResource *)v2;
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
LABEL_47:
  if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
  if ( v3 && v3 != (struct _RGNDATA *)&v28 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v3);
  return (unsigned int)v7;
}
