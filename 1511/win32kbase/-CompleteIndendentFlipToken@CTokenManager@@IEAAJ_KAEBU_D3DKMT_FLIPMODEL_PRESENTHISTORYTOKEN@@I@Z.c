/*
 * XREFs of ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00E2094
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C003CD0C (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C00056D8 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00393C8 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     EtwTraceTokenIndependentFlipSkipCompleteEvent @ 0x1C00AC370 (EtwTraceTokenIndependentFlipSkipCompleteEvent.c)
 *     ?RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAX_KU_LUID@@PEAPEAVCToken@@@Z @ 0x1C00E2828 (-RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAX_KU_LUID@@PEAPEAVCToken@@@Z.c)
 *     ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@I@Z @ 0x1C00E28C0 (-UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@.c)
 */

__int64 __fastcall CTokenManager::CompleteIndendentFlipToken(
        CTokenManager *this,
        unsigned __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        unsigned int a4)
{
  void *hCompSurf; // r12
  __int64 v8; // r8
  int v9; // r15d
  UINT PresentCount; // ecx
  LUID compSurfLuid; // r8
  struct CToken *v12; // rdi
  int v13; // eax
  int v14; // esi
  __int64 v15; // rbx
  char v16; // al
  struct CToken *v18; // [rsp+30h] [rbp-39h] BYREF
  PVOID Object; // [rsp+38h] [rbp-31h] BYREF
  _DWORD v20[4]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v21; // [rsp+50h] [rbp-19h]
  __int64 v22; // [rsp+58h] [rbp-11h]
  _QWORD v23[5]; // [rsp+60h] [rbp-9h] BYREF

  hCompSurf = (void *)a3->hCompSurf;
  memset(v23, 0, sizeof(v23));
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD *))qword_1C0104380)(a4, a3->VidPnSourceId, a3->PlaneIndex, v23);
  v9 = CompositionSurfaceObject::ResolveHandle(hCompSurf, 2LL, v8, (struct CompositionSurfaceObject **)&Object);
  if ( v9 >= 0 )
  {
    PresentCount = a3->PresentCount;
    v20[2] = v23[2];
    v20[0] = PresentCount;
    v21 = v23[3];
    v22 = v23[3];
    v20[1] = HIDWORD(v23[0]);
    CompositionSurfaceObject::UpdateStatsAndCustomPresentDuration(
      (CompositionSurfaceObject *)Object,
      a2,
      (const struct DXGI_FRAME_STATISTICS *)v20,
      v23[4]);
    compSurfLuid = a3->compSurfLuid;
    v18 = 0LL;
    CTokenManager::RemoveIndependentFlipSkipTokenFromList(this, a2, compSurfLuid, &v18);
    v12 = v18;
    if ( v18 )
    {
      v13 = (*(__int64 (__fastcall **)(struct CToken *, _QWORD))(*(_QWORD *)v18 + 136LL))(v18, LODWORD(v23[2]));
      v14 = v13 + 1;
      if ( v13 != -1 )
      {
        CompositionSurfaceObject::SetSyncRefreshCount((CompositionSurfaceObject *)Object, v14);
        v15 = *((_QWORD *)v12 + 5);
        v18 = *(struct CToken **)(*((_QWORD *)v12 + 4) + 16LL);
        v16 = (*(__int64 (__fastcall **)(struct CToken *))(*(_QWORD *)v12 + 120LL))(v12);
        EtwTraceTokenIndependentFlipSkipCompleteEvent(v14, v16, (int)v18, v15);
      }
      (**(void (__fastcall ***)(struct CToken *, __int64))v12)(v12, 1LL);
    }
    ObfDereferenceObject(Object);
    ObCloseHandle(hCompSurf, 1);
  }
  return (unsigned int)v9;
}
