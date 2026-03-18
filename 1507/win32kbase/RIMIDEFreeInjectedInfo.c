/*
 * XREFs of RIMIDEFreeInjectedInfo @ 0x1C0075704
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C00755F8 (RIMFreeSpecificDevWorker.c)
 *     RIMIDECreateHIDDesc @ 0x1C00C4E54 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

__int64 __fastcall RIMIDEFreeInjectedInfo(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 376);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 72) )
      Win32FreePool();
    result = Win32FreePool();
    *(_QWORD *)(a1 + 376) = 0LL;
  }
  return result;
}
