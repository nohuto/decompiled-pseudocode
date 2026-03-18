/*
 * XREFs of IovpSessionDataReference @ 0x1406C8FE0
 * Callers:
 *     IovpCallDriver1 @ 0x1406BE838 (IovpCallDriver1.c)
 *     IovpCompleteRequest2 @ 0x1406BF180 (IovpCompleteRequest2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IovpSessionDataReference(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( !*((_DWORD *)a1 + 2) )
    _InterlockedIncrement((volatile signed __int32 *)(result + 20));
  ++*((_DWORD *)a1 + 2);
  return result;
}
