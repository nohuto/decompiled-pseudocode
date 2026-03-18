/*
 * XREFs of FreeProcessorInfo @ 0x1C00053E4
 * Callers:
 *     GetProcessorInformation @ 0x1C00057E8 (GetProcessorInformation.c)
 *     NVMeControllerRemove @ 0x1C0007134 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C0007424 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeProcessorInfo(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v4; // r8

  v1 = *(_QWORD *)(a1 + 184);
  if ( v1 )
  {
    result = StorPortExtendedFunction(1LL, a1, v1);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 192);
  if ( v4 )
  {
    result = StorPortExtendedFunction(1LL, a1, v4);
    *(_QWORD *)(a1 + 192) = 0LL;
  }
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  return result;
}
