/*
 * XREFs of IovpSessionDataReference @ 0x14074BBE0
 * Callers:
 *     IovpCallDriver1 @ 0x14073F69C (IovpCallDriver1.c)
 *     IovpCompleteRequest2 @ 0x1407404B4 (IovpCompleteRequest2.c)
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
