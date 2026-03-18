/*
 * XREFs of AllocateMonitor @ 0x1C01C7370
 * Callers:
 *     CreatePointerDeviceInfo @ 0x1C01C7A40 (CreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateMonitor(__int64 a1)
{
  __int64 result; // rax

  result = Win32AllocPool(584LL, 2020635477LL);
  *(_QWORD *)(a1 + 264) = result;
  return result;
}
