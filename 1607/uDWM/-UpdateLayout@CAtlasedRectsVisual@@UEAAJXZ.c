/*
 * XREFs of ?UpdateLayout@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001D610
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateLayout@CVisual@@UEAAJXZ @ 0x18001F850 (-UpdateLayout@CVisual@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateLayout(CAtlasedRectsVisual *this)
{
  int updated; // eax
  int v3; // ebp
  __int64 v4; // rdi
  char v5; // si
  CVisual *v6; // rcx
  void (__fastcall *v7)(CVisual *__hidden, unsigned int); // rax
  void (__fastcall *v8)(CVisual *__hidden, unsigned int); // rax

  updated = CVisual::UpdateLayout(this);
  v3 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x36u);
  }
  else
  {
    LODWORD(v4) = -1;
    v5 = 0;
    while ( 1 )
    {
      if ( v5 )
      {
        v4 = (unsigned int)(v4 + 1);
      }
      else
      {
        v5 = 1;
        v4 = 0LL;
      }
      if ( (unsigned int)v4 >= *((_DWORD *)this + 18) )
        break;
      v6 = *(CVisual **)(*((_QWORD *)this + 6) + 8 * v4);
      v7 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v6 + 24LL);
      if ( v7 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v6, 2u);
      else
        v7(v6, 2u);
    }
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xCAu);
  }
  else
  {
    v8 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v8 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x1000u);
    else
      v8(this, 4096u);
  }
  return (unsigned int)v3;
}
