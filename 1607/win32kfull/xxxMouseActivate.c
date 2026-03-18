/*
 * XREFs of xxxMouseActivate @ 0x1C0109300
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0008F08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     GetMessageWindow @ 0x1C0063580 (GetMessageWindow.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxActivateWindow @ 0x1C00AB2EC (xxxActivateWindow.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01D81E4 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxActiveWindowTracking @ 0x1C01D8EBC (xxxActiveWindowTracking.c)
 */

__int64 __fastcall xxxMouseActivate(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        int a6)
{
  __int64 v6; // rbp
  unsigned int active; // esi
  __int64 v10; // rcx
  struct tagWND *v11; // rdi
  __int64 v12; // rdx
  int v13; // r12d
  _DWORD *v14; // r8
  __int64 v15; // rax
  int v17; // ebp
  int v18; // ebp
  int v19; // ebp
  unsigned __int64 v20; // r8
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  struct tagWND *v24; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 *TopLevelWindow; // rax
  __int64 v28; // [rsp+50h] [rbp-58h] BYREF
  struct tagWND *v29; // [rsp+58h] [rbp-50h]

  v6 = a3;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 48) + 72LL) )
    return 0LL;
  active = 0;
  if ( (unsigned int)IsCompositionInputWindow(a2) && (*((_BYTE *)a2 + 291) & 4) == 0 )
  {
    v17 = v6 - 513;
    if ( (!v17 || (v18 = v17 - 3) == 0 || (v19 = v18 - 3) == 0 || v19 == 4)
      && *((_QWORD *)a2 + 11) == GetMessageWindow((__int64)a2) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v24);
      if ( CompositionInputWindowUIOwner )
      {
        TopLevelWindow = (__int64 *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
        PostEventMessageEx(
          TopLevelWindow[2],
          *(_QWORD *)(TopLevelWindow[2] + 384),
          6u,
          0LL,
          0,
          0LL,
          *TopLevelWindow,
          0LL);
      }
    }
    return 0LL;
  }
  v11 = a2;
  v28 = *((_QWORD *)a1 + 46);
  *((_QWORD *)a1 + 46) = &v28;
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
          v28 = *((_QWORD *)a1 + 46);
          *((_QWORD *)a1 + 46) = &v28;
          v29 = v11;
          if ( v11 )
            ++*((_DWORD *)v11 + 2);
          v22 = *a5 - *((_DWORD *)v11 + 32);
          v23 = a5[1] - *((_DWORD *)v11 + 33);
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(
            v11,
            528LL,
            a4 | v6,
            (unsigned __int16)v22 | (unsigned __int64)((unsigned __int16)v23 << 16),
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
      v28 = *((_QWORD *)a1 + 46);
      *((_QWORD *)a1 + 46) = &v28;
      v29 = v11;
      ++*((_DWORD *)v11 + 2);
    }
  }
  v14 = gpdwCPUserPreferencesMask;
  if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 && (_DWORD)v6 == 512 )
  {
    active = xxxActiveWindowTracking(a2, 512LL);
    goto LABEL_19;
  }
  v15 = *((_QWORD *)a1 + 48);
  if ( *(struct tagWND **)(v15 + 88) == a2 && (*(_DWORD *)(v15 + 340) & 0x8000) == 0
    || v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
  {
LABEL_23:
    if ( ((unsigned __int8)*v14 & (unsigned __int8)v12) != 0 )
    {
      if ( (unsigned int)CheckOnTop(a1, v11, v6) )
      {
        v12 = 1LL;
        if ( a6 == 1 )
        {
          v10 = *(unsigned int *)(*((_QWORD *)v11 + 2) + 440LL);
          if ( (v10 & 8) != 0 && (*((_BYTE *)v11 + 48) & 8) == 0 )
            active = 1;
        }
      }
    }
    goto LABEL_19;
  }
  if ( (_DWORD)v6 != 513 && (_DWORD)v6 != 516 && (_DWORD)v6 != 519 && (_DWORD)v6 != 523 )
    goto LABEL_19;
  v20 = 0LL;
  if ( v11 )
    v20 = *(_QWORD *)v11;
  v21 = xxxSendMessage(a2, 0x21u, v20, (unsigned __int16)a6 | ((unsigned __int16)v6 << 16));
  active = v21;
  if ( v21 < 0 )
    goto LABEL_19;
  if ( v21 <= 2 )
  {
    v10 = *((_QWORD *)a1 + 48);
    if ( (v11 == *(struct tagWND **)(v10 + 88) && (*(_DWORD *)(v10 + 340) & 0x8000) == 0
       || (unsigned int)xxxActivateWindow(v11, *(_DWORD *)(v10 + 116) != 0 ? 2 : 4))
      && (*((_BYTE *)v11 + 55) & 8) == 0
      && active != 2 )
    {
      v14 = gpdwCPUserPreferencesMask;
      active = 0;
      v12 = 1LL;
      goto LABEL_23;
    }
    goto LABEL_50;
  }
  if ( v21 == 4 )
LABEL_50:
    active = 1;
LABEL_19:
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 48) + 72LL) )
    xxxSendMessage(a2, 0x20u, *(_QWORD *)a2, (unsigned __int16)a6 | ((unsigned __int16)v6 << 16));
  ThreadUnlock1(v10, v12);
  return active;
}
