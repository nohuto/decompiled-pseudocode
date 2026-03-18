/*
 * XREFs of ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C02ABEE4
 * Callers:
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall UMPDOBJ::bIncrementEngCallRecursionCount(UMPDOBJ *this)
{
  signed __int32 v1; // eax

  while ( 1 )
  {
    v1 = *((_DWORD *)this + 108);
    if ( v1 < 0 || (unsigned int)(v1 + 1) >= 0x80000000 )
      break;
    if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)this + 108, v1 + 1, v1) )
      return 1;
  }
  return 0;
}
