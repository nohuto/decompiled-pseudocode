/*
 * XREFs of ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00F4498
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0019F9C (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C001C1F4 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C004862C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     EtwTraceTokenIndependentFlipSkipCompleteEvent @ 0x1C00B5B20 (EtwTraceTokenIndependentFlipSkipCompleteEvent.c)
 *     NtGdiDdDDIGetPresentStatsInternal @ 0x1C00C40F0 (NtGdiDdDDIGetPresentStatsInternal.c)
 *     ?RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAX_KU_LUID@@PEAPEAVCToken@@@Z @ 0x1C00F4988 (-RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAX_KU_LUID@@PEAPEAVCToken@@@Z.c)
 *     ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C00F4A20 (-UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@.c)
 */

__int64 __fastcall CTokenManager::CompleteIndendentFlipToken(
        CTokenManager *this,
        unsigned __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3)
{
  void *hCompSurf; // r12
  __int64 v7; // r8
  int v8; // r15d
  UINT PresentCount; // ecx
  LUID compSurfLuid; // r8
  struct CToken *v11; // rdi
  int v12; // eax
  int v13; // esi
  __int64 v14; // rbx
  char v15; // al
  struct CToken *v17; // [rsp+30h] [rbp-39h] BYREF
  PVOID Object; // [rsp+38h] [rbp-31h] BYREF
  _DWORD v19[4]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v20; // [rsp+50h] [rbp-19h]
  __int64 v21; // [rsp+58h] [rbp-11h]
  _QWORD v22[5]; // [rsp+60h] [rbp-9h] BYREF

  hCompSurf = (void *)a3->hCompSurf;
  memset(v22, 0, sizeof(v22));
  NtGdiDdDDIGetPresentStatsInternal();
  v8 = CompositionSurfaceObject::ResolveHandle(hCompSurf, 2LL, v7, (struct CompositionSurfaceObject **)&Object);
  if ( v8 >= 0 )
  {
    PresentCount = a3->PresentCount;
    v19[2] = v22[2];
    v19[0] = PresentCount;
    v20 = v22[3];
    v21 = v22[3];
    v19[1] = HIDWORD(v22[0]);
    CompositionSurfaceObject::UpdateStatsAndCustomPresentDuration(Object, a2, v19, LODWORD(v22[4]));
    compSurfLuid = a3->compSurfLuid;
    v17 = 0LL;
    CTokenManager::RemoveIndependentFlipSkipTokenFromList(this, a2, compSurfLuid, &v17);
    v11 = v17;
    if ( v17 )
    {
      v12 = (*(__int64 (__fastcall **)(struct CToken *, _QWORD))(*(_QWORD *)v17 + 128LL))(v17, LODWORD(v22[2]));
      v13 = v12 + 1;
      if ( v12 != -1 )
      {
        CompositionSurfaceObject::SetSyncRefreshCount((CompositionSurfaceObject *)Object, v13);
        v14 = *((_QWORD *)v11 + 5);
        v17 = *(struct CToken **)(*((_QWORD *)v11 + 4) + 16LL);
        v15 = (*(__int64 (__fastcall **)(struct CToken *))(*(_QWORD *)v11 + 112LL))(v11);
        EtwTraceTokenIndependentFlipSkipCompleteEvent(v13, v15, (int)v17, v14);
      }
      (**(void (__fastcall ***)(struct CToken *, __int64))v11)(v11, 1LL);
    }
    ObfDereferenceObject(Object);
    ObCloseHandle(hCompSurf, 1);
  }
  return (unsigned int)v8;
}
