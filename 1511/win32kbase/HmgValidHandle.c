/*
 * XREFs of HmgValidHandle @ 0x1C0073700
 * Callers:
 *     UserValidateCopyRgn @ 0x1C0073690 (UserValidateCopyRgn.c)
 *     GreValidateServerHandle @ 0x1C00736F0 (GreValidateServerHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HmgValidHandle(int a1, char a2)
{
  return (unsigned __int16)a1 < (unsigned int)gcMaxHmgr
      && *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1 + 14) == a2
      && *((_WORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 12 * (unsigned __int16)a1 + 6) == HIWORD(a1);
}
