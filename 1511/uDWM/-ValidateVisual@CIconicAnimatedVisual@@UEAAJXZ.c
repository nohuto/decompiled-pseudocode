/*
 * XREFs of ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x18009D5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180016F68 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009CF24 (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009D188 (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009D330 (-UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009D520 (-UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CIconicAnimatedVisual::ValidateVisual(CSecondaryWindowRepresentation **this, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int updated; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  if ( *((char *)this + 80) < 0 )
  {
    v3 = CIconicAnimatedVisual::EnsureVisualBrush((CIconicAnimatedVisual *)this);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0xE3u);
      return v4;
    }
    v5 = CSecondaryWindowRepresentation::Validate(this[34]);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xE4u);
      return v4;
    }
    updated = CIconicAnimatedVisual::UpdateSourceRect((CIconicAnimatedVisual *)this);
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xE5u);
      return v4;
    }
    v7 = CIconicAnimatedVisual::UpdateDestinationRect((CIconicAnimatedVisual *)this);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xE6u);
      return v4;
    }
    v8 = CVisual::ClearInstructions((CVisual *)this);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xE7u);
      return v4;
    }
    v9 = CIconicAnimatedVisual::SetupInstructions((CIconicAnimatedVisual *)this);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0xE8u);
      return v4;
    }
    *((_DWORD *)this + 20) &= ~0x80u;
  }
  v10 = CVisual::ValidateVisual((CVisual *)this, a2);
  v4 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xECu);
  return v4;
}
