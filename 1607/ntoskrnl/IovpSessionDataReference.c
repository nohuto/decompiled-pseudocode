/*
 * XREFs of IovpSessionDataReference @ 0x1407179AC
 * Callers:
 *     IovpCallDriver1 @ 0x14070A8C0 (IovpCallDriver1.c)
 *     IovpCompleteRequest2 @ 0x14070B208 (IovpCompleteRequest2.c)
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
