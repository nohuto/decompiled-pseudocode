/*
 * XREFs of ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180014780
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180010A88 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180014140 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateClipRegion@CAccent@@IEAAXXZ @ 0x1800144A4 (-_UpdateClipRegion@CAccent@@IEAAXXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18001549C (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?CleanupAccentStatics@CAccent@@SAXXZ @ 0x18007CD58 (-CleanupAccentStatics@CAccent@@SAXXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x18007CE68 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
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
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x36Du);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x38Eu);
    goto LABEL_19;
  }
  return v3;
}
