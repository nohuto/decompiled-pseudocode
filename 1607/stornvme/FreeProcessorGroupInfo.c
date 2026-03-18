/*
 * XREFs of FreeProcessorGroupInfo @ 0x1C00053A4
 * Callers:
 *     GetProcessorGroupInformation @ 0x1C0005670 (GetProcessorGroupInformation.c)
 *     NVMeControllerRemove @ 0x1C0007134 (NVMeControllerRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeProcessorGroupInfo(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 176);
  if ( v1 )
  {
    result = StorPortExtendedFunction(1LL, a1, v1);
    *(_QWORD *)(a1 + 176) = 0LL;
  }
  *(_DWORD *)(a1 + 160) = 0;
  return result;
}
