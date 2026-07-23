/*
 * XREFs of EtwpDequeueBufferPendingCompressionFromQueue @ 0x14022A5FC
 * Callers:
 *     EtwpDequeueBufferPendingCompression @ 0x14022A510 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpDequeueBufferPendingCompressionFromQueue(_QWORD *a1, volatile signed __int32 *a2, __int64 a3)
{
  _QWORD **v3; // r9
  _QWORD *v5; // rcx
  __int64 v6; // r11
  _QWORD *v8; // rcx

  v3 = (_QWORD **)(a1 + 1);
  if ( !a1[1] )
    return 0LL;
  while ( 1 )
  {
    v5 = *v3;
    v6 = (__int64)(*v3 - 4);
    if ( *(_DWORD *)(v6 + 44) == 4 && *(char *)(v6 + 52) >= 0 )
      break;
    v3 = (_QWORD **)*v3;
    if ( !*v5 )
      return 0LL;
  }
  _InterlockedDecrement(a2);
  v8 = *v3;
  *v3 = (_QWORD *)**v3;
  if ( *v8 )
    *v8 = 0LL;
  else
    *a1 = v3;
  *(_QWORD *)(a3 + 32) = *v3;
  *v3 = (_QWORD *)(a3 + 32);
  if ( v3 == (_QWORD **)*a1 )
    *a1 = a3 + 32;
  return v6;
}
