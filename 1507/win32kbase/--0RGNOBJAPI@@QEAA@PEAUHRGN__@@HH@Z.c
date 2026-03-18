/*
 * XREFs of ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10
 * Callers:
 *     GreRectInRegion @ 0x1C000B8D0 (GreRectInRegion.c)
 *     GreGetRgnBox @ 0x1C000BED0 (GreGetRgnBox.c)
 *     GrePtInRegion @ 0x1C000FB90 (GrePtInRegion.c)
 *     EngDeleteRgn @ 0x1C0011020 (EngDeleteRgn.c)
 *     GreIsValidRegion @ 0x1C0016810 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C00191F0 (NtGdiEqualRgn.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     NtGdiDeleteObjectApp @ 0x1C00417F0 (NtGdiDeleteObjectApp.c)
 *     SetRectRgnIndirect @ 0x1C0041D40 (SetRectRgnIndirect.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0042050 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetRectRgn @ 0x1C0042B20 (GreSetRectRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00433D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     bDeleteRegion @ 0x1C0044670 (bDeleteRegion.c)
 *     GreOffsetRgn @ 0x1C0054700 (GreOffsetRgn.c)
 *     GreCopyVisRgn @ 0x1C0054850 (GreCopyVisRgn.c)
 *     GreGetRegionData @ 0x1C0084E70 (GreGetRegionData.c)
 *     EngEqualRgn @ 0x1C00BDC80 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C0137A5C (InitializeGre.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C001CA70 (PushThreadGuardedObject.c)
 *     HmgLock @ 0x1C003BC00 (HmgLock.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C003F8C0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00B10E8 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 */

RGNOBJAPI *__fastcall RGNOBJAPI::RGNOBJAPI(RGNOBJAPI *this, HRGN a2, int a3, int a4)
{
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // edi
  __int64 v12; // r14
  char v13; // cl
  struct _RECTL v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]

  *(_QWORD *)this = 0LL;
  v8 = (__int64 *)((char *)this + 8);
  memset((char *)this + 8, 0, 0x20uLL);
  if ( v8 )
    v9 = (__int64)(v8 - 1);
  else
    v9 = 0LL;
  PushThreadGuardedObject(
    v8,
    v9,
    (__int64)UnexpectedThreadTerminationHandler<RGNOBJAPI>::OnUnexpectedThreadTerminationStatic);
  v10 = HmgLock((int)a2, 4);
  *(_QWORD *)this = v10;
  *((_QWORD *)this + 5) = a2;
  *((_DWORD *)this + 12) = a3;
  if ( !v10 )
    return this;
  v11 = 1;
  if ( a4 && *(_WORD *)(v10 + 12) != 1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
LABEL_26:
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    return this;
  }
  if ( !*(_DWORD *)(v10 + 36) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)v10 + 16);
    if ( !v12 )
      goto LABEL_24;
    v15 = *(struct _RECTL *)v12;
    v16 = *(_QWORD *)(v12 + 16);
    v13 = _mm_cvtsi128_si32((__m128i)v15);
    if ( (v13 & 0x11) == 0x10 )
    {
      if ( (v13 & 0x20) == 0 )
        goto LABEL_24;
      if ( v15.top == 1 )
      {
        RGNOBJ::vSet(this);
LABEL_22:
        *(_DWORD *)v12 &= ~0x20u;
        goto LABEL_24;
      }
      if ( v15.top != 2 )
        goto LABEL_24;
      if ( (((v15.right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((HIDWORD(v16) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v16 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v15.bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
      {
        RGNOBJ::vSet(this, (struct _RECTL *)&v15.right);
        goto LABEL_22;
      }
    }
    v11 = 0;
    goto LABEL_24;
  }
  if ( !(unsigned int)GrepIsPreviousModeKernel() )
    v11 = 0;
LABEL_24:
  if ( !v11 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    goto LABEL_26;
  }
  return this;
}
