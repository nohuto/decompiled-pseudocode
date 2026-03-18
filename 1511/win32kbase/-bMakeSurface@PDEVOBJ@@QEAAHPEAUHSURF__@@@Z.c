/*
 * XREFs of ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0038E50
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0056E20 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00B4580 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     IsGreMovePointerSupported_0 @ 0x1C00010E0 (IsGreMovePointerSupported_0.c)
 *     GreMovePointer_0 @ 0x1C00010E8 (GreMovePointer_0.c)
 *     bSpEnableSprites_0 @ 0x1C00010F0 (bSpEnableSprites_0.c)
 *     vEnableSynchronize_0 @ 0x1C00010F8 (vEnableSynchronize_0.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00320A0 (HmgIncrementShareReferenceCount.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C00381B4 (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 *     HmgShareLock @ 0x1C005C9B0 (HmgShareLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::bMakeSurface(PDEVOBJ *this, HSURF a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  HSURF v4; // rax
  __int64 (__fastcall *v6)(_QWORD); // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  __int64 v9; // rdx
  int v10; // ebp
  void (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rcx

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v4 = a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 2576LL) )
    return 1LL;
  if ( a2
    || (v6 = *(__int64 (__fastcall **)(_QWORD))(v2 + 2744)) != 0LL && (v4 = (HSURF)v6(*(_QWORD *)(v2 + 1824))) != 0LL )
  {
    LOBYTE(a2) = 5;
    v7 = (_DWORD *)HmgShareLockCheck(v4, a2);
    v8 = v7;
    if ( v7 )
    {
      v7[28] |= 0x80000000;
      HmgIncrementShareReferenceCount(v7);
      *(_QWORD *)(*(_QWORD *)this + 2576LL) = v8;
      if ( !v8[24] )
        v8[24] = *(_DWORD *)(*(_QWORD *)this + 2132LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 2576LL) + 120LL) = *(_QWORD *)(*(_QWORD *)this + 1832LL);
      if ( (*(_DWORD *)(*(_QWORD *)this + 1848LL) & 0x8000000) != 0 )
        v8[28] |= 0x80000u;
      LOBYTE(v9) = 8;
      HmgShareLock(**(_QWORD **)(*(_QWORD *)this + 1832LL), v9);
      if ( (*(_DWORD *)(*(_QWORD *)this + 56LL) & 1) != 0 && (int)IsGreMovePointerSupported_0() >= 0 )
        GreMovePointer_0();
      PDEVOBJ::vFilterDriverHooks(this);
      v10 = bSpEnableSprites_0();
      vEnableSynchronize_0();
      v11 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 1800LL);
      if ( v11 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)this + 2576LL);
        if ( v12 )
          v3 = v12 + 24;
        v11(v3, 4LL);
      }
      LODWORD(v3) = v10;
      HmgDecrementShareReferenceCount(v8);
    }
  }
  return (unsigned int)v3;
}
