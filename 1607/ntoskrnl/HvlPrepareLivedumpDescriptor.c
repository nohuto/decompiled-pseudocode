/*
 * XREFs of HvlPrepareLivedumpDescriptor @ 0x1401C054C
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x1406266AC (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     HvlSetupLiveDumpBuffer @ 0x1401C22A8 (HvlSetupLiveDumpBuffer.c)
 *     VslSetupLiveDumpBufferInSk @ 0x1401C30D8 (VslSetupLiveDumpBufferInSk.c)
 */

__int64 __fastcall HvlPrepareLivedumpDescriptor(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  if ( VslVsmEnabled )
    return VslSetupLiveDumpBufferInSk(a1, a2, a3, a4, a5, a6);
  else
    return HvlSetupLiveDumpBuffer(a1, a2, a3, a4, a5, a6);
}
