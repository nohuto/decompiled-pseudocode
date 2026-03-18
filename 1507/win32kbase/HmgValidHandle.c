/*
 * XREFs of HmgValidHandle @ 0x1C0010F40
 * Callers:
 *     UserValidateCopyRgn @ 0x1C0010ED0 (UserValidateCopyRgn.c)
 *     GreValidateServerHandle @ 0x1C0010F30 (GreValidateServerHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HmgValidHandle(int a1, char a2)
{
  return (unsigned __int16)a1 < (unsigned int)gcMaxHmgr
      && *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1 + 14) == a2
      && *(_WORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1 + 12) == HIWORD(a1);
}
