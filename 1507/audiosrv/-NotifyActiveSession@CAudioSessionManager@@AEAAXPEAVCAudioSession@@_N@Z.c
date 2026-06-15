/*
 * XREFs of ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x180019590
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A040 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18002EF60 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180030D2C (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

void __fastcall CAudioSessionManager::NotifyActiveSession(CAudioSessionManager *this, struct CAudioSession *a2)
{
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  HANDLE ProcessHeap; // rax
  LPVOID v8; // rax
  unsigned int *v9; // rbx
  HANDLE v10; // rax

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      50LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      0LL);
  }
  v4 = 2 * *(_DWORD *)(*((_QWORD *)a2 + 88) - 16LL) + 2;
  v5 = 2 * *(_DWORD *)(*((_QWORD *)this + 30) - 16LL) + 2;
  v6 = v5 + 2 * *(_DWORD *)(*((_QWORD *)a2 + 88) - 16LL) + 66;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, v6);
  v9 = (unsigned int *)v8;
  if ( v8 )
  {
    *(_DWORD *)v8 = v6;
    *((_DWORD *)v8 + 13) = v4 + 64;
    *((_DWORD *)v8 + 1) = 64;
    *((_DWORD *)v8 + 6) = v4;
    *((_DWORD *)v8 + 12) = v5;
    StringCbCopyW((unsigned __int16 *)v8 + 32, v4, *((const unsigned __int16 **)a2 + 88));
    StringCbCopyW((unsigned __int16 *)((char *)v9 + v9[13]), v5, *((const unsigned __int16 **)this + 30));
    CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 136));
  }
  v10 = GetProcessHeap();
  HeapFree(v10, 0, v9);
}
