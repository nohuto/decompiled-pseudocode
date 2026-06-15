/*
 * XREFs of ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x180061B88
 * Callers:
 *     ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x180061AD0 (-AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ?Add@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z @ 0x180028C98 (-Add@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1CAudioSessionNotificationProcess@@QEAA@XZ @ 0x180061948 (--1CAudioSessionNotificationProcess@@QEAA@XZ.c)
 *     ??8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z @ 0x180061978 (--8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z.c)
 *     ??A?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAAEAVCAudioSessionNotificationProcess@@_K@Z @ 0x1800619C0 (--A-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotificationPr.c)
 *     ?Add@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCAudioSessionNotificationProcess@@@Z @ 0x180061A24 (-Add@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotification.c)
 *     ?RemoveAt@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180062F68 (-RemoveAt@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotific.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CLockedList<CAudioSessionNotificationProcess,1,0>::AddInterface(
        struct _RTL_CRITICAL_SECTION *a1,
        __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  __int64 i; // rsi
  _QWORD *v5; // rax
  ATL::CAtlException *v7; // rbx
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // [rsp+28h] [rbp-30h] BYREF
  ATL::CAtlException *v10; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+70h] [rbp+18h]
  unsigned __int64 v14; // [rsp+78h] [rbp+20h]

  v2 = a1;
  v3 = 0;
  EnterCriticalSection(a1);
  for ( i = 0LL; (unsigned __int64)(unsigned int)i < *(_QWORD *)&v2[1].LockCount; i = (unsigned int)(i + 1) )
  {
    v5 = (_QWORD *)ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::operator[](
                     &v2[1].DebugInfo,
                     (unsigned int)i);
    if ( operator==(v5, a2) )
      break;
  }
  if ( (unsigned int)i == *(_QWORD *)&v2[1].LockCount )
  {
    try
    {
      v14 = ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::Add(
              &v2[1].DebugInfo,
              a2);
    }
    catch ( ATL::CAtlException *v9 )
    {
      v7 = v9;
      if ( *(_DWORD *)v9 == -1073741571 )
        _o__resetstkoflw();
      v3 = *(_DWORD *)v7;
      if ( *(int *)v7 < 0 )
      {
        v2 = a1;
        goto LABEL_15;
      }
      v2 = a1;
    }
    v3 = 0;
    try
    {
      ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::Add(&v2[1].SpinCount);
    }
    catch ( ATL::CAtlException *v10 )
    {
      v8 = v10;
      if ( *(_DWORD *)v10 == -1073741571 )
        _o__resetstkoflw();
      v13 = *(_DWORD *)v8;
      v3 = *(_DWORD *)v8;
      v2 = a1;
      if ( v13 < 0 )
        ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::RemoveAt(
          &a1[1],
          v14);
    }
  }
  else
  {
    if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v2[2].DebugInfo )
      ATL::AtlThrowImpl(-2147024809);
    ++*(_DWORD *)(v2[1].SpinCount + 4 * i);
  }
LABEL_15:
  LeaveCriticalSection(v2);
  CAudioSessionNotificationProcess::~CAudioSessionNotificationProcess((CAudioSessionNotificationProcess *)a2);
  return v3;
}
