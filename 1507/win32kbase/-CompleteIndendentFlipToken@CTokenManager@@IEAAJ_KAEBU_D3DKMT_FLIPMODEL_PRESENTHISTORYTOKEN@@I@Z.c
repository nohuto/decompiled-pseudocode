/*
 * XREFs of ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00E014C
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C00470AC (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C00040A0 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00106E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?UpdateStats@CompositionSurfaceObject@@QEAAX_KAEBUCSM_BUFFER_STATISTICS@@@Z @ 0x1C00A3E14 (-UpdateStats@CompositionSurfaceObject@@QEAAX_KAEBUCSM_BUFFER_STATISTICS@@@Z.c)
 *     EtwTraceTokenIndependentFlipSkipCompleteEvent @ 0x1C00A7E50 (EtwTraceTokenIndependentFlipSkipCompleteEvent.c)
 *     ?RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAX_KU_LUID@@PEAPEAVCToken@@@Z @ 0x1C00E08C4 (-RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAX_KU_LUID@@PEAPEAVCToken@@@Z.c)
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
  struct CToken *v18; // [rsp+30h] [rbp-49h] BYREF
  PVOID Object; // [rsp+38h] [rbp-41h] BYREF
  _DWORD v20[8]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v21; // [rsp+60h] [rbp-19h]
  __int64 v22; // [rsp+68h] [rbp-11h]
  _QWORD v23[5]; // [rsp+70h] [rbp-9h] BYREF

  hCompSurf = (void *)a3->hCompSurf;
  memset(v23, 0, sizeof(v23));
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD *))qword_1C0101568)(a4, a3->VidPnSourceId, a3->PlaneIndex, v23);
  v9 = CompositionSurfaceObject::ResolveHandle(hCompSurf, 2LL, v8, (struct CompositionSurfaceObject **)&Object);
  if ( v9 >= 0 )
  {
    PresentCount = a3->PresentCount;
    v20[0] = 0;
    v20[4] = PresentCount;
    v20[5] = HIDWORD(v23[0]);
    v21 = v23[3];
    v22 = v23[3];
    v20[6] = v23[2];
    v20[2] = v23[4];
    CompositionSurfaceObject::UpdateStats(
      (CompositionSurfaceObject *)Object,
      a2,
      (const struct CSM_BUFFER_STATISTICS *)v20);
    compSurfLuid = a3->compSurfLuid;
    v18 = 0LL;
    CTokenManager::RemoveIndependentFlipSkipTokenFromList(this, a2, compSurfLuid, &v18);
    v12 = v18;
    if ( v18 )
    {
      v13 = (*(__int64 (__fastcall **)(struct CToken *, _QWORD))(*(_QWORD *)v18 + 104LL))(v18, LODWORD(v23[2]));
      v14 = v13 + 1;
      if ( v13 != -1 )
      {
        CompositionSurfaceObject::SetSyncRefreshCount((CompositionSurfaceObject *)Object, v14);
        v15 = *((_QWORD *)v12 + 5);
        v18 = *(struct CToken **)(*((_QWORD *)v12 + 4) + 16LL);
        v16 = (*(__int64 (__fastcall **)(struct CToken *))(*(_QWORD *)v12 + 96LL))(v12);
        EtwTraceTokenIndependentFlipSkipCompleteEvent(v14, v16, (int)v18, v15);
      }
      (**(void (__fastcall ***)(struct CToken *, __int64))v12)(v12, 1LL);
    }
    ObfDereferenceObject(Object);
    ObCloseHandle(hCompSurf, 1);
  }
  return (unsigned int)v9;
}
