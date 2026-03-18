/*
 * XREFs of ?GetAnalogExclusiveTokenEventInternal@CTokenManager@@IEAAJPEAPEAX@Z @ 0x1C00E0324
 * Callers:
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C00DFD50 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 * Callees:
 *     ?OpenEventForSynchonize@CTokenManager@@CAJPEAXPEAPEAX@Z @ 0x1C0082D90 (-OpenEventForSynchonize@CTokenManager@@CAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall CTokenManager::GetAnalogExclusiveTokenEventInternal(CTokenManager *this, void **a2)
{
  CTokenManager *v2; // rbx
  char *v4; // rsi
  void **v5; // rdi
  int v6; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  v2 = g_pTokenManager;
  v4 = (char *)g_pTokenManager + 56;
  ExAcquirePushLockExclusiveEx((char *)g_pTokenManager + 56, 0LL);
  v5 = (void **)((char *)v2 + 48);
  if ( *((_QWORD *)v2 + 6)
    || (ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = 0LL,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 512,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v6 = ZwCreateEvent((PHANDLE)v2 + 6, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0),
        v6 >= 0) )
  {
    v6 = CTokenManager::OpenEventForSynchonize(*v5, a2);
  }
  ExReleasePushLockExclusiveEx(v4, 0LL);
  return (unsigned int)v6;
}
