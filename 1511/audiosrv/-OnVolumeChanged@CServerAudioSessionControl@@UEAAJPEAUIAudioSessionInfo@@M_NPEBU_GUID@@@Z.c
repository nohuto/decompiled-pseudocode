/*
 * XREFs of ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x1800157B0
 * Callers:
 *     ?Invoke@CAudioSessionVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180038800 (-Invoke@CAudioSessionVolumeChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_Sgd @ 0x180079C90 (WPP_SF_Sgd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnVolumeChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        float a3,
        char a4,
        struct _GUID *a5)
{
  int v5; // r8d
  int MediaEvent; // r14d
  TraceLoggingHProvider v9; // rcx
  __int64 v10; // rax
  int v11; // ecx
  unsigned int v12; // edi
  unsigned int v13; // esi
  HANDLE ProcessHeap; // rax
  _DWORD *v15; // rax
  _DWORD *v16; // rbx
  GUID *v17; // rax
  unsigned __int64 v18; // rdx
  _WORD *v19; // rcx
  GUID v20; // xmm0
  unsigned __int64 v21; // r8
  __int64 v22; // r9
  __int16 v23; // ax
  HANDLE v24; // rax
  double v26; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-38h] BYREF
  char v28; // [rsp+38h] [rbp-30h]

  MediaEvent = 0;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, 0LL);
      v9 = WPP_GLOBAL_Control;
    }
    if ( v9 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v9 + 28) & 0x40) != 0
      && *((_BYTE *)v9 + 25) >= 4u )
    {
      v26 = a3;
      WPP_SF_Sgd(*((_QWORD *)v9 + 2), (_DWORD)a2, v5, 0, SLOBYTE(v26), a4);
    }
  }
  v28 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v10 = *((_QWORD *)this + 9);
  if ( v10 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(v10 + 856) - 16LL);
    v12 = 2 * v11 + 2;
    v13 = 2 * v11 + 66;
    ProcessHeap = GetProcessHeap();
    v15 = HeapAlloc(ProcessHeap, 0, v13);
    v16 = v15;
    if ( v15 )
    {
      *v15 = v13;
      v17 = a5;
      if ( !a5 )
        v17 = &GUID_00000000_0000_0000_0000_000000000000;
      v18 = (unsigned __int64)v12 >> 1;
      v19 = v16 + 16;
      v20 = *v17;
      v16[1] = 1;
      *((float *)v16 + 12) = a3;
      *(GUID *)(v16 + 7) = v20;
      v16[6] = v12;
      *((_BYTE *)v16 + 52) = a4;
      if ( v18 - 1 > 0x7FFFFFFE )
      {
        if ( !v18 )
        {
LABEL_21:
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              38LL,
              &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
              v16,
              *((_DWORD *)this + 20));
          }
          MediaEvent = GenerateMediaEvent(v16, *((unsigned int *)this + 20));
          v24 = GetProcessHeap();
          HeapFree(v24, 0, v16);
          if ( MediaEvent < 0
            && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              39LL,
              &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
              (unsigned int)MediaEvent);
          }
          goto LABEL_26;
        }
      }
      else
      {
        v21 = 2147483646 - v18;
        v22 = *(_QWORD *)(*((_QWORD *)this + 9) + 856LL) - (_QWORD)v19;
        while ( v21 + v18 )
        {
          v23 = *(_WORD *)((char *)v19 + v22);
          if ( !v23 )
            break;
          *v19++ = v23;
          if ( !--v18 )
            goto LABEL_29;
        }
        if ( v18 )
          goto LABEL_20;
LABEL_29:
        --v19;
      }
LABEL_20:
      *v19 = 0;
      goto LABEL_21;
    }
  }
LABEL_26:
  if ( v28 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)MediaEvent;
}
