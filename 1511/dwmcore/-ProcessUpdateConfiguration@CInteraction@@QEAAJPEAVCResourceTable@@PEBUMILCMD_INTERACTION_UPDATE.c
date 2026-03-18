/*
 * XREFs of ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x1800A7594
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800A7EB0 (-SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateTy.c)
 *     Template_pqqNR2 @ 0x180127DD4 (Template_pqqNR2.c)
 */

__int64 __fastcall CInteraction::ProcessUpdateConfiguration(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_UPDATECONFIGURATION *a3,
        __int64 a4,
        unsigned int a5)
{
  int v5; // r10d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r9
  int v11; // r8d
  int v12; // ecx
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v17; // eax
  void *v18; // rdx

  v5 = *((_DWORD *)a3 + 4);
  if ( v5 == 1 || *((_DWORD *)a3 + 4) == 2 )
  {
    v9 = 12LL;
  }
  else
  {
    if ( (unsigned int)(*((_DWORD *)a3 + 4) - 3) > 1 )
      return (unsigned int)-2147024809;
    v9 = 4LL;
  }
  v10 = *((unsigned int *)a3 + 2);
  v11 = 0;
  if ( !is_mul_ok(v10, v9) )
    return (unsigned int)-2147024362;
  v12 = 0;
  if ( v10 * v9 != a5 )
    v12 = -2003303421;
  if ( v12 >= 0 )
  {
    v13 = v5 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 != 1 || (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
            return (unsigned int)CInteractionProcessor::SetInteractionConfiguration(
                                   (char *)this + 224,
                                   *((unsigned int *)a3 + 3),
                                   *((unsigned int *)a3 + 4),
                                   a4,
                                   *((_DWORD *)a3 + 2));
          if ( this )
            v11 = (_DWORD)this + 8;
          v17 = v10;
          v18 = &INTERACTION_MOUSE_CONFIGURATION_CHANGED;
          goto LABEL_37;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          if ( this )
            v11 = (_DWORD)this + 8;
          v17 = v10;
          v18 = &INTERACTION_PEN_CONFIGURATION_CHANGED;
          goto LABEL_37;
        }
        return (unsigned int)CInteractionProcessor::SetInteractionConfiguration(
                               (char *)this + 224,
                               *((unsigned int *)a3 + 3),
                               *((unsigned int *)a3 + 4),
                               a4,
                               *((_DWORD *)a3 + 2));
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
        return (unsigned int)CInteractionProcessor::SetInteractionConfiguration(
                               (char *)this + 224,
                               *((unsigned int *)a3 + 3),
                               *((unsigned int *)a3 + 4),
                               a4,
                               *((_DWORD *)a3 + 2));
      if ( this )
        v11 = (_DWORD)this + 8;
      v18 = &INTERACTION_TOUCHPAD_CONFIGURATION_CHANGED;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
        return (unsigned int)CInteractionProcessor::SetInteractionConfiguration(
                               (char *)this + 224,
                               *((unsigned int *)a3 + 3),
                               *((unsigned int *)a3 + 4),
                               a4,
                               *((_DWORD *)a3 + 2));
      if ( this )
        v11 = (_DWORD)this + 8;
      v18 = &INTERACTION_TOUCH_CONFIGURATION_CHANGED;
    }
    v17 = 3 * v10;
LABEL_37:
    Template_pqqNR2(*((_DWORD *)a3 + 3), (_DWORD)v18, v11, *((_DWORD *)a3 + 3), v10, 4 * v17, a4);
    return (unsigned int)CInteractionProcessor::SetInteractionConfiguration(
                           (char *)this + 224,
                           *((unsigned int *)a3 + 3),
                           *((unsigned int *)a3 + 4),
                           a4,
                           *((_DWORD *)a3 + 2));
  }
  return (unsigned int)v12;
}
