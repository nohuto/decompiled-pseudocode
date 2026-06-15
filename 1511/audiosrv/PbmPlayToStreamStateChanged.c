/*
 * XREFs of PbmPlayToStreamStateChanged @ 0x18009E13C
 * Callers:
 *     s_pbmPlayToStreamStateChanged @ 0x1800915E0 (s_pbmPlayToStreamStateChanged.c)
 * Callees:
 *     ??_G_CastingAppStateChangedContext@@QEAAPEAXI@Z @ 0x1800032C0 (--_G_CastingAppStateChangedContext@@QEAAPEAXI@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001D7D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 *     ??$QueueApplicationManagerWorkItem@U_PlayToStreamStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAU_PlayToStreamStateChangedContext@@@Z0@Z @ 0x18009DEE0 (--$QueueApplicationManagerWorkItem@U_PlayToStreamStateChangedContext@@@@YAJP8CApplicationManager.c)
 */

__int64 __fastcall PbmPlayToStreamStateChanged(CApplicationManager *a1, int a2)
{
  int Process; // edi
  CUnknown **v4; // rax
  __int64 v5; // rcx
  CUnknown **v6; // rbx
  struct CProcess *v7; // rax
  struct CProcess *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  Process = 0;
  if ( a2 <= 1 )
  {
    if ( g_ApplicationManager )
    {
      Process = CApplicationManager::RpcGetProcess(a1, a1, &v9);
      if ( Process >= 0 )
      {
        v4 = (CUnknown **)operator new(0x10uLL);
        v6 = v4;
        if ( v4 )
        {
          *((_DWORD *)v4 + 2) = a2;
          v7 = v9;
          *v6 = v9;
          _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
        }
        else
        {
          v6 = 0LL;
        }
        if ( v6 )
        {
          Process = QueueApplicationManagerWorkItem<_PlayToStreamStateChangedContext>(v5, (__int64)v6);
          if ( Process >= 0 )
            v6 = 0LL;
        }
        else
        {
          Process = -2147024882;
        }
        if ( v6 )
          _CastingAppStateChangedContext::`scalar deleting destructor'(v6);
      }
      if ( v9 )
        CUnknown::Release(v9);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)Process;
}
