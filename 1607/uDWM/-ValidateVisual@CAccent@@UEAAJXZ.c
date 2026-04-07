/*
 * XREFs of ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800366E0
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180022070 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180007368 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x1800360D0 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateClipRegion@CAccent@@IEAAXXZ @ 0x180036434 (-_UpdateClipRegion@CAccent@@IEAAXXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18003744C (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CleanupAccentStatics@CAccent@@SAXXZ @ 0x18007D9BC (-CleanupAccentStatics@CAccent@@SAXXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x18007DAB0 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 */

__int64 __fastcall CAccent::ValidateVisual(CAccent *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int updated; // eax

  if ( *((_BYTE *)this + 349) || (unsigned int)(*((_DWORD *)this + 66) - 2) <= 1 )
  {
    if ( (*((_DWORD *)this + 20) & 0x10000) != 0 && *((_DWORD *)this + 66) == 3 && *((_QWORD *)this + 40) )
      CAccent::_UpdateAccentBlurBehind(this);
    *((_DWORD *)this + 20) &= 0xFFFF8FFF;
  }
  else
  {
    if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
    {
      updated = CAccent::_UpdateResources((struct CVisual **)this);
      v3 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x359u);
LABEL_19:
        CAccent::_CleanupNonStaticsResources(this);
        CAccent::CleanupAccentStatics();
        return v3;
      }
      *((_DWORD *)this + 20) &= ~0x1000u;
    }
    if ( (*((_DWORD *)this + 20) & 0x2000) != 0 )
    {
      CAccent::_UpdateTransitionGradient(this);
      *((_DWORD *)this + 20) &= ~0x2000u;
    }
  }
  *((_DWORD *)this + 20) &= ~0x10000u;
  if ( (*((_DWORD *)this + 20) & 0x8000) != 0 )
  {
    CAccent::_UpdateClipRegion(this);
    *((_DWORD *)this + 20) &= ~0x8000u;
  }
  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x37Au);
    goto LABEL_19;
  }
  return v3;
}
