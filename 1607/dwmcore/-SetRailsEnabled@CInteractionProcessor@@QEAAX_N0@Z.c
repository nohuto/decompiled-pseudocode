/*
 * XREFs of ?SetRailsEnabled@CInteractionProcessor@@QEAAX_N0@Z @ 0x1800A4E58
 * Callers:
 *     ?ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATERAILS@@@Z @ 0x1800A4C78 (-ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATERAILS@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteractionProcessor::SetRailsEnabled(CInteractionProcessor *this, char a2, char a3)
{
  if ( ((*((_BYTE *)this + 144) & 8) != 0) != a2 )
    *((_BYTE *)this + 144) = *((_BYTE *)this + 144) ^ (*((_BYTE *)this + 144) ^ (8 * a2)) & 8 | 1;
  if ( ((*((_BYTE *)this + 144) & 0x10) != 0) != a3 )
    *((_BYTE *)this + 144) = *((_BYTE *)this + 144) ^ (*((_BYTE *)this + 144) ^ (16 * a3)) & 0x10 | 1;
  if ( ((*((_BYTE *)this + 296) & 8) != 0) != a2 )
    *((_BYTE *)this + 296) = *((_BYTE *)this + 296) ^ (*((_BYTE *)this + 296) ^ (8 * a2)) & 8 | 1;
  if ( ((*((_BYTE *)this + 296) & 0x10) != 0) != a3 )
    *((_BYTE *)this + 296) = *((_BYTE *)this + 296) ^ (*((_BYTE *)this + 296) ^ (16 * a3)) & 0x10 | 1;
}
