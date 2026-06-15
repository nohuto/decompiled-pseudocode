/*
 * XREFs of ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x1800421D0
 * Callers:
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x1800422C8 (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180009E44 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ @ 0x180041FF0 (-FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ.c)
 *     ??0?$CComObject@VCAudioSessionManagerProvider@@@ATL@@QEAA@PEAX@Z @ 0x18004212C (--0-$CComObject@VCAudioSessionManagerProvider@@@ATL@@QEAA@PEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?InternalFinalConstructRelease@CVADServer@@QEAAXXZ @ 0x18008B41C (-InternalFinalConstructRelease@CVADServer@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ATL::CComObject<CAudioSessionManagerProvider>::CreateInstance()
{
  int v0; // r14d
  LPVOID v1; // rax
  __int64 v2; // rdi
  signed __int32 v3; // eax
  __int64 v5; // [rsp+58h] [rbp+10h]

  g_SingletonAudioSessionManagerProvider = 0LL;
  v0 = -2147024882;
  try
  {
    v1 = operator new(0xA8uLL);
    if ( v1 )
      v2 = ATL::CComObject<CAudioSessionManagerProvider>::CComObject<CAudioSessionManagerProvider>((__int64)v1);
    else
      v2 = 0LL;
    v5 = v2;
  }
  catch ( ... )
  {
    v0 = -2147024882;
    v2 = v5;
  }
  if ( v2 )
  {
    do
      v3 = *(_DWORD *)(v2 + 8);
    while ( v3 != 0x7FFFFFFF && v3 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) );
    v0 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v2 + 16));
    if ( v0 >= 0 )
    {
      *(_BYTE *)(v2 + 56) = 1;
      v0 = CAudioSessionManagerProvider::FinalConstruct((CAudioSessionManagerProvider *)v2);
      if ( v0 >= 0 )
        v0 = 0;
    }
    CVADServer::InternalFinalConstructRelease((CVADServer *)v2);
    if ( v0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, 1LL);
      v2 = 0LL;
    }
  }
  g_SingletonAudioSessionManagerProvider = (CAudioSessionManagerProvider *)v2;
  return (unsigned int)v0;
}
