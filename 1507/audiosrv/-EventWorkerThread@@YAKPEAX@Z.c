/*
 * XREFs of ?EventWorkerThread@@YAKPEAX@Z @ 0x18003FA70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?Invoke@?$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAXXZ @ 0x180001F70 (-Invoke@-$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAXXZ.c)
 *     ??_G?$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAPEAXI@Z @ 0x180001FF0 (--_G-$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAPEAXI@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x180002AD0 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 *     ??_GCAppStateChangedWorkItem@@UEAAPEAXI@Z @ 0x180002C40 (--_GCAppStateChangedWorkItem@@UEAAPEAXI@Z.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001A680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ??_GCStreamStartedWorkItem@@MEAAPEAXI@Z @ 0x18001B0B0 (--_GCStreamStartedWorkItem@@MEAAPEAXI@Z.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002C130 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 *     ??_ECStreamStoppedWorkItem@@MEAAPEAXI@Z @ 0x18002C530 (--_ECStreamStoppedWorkItem@@MEAAPEAXI@Z.c)
 *     ?Invoke@?$CGenericApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@UEAAXXZ @ 0x18002C780 (-Invoke@-$CGenericApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@UEAAXXZ.c)
 *     ??_G?$CGenericApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@UEAAPEAXI@Z @ 0x18002C800 (--_G-$CGenericApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@UEAAPEAXI@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall EventWorkerThread(PVOID Parameter)
{
  unsigned int v1; // ebx
  CAppStateChangedWorkItem *v2; // rbx
  void (__fastcall *v3)(CAppStateChangedWorkItem *); // rdi
  void (__fastcall *v4)(CAppStateChangedWorkItem *, __int64); // rdi
  __int64 v5; // rcx
  DWORD NumberOfBytesTransferred; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 CompletionKey; // [rsp+60h] [rbp+18h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+68h] [rbp+20h] BYREF

  v1 = CoInitializeEx(0LL, 0);
  if ( v1 )
  {
    v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control )
    {
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x20) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x11u,
          (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids);
        v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      if ( (struct _GUID *)v5 != &WPP_GLOBAL_Control && (*(_BYTE *)(v5 + 28) & 0x10) != 0 && *(_BYTE *)(v5 + 25) >= 2u )
        WPP_SF_D(*(_QWORD *)(v5 + 16), 0x12u, (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids, v1);
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
      v2 = (CAppStateChangedWorkItem *)CompletionKey;
      v3 = **(void (__fastcall ***)(CAppStateChangedWorkItem *))CompletionKey;
      if ( (char *)v3 == (char *)CGenericApplicationManagerWorkItem<DuckingGainValueChangedContext>::Invoke )
      {
        CGenericApplicationManagerWorkItem<DuckingGainValueChangedContext>::Invoke(CompletionKey);
      }
      else if ( v3 == CAppStateChangedWorkItem::Invoke )
      {
        CAppStateChangedWorkItem::Invoke((CAppStateChangedWorkItem *)CompletionKey);
      }
      else if ( (char *)v3 == (char *)CStreamStartedWorkItem::Invoke )
      {
        CStreamStartedWorkItem::Invoke((CAudioStream **)CompletionKey);
      }
      else if ( v3 == CStreamStoppedWorkItem::Invoke )
      {
        CStreamStoppedWorkItem::Invoke((CStreamStoppedWorkItem *)CompletionKey);
      }
      else if ( (char *)v3 == (char *)CGenericApplicationManagerWorkItem<ApplicationStateChangedContext>::Invoke )
      {
        CGenericApplicationManagerWorkItem<ApplicationStateChangedContext>::Invoke(CompletionKey);
      }
      else
      {
        v3((CAppStateChangedWorkItem *)CompletionKey);
      }
      v4 = *(void (__fastcall **)(CAppStateChangedWorkItem *, __int64))(*(_QWORD *)v2 + 8LL);
      if ( (char *)v4 == (char *)CGenericApplicationManagerWorkItem<DuckingGainValueChangedContext>::`scalar deleting destructor' )
      {
        CGenericApplicationManagerWorkItem<DuckingGainValueChangedContext>::`scalar deleting destructor'(v2, 1);
      }
      else if ( (char *)v4 == (char *)CAppStateChangedWorkItem::`scalar deleting destructor' )
      {
        CAppStateChangedWorkItem::`scalar deleting destructor'(v2, 1);
      }
      else if ( (char *)v4 == (char *)CStreamStartedWorkItem::`scalar deleting destructor' )
      {
        CStreamStartedWorkItem::`scalar deleting destructor'(v2, 1);
      }
      else if ( (char *)v4 == (char *)CStreamStoppedWorkItem::`vector deleting destructor' )
      {
        CStreamStoppedWorkItem::`vector deleting destructor'(v2, 1);
      }
      else if ( (char *)v4 == (char *)CGenericApplicationManagerWorkItem<ApplicationStateChangedContext>::`scalar deleting destructor' )
      {
        CGenericApplicationManagerWorkItem<ApplicationStateChangedContext>::`scalar deleting destructor'(v2, 1);
      }
      else
      {
        v4(v2, 1LL);
      }
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&g_DeviceEnumerator + 16LL))(*(_QWORD *)&g_DeviceEnumerator);
    CoUninitialize();
    return 0LL;
  }
}
