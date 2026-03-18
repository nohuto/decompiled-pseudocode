/*
 * XREFs of bDynamicRemoveAllDriverRealizations @ 0x1C006B2F0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     bDynamicModeChange @ 0x1C006A204 (bDynamicModeChange.c)
 * Callees:
 *     IsPDEVOBJ_bDisableHalftoneSupported_0 @ 0x1C00011B8 (IsPDEVOBJ_bDisableHalftoneSupported_0.c)
 *     PDEVOBJ_bDisableHalftoneWrap_0 @ 0x1C00011C0 (PDEVOBJ_bDisableHalftoneWrap_0.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C006B240 (vDynamicConvertNewSurfaceDCs.c)
 *     HmgSafeNextObjt @ 0x1C006B3F0 (HmgSafeNextObjt.c)
 *     pConvertDfbSurfaceToDib2 @ 0x1C006B550 (pConvertDfbSurfaceToDib2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bDynamicRemoveAllDriverRealizations(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rdi
  __int64 Objt; // rax
  __int64 v6; // rdx
  void (__fastcall *v7)(__int64); // rsi
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi

  v3 = 1;
  v4 = 0LL;
  while ( 1 )
  {
    LOBYTE(a2) = 5;
    Objt = HmgSafeNextObjt(v4, a2);
    if ( !Objt )
      break;
    v4 = *(_QWORD *)Objt;
    if ( *(_QWORD *)(Objt + 48) == a1
      && (*(_DWORD *)(Objt + 112) & 0x800000) != 0
      && !*(_QWORD *)(Objt + 496)
      && *(_QWORD *)(Objt + 40)
      && !pConvertDfbSurfaceToDib2((SURFACE *)Objt) )
    {
      v3 = 0;
    }
  }
  vDynamicConvertNewSurfaceDCs(a1, 0LL);
  if ( v3 )
  {
    v7 = *(void (__fastcall **)(__int64))(a1 + 3056);
    if ( v7 )
    {
      if ( (*(_DWORD *)(a1 + 56) & 0x800000) != 0 )
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 3536) + 1560LL);
      else
        v11 = *(_QWORD *)(a1 + 1560);
      while ( v11 )
      {
        v7(v11);
        *(_QWORD *)(v11 + 48) = 0LL;
        v11 = *(_QWORD *)(v11 + 504);
      }
      if ( (*(_DWORD *)(a1 + 56) & 0x800000) != 0 )
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 3536) + 1552LL);
      else
        v12 = *(_QWORD *)(a1 + 1552);
      while ( v12 )
      {
        v7(v12);
        *(_QWORD *)(v12 + 48) = 0LL;
        v12 = *(_QWORD *)(v12 + 504);
      }
    }
    v8 = 0LL;
    while ( 1 )
    {
      LOBYTE(v6) = 16;
      v9 = HmgSafeNextObjt(v8, v6);
      if ( !v9 )
        break;
      v8 = *(_QWORD *)v9;
      *(_DWORD *)(v9 + 120) = -1;
      *(_DWORD *)(v9 + 52) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
    }
    if ( *(_QWORD *)(a1 + 1544) && (int)IsPDEVOBJ_bDisableHalftoneSupported_0() >= 0 )
      PDEVOBJ_bDisableHalftoneWrap_0();
  }
  return v3;
}
