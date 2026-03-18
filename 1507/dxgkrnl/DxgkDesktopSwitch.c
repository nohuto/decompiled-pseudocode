/*
 * XREFs of DxgkDesktopSwitch @ 0x1C00DB050
 * Callers:
 *     <none>
 * Callees:
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@1I@Z@Z @ 0x1C00DB07C (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_M.c)
 */

__int64 __fastcall DxgkDesktopSwitch(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = 0LL;
  if ( !(_DWORD)a3 )
    v3 = a1;
  return OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(unsigned int),unsigned int>::RunForAdapter(
           v3,
           a2,
           a3,
           (unsigned int)a2,
           lambda_7de8461a34905550cbe5d5c8dc69992c_::_helper_func_cdecl_);
}
