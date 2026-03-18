/*
 * XREFs of ?PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z @ 0x18011A2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x1800351A8 (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z @ 0x1800374D0 (-ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z.c)
 *     ?ProcessSurfaceUpdates@CSurfaceManager@@QEAAJ_K@Z @ 0x1800375E0 (-ProcessSurfaceUpdates@CSurfaceManager@@QEAAJ_K@Z.c)
 *     ?ProcessBatches@CCrossThreadComposition@@IEAAJ_K@Z @ 0x180038B90 (-ProcessBatches@CCrossThreadComposition@@IEAAJ_K@Z.c)
 *     ?CheckDeviceState@CComposition@@QEAAJXZ @ 0x18003B324 (-CheckDeviceState@CComposition@@QEAAJXZ.c)
 *     ?UpdateAnimateResources@CComposition@@IEAAIXZ @ 0x18003B5CC (-UpdateAnimateResources@CComposition@@IEAAIXZ.c)
 *     ?UpdateExpressions@CComposition@@QEAAXXZ @ 0x18003B674 (-UpdateExpressions@CComposition@@QEAAXXZ.c)
 *     ?UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z @ 0x18003CC2C (-UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?SendPendingInteractionTrackerCallbacks@CExpressionManager@@QEAAXXZ @ 0x1800886FC (-SendPendingInteractionTrackerCallbacks@CExpressionManager@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ?PerformDelayedSnapshot@CSnapshot@@QEAAJXZ @ 0x18014356C (-PerformDelayedSnapshot@CSnapshot@@QEAAJXZ.c)
 */

__int64 __fastcall CCrossThreadComposition::PreRender(CCrossThreadComposition *this, bool *a2, int *a3)
{
  unsigned __int64 v3; // rbp
  int updated; // eax
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rcx
  int v15; // eax
  const GUID *v16; // r8
  const GUID *v17; // r9
  __int64 v18; // rcx
  int v19; // eax
  int v20; // ebx
  int v21; // r9d
  __int64 v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // rbp
  int v25; // eax
  UINT32 cData; // [rsp+20h] [rbp-78h]
  int v28; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-60h] BYREF
  GUID *v30; // [rsp+58h] [rbp-40h]
  int v31; // [rsp+60h] [rbp-38h]
  int v32; // [rsp+64h] [rbp-34h]

  v3 = *((_QWORD *)this + 44);
  *a2 = 0;
  updated = CCrossThreadComposition::ProcessBatches((CKernelTransport **)this, v3);
  v8 = updated;
  if ( updated < 0 )
  {
    cData = 259;
    goto LABEL_47;
  }
  v9 = *((_QWORD *)this + 65);
  if ( v9 )
  {
    updated = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 24) + 48LL))(*(_QWORD *)(v9 + 24));
    v8 = updated;
    if ( updated < 0 )
    {
      cData = 266;
LABEL_47:
      v21 = updated;
      goto LABEL_48;
    }
  }
  CExpressionManager::SendPendingInteractionTrackerCallbacks(*((CExpressionManager **)this + 21));
  updated = CComposition::UpdateDisplaySet(this, a3, v10);
  v8 = updated;
  if ( updated < 0 )
  {
    cData = 278;
    goto LABEL_47;
  }
  v8 = 0;
  if ( v3 )
  {
    if ( *((_BYTE *)this + 268) )
    {
      CD3DDeviceManager::FlushAllDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
      *((_BYTE *)this + 268) = 0;
    }
    v11 = CSurfaceManager::ProcessLegacyTokens(*((CSurfaceManager **)this + 5), v3);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1EEu);
    }
    else
    {
      v12 = CSurfaceManager::ProcessSurfaceUpdates(*((CSurfaceManager **)this + 5), v3);
      v8 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1F3u);
    }
  }
  if ( v8 < 0 )
  {
    cData = 283;
    goto LABEL_30;
  }
  v13 = 0LL;
  if ( *((_DWORD *)this + 138) )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)this + 66) + 8 * v13);
      updated = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 152LL))(v14);
      v8 = updated;
      if ( updated < 0 )
        break;
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= *((_DWORD *)this + 138) )
        goto LABEL_17;
    }
    cData = 290;
    goto LABEL_47;
  }
LABEL_17:
  v15 = CComposition::CheckDeviceState((CRenderTargetManager **)this);
  if ( v15 == 142213121 )
  {
    *a2 = 1;
  }
  else if ( v15 == -2003304307
         && hProvider > 5u
         && (qword_1801EA750 & 0x400000000000LL) != 0
         && (qword_1801EA758 & 0x400000000000LL) == qword_1801EA758 )
  {
    v32 = 0;
    v30 = &gDwmCoreTelemetryActivityId;
    v31 = 16;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801C39E8, v16, v17, 3u, &pData);
  }
  v18 = *((_QWORD *)this + 65);
  if ( v18 )
  {
    LOBYTE(v16) = *a2;
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const GUID *))(**(_QWORD **)(v18 + 24) + 64LL))(
            *(_QWORD *)(v18 + 24),
            *((_QWORD *)this + 59),
            v16);
    v28 = v19;
    v20 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v19, 0x142u);
    TranslateDXGIorD3DErrorInContext(v20, 0, &v28);
    v8 = v28;
    if ( v28 < 0 )
    {
      cData = 331;
LABEL_30:
      v21 = v8;
LABEL_48:
      MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v21, cData);
      return (unsigned int)v8;
    }
  }
  if ( !*a2 )
  {
    CComposition::UpdateAnimateResources(this);
    CComposition::UpdateExpressions(this);
    if ( *((_DWORD *)this + 138) )
    {
      v22 = 0LL;
      while ( 1 )
      {
        v23 = *(_QWORD *)(*((_QWORD *)this + 66) + 8 * v22);
        updated = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 160LL))(v23);
        v8 = updated;
        if ( updated < 0 )
          break;
        v22 = (unsigned int)(v22 + 1);
        if ( (unsigned int)v22 >= *((_DWORD *)this + 138) )
          goto LABEL_36;
      }
      cData = 356;
      goto LABEL_47;
    }
  }
LABEL_36:
  v8 = 0;
  v24 = 0LL;
  if ( *((_DWORD *)this + 162) )
  {
    while ( 1 )
    {
      v25 = CSnapshot::PerformDelayedSnapshot(*(CSnapshot **)(*((_QWORD *)this + 78) + 8 * v24));
      v8 = v25;
      if ( v25 < 0 )
        break;
      v24 = (unsigned int)(v24 + 1);
      if ( (unsigned int)v24 >= *((_DWORD *)this + 162) )
        goto LABEL_42;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xD5Du);
  }
LABEL_42:
  *((_DWORD *)this + 162) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 624, 8u);
  if ( v8 < 0 )
  {
    cData = 362;
    goto LABEL_30;
  }
  return (unsigned int)v8;
}
