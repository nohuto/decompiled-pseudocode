/*
 * XREFs of CmCallbackGetKeyObjectID @ 0x1405DD018
 * Callers:
 *     EtwpRegTraceCallback @ 0x1406640A4 (EtwpRegTraceCallback.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 */

NTSTATUS __stdcall CmCallbackGetKeyObjectID(
        PLARGE_INTEGER Cookie,
        PVOID Object,
        PULONG_PTR ObjectID,
        PCUNICODE_STRING *ObjectName)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  const UNICODE_STRING *v9; // rax
  _QWORD *v10; // rax

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
  CmpLockKcbShared(v8);
  v9 = *(const UNICODE_STRING **)(v8 + 288);
  if ( v9 )
    goto LABEL_15;
  if ( *(_QWORD *)(v8 + 80) )
  {
    v10 = CmpConstructName(v8);
    if ( v10 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 288), (signed __int64)v10, 0LL) )
        ExFreePoolWithTag(v10, 0x624E4D43u);
    }
  }
  v9 = *(const UNICODE_STRING **)(v8 + 288);
  if ( v9 )
  {
LABEL_15:
    *ObjectName = v9;
    CmpUnlockKcb((char *)v8);
    CmpUnlockRegistry();
    return 0;
  }
  CmpUnlockKcb((char *)v8);
  CmpUnlockRegistry();
  return -1073741670;
}
