/*
 * XREFs of ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800660B4
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x180027698 (--1CAudioSession@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180015730 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

int __fastcall ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::RemoveAt(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  __int64 (__fastcall *v9)(CServerAudioSessionControl *); // r15

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v5 = a1[1], v2 > v5) )
    ATL::AtlThrowImpl(-2147024809);
  v6 = *a1;
  v7 = v5 - v2;
  v8 = *(_QWORD *)(*a1 + 8 * a2);
  if ( v8 )
  {
    v9 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v8 + 16LL);
    if ( v9 == CAudioSessionManager::Release )
    {
      LODWORD(v6) = CAudioSessionManager::Release(*(CAudioSessionManager **)(*a1 + 8 * a2));
    }
    else if ( v9 == CServerAudioSessionControl::Release )
    {
      LODWORD(v6) = CServerAudioSessionControl::Release(*(CServerAudioSessionControl **)(*a1 + 8 * a2));
    }
    else
    {
      LODWORD(v6) = v9(*(CServerAudioSessionControl **)(*a1 + 8 * a2));
    }
  }
  if ( v7 )
  {
    LODWORD(v6) = memmove_s((void *const)(*a1 + 8 * a2), 8 * v7, (const void *const)(*a1 + 8 * v2), 8 * v7);
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( (_DWORD)v6 == 22 || (_DWORD)v6 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( (_DWORD)v6 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
  }
  --a1[1];
  return v6;
}
