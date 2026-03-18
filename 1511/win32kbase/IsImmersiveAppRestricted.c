/*
 * XREFs of IsImmersiveAppRestricted @ 0x1C0046480
 * Callers:
 *     UserIsProcessImmersiveAppContainer @ 0x1C0036E00 (UserIsProcessImmersiveAppContainer.c)
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     xxxInitProcessInfo @ 0x1C0046224 (xxxInitProcessInfo.c)
 *     UserIsCurrentProcessImmersiveAppContainer @ 0x1C0048C30 (UserIsCurrentProcessImmersiveAppContainer.c)
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
