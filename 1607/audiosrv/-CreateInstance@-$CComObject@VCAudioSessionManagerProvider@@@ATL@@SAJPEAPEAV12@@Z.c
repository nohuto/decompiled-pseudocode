/*
 * XREFs of ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x18003288C
 * Callers:
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x180032814 (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180028F54 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ??0?$CComObject@VCAudioSessionManagerProvider@@@ATL@@QEAA@PEAX@Z @ 0x180032968 (--0-$CComObject@VCAudioSessionManagerProvider@@@ATL@@QEAA@PEAX@Z.c)
 *     ?FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ @ 0x180032A04 (-FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800642E4 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalFinalConstructRelease@CVADServer@@QEAAXXZ @ 0x1800717A4 (-InternalFinalConstructRelease@CVADServer@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ATL::CComObject<CAudioSessionManagerProvider>::CreateInstance()
{
  int v0; // esi
  LPVOID v1; // rax
  volatile int *v2; // rdx
  __int64 v3; // rdi
  _QWORD v5[9]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h]

  v5[4] = -2LL;
  g_SingletonAudioSessionManagerProvider = 0LL;
  v0 = -2147024882;
  try
  {
    v1 = operator new(0xA8uLL);
    if ( v1 )
      v3 = ATL::CComObject<CAudioSessionManagerProvider>::CComObject<CAudioSessionManagerProvider>(v1);
    else
      v3 = 0LL;
    v6 = v3;
  }
  catch ( ... )
  {
    v2 = (volatile int *)v5;
    v0 = -2147024882;
    v3 = v6;
  }
  if ( v3 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 8), v2);
    v0 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v3 + 16));
    if ( v0 >= 0 )
    {
      *(_BYTE *)(v3 + 56) = 1;
      v0 = CAudioSessionManagerProvider::FinalConstruct((CAudioSessionManagerProvider *)v3);
      if ( v0 >= 0 )
        v0 = 0;
    }
    CVADServer::InternalFinalConstructRelease((CVADServer *)v3);
    if ( v0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, 1LL);
      v3 = 0LL;
    }
  }
  g_SingletonAudioSessionManagerProvider = (CAudioSessionManagerProvider *)v3;
  return (unsigned int)v0;
}
