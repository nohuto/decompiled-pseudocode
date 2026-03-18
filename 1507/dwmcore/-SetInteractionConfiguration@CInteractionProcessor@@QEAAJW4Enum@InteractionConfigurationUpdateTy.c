/*
 * XREFs of ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x18005A964
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x18005A4EC (-ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATE.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x18010CFDC (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 * Callees:
 *     SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x180059428 (SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_.c)
 */

__int64 __fastcall CInteractionProcessor::SetInteractionConfiguration(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4,
        unsigned int a5)
{
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  char v10; // bl
  bool v11; // zf
  _DWORD *v12; // rdx
  int v13; // ecx
  __int64 v15; // r8
  __int64 v16; // r8

  v7 = a3 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          return (unsigned int)-2147024809;
        v10 = 0;
        v11 = a2 == 0;
        v12 = (_DWORD *)(a1 + 276);
        if ( !v11 )
          v12 = (_DWORD *)(a1 + 280);
      }
      else
      {
        v10 = 0;
        v11 = a2 == 0;
        v12 = (_DWORD *)(a1 + 272);
        if ( !v11 )
          v12 = (_DWORD *)(a1 + 284);
      }
      v13 = 0;
      if ( a4 )
      {
        if ( a5 )
        {
          *v12 = *a4;
LABEL_10:
          if ( v13 >= 0 && a2 == 1 )
          {
            if ( *(_DWORD *)(a1 + 280) || *(_DWORD *)(a1 + 284) || *(_DWORD *)(a1 + 312) || *(_DWORD *)(a1 + 344) )
              v10 = 1;
            *(_BYTE *)(a1 + 380) &= ~1u;
            *(_BYTE *)(a1 + 380) |= v10 & 1;
          }
          return (unsigned int)v13;
        }
      }
      else if ( a5 )
      {
        v13 = -2147024809;
        goto LABEL_10;
      }
      *v12 = 0;
      goto LABEL_10;
    }
    v10 = 0;
    v15 = a1 + 224;
    if ( a2 )
      v15 = a1 + 320;
    v13 = SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_(a4, a5, v15);
    if ( v13 >= 0 )
    {
      if ( !a2 )
        *(_BYTE *)(a1 + 264) |= 1u;
      goto LABEL_10;
    }
  }
  else
  {
    v10 = 0;
    v16 = a1 + 88;
    if ( a2 )
      v16 = a1 + 288;
    v13 = SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_(a4, a5, v16);
    if ( v13 >= 0 )
    {
      if ( !a2 )
        *(_BYTE *)(a1 + 128) |= 1u;
      goto LABEL_10;
    }
  }
  return (unsigned int)v13;
}
