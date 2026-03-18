/*
 * XREFs of _anonymous_namespace_::ConvertToInputType @ 0x18000DE7C
 * Callers:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHKU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x18000DCD8 (-SupportsPointerType@CInteractionProcessor@@QEBAHKU-$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTyp.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1800A5248 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x18016E8BC (-GetInteractionContext@CInteractionProcessor@@QEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?RemoveContact@CInteractionProcessor@@QEAAXK@Z @ 0x18016EFE4 (-RemoveContact@CInteractionProcessor@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::ConvertToInputType(int a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  result = 2LL;
  v2 = a1 - 2;
  if ( !v2 )
    return 1LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 3LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 4LL;
  if ( v4 != 1 )
    return 0LL;
  return result;
}
