/*
 * XREFs of ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x1800168A0
 * Callers:
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180016A50 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800171B0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180038934 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

void __fastcall CAudioSessionManager::NotifyActiveSession(CAudioSessionManager *this, struct CAudioSession *a2)
{
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int v6; // esi
  HANDLE ProcessHeap; // rax
  _DWORD *v8; // rax
  unsigned int *v9; // rbx
  _WORD *v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r9
  __int64 v13; // r8
  __int16 v14; // ax
  _WORD *v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r10
  __int64 v18; // r8
  __int16 v19; // ax
  HANDLE v20; // rax

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, 0LL);
  }
  v4 = 2 * *(_DWORD *)(*((_QWORD *)a2 + 107) - 16LL) + 2;
  v5 = 2 * *(_DWORD *)(*((_QWORD *)this + 30) - 16LL) + 2;
  v6 = v5 + 2 * *(_DWORD *)(*((_QWORD *)a2 + 107) - 16LL) + 66;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, v6);
  v9 = v8;
  if ( v8 )
  {
    *v8 = v6;
    v8[13] = v4 + 64;
    v8[1] = 64;
    v10 = v8 + 16;
    v8[6] = v4;
    v8[12] = v5;
    v11 = (unsigned __int64)v4 >> 1;
    if ( v11 - 1 > 0x7FFFFFFE )
    {
      if ( !v11 )
      {
LABEL_14:
        v15 = (_WORD *)((char *)v9 + v9[13]);
        v16 = (unsigned __int64)v5 >> 1;
        if ( v16 - 1 > 0x7FFFFFFE )
        {
          if ( !v16 )
            goto LABEL_22;
        }
        else
        {
          v17 = 2147483646 - v16;
          v18 = *((_QWORD *)this + 30) - (_QWORD)v15;
          while ( v17 + v16 )
          {
            v19 = *(_WORD *)((char *)v15 + v18);
            if ( !v19 )
              break;
            *v15++ = v19;
            if ( !--v16 )
              goto LABEL_19;
          }
          if ( !v16 )
LABEL_19:
            --v15;
        }
        *v15 = 0;
LABEL_22:
        CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 136));
        goto LABEL_23;
      }
    }
    else
    {
      v12 = 2147483646 - v11;
      v13 = *((_QWORD *)a2 + 107) - (_QWORD)v10;
      while ( v12 + v11 )
      {
        v14 = *(_WORD *)((char *)v10 + v13);
        if ( !v14 )
          break;
        *v10++ = v14;
        if ( !--v11 )
          goto LABEL_24;
      }
      if ( v11 )
        goto LABEL_13;
LABEL_24:
      --v10;
    }
LABEL_13:
    *v10 = 0;
    goto LABEL_14;
  }
LABEL_23:
  v20 = GetProcessHeap();
  HeapFree(v20, 0, v9);
}
