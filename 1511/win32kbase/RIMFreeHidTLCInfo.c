/*
 * XREFs of RIMFreeHidTLCInfo @ 0x1C000B3B0
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C000CD9C (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

__int64 **__fastcall RIMFreeHidTLCInfo(__int64 *a1)
{
  __int64 *v1; // rdx
  __int64 **result; // rax

  v1 = (__int64 *)*a1;
  result = (__int64 **)a1[1];
  if ( *(__int64 **)(*a1 + 8) != a1 || *result != a1 )
    __fastfail(3u);
  *result = v1;
  v1[1] = (__int64)result;
  if ( !*((_DWORD *)a1 + 10) )
    return (__int64 **)Win32FreePool(a1);
  return result;
}
