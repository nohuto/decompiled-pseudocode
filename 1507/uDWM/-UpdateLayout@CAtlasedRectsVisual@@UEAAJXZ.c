/*
 * XREFs of ?UpdateLayout@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001B1A0
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJXZ @ 0x18001D1B0 (-UpdateLayout@CVisual@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateLayout(CAtlasedRectsVisual *this)
{
  int updated; // eax
  int v3; // ebp
  __int64 v4; // rdi
  char v5; // si
  void (__fastcall *v6)(CVisual *__hidden, unsigned int); // r15
  void (__fastcall *v7)(CVisual *__hidden, unsigned int); // rdi

  updated = CVisual::UpdateLayout(this);
  v3 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x36u);
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
      v6 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(**(_QWORD **)(*((_QWORD *)this + 6) + 8 * v4) + 24LL);
      if ( v6 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(*(CVisual **)(*((_QWORD *)this + 6) + 8 * v4), 2u);
      else
        v6(*(CVisual **)(*((_QWORD *)this + 6) + 8 * v4), 2u);
    }
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0xCAu);
  }
  else
  {
    v7 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v7 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x1000u);
    else
      v7(this, 4096u);
  }
  return (unsigned int)v3;
}
