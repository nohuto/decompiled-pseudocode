/*
 * XREFs of RIMCmFreePointerDeviceContacts @ 0x1C0006A40
 * Callers:
 *     RIMFreePointerDevice @ 0x1C0006844 (RIMFreePointerDevice.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C0006D58 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00D5734 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C00D6E88 (RIMIDEResetPointerDeviceMaxCount.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall RIMCmFreePointerDeviceContacts(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1552);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 1552) = 0LL;
    *(_DWORD *)(a1 + 1560) = 0;
  }
  v3 = *(_QWORD *)(a1 + 1528);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_QWORD *)(a1 + 1528) = 0LL;
  }
  result = a1 + 1536;
  *(_QWORD *)(a1 + 1544) = a1 + 1536;
  *(_QWORD *)(a1 + 1536) = a1 + 1536;
  return result;
}
