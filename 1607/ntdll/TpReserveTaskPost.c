/*
 * XREFs of TpReserveTaskPost @ 0x180080454
 * Callers:
 *     RtlQueueWorkItem @ 0x180039CF0 (RtlQueueWorkItem.c)
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x18003E1DC (TppGetCurrentThreadNumaNode.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003EF9C (TppPoolpReferenceGlobalPool.c)
 */

__int64 __fastcall TpReserveTaskPost(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  _PEB_LDR_DATA *v6; // rdx
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
    v6 = (_PEB_LDR_DATA *)&TppPoolpSerializedPoolLock;
    v7 = &TppPoolpSerializedPool;
  }
  else
  {
    v6 = (_PEB_LDR_DATA *)&TppPoolpGlobalPoolLock;
    v7 = &TppPoolpGlobalPool;
  }
  v4 = TppPoolpReferenceGlobalPool((volatile signed __int32 **)v7, v6, &v9, a4);
  if ( v4 >= 0 )
    goto LABEL_6;
  return (unsigned int)v4;
}
