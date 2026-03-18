/*
 * XREFs of ?GetAnalogExclusiveTokenEventInternal@CTokenManager@@IEAAJPEAPEAX@Z @ 0x1C00E225C
 * Callers:
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C00E1CA0 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C003D4A4 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?OpenEventForSynchonize@CTokenManager@@CAJPEAXPEAPEAX@Z @ 0x1C007CF04 (-OpenEventForSynchonize@CTokenManager@@CAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall CTokenManager::GetAnalogExclusiveTokenEventInternal(CTokenManager *this, void **a2)
{
  CTokenManager *v2; // rbx
  int v4; // esi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  v2 = g_pTokenManager;
  CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
  if ( *((_QWORD *)v2 + 7)
    || (ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = 0LL,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 512,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v4 = ZwCreateEvent((PHANDLE)v2 + 7, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0),
        v4 >= 0) )
  {
    v4 = CTokenManager::OpenEventForSynchonize(*((void **)v2 + 7), a2);
  }
  *(_QWORD *)v2 = 0LL;
  ExReleasePushLockExclusiveEx((char *)v2 + 64);
  return (unsigned int)v4;
}
