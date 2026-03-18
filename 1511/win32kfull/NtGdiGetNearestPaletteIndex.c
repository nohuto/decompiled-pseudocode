/*
 * XREFs of NtGdiGetNearestPaletteIndex @ 0x1C02B18D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007F5A0 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall NtGdiGetNearestPaletteIndex(HPALETTE a1, unsigned int a2)
{
  unsigned int v3; // ecx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  EPALOBJ::EPALOBJ((EPALOBJ *)&v5, a1);
  if ( v5 )
  {
    v3 = *(_DWORD *)(v5 + 28);
    if ( v3 )
    {
      if ( (a2 & 0x1000000) != 0 )
      {
        a2 = (unsigned __int16)a2;
        if ( (unsigned __int16)a2 >= v3 )
          a2 = 0;
      }
      else
      {
        a2 = XEPALOBJ::ulDispatchGFPEFunction(&v5, *(unsigned int *)(v5 + 96), a2 & 0xFFFFFF);
      }
    }
  }
  else
  {
    EngSetLastError(6u);
    a2 = -1;
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v5);
  return a2;
}
