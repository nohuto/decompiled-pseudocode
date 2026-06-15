/*
 * XREFs of ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800185A0
 * Callers:
 *     ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180018CB0 (-Invoke@CAudioSessionStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnStateChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  int MediaEvent; // r14d
  __int64 v7; // rax
  int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // esi
  HANDLE ProcessHeap; // rax
  _DWORD *v12; // rax
  void *v13; // rbx
  unsigned __int64 v14; // rdx
  _WORD *v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  __int16 v18; // cx
  HANDLE v19; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v22; // [rsp+38h] [rbp-20h]

  MediaEvent = 0;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      30LL,
      &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      0LL);
  }
  v22 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(v7 + 704) - 16LL);
    v9 = 2 * v8 + 2;
    v10 = 2 * v8 + 66;
    ProcessHeap = GetProcessHeap();
    v12 = HeapAlloc(ProcessHeap, 0, v10);
    v13 = v12;
    if ( !v12 )
    {
      MediaEvent = -2147024882;
      goto LABEL_24;
    }
    *v12 = v10;
    v12[1] = 8;
    v12[6] = v9;
    v12[12] = a4;
    v14 = (unsigned __int64)v9 >> 1;
    v15 = v12 + 16;
    if ( v14 - 1 > 0x7FFFFFFE )
    {
      if ( !v14 )
        goto LABEL_15;
    }
    else
    {
      v16 = 2147483646 - v14;
      v17 = *(_QWORD *)(*((_QWORD *)this + 9) + 704LL) - (_QWORD)v15;
      while ( v16 + v14 )
      {
        v18 = *(_WORD *)((char *)v15 + v17);
        if ( !v18 )
          break;
        *v15++ = v18;
        if ( !--v14 )
          goto LABEL_28;
      }
      if ( v14 )
        goto LABEL_14;
LABEL_28:
      --v15;
    }
LABEL_14:
    *v15 = 0;
LABEL_15:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        31LL,
        &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
        v13,
        *((_DWORD *)this + 20));
    }
    MediaEvent = GenerateMediaEvent(v13, *((unsigned int *)this + 20));
    v19 = GetProcessHeap();
    HeapFree(v19, 0, v13);
    if ( MediaEvent >= 0 )
      goto LABEL_20;
LABEL_24:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        32LL,
        &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
        (unsigned int)MediaEvent);
    }
  }
LABEL_20:
  if ( v22 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)MediaEvent;
}
