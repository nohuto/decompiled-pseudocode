/*
 * XREFs of ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0028D90 (NtGdiDeleteObjectApp.c)
 *     SetRectRgnIndirect @ 0x1C002F110 (SetRectRgnIndirect.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C002F220 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0035860 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreOffsetRgn @ 0x1C0036A90 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x1C0039670 (GreSetRectRgn.c)
 *     bDeleteRegion @ 0x1C003A220 (bDeleteRegion.c)
 *     GreGetRgnBox @ 0x1C00749E0 (GreGetRgnBox.c)
 *     GreRectInRegion @ 0x1C0074D50 (GreRectInRegion.c)
 *     GreCopyVisRgn @ 0x1C00767F0 (GreCopyVisRgn.c)
 *     GrePtInRegion @ 0x1C0076C20 (GrePtInRegion.c)
 *     GreGetRegionData @ 0x1C0078730 (GreGetRegionData.c)
 *     EngDeleteRgn @ 0x1C0078910 (EngDeleteRgn.c)
 *     GreIsValidRegion @ 0x1C0080560 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C0081D10 (NtGdiEqualRgn.c)
 *     EngEqualRgn @ 0x1C00CB460 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C0154000 (InitializeGre.c)
 * Callees:
 *     HmgLockEx @ 0x1C002A600 (HmgLockEx.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002ABE0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C002DEC0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     PushThreadGuardedObject @ 0x1C0064820 (PushThreadGuardedObject.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00BF048 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 */

RGNOBJAPI *__fastcall RGNOBJAPI::RGNOBJAPI(RGNOBJAPI *this, HRGN a2, int a3, int a4)
{
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // edi
  __int64 v12; // r14
  char v13; // cl
  struct _RECTL v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]

  *(_QWORD *)this = 0LL;
  v8 = (_QWORD *)((char *)this + 8);
  memset((char *)this + 8, 0, 0x20uLL);
  if ( v8 )
    v9 = (__int64)(v8 - 1);
  else
    v9 = 0LL;
  PushThreadGuardedObject(
    v8,
    v9,
    (__int64)UnexpectedThreadTerminationHandler<RGNOBJAPI>::OnUnexpectedThreadTerminationStatic);
  v10 = HmgLockEx((unsigned int)a2, 4, 0);
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
    v12 = *((_QWORD *)GdiHandleManager::GetEntryFromObject(
                        (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                        (struct OBJECT *)v10)
          + 2);
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
