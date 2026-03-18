/*
 * XREFs of PnpDeviceCompletionRequestCreate @ 0x140461A8C
 * Callers:
 *     PnpStartDeviceNode @ 0x14045E860 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x1404616A8 (PipEnumerateDevice.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall PnpDeviceCompletionRequestCreate(__int64 a1, int a2)
{
  _QWORD *result; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x31706E50u);
  if ( result )
  {
    result[1] = result;
    *result = result;
    *((_DWORD *)result + 14) = 1;
    *((_DWORD *)result + 9) = 0;
    result[3] = 0LL;
    result[2] = a1;
    *((_DWORD *)result + 8) = a2;
    *((_DWORD *)result + 10) = -1073741595;
    result[6] = 0LL;
  }
  return result;
}
