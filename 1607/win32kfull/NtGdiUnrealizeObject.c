/*
 * XREFs of NtGdiUnrealizeObject @ 0x1C02A9930
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00F0E34 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00F0E60 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiUnrealizeObject(HPALETTE a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  _DWORD *v3; // rax
  _DWORD *v4; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v6, a1);
  v2 = v6;
  if ( v6 )
  {
    v7 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v3 = *(_DWORD **)(v2 + 72);
    if ( v3 )
      *v3 = 0;
    v4 = *(_DWORD **)(v2 + 80);
    if ( v4 )
      *v4 = 0;
    v1 = 1;
    SEMOBJ::vUnlock((SEMOBJ *)&v7);
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v6);
  return v1;
}
