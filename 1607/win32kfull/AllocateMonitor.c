/*
 * XREFs of AllocateMonitor @ 0x1C01C72B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateMonitor(__int64 a1)
{
  __int64 result; // rax

  result = Win32AllocPool(584LL, 2020635477LL);
  *(_QWORD *)(a1 + 280) = result;
  return result;
}
