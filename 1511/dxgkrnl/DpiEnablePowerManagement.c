/*
 * XREFs of DpiEnablePowerManagement @ 0x1C001257C
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C00D88B8 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiEnablePowerManagement(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  *(_BYTE *)(result + 481) = 1;
  *(_QWORD *)(result + 488) = a2;
  return result;
}
