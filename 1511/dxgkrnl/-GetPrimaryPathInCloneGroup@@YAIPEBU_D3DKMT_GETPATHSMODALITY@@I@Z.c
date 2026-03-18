/*
 * XREFs of ?GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C000A2D4
 * Callers:
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00A2C88 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00A883C (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C0182038 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPrimaryPathInCloneGroup(const struct _D3DKMT_GETPATHSMODALITY *a1, unsigned int a2)
{
  __int64 result; // rax
  int v3; // r8d
  unsigned int v4; // edx
  _DWORD *i; // rcx

  result = 0LL;
  v3 = *((_DWORD *)a1 + 54 * a2 + 62);
  v4 = *((unsigned __int16 *)a1 + 10);
  if ( !*((_WORD *)a1 + 10) )
    return 3735928559LL;
  for ( i = (_DWORD *)((char *)a1 + 248); *i != v3; i += 54 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= v4 )
      return 3735928559LL;
  }
  return result;
}
