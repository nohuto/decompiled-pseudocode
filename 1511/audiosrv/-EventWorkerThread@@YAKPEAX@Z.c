/*
 * XREFs of ?EventWorkerThread@@YAKPEAX@Z @ 0x18003B460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x1800044A0 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 *     ??_GCAppStateChangedWorkItem@@UEAAPEAXI@Z @ 0x180004610 (--_GCAppStateChangedWorkItem@@UEAAPEAXI@Z.c)
 *     ?Invoke@?$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAXXZ @ 0x180005010 (-Invoke@-$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAXXZ.c)
 *     ??_G?$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAPEAXI@Z @ 0x180005090 (--_G-$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAPEAXI@Z.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001E6C0 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002E5E0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ??_GCStreamStartedWorkItem@@MEAAPEAXI@Z @ 0x18002EAC0 (--_GCStreamStartedWorkItem@@MEAAPEAXI@Z.c)
 *     ?Invoke@?$CGenericApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@UEAAXXZ @ 0x18002EEB0 (-Invoke@-$CGenericApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@UEAAXXZ.c)
 *     ??_G?$CGenericApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@UEAAPEAXI@Z @ 0x18002EF30 (--_G-$CGenericApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@UEAAPEAXI@Z.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002F360 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 *     ??_ECStreamStoppedWorkItem@@MEAAPEAXI@Z @ 0x18002F750 (--_ECStreamStoppedWorkItem@@MEAAPEAXI@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EventWorkerThread(PVOID Parameter)
{
  unsigned int v1; // ebx
  struct _OVERLAPPED *v2; // rbx
  int (__fastcall *v3)(__int64); // rdi
  __int64 (__fastcall *v4)(CApplicationManager *, struct HostedAppStateChangedContext *); // rbp
  LPVOID *Pointer; // rdi
  HANDLE ProcessHeap; // rax
  void (__fastcall *v7)(struct _OVERLAPPED *, __int64); // rdi
  CRefCountedObject *v8; // rsi
  HANDLE v9; // rax
  TraceLoggingHProvider v10; // rcx
  LPOVERLAPPED Overlapped[10]; // [rsp+38h] [rbp-50h] BYREF
  DWORD NumberOfBytesTransferred; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 CompletionKey; // [rsp+A8h] [rbp+20h] BYREF

  v1 = CoInitializeEx(0LL, 0);
  if ( v1 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids);
        v10 = WPP_GLOBAL_Control;
      }
      if ( v10 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)v10 + 28) & 0x10) != 0
        && *((_BYTE *)v10 + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)v10 + 2), 0x12u, (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids, v1);
      }
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
                 Overlapped,
                 0xFFFFFFFF) )
        ;
      if ( NumberOfBytesTransferred == -1 )
        break;
      v2 = (struct _OVERLAPPED *)CompletionKey;
      v3 = **(int (__fastcall ***)(__int64))CompletionKey;
      if ( v3 == CGenericApplicationManagerWorkItem<HostedAppStateChangedContext>::Invoke )
      {
        v4 = *(__int64 (__fastcall **)(CApplicationManager *, struct HostedAppStateChangedContext *))(CompletionKey + 8);
        if ( v4 == CApplicationManager::OnHostedAppStateChanged )
          CApplicationManager::OnHostedAppStateChanged(
            g_ApplicationManager,
            *(struct HostedAppStateChangedContext **)(CompletionKey + 16));
        else
          v4(g_ApplicationManager, *(struct HostedAppStateChangedContext **)(CompletionKey + 16));
        Pointer = (LPVOID *)v2->Pointer;
        if ( Pointer )
        {
          if ( *Pointer )
          {
            CoTaskMemFree(*Pointer);
            *Pointer = 0LL;
          }
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, Pointer);
        }
      }
      else if ( v3 == CGenericApplicationManagerWorkItem<DuckingGainValueChangedContext>::Invoke )
      {
        CGenericApplicationManagerWorkItem<DuckingGainValueChangedContext>::Invoke(CompletionKey);
      }
      else if ( (char *)v3 == (char *)CAppStateChangedWorkItem::Invoke )
      {
        CAppStateChangedWorkItem::Invoke((CAppStateChangedWorkItem *)CompletionKey);
      }
      else if ( (char *)v3 == (char *)CStreamStartedWorkItem::Invoke )
      {
        CStreamStartedWorkItem::Invoke((CStreamStartedWorkItem *)CompletionKey);
      }
      else if ( (char *)v3 == (char *)CStreamStoppedWorkItem::Invoke )
      {
        CStreamStoppedWorkItem::Invoke((CStreamStoppedWorkItem *)CompletionKey);
      }
      else if ( v3 == CGenericApplicationManagerWorkItem<ApplicationStateChangedContext>::Invoke )
      {
        CGenericApplicationManagerWorkItem<ApplicationStateChangedContext>::Invoke(CompletionKey);
      }
      else
      {
        v3(CompletionKey);
      }
      Overlapped[1] = v2;
      v7 = *(void (__fastcall **)(struct _OVERLAPPED *, __int64))(v2->Internal + 8);
      if ( (char *)v7 == (char *)CGenericApplicationManagerWorkItem<HostedAppStateChangedContext>::`vector deleting destructor' )
      {
        v2->Internal = (ULONG_PTR)&CGenericApplicationManagerWorkItem<HostedAppStateChangedContext>::`vftable';
        v8 = g_ApplicationManager;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)g_ApplicationManager + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(CRefCountedObject *))(*(_QWORD *)v8 + 16LL))(v8);
          (*(void (__fastcall **)(CRefCountedObject *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1LL);
        }
        v2->Internal = (ULONG_PTR)&WORKER_THREAD_EVENT::`vftable';
        v9 = GetProcessHeap();
        HeapFree(v9, 0, v2);
      }
      else if ( (char *)v7 == (char *)CGenericApplicationManagerWorkItem<DuckingGainValueChangedContext>::`scalar deleting destructor' )
      {
        CGenericApplicationManagerWorkItem<DuckingGainValueChangedContext>::`scalar deleting destructor'(v2, 1);
      }
      else if ( (char *)v7 == (char *)CAppStateChangedWorkItem::`scalar deleting destructor' )
      {
        CAppStateChangedWorkItem::`scalar deleting destructor'((CAppStateChangedWorkItem *)v2, 1);
      }
      else if ( (char *)v7 == (char *)CStreamStartedWorkItem::`scalar deleting destructor' )
      {
        CStreamStartedWorkItem::`scalar deleting destructor'((CStreamStartedWorkItem *)v2, 1);
      }
      else if ( (char *)v7 == (char *)CStreamStoppedWorkItem::`vector deleting destructor' )
      {
        CStreamStoppedWorkItem::`vector deleting destructor'((CStreamStoppedWorkItem *)v2, 1);
      }
      else if ( (char *)v7 == (char *)CGenericApplicationManagerWorkItem<ApplicationStateChangedContext>::`scalar deleting destructor' )
      {
        CGenericApplicationManagerWorkItem<ApplicationStateChangedContext>::`scalar deleting destructor'(v2, 1);
      }
      else
      {
        v7(v2, 1LL);
      }
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&g_DeviceEnumerator + 16LL))(*(_QWORD *)&g_DeviceEnumerator);
    CoUninitialize();
    return 0LL;
  }
}
