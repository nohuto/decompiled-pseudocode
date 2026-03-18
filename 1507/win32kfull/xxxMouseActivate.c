/*
 * XREFs of xxxMouseActivate @ 0x1C0040CEC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0004758 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxActivateWindow @ 0x1C0044954 (xxxActivateWindow.c)
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0064FB4 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01E195C (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxActiveWindowTracking @ 0x1C01E27EC (xxxActiveWindowTracking.c)
 */

__int64 __fastcall xxxMouseActivate(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int a6)
{
  __int64 v6; // rbp
  unsigned int active; // esi
  __int64 v10; // rcx
  struct tagWND *v11; // rdi
  __int64 v12; // rdx
  int v13; // r12d
  _DWORD *v14; // r8
  __int64 v15; // rax
  __int64 v17; // r8
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // ebp
  int v22; // ebp
  int v23; // ebp
  struct tagWND *v24; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 *TopLevelWindow; // rax
  __int64 v28; // [rsp+50h] [rbp-58h] BYREF
  struct tagWND *v29; // [rsp+58h] [rbp-50h]

  v6 = a3;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 49) + 64LL) )
    return 0LL;
  active = 0;
  if ( (unsigned int)IsCompositionInputWindow(a2) && (*((_BYTE *)a2 + 291) & 4) == 0 )
  {
    v21 = v6 - 513;
    if ( (!v21 || (v22 = v21 - 3) == 0 || (v23 = v22 - 3) == 0 || v23 == 4)
      && *((_QWORD *)a2 + 11) == GetMessageWindow(a2) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v24);
      if ( CompositionInputWindowUIOwner )
      {
        TopLevelWindow = (__int64 *)GetTopLevelWindow(CompositionInputWindowUIOwner);
        PostEventMessageEx(TopLevelWindow[2], *(_QWORD *)(TopLevelWindow[2] + 392), 6, 0, 0, 0LL, *TopLevelWindow, 0LL);
      }
    }
    return 0LL;
  }
  v11 = a2;
  v28 = *((_QWORD *)a1 + 47);
  *((_QWORD *)a1 + 47) = &v28;
  v12 = 1LL;
  v29 = a2;
  if ( a2 )
    ++*((_DWORD *)a2 + 2);
  if ( (*((_BYTE *)a2 + 45) & 2) == 0 || (v13 = 0, (*((_BYTE *)a2 + 48) & 4) == 0) )
    v13 = 1;
  if ( (_DWORD)v6 == 513 || (_DWORD)v6 == 516 || (_DWORD)v6 == 519 || (_DWORD)v6 == 523 )
  {
    if ( (*((_BYTE *)a2 + 55) & 0xC0) == 0x40 )
    {
      do
      {
        v11 = (struct tagWND *)*((_QWORD *)v11 + 11);
        if ( v13 )
        {
          ThreadUnlock1(v10, v12);
          v28 = *((_QWORD *)a1 + 47);
          *((_QWORD *)a1 + 47) = &v28;
          v29 = v11;
          if ( v11 )
            ++*((_DWORD *)v11 + 2);
          v19 = *a5 - *((_DWORD *)v11 + 32);
          v20 = a5[1] - *((_DWORD *)v11 + 33);
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(
            v11,
            0x210u,
            a4 | v6,
            (unsigned __int16)v19 | (unsigned __int64)((unsigned __int16)v20 << 16),
            0,
            0,
            0LL,
            1,
            0);
        }
      }
      while ( (*((_BYTE *)v11 + 55) & 0xC0) == 0x40 );
      active = 0;
      v12 = 1LL;
    }
    if ( !v13 )
    {
      ThreadUnlock1(v10, 1LL);
      v12 = 1LL;
      v28 = *((_QWORD *)a1 + 47);
      *((_QWORD *)a1 + 47) = &v28;
      v29 = v11;
      ++*((_DWORD *)v11 + 2);
    }
  }
  v14 = gpdwCPUserPreferencesMask;
  if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 && (_DWORD)v6 == 512 )
  {
    active = xxxActiveWindowTracking(a2, 512LL, a6);
    goto LABEL_19;
  }
  v15 = *((_QWORD *)a1 + 49);
  if ( *(struct tagWND **)(v15 + 80) == a2 && (*(_DWORD *)(v15 + 332) & 0x8000) == 0
    || v11 == (struct tagWND *)GetDesktopWindow(v11) )
  {
LABEL_23:
    if ( ((unsigned __int8)*v14 & (unsigned __int8)v12) != 0 )
    {
      if ( (unsigned int)CheckOnTop(a1, v11, v6) )
      {
        v12 = 1LL;
        if ( a6 == 1 )
        {
          v10 = *(unsigned int *)(*((_QWORD *)v11 + 2) + 448LL);
          if ( (v10 & 8) != 0 && (*((_BYTE *)v11 + 48) & 8) == 0 )
            active = 1;
        }
      }
    }
    goto LABEL_19;
  }
  if ( (_DWORD)v6 != 513 && (_DWORD)v6 != 516 && (_DWORD)v6 != 519 && (_DWORD)v6 != 523 )
    goto LABEL_19;
  v17 = 0LL;
  if ( v11 )
    v17 = *(_QWORD *)v11;
  v18 = xxxSendMessage(a2, 33LL, v17);
  active = v18;
  if ( v18 < 0 )
    goto LABEL_19;
  if ( v18 <= 2 )
  {
    v10 = *((_QWORD *)a1 + 49);
    if ( (v11 == *(struct tagWND **)(v10 + 80) && (*(_DWORD *)(v10 + 332) & 0x8000) == 0
       || (unsigned int)xxxActivateWindow(v11))
      && (*((_BYTE *)v11 + 55) & 8) == 0
      && active != 2 )
    {
      v14 = gpdwCPUserPreferencesMask;
      active = 0;
      v12 = 1LL;
      goto LABEL_23;
    }
LABEL_59:
    active = 1;
    goto LABEL_19;
  }
  if ( v18 == 4 )
    goto LABEL_59;
LABEL_19:
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 49) + 64LL) )
    xxxSendMessage(a2, 32LL, *(_QWORD *)a2);
  ThreadUnlock1(v10, v12);
  return active;
}
