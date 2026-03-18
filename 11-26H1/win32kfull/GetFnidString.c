/*
 * XREFs of GetFnidString @ 0x1401918C4
 * Callers:
 *     _InitPwSB @ 0x14018FBCC (_InitPwSB.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetFnidString(__int16 a1)
{
  unsigned int v1; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx

  v1 = a1 & 0x2FFF;
  if ( v1 <= 0x2A2 )
  {
    if ( v1 == 674 )
      return "FNID_COMBOBOX";
    if ( (a1 & 0x2FFF) == 0 )
      return "NONE";
    v7 = v1 - 666;
    if ( !v7 )
      return "FNID_SCROLLBAR";
    v8 = v7 - 1;
    if ( !v8 )
      return "FNID_ICONTITLE";
    v9 = v8 - 1;
    if ( !v9 )
      return "FNID_MENU";
    v10 = v9 - 1;
    if ( !v10 )
      return "FNID_DESKTOP";
    v11 = v10 - 1;
    if ( !v11 )
      return "FNID_DEFWINDOWPROC";
    v12 = v11 - 1;
    if ( !v12 )
      return "FNID_MESSAGEWND";
    v13 = v12 - 1;
    if ( !v13 )
      return "FNID_NOTUSED_WASSWITCH";
    if ( v13 == 1 )
      return "FNID_BUTTON";
    return "UNKNOWN";
  }
  v3 = v1 - 675;
  if ( !v3 )
    return "FNID_COMBOLISTBOX";
  v4 = v3 - 1;
  if ( !v4 )
    return "FNID_DIALOG";
  v5 = v4 - 1;
  if ( !v5 )
    return "FNID_EDIT";
  v6 = v5 - 1;
  if ( !v6 )
    return "FNID_LISTBOX";
  v14 = v6 - 1;
  if ( !v14 )
    return "FNID_MDICLIENT";
  v15 = v14 - 1;
  if ( !v15 )
    return "FNID_STATIC";
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 == 1 )
      return "FNID_GHOST";
    return "UNKNOWN";
  }
  return "FNID_IME";
}
