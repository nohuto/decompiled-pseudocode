/*
 * XREFs of ?ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0154C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessLockScreenAdapterCallback(struct DXGADAPTER *a1, void *a2, __int64 a3)
{
  return OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(void)>::RunForAdapter(
           a1,
           a2,
           a3,
           lambda_74510cce137ef43e77d418deae2e1169_::_helper_func_cdecl_);
}
