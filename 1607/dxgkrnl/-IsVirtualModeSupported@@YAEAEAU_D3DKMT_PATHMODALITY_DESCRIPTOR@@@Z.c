/*
 * XREFs of ?IsVirtualModeSupported@@YAEAEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C017A294
 * Callers:
 *     ?IsValidCloneGroup@@YAEPEAU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C017A1D4 (-IsValidCloneGroup@@YAEPEAU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsVirtualModeSupported(struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)a1 & 0x80000) != 0 )
    return *((_BYTE *)a1 + 121) != 0;
  return v1;
}
