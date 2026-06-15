/*
 * XREFs of ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180016BD8
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x1800168F8 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180019190 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x180009E60 (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
CPickerHostContext *__fastcall CPickerHostContext::`scalar deleting destructor'(CPickerHostContext *this)
{
  __int64 *v2; // rcx
  LPVOID *v3; // rdi
  __int64 v4; // rax
  HANDLE ProcessHeap; // rax
  HANDLE v7; // rax

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
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v3);
    }
  }
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64)this);
  v7 = GetProcessHeap();
  HeapFree(v7, 0, this);
  return this;
}
