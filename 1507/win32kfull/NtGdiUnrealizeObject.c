/*
 * XREFs of NtGdiUnrealizeObject @ 0x1C02A86A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EB1E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall NtGdiUnrealizeObject(HPALETTE a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  _DWORD *v3; // rax
  _DWORD *v4; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  EPALOBJ::EPALOBJ((EPALOBJ *)&v6, a1);
  v1 = v6;
  v2 = 0;
  if ( v6 )
  {
    v6 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v3 = *(_DWORD **)(v1 + 72);
    if ( v3 )
      *v3 = 0;
    v4 = *(_DWORD **)(v1 + 80);
    if ( v4 )
      *v4 = 0;
    SEMOBJ::vUnlock((SEMOBJ *)&v6);
    v2 = 1;
    DEC_SHARE_REF_CNT(v1);
  }
  return v2;
}
