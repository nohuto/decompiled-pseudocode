/*
 * XREFs of ?IsValidCloneGroup@@YAEPEAU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C017A1D4
 * Callers:
 *     ?IsValidCloneConfiguration@@YAEPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C017A154 (-IsValidCloneConfiguration@@YAEPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?IsVirtualModeSupported@@YAEAEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C017A294 (-IsVirtualModeSupported@@YAEAEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

char __fastcall IsValidCloneGroup(struct _D3DKMT_GETPATHSMODALITY *a1, unsigned int a2)
{
  char v3; // di
  unsigned __int8 v4; // al
  _DWORD *v5; // r11
  int v6; // r9d
  unsigned int v7; // r10d
  char v8; // r8
  unsigned __int8 i; // si
  char *v10; // r9
  _DWORD *v11; // r9

  v3 = 1;
  v4 = IsVirtualModeSupported((struct _D3DKMT_GETPATHSMODALITY *)((char *)a1 + 216 * a2 + 48));
  v7 = v6 + 1;
  v8 = 0;
  for ( i = v4; v7 < *((unsigned __int16 *)a1 + 10); ++v7 )
  {
    v10 = (char *)a1 + 216 * v7;
    if ( v5[62] == *((_DWORD *)v10 + 62) )
    {
      i &= -(IsVirtualModeSupported((struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v10 + 48)) != 0);
      if ( v5[16] != v11[16] || v5[14] != v11[14] || v5[15] != v11[15] )
        v3 = v8;
      v11[12] |= 0x20u;
    }
  }
  if ( i || v3 )
    return 1;
  return v8;
}
