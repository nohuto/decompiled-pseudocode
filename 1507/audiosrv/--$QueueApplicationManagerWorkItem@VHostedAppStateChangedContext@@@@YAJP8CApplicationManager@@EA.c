/*
 * XREFs of ??$QueueApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAVHostedAppStateChangedContext@@@Z0@Z @ 0x18002D20C
 * Callers:
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z @ 0x18002D790 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?QueueWorkItem@CSyncWorkItem@@UEAAJXZ @ 0x18002BFC0 (-QueueWorkItem@CSyncWorkItem@@UEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall QueueApplicationManagerWorkItem<HostedAppStateChangedContext>(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  signed int v5; // esi

  v3 = operator new(0x18uLL);
  v4 = v3;
  if ( v3 )
  {
    *v3 = &CGenericApplicationManagerWorkItem<HostedAppStateChangedContext>::`vftable';
    _InterlockedIncrement((volatile signed __int32 *)g_ApplicationManager + 2);
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v4[2] = a2;
    v4[1] = CApplicationManager::OnHostedAppStateChanged;
    v5 = CSyncWorkItem::QueueWorkItem((ULONG_PTR)v4);
    if ( v5 >= 0 )
      v4 = 0LL;
  }
  else
  {
    v5 = -2147024882;
  }
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1LL);
  return (unsigned int)v5;
}
