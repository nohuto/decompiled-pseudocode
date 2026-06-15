/*
 * XREFs of ?EventWorkerThread@@YAKPEAX@Z @ 0x180034100
 * Callers:
 *     <none>
 * Callees:
 *     ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x18002B3A0 (-Invoke@SESSION_EVENT@@UEAAXXZ.c)
 *     ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x18002B400 (--_GSESSION_EVENT@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

__int64 __fastcall EventWorkerThread(PVOID Parameter)
{
  unsigned int v1; // ebx
  void **v2; // rbx
  void (__fastcall *v3)(SESSION_EVENT *); // rax
  void **(__fastcall *v4)(void **, char); // rax
  CAudioSession *v5; // rcx
  DWORD NumberOfBytesTransferred; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 CompletionKey; // [rsp+50h] [rbp+18h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+58h] [rbp+20h] BYREF

  v1 = CoInitializeEx(0LL, 0);
  if ( v1 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids);
        v5 = WPP_GLOBAL_Control;
      }
      if ( v5 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v5 + 28) & 0x10) != 0 && *((_BYTE *)v5 + 25) >= 2u )
        WPP_SF_D(*((_QWORD *)v5 + 2), 18LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, v1);
    }
    return v1;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&g_DeviceEnumerator + 8LL))(*(_QWORD *)&g_DeviceEnumerator);
    while ( 1 )
    {
      while ( !GetQueuedCompletionStatus(
                 g_WorkerEventPort,
                 &NumberOfBytesTransferred,
                 &CompletionKey,
                 &Overlapped,
                 0xFFFFFFFF) )
        ;
      if ( NumberOfBytesTransferred == -1 )
        break;
      v2 = (void **)CompletionKey;
      v3 = **(void (__fastcall ***)(SESSION_EVENT *))CompletionKey;
      if ( v3 == SESSION_EVENT::Invoke )
        SESSION_EVENT::Invoke((SESSION_EVENT *)CompletionKey);
      else
        v3((SESSION_EVENT *)CompletionKey);
      v4 = (void **(__fastcall *)(void **, char))*((_QWORD *)*v2 + 1);
      if ( v4 == SESSION_EVENT::`scalar deleting destructor' )
        SESSION_EVENT::`scalar deleting destructor'(v2, 1);
      else
        v4(v2, 1);
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&g_DeviceEnumerator + 16LL))(*(_QWORD *)&g_DeviceEnumerator);
    CoUninitialize();
    return 0LL;
  }
}
