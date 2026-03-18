/*
 * XREFs of GetDisplayAffinity @ 0x1C02393E4
 * Callers:
 *     NtUserGetWindowDisplayAffinity @ 0x1C021C4C0 (NtUserGetWindowDisplayAffinity.c)
 *     SetDisplayAffinity @ 0x1C0239428 (SetDisplayAffinity.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 */

__int64 __fastcall GetDisplayAffinity(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r9
  unsigned int v3; // r10d
  int Prop; // eax
  _DWORD *v5; // r11

  *a2 = 0;
  if ( (unsigned int)IsTopLevelWindow(a1) && (*(_BYTE *)(v2 + 50) & 8) != 0 )
  {
    Prop = GetProp(v2, (unsigned __int16)atomDispAffinity, 1LL);
    *v5 = Prop;
  }
  return v3;
}
