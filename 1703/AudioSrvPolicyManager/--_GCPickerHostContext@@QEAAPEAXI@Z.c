/*
 * XREFs of ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x18001519C
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180014F74 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180017280 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x180009B5C (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A3D0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
CPickerHostContext *__fastcall CPickerHostContext::`scalar deleting destructor'(CPickerHostContext *this)
{
  __int64 *v2; // rcx
  LPVOID *v3; // rdi
  __int64 v4; // rax

  while ( *((_QWORD *)this + 2) )
  {
    v2 = *(__int64 **)this;
    if ( !*(_QWORD *)this )
      ATL::AtlThrowImpl(-2147467259);
    v3 = (LPVOID *)v2[2];
    v4 = *v2;
    *(_QWORD *)this = *v2;
    if ( v4 )
      *(_QWORD *)(v4 + 8) = 0LL;
    else
      *((_QWORD *)this + 1) = 0LL;
    *v2 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v2;
    if ( (*((_QWORD *)this + 2))-- == 1LL )
      ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64)this);
    if ( v3 )
    {
      if ( *v3 )
      {
        CoTaskMemFree(*v3);
        *v3 = 0LL;
      }
      operator delete(v3, 0x10uLL);
    }
  }
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64)this);
  operator delete(this, 0x30uLL);
  return this;
}
