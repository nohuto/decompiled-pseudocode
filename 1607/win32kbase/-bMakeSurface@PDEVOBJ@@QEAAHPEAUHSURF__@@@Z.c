/*
 * XREFs of ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0032B30
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0068660 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00BEB00 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     IsGreMovePointerSupported_0 @ 0x1C00010E0 (IsGreMovePointerSupported_0.c)
 *     GreMovePointer_0 @ 0x1C00010E8 (GreMovePointer_0.c)
 *     bSpEnableSprites_0 @ 0x1C00010F0 (bSpEnableSprites_0.c)
 *     vEnableSynchronize_0 @ 0x1C00010F8 (vEnableSynchronize_0.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0026AD8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0026AFC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002E800 (HmgIncrementShareReferenceCount.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C0031E10 (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::bMakeSurface(PDEVOBJ *this, HSURF a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  HSURF v4; // rax
  __int64 (__fastcall *v7)(_QWORD); // rax
  int v8; // ebp
  void (__fastcall *v9)(__int64, __int64); // rax
  __int64 v10; // rcx
  _BYTE v11[32]; // [rsp+20h] [rbp-38h] BYREF
  struct _BASEOBJECT *v12; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v4 = a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 2576LL) )
    return 1LL;
  if ( a2
    || (v7 = *(__int64 (__fastcall **)(_QWORD))(v2 + 2736)) != 0LL && (v4 = (HSURF)v7(*(_QWORD *)(v2 + 1824))) != 0LL )
  {
    SURFREF::SURFREF((SURFREF *)v11, v4);
    if ( v12 )
    {
      *((_DWORD *)v12 + 28) |= 0x80000000;
      if ( (*(_DWORD *)(v2 + 56) & 0x8000) == 0 )
        HmgIncrementShareReferenceCount(v12);
      *(_QWORD *)(*(_QWORD *)this + 2576LL) = v12;
      if ( !*((_DWORD *)v12 + 24) )
        *((_DWORD *)v12 + 24) = *(_DWORD *)(*(_QWORD *)this + 2132LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 2576LL) + 120LL) = *(_QWORD *)(*(_QWORD *)this + 1832LL);
      if ( (*(_DWORD *)(*(_QWORD *)this + 1848LL) & 0x8000000) != 0 )
        *((_DWORD *)v12 + 28) |= 0x80000u;
      HmgShareLock(**(_QWORD **)(*(_QWORD *)this + 1832LL), 8);
      if ( (*(_DWORD *)(*(_QWORD *)this + 56LL) & 1) != 0 && (int)IsGreMovePointerSupported_0() >= 0 )
        GreMovePointer_0();
      PDEVOBJ::vFilterDriverHooks(this);
      v8 = bSpEnableSprites_0();
      vEnableSynchronize_0();
      v9 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 1800LL);
      if ( v9 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)this + 2576LL);
        if ( v10 )
          v3 = v10 + 24;
        v9(v3, 4LL);
      }
      LODWORD(v3) = v8;
    }
    SURFREF::~SURFREF((SURFREF *)v11);
  }
  return (unsigned int)v3;
}
