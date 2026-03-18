/*
 * XREFs of ?UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z @ 0x18003CC2C
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z @ 0x18011A2E0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z.c)
 * Callees:
 *     ?IsDDAUpToDate@CDisplaySet@@QEBA_NXZ @ 0x180036480 (-IsDDAUpToDate@CDisplaySet@@QEBA_NXZ.c)
 *     ?UpdateDXGIEnumeration@CDisplayManager@@QEAAJPEAW4Enum@DisplayStateComparison@@@Z @ 0x180038744 (-UpdateDXGIEnumeration@CDisplayManager@@QEAAJPEAW4Enum@DisplayStateComparison@@@Z.c)
 *     ?UpdateDisplayState@CDisplayManager@@QEAAJ_N0PEA_NPEAW4Enum@DisplayStateComparison@@@Z @ 0x1800389C8 (-UpdateDisplayState@CDisplayManager@@QEAAJ_N0PEA_NPEAW4Enum@DisplayStateComparison@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?CheckStereoState@CComposition@@QEAAJXZ @ 0x18003B164 (-CheckStereoState@CComposition@@QEAAJXZ.c)
 *     ?NotifyInvalidDisplaySet@CComposition@@QEAAXXZ @ 0x180043700 (-NotifyInvalidDisplaySet@CComposition@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ForceNewDisplayState@CDesktopRenderTarget@@UEAA_NXZ @ 0x180075EA0 (-ForceNewDisplayState@CDesktopRenderTarget@@UEAA_NXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x180080190 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x1800BA0CC (-ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseDesktopResourcesForDisplayChange@CComposition@@QEAAXXZ @ 0x180116F3C (-ReleaseDesktopResourcesForDisplayChange@CComposition@@QEAAXXZ.c)
 */

__int64 __fastcall CComposition::UpdateDisplaySet(CComposition *this, int *a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // edi
  char v6; // r13
  int v7; // r12d
  char v8; // r14
  unsigned int i; // r15d
  CDesktopRenderTarget *v10; // rcx
  __int64 (*v11)(void); // rax
  char v12; // al
  int updated; // eax
  CDisplayManager *v14; // rcx
  const GUID *v15; // r8
  int v16; // r15d
  char IsDDAUpToDate; // al
  int v18; // r14d
  int v19; // eax
  int v21; // eax
  __int64 v22; // r14
  unsigned int v23; // esi
  __int64 v24; // rcx
  _QWORD *v25; // r15
  COverlayContext *v26; // rcx
  int v27; // eax
  unsigned int v28; // r15d
  __int64 v29; // rcx
  int v30; // eax
  unsigned int v31; // [rsp+20h] [rbp-10h]
  GUID v32; // [rsp+70h] [rbp+40h] BYREF
  int v33; // [rsp+80h] [rbp+50h] BYREF

  *(_QWORD *)v32.Data4 = a2;
  v3 = 0;
  v5 = 0;
  LOBYTE(v32.Data1) = 0;
  v6 = 0;
  v33 = 0;
  v7 = 0;
  v8 = 0;
  for ( i = 0; i < *((_DWORD *)this + 138); ++i )
  {
    v10 = *(CDesktopRenderTarget **)(*((_QWORD *)this + 66) + 8LL * i);
    v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 176LL);
    if ( (char *)v11 == (char *)CDesktopRenderTarget::ForceNewDisplayState )
      v12 = CDesktopRenderTarget::ForceNewDisplayState(v10);
    else
      v12 = v11();
    v8 = v12;
    if ( v12 )
      break;
  }
  updated = CDisplayManager::UpdateDXGIEnumeration(this, (enum DisplayStateComparison::Enum *)&v33, a3);
  v16 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x2D2u);
    v7 = v16;
  }
  else
  {
    if ( !v8 && !*((_BYTE *)this + 1242) && !*((_BYTE *)this + 1241) )
      goto LABEL_10;
    LOBYTE(v15) = *((_DWORD *)this + 276) == 0;
    v21 = CDisplayManager::UpdateDisplayState(v14, v8, v15, &v32, (enum DisplayStateComparison::Enum *)&v33);
    v7 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x2E0u);
    else
      *((_BYTE *)this + 1242) = 0;
  }
  if ( v8 )
  {
    v6 = 1;
LABEL_13:
    v18 = v33;
    goto LABEL_14;
  }
LABEL_10:
  if ( qword_1801EFD28 )
    IsDDAUpToDate = CDisplaySet::IsDDAUpToDate(qword_1801EFD28);
  else
    IsDDAUpToDate = 1;
  if ( IsDDAUpToDate )
    goto LABEL_13;
  v18 = v33;
  if ( !v33 )
    v18 = 2;
LABEL_14:
  if ( v7 >= 0 )
  {
    v19 = CComposition::CheckStereoState(this);
    v5 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x309u);
      goto LABEL_21;
    }
  }
  switch ( v18 )
  {
    case 2:
      v5 = 0;
      v28 = 0;
      if ( *((_DWORD *)this + 138) )
      {
        while ( 1 )
        {
          v29 = *(_QWORD *)(*((_QWORD *)this + 66) + 8LL * v28);
          v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 240LL))(v29);
          v5 = v30;
          if ( v30 < 0 )
            break;
          if ( ++v28 >= *((_DWORD *)this + 138) )
            goto LABEL_53;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x154u);
      }
LABEL_53:
      if ( v5 < 0 )
      {
        v31 = 791;
        goto LABEL_58;
      }
      break;
    case 3:
LABEL_55:
      CComposition::ReleaseDesktopResourcesForDisplayChange(this);
      goto LABEL_39;
    case 4:
      CComposition::NotifyInvalidDisplaySet(this);
LABEL_39:
      *(_QWORD *)&v32.Data1 = &stru_1801F0028;
      EnterCriticalSection(&stru_1801F0028);
      if ( dword_1801F0110 )
      {
        do
          CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(*(CD3DDeviceLevel1 **)(qword_1801F00A0 + 40LL * v3++));
        while ( v3 < dword_1801F0110 );
      }
      CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)&v32);
      goto LABEL_21;
  }
  if ( v6 )
    goto LABEL_55;
  if ( LOBYTE(v32.Data1) )
  {
    v22 = *((_QWORD *)this + 4);
    v5 = 0;
    v23 = 0;
    if ( *(_DWORD *)(v22 + 48) )
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)(*(_QWORD *)(v22 + 24) + 8LL * v23);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 48LL))(v24, 38LL) )
        {
          v5 = 0;
          v25 = *(_QWORD **)(*(_QWORD *)(v22 + 24) + 8LL * v23);
          v26 = (COverlayContext *)v25[92];
          if ( v26 )
          {
            LOBYTE(v32.Data1) = 0;
            v27 = COverlayContext::ProcessDisplayStateChange(v26, 0, (bool *)&v32);
            v5 = v27;
            if ( v27 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x248u);
            }
            else if ( LOBYTE(v32.Data1) )
            {
              (*(void (__fastcall **)(_QWORD *))(*v25 + 168LL))(v25);
            }
          }
          if ( v5 < 0 )
            break;
        }
        if ( ++v23 >= *(_DWORD *)(v22 + 48) )
          goto LABEL_35;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x3F7u);
    }
LABEL_35:
    if ( v5 < 0 )
    {
      v31 = 839;
LABEL_58:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v31);
    }
  }
LABEL_21:
  **(_DWORD **)v32.Data4 = v7;
  return (unsigned int)v5;
}
