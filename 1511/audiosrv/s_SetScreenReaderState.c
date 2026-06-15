/*
 * XREFs of s_SetScreenReaderState @ 0x18009E2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??_G_CastingAppStateChangedContext@@QEAAPEAXI@Z @ 0x1800032C0 (--_G_CastingAppStateChangedContext@@QEAAPEAXI@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001D7D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 *     ??$QueueApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUScreenReaderStateChangedContext@@@Z0@Z @ 0x18009DE2C (--$QueueApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@YAJP8CApplicationManager@.c)
 */

__int64 __fastcall s_SetScreenReaderState(CApplicationManager *a1, int a2, int a3)
{
  int Process; // edi
  CUnknown **v6; // rax
  __int64 v7; // rcx
  CUnknown **v8; // rbx
  CUnknown *v9; // rax
  CUnknown *v11; // [rsp+58h] [rbp+20h] BYREF

  Process = 0;
  v11 = 0LL;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(a1, a1, &v11);
    if ( Process >= 0 )
    {
      v6 = (CUnknown **)operator new(0x10uLL);
      v8 = v6;
      if ( v6 )
      {
        *((_DWORD *)v6 + 2) = a2;
        *((_DWORD *)v6 + 3) = a3;
        v9 = v11;
        *v8 = v11;
        _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        Process = QueueApplicationManagerWorkItem<ScreenReaderStateChangedContext>(v7, (__int64)v8);
        if ( Process >= 0 )
          v8 = 0LL;
      }
      else
      {
        Process = -2147024882;
      }
      if ( v8 )
        _CastingAppStateChangedContext::`scalar deleting destructor'(v8);
    }
    if ( v11 )
      CUnknown::Release(v11);
  }
  return (unsigned int)Process;
}
