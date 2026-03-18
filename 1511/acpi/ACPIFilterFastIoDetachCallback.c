/*
 * XREFs of ACPIFilterFastIoDetachCallback @ 0x1C003B9C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C003C400 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIInitResetDeviceExtension @ 0x1C003C93C (ACPIInitResetDeviceExtension.c)
 */

__int64 __fastcall ACPIFilterFastIoDetachCallback(ULONG_PTR a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = ACPIInternalGetDeviceExtension(a1);
  v2 = result;
  if ( result )
  {
    if ( (*(_BYTE *)result & 0x60) == 0x40 )
    {
      *(_DWORD *)(result + 312) = 4;
      ACPIInitDeleteChildDeviceList(result);
      return ACPIInitResetDeviceExtension(v2);
    }
  }
  return result;
}
