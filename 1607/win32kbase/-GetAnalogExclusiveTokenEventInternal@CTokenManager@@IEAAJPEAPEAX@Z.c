/*
 * XREFs of ?GetAnalogExclusiveTokenEventInternal@CTokenManager@@IEAAJPEAPEAX@Z @ 0x1C00F4658
 * Callers:
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C00F4350 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C001A9BC (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?OpenEventForSynchonize@CTokenManager@@CAJPEAXPEAPEAX@Z @ 0x1C0080824 (-OpenEventForSynchonize@CTokenManager@@CAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall CTokenManager::GetAnalogExclusiveTokenEventInternal(CTokenManager *this, void **a2)
{
  CTokenManager *v2; // rbx
  int v4; // esi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  v2 = g_pTokenManager;
  CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
  if ( *((_QWORD *)v2 + 6)
    || (ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = 0LL,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 512,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v4 = ZwCreateEvent((PHANDLE)v2 + 6, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0),
        v4 >= 0) )
  {
    v4 = CTokenManager::OpenEventForSynchonize(*((void **)v2 + 6), a2);
  }
  *((_QWORD *)v2 + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v2 + 56, 0LL);
  return (unsigned int)v4;
}
