/*
 * XREFs of PbmSetScreenReaderState @ 0x180019280
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012764 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??$QueueApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUScreenReaderStateChangedContext@@@Z0@Z @ 0x1800196BC (--$QueueApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@YAJP8CApplicationManager@.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmSetScreenReaderState(CApplicationManager *a1, int a2, int a3)
{
  int Process; // edi
  HANDLE ProcessHeap; // rax
  volatile signed __int32 **v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 **v9; // rbx
  struct CProcess *v10; // rax
  volatile signed __int32 *v11; // rsi
  HANDLE v12; // rax
  struct CProcess *v13; // rbx
  struct CProcess *v15; // [rsp+20h] [rbp-28h] BYREF

  Process = 0;
  v15 = 0LL;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(a1, a1, &v15);
    if ( Process >= 0 )
    {
      ProcessHeap = GetProcessHeap();
      v7 = (volatile signed __int32 **)HeapAlloc(ProcessHeap, 0, 0x10uLL);
      v9 = v7;
      if ( v7 )
      {
        *((_DWORD *)v7 + 2) = a2;
        *((_DWORD *)v7 + 3) = a3;
        v10 = v15;
        *v9 = (volatile signed __int32 *)v15;
        _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
      }
      else
      {
        v9 = 0LL;
      }
      if ( v9 )
      {
        Process = QueueApplicationManagerWorkItem<ScreenReaderStateChangedContext>(v8, v9);
        if ( Process >= 0 )
          v9 = 0LL;
      }
      else
      {
        Process = -2147024882;
      }
      if ( v9 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 32LL))(v11);
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
          }
          *v9 = 0LL;
        }
        v12 = GetProcessHeap();
        HeapFree(v12, 0, v9);
      }
    }
    if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 2, 0xFFFFFFFF) == 1 )
    {
      v13 = v15;
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v15 + 32LL))(v15);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v13 + 24LL))(v13, 1LL);
    }
  }
  return (unsigned int)Process;
}
