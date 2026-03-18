/*
 * XREFs of ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00072B4
 * Callers:
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00DD764 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     ProcessQueuedMouseEvents @ 0x1C00E11B4 (ProcessQueuedMouseEvents.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D19A4 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 * Callees:
 *     AllocateHidData @ 0x1C0007920 (AllocateHidData.c)
 *     FreeHidData @ 0x1C000A1B0 (FreeHidData.c)
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 */

__int64 __fastcall PostRawMouseInput(struct tagQ *a1, int a2, void *a3, struct _MOUSE_INPUT_DATA *a4)
{
  int v5; // r13d
  struct tagQ *v7; // rbx
  int v8; // r15d
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 HidData; // rdi
  __int64 v19; // rcx
  unsigned int v20; // ebp
  __int64 *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // r11d
  __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // r8
  __int64 v34; // [rsp+B8h] [rbp+20h]

  v5 = (int)a3;
  v7 = a1;
  v8 = 1;
  if ( a4->UnitId == 0xFFFF )
    return 1LL;
  v10 = 0LL;
  if ( a1 )
  {
    v11 = *((_QWORD *)a1 + 9);
    if ( v11 )
      v12 = *(_QWORD *)(v11 + 16);
    else
      v12 = *((_QWORD *)a1 + 7);
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 376) + 776LL);
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 && (*(_DWORD *)(v13 + 100) & 1) != 0 )
  {
    v14 = *((_QWORD *)v7 + 9);
    if ( v14 )
      v15 = *(_QWORD *)(v14 + 16);
    else
      v15 = *((_QWORD *)v7 + 7);
    v16 = *(_QWORD *)(*(_QWORD *)(v15 + 376) + 776LL);
    v17 = *(_QWORD *)(v16 + 64);
    if ( v17 )
      v7 = *(struct tagQ **)(*(_QWORD *)(v17 + 16) + 384LL);
    HidData = AllocateHidData((_DWORD)a3, 0, 24, 0, *(_QWORD *)(v16 + 64));
    if ( !HidData )
      return 0LL;
    v19 = *(_QWORD *)HidData;
    *(_WORD *)(HidData + 56) = a4->Flags & 0xFE7F;
    *(_DWORD *)(HidData + 60) = a4->Buttons;
    *(_DWORD *)(HidData + 64) = a4->RawButtons;
    *(_DWORD *)(HidData + 68) = a4->LastX;
    *(_DWORD *)(HidData + 72) = a4->LastY;
    *(_DWORD *)(HidData + 76) = a4->ExtraInformation;
    if ( (unsigned int)PostInputMessage(v7, v17, 255LL, 0LL, v19, a2, 0LL, a4->ExtraInformation, 0, 0LL, 0LL, 0LL) )
      v8 = 0;
    else
      FreeHidData(HidData);
  }
  if ( dword_1C032682C )
  {
    v20 = 0;
    v34 = 0LL;
    v21 = (__int64 *)RawInputManagerObject::gHidRequestTable[4];
    if ( v7 )
    {
      v22 = *((_QWORD *)v7 + 9);
      if ( v22 )
        v23 = *(_QWORD *)(v22 + 16);
      else
        v23 = *((_QWORD *)v7 + 7);
      v20 = *((_DWORD *)v7 + 95);
      v10 = *(_QWORD *)(v23 + 376);
      v34 = *(_QWORD *)((char *)v7 + 380);
    }
    for ( ; v21 != &RawInputManagerObject::gHidRequestTable[4]; v21 = (__int64 *)*v21 )
    {
      v24 = *((_DWORD *)v21 + 25);
      if ( (v24 & 4) != 0 )
      {
        v25 = v21[8];
        if ( v25 )
        {
          if ( *(char *)(v25 + 44) >= 0 && *(char *)(v25 + 43) >= 0 && *(_QWORD *)(v25 + 24) == grpdeskRitInput )
          {
            v26 = *(_QWORD *)(v25 + 16);
            v27 = *(_QWORD *)(v26 + 376);
            v28 = *(_QWORD *)(v27 + 824);
            if ( !gbEnforceUIPI
              || (unsigned int)v28 > v20
              || (_DWORD)v28 == v20
              && ((v29 = HIDWORD(v28), (_DWORD)v29 == HIDWORD(v34)) || (_DWORD)v29 == -1 || HIDWORD(v34) == -1)
              || *(int *)(v27 + 12) < 0 )
            {
              if ( v27 != v10 && ((v24 & 8) == 0 || v8) )
              {
                v30 = AllocateHidData(v5, 0, 24, 1, v21[8]);
                v31 = v30;
                if ( !v30 )
                  return 0LL;
                v32 = *(_QWORD *)v30;
                *(_WORD *)(v30 + 56) = a4->Flags & 0xFE7F;
                *(_DWORD *)(v30 + 60) = a4->Buttons;
                *(_DWORD *)(v30 + 64) = a4->RawButtons;
                *(_DWORD *)(v30 + 68) = a4->LastX;
                *(_DWORD *)(v30 + 72) = a4->LastY;
                *(_DWORD *)(v30 + 76) = a4->ExtraInformation;
                if ( !(unsigned int)PostInputMessage(
                                      *(_QWORD *)(*(_QWORD *)(v21[8] + 16) + 384LL),
                                      v21[8],
                                      255LL,
                                      1LL,
                                      v32,
                                      a2,
                                      0LL,
                                      a4->ExtraInformation,
                                      0,
                                      0LL,
                                      0LL,
                                      0LL) )
                  FreeHidData(v31);
              }
            }
            else
            {
              EtwTraceUIPIInputError(v26, 0LL, v7, v34, 5);
            }
          }
        }
      }
    }
  }
  a4->UnitId = -1;
  return 1LL;
}
