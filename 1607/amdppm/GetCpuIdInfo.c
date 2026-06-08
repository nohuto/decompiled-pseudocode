/*
 * XREFs of GetCpuIdInfo @ 0x1C0006790
 * Callers:
 *     ValidatePStateCapability @ 0x1C0001050 (ValidatePStateCapability.c)
 *     InitDriver @ 0x1C001F000 (InitDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCpuIdInfo(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
