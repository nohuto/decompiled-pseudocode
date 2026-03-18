/*
 * XREFs of UpdatePointerDeviceCount @ 0x1C0095E7C
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C0094F50 (Win32kRIMDevChangeCallback.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01DF17C (CreatePseudoDigitizerDevice.c)
 *     ProcessDeviceChanges @ 0x1C01E0120 (ProcessDeviceChanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatePointerDeviceCount(int a1)
{
  __int64 result; // rax
  int v2; // ecx

  result = (unsigned int)gcPointerDevices;
  v2 = a1 - 1;
  if ( !v2 )
  {
    result = (unsigned int)(gcPointerDevices + 1);
LABEL_3:
    gcPointerDevices = result;
    return result;
  }
  if ( v2 == 1 )
  {
    result = (unsigned int)(gcPointerDevices - 1);
    goto LABEL_3;
  }
  return result;
}
