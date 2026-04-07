/*
 * XREFs of ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800351C0
 * Callers:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800357F4 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 * Callees:
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18000EBCC (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180034A0C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800350AC (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::Initialize(
        CSecondaryWindowRepresentation *this,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 v8; // r10
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // edi
  int v14; // eax
  int v15; // esi
  struct CTransitionWindowSnapshot *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-28h]
  CSecondaryWindowRepresentation *v25; // [rsp+50h] [rbp+8h] BYREF
  struct CTransitionWindowSnapshot *v26; // [rsp+60h] [rbp+18h] BYREF

  *((_DWORD *)this + 41) = a5;
  *((_DWORD *)this + 30) = a6;
  *((_DWORD *)this + 10) = a2;
  *((_QWORD *)this + 4) = a4;
  *((_QWORD *)this + 21) = a3;
  if ( (a2 & 1) != 0 )
  {
    v11 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
    v12 = v11;
    if ( v11 < 0 )
    {
      v24 = 146;
LABEL_28:
      v23 = v11;
LABEL_31:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, v24);
      return v12;
    }
  }
  v8 = *((_QWORD *)this + 4);
  v25 = this;
  v9 = *(_DWORD *)(v8 + 448);
  v10 = v9 + 1;
  if ( v9 + 1 < v9 )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v12 = -2147024362;
    goto LABEL_30;
  }
  if ( v10 <= *(_DWORD *)(v8 + 444) )
  {
    *(_QWORD *)(*(_QWORD *)(v8 + 424) + 8LL * v9) = v25;
    *(_DWORD *)(v8 + 448) = v10;
    goto LABEL_5;
  }
  v14 = DynArrayImpl<0>::AddMultipleAndSet(v8 + 424, 8u, 1, &v25);
  v15 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
  v12 = v15;
  if ( v15 < 0 )
  {
LABEL_30:
    v24 = 149;
    v23 = v15;
    goto LABEL_31;
  }
LABEL_5:
  v11 = CSecondaryWindowRepresentation::OnRepresentationUpdated(this);
  v12 = v11;
  if ( v11 < 0 )
  {
    v24 = 156;
    goto LABEL_28;
  }
  if ( (*((_DWORD *)this + 10) & 0x400) != 0
    && (int)CTransitionVisualController::GetStoredSnapshotNoRef(
              *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
              *(HWND *)(a4 + 40),
              &v26) >= 0 )
  {
    v16 = v26;
    v17 = *(_QWORD *)(*((_QWORD *)v26 + 33) + 32LL);
    if ( *((_BYTE *)v26 + 340) )
    {
      v18 = *((_QWORD *)this + 4);
      v19 = *(_DWORD *)(v17 + 56) - *(_DWORD *)(v17 + 48);
      if ( v19 < 0 )
        v19 = 0;
      v20 = *(_DWORD *)(v18 + 56) - *(_DWORD *)(v18 + 48);
      if ( v20 < 0 )
        v20 = 0;
      if ( v19 == v20 )
      {
        v21 = *(_DWORD *)(v17 + 56) - *(_DWORD *)(v17 + 48);
        if ( v21 < 0 )
          v21 = 0;
        v22 = *(_DWORD *)(v18 + 56) - *(_DWORD *)(v18 + 48);
        if ( v22 < 0 )
          v22 = 0;
        if ( v21 == v22 )
        {
          *((_QWORD *)this + 68) = v26;
          _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
          *((_BYTE *)this + 160) = 1;
        }
      }
    }
  }
  return v12;
}
