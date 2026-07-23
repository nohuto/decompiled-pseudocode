/*
 * XREFs of CmCallbackGetKeyObjectID @ 0x1405FAF6C
 * Callers:
 *     EtwpRegTraceCallback @ 0x1406A49F4 (EtwpRegTraceCallback.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackShared @ 0x140431E30 (CmpLockKcbStackShared.c)
 *     CmpConstructAndCacheName @ 0x1404C56E4 (CmpConstructAndCacheName.c)
 */

NTSTATUS __stdcall CmCallbackGetKeyObjectID(
        PLARGE_INTEGER Cookie,
        PVOID Object,
        PULONG_PTR ObjectID,
        PCUNICODE_STRING *ObjectName)
{
  unsigned __int64 v8; // rdi
  NTSTATUS started; // ebx
  _WORD v11[20]; // [rsp+20h] [rbp-28h] BYREF
  const UNICODE_STRING *v12; // [rsp+58h] [rbp+10h] BYREF

  memset(v11, 0, 0x20uLL);
  v11[1] = -1;
  if ( !Object || *(_DWORD *)Object != 1803104306 || !Cookie )
    return -1073741811;
  v8 = *((_QWORD *)Object + 1);
  if ( ObjectID )
    *ObjectID = v8;
  if ( !ObjectName )
    return 0;
  if ( (v8 & 1) != 0 )
    return -1073741811;
  CmpLockRegistry();
  started = CmpStartKcbStackForTopLayerKcb((__int64)v11, v8);
  if ( started >= 0 )
  {
    CmpLockKcbStackShared((__int64)v11);
    if ( *(_QWORD *)(v8 + 72) && (int)CmpConstructAndCacheName(v8, &v12) >= 0 )
    {
      started = 0;
      *ObjectName = v12;
    }
    else
    {
      started = -1073741670;
    }
    CmpUnlockKcbStack((__int64)v11);
  }
  CmpUnlockRegistry();
  return started;
}
