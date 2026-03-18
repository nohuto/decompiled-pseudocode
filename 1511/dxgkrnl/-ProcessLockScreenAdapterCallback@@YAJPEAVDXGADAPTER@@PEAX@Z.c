/*
 * XREFs of ?ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0158D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessLockScreenAdapterCallback(struct DXGADAPTER *a1, void *a2, __int64 a3)
{
  return OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(void)>::RunForAdapter(a1, a2, a3, sub_1C01563C0);
}
