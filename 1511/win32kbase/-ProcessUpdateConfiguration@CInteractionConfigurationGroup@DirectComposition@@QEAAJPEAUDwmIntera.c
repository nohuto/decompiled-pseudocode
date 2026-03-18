/*
 * XREFs of ?ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEAUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00D9F20
 * Callers:
 *     ?SetBufferProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00DA5D0 (-SetBufferProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00D9EF8 (-ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionP.c)
 *     ?ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEAUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00D9FB8 (-ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEAU.c)
 *     ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEAUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00DA054 (-ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEAUD.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::ProcessUpdateConfiguration(
        __int64 a1,
        _DWORD *a2,
        int a3,
        _BYTE *a4)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // r11
  _BYTE *v7; // r9
  int v8; // eax
  __int64 v9; // r11
  _BYTE *v10; // r9

  switch ( *a2 )
  {
    case 1:
      return (unsigned int)DirectComposition::CInteractionConfigurationGroup::ProcessUpdateTouchConfigurationList();
    case 2:
      return (unsigned int)DirectComposition::CInteractionConfigurationGroup::ProcessUpdateTouchpadConfiguration();
    case 3:
      v4 = 0;
      *a4 = 0;
      v8 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(*(_DWORD *)(a1 + 60), a2[1], a3, a4);
      *(_DWORD *)(v9 + 60) = v8;
      if ( *v10 )
        *(_DWORD *)(v9 + 12) |= 2u;
      goto LABEL_10;
    case 4:
      v4 = 0;
      *a4 = 0;
      v5 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(*(_DWORD *)(a1 + 64), a2[1], a3, a4);
      *(_DWORD *)(v6 + 64) = v5;
      if ( *v7 )
        *(_DWORD *)(v6 + 12) |= 1u;
LABEL_10:
      Win32FreePool();
      return v4;
  }
  return (unsigned int)-1073741811;
}
