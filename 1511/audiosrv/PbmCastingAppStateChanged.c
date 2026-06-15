/*
 * XREFs of PbmCastingAppStateChanged @ 0x1800030AC
 * Callers:
 *     s_pbmCastingAppStateChanged @ 0x1800030A0 (s_pbmCastingAppStateChanged.c)
 * Callees:
 *     ??$QueueApplicationManagerWorkItem@U_CastingAppStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAU_CastingAppStateChangedContext@@@Z0@Z @ 0x180003164 (--$QueueApplicationManagerWorkItem@U_CastingAppStateChangedContext@@@@YAJP8CApplicationManager@@.c)
 *     ??_G_CastingAppStateChangedContext@@QEAAPEAXI@Z @ 0x1800032C0 (--_G_CastingAppStateChangedContext@@QEAAPEAXI@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001D7D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 */

__int64 __fastcall PbmCastingAppStateChanged(CApplicationManager *a1, int a2)
{
  int Process; // edi
  _CastingAppStateChangedContext *v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  _CastingAppStateChangedContext *v7; // rbx
  CUnknown *v8; // rax
  CUnknown *v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  Process = 0;
  if ( a2 > 1 )
  {
    return (unsigned int)-2147024809;
  }
  else if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(a1, a1, &v10);
    if ( Process >= 0 )
    {
      v4 = (_CastingAppStateChangedContext *)operator new(0x10uLL);
      v7 = v4;
      if ( v4 )
      {
        *((_DWORD *)v4 + 2) = a2;
        v8 = v10;
        *(_QWORD *)v7 = v10;
        _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
      }
      else
      {
        v7 = 0LL;
      }
      if ( v7 )
      {
        Process = QueueApplicationManagerWorkItem<_CastingAppStateChangedContext>(v6, v7);
        if ( Process >= 0 )
          v7 = 0LL;
      }
      else
      {
        Process = -2147024882;
      }
      if ( v7 )
        _CastingAppStateChangedContext::`scalar deleting destructor'(v7, v5);
    }
    if ( v10 )
      CUnknown::Release(v10);
  }
  return (unsigned int)Process;
}
