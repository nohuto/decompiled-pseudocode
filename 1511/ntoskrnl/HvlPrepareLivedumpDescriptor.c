/*
 * XREFs of HvlPrepareLivedumpDescriptor @ 0x1401B47DC
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x1405FCA38 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     HvlSetupLiveDumpBufferInSk @ 0x1401B349C (HvlSetupLiveDumpBufferInSk.c)
 *     HvlSetupLiveDumpBuffer @ 0x1401B57D0 (HvlSetupLiveDumpBuffer.c)
 */

__int64 __fastcall HvlPrepareLivedumpDescriptor(
        PVOID *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  if ( (HvlpFlags & 0x2000) != 0 )
    return HvlSetupLiveDumpBufferInSk(a1, a2, a3, a4, a5, a6);
  else
    return HvlSetupLiveDumpBuffer((_DWORD)a1, a2, a3, a4, a5, a6);
}
