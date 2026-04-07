/*
 * XREFs of ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800349D8
 * Callers:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180035018 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18000C92C (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800341F4 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800348C4 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
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
  unsigned int v23; // [rsp+20h] [rbp-28h]
  CSecondaryWindowRepresentation *v24; // [rsp+50h] [rbp+8h] BYREF
  struct CTransitionWindowSnapshot *v25; // [rsp+60h] [rbp+18h] BYREF

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
      v23 = 146;
LABEL_19:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, v23);
      return v12;
    }
  }
  v8 = *((_QWORD *)this + 4);
  v24 = this;
  v9 = *(_DWORD *)(v8 + 424);
  v10 = v9 + 1;
  if ( v9 + 1 < v9 )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v12 = -2147024362;
    goto LABEL_17;
  }
  if ( v10 > *(_DWORD *)(v8 + 420) )
  {
    v14 = DynArrayImpl<0>::AddMultipleAndSet(v8 + 400, 8u, 1, &v24);
    v15 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0xC0u);
    v12 = v15;
    if ( v15 >= 0 )
      goto LABEL_5;
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x95u);
    return v12;
  }
  *(_QWORD *)(*(_QWORD *)(v8 + 400) + 8LL * v9) = v24;
  *(_DWORD *)(v8 + 424) = v10;
LABEL_5:
  v11 = CSecondaryWindowRepresentation::OnRepresentationUpdated(this);
  v12 = v11;
  if ( v11 < 0 )
  {
    v23 = 156;
    goto LABEL_19;
  }
  if ( (*((_DWORD *)this + 10) & 0x400) != 0
    && (int)CTransitionVisualController::GetStoredSnapshotNoRef(
              *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
              *(HWND *)(a4 + 40),
              &v25) >= 0 )
  {
    v16 = v25;
    v17 = *(_QWORD *)(*((_QWORD *)v25 + 33) + 32LL);
    if ( *((_BYTE *)v25 + 340) )
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
          *((_QWORD *)this + 68) = v25;
          _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
          *((_BYTE *)this + 160) = 1;
        }
      }
    }
  }
  return v12;
}
