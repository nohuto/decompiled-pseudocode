/*
 * XREFs of GetDisplayAffinity @ 0x1C0231440
 * Callers:
 *     NtUserGetWindowDisplayAffinity @ 0x1C0215680 (NtUserGetWindowDisplayAffinity.c)
 *     SetDisplayAffinity @ 0x1C0231484 (SetDisplayAffinity.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
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
