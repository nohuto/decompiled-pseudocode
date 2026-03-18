/*
 * XREFs of CmCallbackGetKeyObjectID @ 0x140652544
 * Callers:
 *     EtwpRegTraceCallback @ 0x1406E717C (EtwpRegTraceCallback.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 */

NTSTATUS __stdcall CmCallbackGetKeyObjectID(
        PLARGE_INTEGER Cookie,
        PVOID Object,
        PULONG_PTR ObjectID,
        PCUNICODE_STRING *ObjectName)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  const UNICODE_STRING *v12; // rax
  _QWORD *v13; // rax

  if ( !Object || *(_DWORD *)Object != 1803104306 || !Cookie )
    return -1073741811;
  v6 = *((_QWORD *)Object + 1);
  if ( ObjectID )
    *ObjectID = v6;
  if ( !ObjectName )
    return 0;
  if ( (v6 & 1) != 0 )
    return -1073741811;
  CmpLockRegistry();
  v8 = *((_QWORD *)Object + 1);
  CmpLockKcbShared(v8, v9, v10, v11);
  v12 = *(const UNICODE_STRING **)(v8 + 288);
  if ( v12 )
    goto LABEL_15;
  if ( *(_QWORD *)(v8 + 80) )
  {
    v13 = CmpConstructName(v8);
    if ( v13 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 288), (signed __int64)v13, 0LL) )
        ExFreePoolWithTag(v13, 0x624E4D43u);
    }
  }
  v12 = *(const UNICODE_STRING **)(v8 + 288);
  if ( v12 )
  {
LABEL_15:
    *ObjectName = v12;
    CmpUnlockKcb((char *)v8);
    CmpUnlockRegistry();
    return 0;
  }
  CmpUnlockKcb((char *)v8);
  CmpUnlockRegistry();
  return -1073741670;
}
