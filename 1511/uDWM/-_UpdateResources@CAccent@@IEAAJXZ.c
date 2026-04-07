/*
 * XREFs of ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180010A88
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x1800109C4 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180014780 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x1800155F0 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCVisual@@PEAV3@@Z @ 0x180010C90 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCVisual@@PEAV3@@Z.c)
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180010D18 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18001549C (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?CleanupAccentStatics@CAccent@@SAXXZ @ 0x18007CD58 (-CleanupAccentStatics@CAccent@@SAXXZ.c)
 */

__int64 __fastcall CAccent::_UpdateResources(struct CVisual **this)
{
  const struct ACCENT_POLICY *v1; // rdx
  unsigned int v2; // edi
  int v4; // eax
  int updated; // eax
  struct CVisual *v7; // r9
  int v8; // eax

  v1 = (const struct ACCENT_POLICY *)(this + 33);
  v2 = 0;
  if ( (unsigned int)(*((_DWORD *)this + 66) - 2) > 1 )
  {
    if ( (*(_DWORD *)v1 & 0xFFFFFFFB) != 0 )
    {
      v4 = CAccent::_EnsureBackgroundVisual((CAccent *)this, v1, this + 38, 0LL);
      v2 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x33Cu);
        goto LABEL_11;
      }
    }
    if ( *((_BYTE *)this + 296) )
    {
      v7 = this[38];
      *((_DWORD *)this + 86) = 0;
      v8 = CAccent::_EnsureBackgroundVisual((CAccent *)this, (const struct ACCENT_POLICY *)(this + 35), this + 39, v7);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x347u);
LABEL_11:
        CAccent::_CleanupNonStaticsResources((CAccent *)this);
        CAccent::CleanupAccentStatics();
        return v2;
      }
    }
    updated = CAccent::_UpdateBackgroundGeometry((CAccent *)this);
    v2 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x349u);
      goto LABEL_11;
    }
  }
  return v2;
}
