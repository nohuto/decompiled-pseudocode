/*
 * XREFs of ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x180017D80
 * Callers:
 *     ?UpdateLayout@CVisual@@UEAAJXZ @ 0x18001F850 (-UpdateLayout@CVisual@@UEAAJXZ.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x18001FB60 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180025004 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::SetSize(CText *this, const struct tagSIZE *a2)
{
  LONG v4; // eax
  bool v5; // zf
  void (__fastcall *v6)(CVisual *__hidden, unsigned int); // rax
  void (__fastcall *v8)(CVisual *__hidden, unsigned int); // rax

  if ( (*((_BYTE *)this + 264) & 1) == 0
    || a2->cy != *((_DWORD *)this + 29)
    || (v4 = *((_DWORD *)this + 96), a2->cx < v4)
    || *((_DWORD *)this + 28) < v4 )
  {
    v8 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v8 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x1000u);
    else
      v8(this, 4096u);
  }
  if ( (*((_BYTE *)this + 264) & 4) != 0 && a2->cx != *((_DWORD *)this + 28) )
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 0x8000LL);
  if ( *((_DWORD *)this + 28) != a2->cx || *((_DWORD *)this + 29) != a2->cy )
  {
    v5 = (*((_BYTE *)this + 84) & 1) == 0;
    *((struct tagSIZE *)this + 14) = *a2;
    if ( !v5 )
      (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
    v6 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v6 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 2u);
    else
      v6(this, 2u);
  }
  return 0LL;
}
