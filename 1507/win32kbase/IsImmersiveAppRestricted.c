/*
 * XREFs of IsImmersiveAppRestricted @ 0x1C0051DB0
 * Callers:
 *     UserIsCurrentProcessImmersiveAppContainer @ 0x1C000B530 (UserIsCurrentProcessImmersiveAppContainer.c)
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     xxxInitProcessInfo @ 0x1C0051B44 (xxxInitProcessInfo.c)
 *     UserIsProcessImmersiveAppContainer @ 0x1C0055A70 (UserIsProcessImmersiveAppContainer.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsImmersiveAppRestricted(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !gfIgnoreMoshHardening )
    return (*(_BYTE *)(a1 + 776) & 0x30) == 16;
  return result;
}
