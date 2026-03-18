/*
 * XREFs of EngDeletePalette @ 0x1C007DC10
 * Callers:
 *     <none>
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0031C80 (DEC_SHARE_REF_CNT.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00492E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B4B80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 */

BOOL __stdcall EngDeletePalette(HPALETTE hpal)
{
  BOOL v1; // ebx
  _DWORD *v2; // rcx
  int v3; // eax
  _DWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v5, hpal);
  v2 = v5;
  if ( v5 )
  {
    v3 = v5[6];
    if ( (v3 & 0x100) == 0 )
    {
      v5[6] = v3 & 0xFEFFFFFF;
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v5);
      v2 = v5;
      v1 = 1;
    }
    if ( v2 )
      DEC_SHARE_REF_CNT(v2);
  }
  return v1;
}
