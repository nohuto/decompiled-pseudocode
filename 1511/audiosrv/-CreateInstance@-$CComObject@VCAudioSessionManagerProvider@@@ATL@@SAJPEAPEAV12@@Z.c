/*
 * XREFs of ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x18003DEC8
 * Callers:
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18003DE44 (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180038F7C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0?$CComObject@VCAudioSessionManagerProvider@@@ATL@@QEAA@PEAX@Z @ 0x18003DF80 (--0-$CComObject@VCAudioSessionManagerProvider@@@ATL@@QEAA@PEAX@Z.c)
 *     ?FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ @ 0x18003E024 (-FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ATL::CComObject<CAudioSessionManagerProvider>::CreateInstance()
{
  int v0; // r14d
  LPVOID v1; // rax
  __int64 v2; // rdi
  __int64 v4; // [rsp+58h] [rbp+10h]

  g_SingletonAudioSessionManagerProvider = 0LL;
  v0 = -2147024882;
  try
  {
    v1 = operator new(0xA8uLL);
    if ( v1 )
      v2 = ATL::CComObject<CAudioSessionManagerProvider>::CComObject<CAudioSessionManagerProvider>(v1);
    else
      v2 = 0LL;
    v4 = v2;
  }
  catch ( ... )
  {
    v0 = -2147024882;
    v2 = v4;
  }
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v0 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v2 + 16));
    if ( v0 >= 0 )
    {
      *(_BYTE *)(v2 + 56) = 1;
      v0 = CAudioSessionManagerProvider::FinalConstruct((CAudioSessionManagerProvider *)v2);
      if ( v0 >= 0 )
        v0 = 0;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 8));
    if ( v0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, 1LL);
      v2 = 0LL;
    }
  }
  g_SingletonAudioSessionManagerProvider = (CBackgroundSessionCallbacks *)v2;
  return (unsigned int)v0;
}
