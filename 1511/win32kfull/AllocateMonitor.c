/*
 * XREFs of AllocateMonitor @ 0x1C01C8F30
 * Callers:
 *     CreatePointerDeviceInfo @ 0x1C01C9610 (CreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateMonitor(__int64 a1)
{
  __int64 result; // rax

  result = Win32AllocPool(584LL);
  *(_QWORD *)(a1 + 280) = result;
  return result;
}
