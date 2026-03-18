/*
 * XREFs of ?GetNextModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@@Z @ 0x1C00A9514
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00A883C (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

struct DISPLAYCONFIG_MODE_INFO *__fastcall GetNextModeArrayEntry(struct _QDC_CONTEXT *a1)
{
  struct DISPLAYCONFIG_MODE_INFO *result; // rax

  if ( (__int64)(*((_QWORD *)a1 + 5) - *((_QWORD *)a1 + 3)) >> 6 >= *((int *)a1 + 4) )
    return 0LL;
  result = (struct DISPLAYCONFIG_MODE_INFO *)*((_QWORD *)a1 + 5);
  *((_QWORD *)a1 + 5) = (char *)result + 64;
  return result;
}
