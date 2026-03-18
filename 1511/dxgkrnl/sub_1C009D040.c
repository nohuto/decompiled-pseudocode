/*
 * XREFs of sub_1C009D040 @ 0x1C009D040
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C009EAC0 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall sub_1C009D040(struct OUTPUTDUPL_MGR *a1, struct DXGDEVICE *a2)
{
  OUTPUTDUPL_MGR::ProcessDestroyDevice(a1, a2);
  return 0LL;
}
