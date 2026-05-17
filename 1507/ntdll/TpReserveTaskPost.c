/*
 * XREFs of TpReserveTaskPost @ 0x18007CD10
 * Callers:
 *     RtlQueueWorkItem @ 0x18007C3C0 (RtlQueueWorkItem.c)
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x18003DE48 (TppGetCurrentThreadNumaNode.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003E8AC (TppPoolpReferenceGlobalPool.c)
 */

__int64 __fastcall TpReserveTaskPost(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  char *v6; // rdx
  __int64 *v7; // rcx
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  v4 = 0;
  if ( a1 )
  {
    _InterlockedIncrement(a1);
LABEL_6:
    TppGetCurrentThreadNumaNode((__int64)v9, (_DWORD *)(a2 + 8), (unsigned __int8 *)(a2 + 12));
    return (unsigned int)v4;
  }
  if ( a3 && (*(_BYTE *)(a3 + 56) & 2) != 0 )
  {
    v6 = (char *)&TppPoolpSerializedPoolLock;
    v7 = &TppPoolpSerializedPool;
  }
  else
  {
    v6 = (char *)&TppPoolpGlobalPoolLock;
    v7 = &TppPoolpGlobalPool;
  }
  v4 = TppPoolpReferenceGlobalPool((volatile signed __int32 **)v7, v6, &v9, a4);
  if ( v4 >= 0 )
    goto LABEL_6;
  return (unsigned int)v4;
}
