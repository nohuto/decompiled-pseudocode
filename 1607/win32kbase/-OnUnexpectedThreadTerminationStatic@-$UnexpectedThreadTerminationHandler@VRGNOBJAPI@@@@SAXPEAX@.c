/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VRGNOBJAPI@@@@SAXPEAX@Z @ 0x1C00BF080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<RGNOBJAPI>::OnUnexpectedThreadTerminationStatic(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
    _InterlockedDecrement((volatile signed __int32 *)(result + 12));
  return result;
}
