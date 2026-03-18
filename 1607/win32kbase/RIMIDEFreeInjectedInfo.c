/*
 * XREFs of RIMIDEFreeInjectedInfo @ 0x1C000A4AC
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C000A37C (RIMFreeSpecificDevWorker.c)
 *     RIMIDECreateHIDDesc @ 0x1C00D53A8 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall RIMIDEFreeInjectedInfo(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 384);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 72);
    if ( v3 )
      Win32FreePool(v3);
    result = Win32FreePool(*(_QWORD *)(a1 + 384));
    *(_QWORD *)(a1 + 384) = 0LL;
  }
  return result;
}
