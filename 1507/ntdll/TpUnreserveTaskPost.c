/*
 * XREFs of TpUnreserveTaskPost @ 0x18007CD90
 * Callers:
 *     RtlpTpWorkUnposted @ 0x18007C2C0 (RtlpTpWorkUnposted.c)
 *     RtlQueueWorkItem @ 0x18007C3C0 (RtlQueueWorkItem.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18003DA5C (TppPoolpDereferenceGlobalPool.c)
 */

__int64 __fastcall TpUnreserveTaskPost(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rdx
  __int64 *v5; // rcx
  __int64 result; // rax

  if ( !a1 )
  {
    if ( !a2 || (a1 = (volatile signed __int32 *)TppPoolpSerializedPool, (*(_BYTE *)(a2 + 56) & 2) == 0) )
      a1 = (volatile signed __int32 *)TppPoolpGlobalPool;
  }
  if ( a1 == (volatile signed __int32 *)TppPoolpGlobalPool )
  {
    v4 = (char *)&TppPoolpGlobalPoolLock;
    v5 = &TppPoolpGlobalPool;
    return TppPoolpDereferenceGlobalPool((const void **)v5, v4, TppPoolpGlobalPool, a4);
  }
  if ( a1 == (volatile signed __int32 *)TppPoolpSerializedPool )
  {
    v4 = (char *)&TppPoolpSerializedPoolLock;
    v5 = &TppPoolpSerializedPool;
    return TppPoolpDereferenceGlobalPool((const void **)v5, v4, TppPoolpGlobalPool, a4);
  }
  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return TppPoolpFree((unsigned __int64)a1);
  return result;
}
