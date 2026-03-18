/*
 * XREFs of ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800A5110
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x1800A4A54 (-ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATE.c)
 * Callees:
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x1800A58E0 (_anonymous_namespace_--SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_.c)
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
  __int64 v13; // r8
  int v14; // ecx
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
        v12 = (_DWORD *)(a1 + 308);
        if ( !v11 )
          v12 = (_DWORD *)(a1 + 312);
      }
      else
      {
        v10 = 0;
        v11 = a2 == 0;
        v12 = (_DWORD *)(a1 + 304);
        if ( !v11 )
          v12 = (_DWORD *)(a1 + 316);
      }
      v14 = 0;
      if ( a4 )
      {
        if ( a5 )
        {
          *v12 = *a4;
LABEL_17:
          if ( v14 >= 0 && a2 == 1 )
          {
            if ( *(_DWORD *)(a1 + 312) || *(_DWORD *)(a1 + 316) || *(_DWORD *)(a1 + 344) || *(_DWORD *)(a1 + 376) )
              v10 = 1;
            *(_BYTE *)(a1 + 856) &= ~1u;
            *(_BYTE *)(a1 + 856) |= v10 & 1;
          }
          return (unsigned int)v14;
        }
      }
      else if ( a5 )
      {
        v14 = -2147024809;
        goto LABEL_17;
      }
      *v12 = 0;
      goto LABEL_17;
    }
    v10 = 0;
    v13 = a1 + 240;
    if ( a2 )
      v13 = a1 + 352;
    v14 = anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_(a4, a5, v13);
    if ( v14 >= 0 )
    {
      if ( !a2 )
        *(_BYTE *)(a1 + 296) |= 1u;
      goto LABEL_17;
    }
  }
  else
  {
    v10 = 0;
    v16 = a1 + 88;
    if ( a2 )
      v16 = a1 + 320;
    v14 = anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_(a4, a5, v16);
    if ( v14 >= 0 )
    {
      if ( !a2 )
        *(_BYTE *)(a1 + 144) |= 1u;
      goto LABEL_17;
    }
  }
  return (unsigned int)v14;
}
