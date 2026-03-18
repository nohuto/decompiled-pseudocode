/*
 * XREFs of ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00021AC
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C00852E0 (ProcessQueuedMouseEvents.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00874E8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z @ 0x1C0087E90 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z.c)
 * Callees:
 *     AllocateHidData @ 0x1C000285C (AllocateHidData.c)
 *     FreeHidData @ 0x1C00076D0 (FreeHidData.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 */

__int64 __fastcall PostRawMouseInput(struct tagQ *a1, int a2, void *a3, struct _MOUSE_INPUT_DATA *a4)
{
  int v5; // r15d
  struct tagQ *v7; // rbx
  int v8; // ebp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r11
  unsigned int v14; // ebp
  unsigned int v15; // r15d
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r12
  int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // r10
  __int64 v23; // r8
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 HidData; // rdi
  __int64 v34; // rcx
  struct tagPROCESS_HID_TABLE *v35; // rdi
  unsigned int v36; // esi
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r12
  int v40; // r9d
  __int64 v41; // rdx
  __int64 v42; // r10
  __int64 v43; // r8
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r15
  __int64 v48; // r8
  unsigned __int64 v49; // [rsp+60h] [rbp-48h]
  int v51; // [rsp+C0h] [rbp+18h]
  __int64 v52; // [rsp+C8h] [rbp+20h]

  v51 = (int)a3;
  v5 = (int)a3;
  v7 = a1;
  v8 = 1;
  if ( a4->UnitId == 0xFFFF )
    return 1LL;
  if ( a1 )
  {
    v10 = *((_QWORD *)a1 + 8);
    if ( v10 )
      v11 = *(_QWORD *)(v10 + 16);
    else
      v11 = *((_QWORD *)a1 + 6);
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 376) + 784LL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 || (*(_DWORD *)(v12 + 100) & 1) == 0 )
    goto LABEL_8;
  v29 = *((_QWORD *)v7 + 8);
  if ( v29 )
    v30 = *(_QWORD *)(v29 + 16);
  else
    v30 = *((_QWORD *)v7 + 6);
  v31 = *(_QWORD *)(*(_QWORD *)(v30 + 376) + 784LL);
  v32 = *(_QWORD *)(v31 + 64);
  if ( v32 )
    v7 = *(struct tagQ **)(*(_QWORD *)(v32 + 16) + 384LL);
  HidData = AllocateHidData((_DWORD)a3, 0, 24, 0, *(_QWORD *)(v31 + 64));
  if ( HidData )
  {
    v34 = *(_QWORD *)HidData;
    *(_WORD *)(HidData + 56) = a4->Flags & 0xFF7F;
    *(_DWORD *)(HidData + 60) = a4->Buttons;
    *(_DWORD *)(HidData + 64) = a4->RawButtons;
    *(_DWORD *)(HidData + 68) = a4->LastX;
    *(_DWORD *)(HidData + 72) = a4->LastY;
    *(_DWORD *)(HidData + 76) = a4->ExtraInformation;
    if ( (unsigned int)PostInputMessage(v7, v32, 255LL, 0LL, v34, a2, 0LL, a4->ExtraInformation, 0, 0LL, 0LL, 0LL) )
      v8 = 0;
    else
      FreeHidData(HidData);
LABEL_8:
    if ( !dword_1C032171C )
      goto LABEL_17;
    v13 = v8;
    v14 = 0;
    v52 = v13;
    v49 = 0LL;
    if ( aDeviceTemplate[308] )
    {
      v15 = 0;
      v16 = (__int64 *)RawInputManagerObject::gHidRequestTable[4];
      if ( v7 )
      {
        v17 = *((_QWORD *)v7 + 8);
        if ( v17 )
          v18 = *(_QWORD *)(v17 + 16);
        else
          v18 = *((_QWORD *)v7 + 6);
        v14 = *((_DWORD *)v7 + 93);
        v15 = *((_DWORD *)v7 + 94);
        v19 = *(_QWORD *)(v18 + 376);
        v49 = __PAIR64__(v15, v14);
      }
      else
      {
        v19 = 0LL;
      }
      if ( v16 != &RawInputManagerObject::gHidRequestTable[4] )
      {
        while ( 1 )
        {
          v20 = *((_DWORD *)v16 + 25);
          if ( (v20 & 4) == 0 )
            goto LABEL_16;
          v21 = v16[8];
          if ( !v21 || *(char *)(v21 + 44) < 0 || *(char *)(v21 + 43) < 0 || *(_QWORD *)(v21 + 24) != grpdeskRitInput )
            goto LABEL_16;
          v22 = *(_QWORD *)(v21 + 16);
          v23 = *(_QWORD *)(v22 + 376);
          v24 = *(_QWORD *)(v23 + 832);
          if ( !gbEnforceUIPI
            || (unsigned int)v24 > v14
            || (_DWORD)v24 == v14 && ((v25 = HIDWORD(v24), (_DWORD)v25 == v15) || v15 == -1 || (_DWORD)v25 == -1)
            || *(int *)(v23 + 12) < 0 )
          {
            if ( v23 == v19 || (v20 & 8) != 0 && !v13 )
              goto LABEL_16;
            v26 = AllocateHidData(v51, 0, 24, 1, v16[8]);
            v27 = v26;
            if ( !v26 )
              return 0LL;
            v28 = *(_QWORD *)v26;
            *(_WORD *)(v26 + 56) = a4->Flags & 0xFF7F;
            *(_DWORD *)(v26 + 60) = a4->Buttons;
            *(_DWORD *)(v26 + 64) = a4->RawButtons;
            *(_DWORD *)(v26 + 68) = a4->LastX;
            *(_DWORD *)(v26 + 72) = a4->LastY;
            *(_DWORD *)(v26 + 76) = a4->ExtraInformation;
            if ( !(unsigned int)PostInputMessage(
                                  *(_QWORD *)(*(_QWORD *)(v16[8] + 16) + 384LL),
                                  v16[8],
                                  255LL,
                                  1LL,
                                  v28,
                                  a2,
                                  0LL,
                                  a4->ExtraInformation,
                                  0,
                                  0LL,
                                  0LL,
                                  0LL) )
              FreeHidData(v27);
          }
          else
          {
            EtwTraceUIPIInputError(v22, 0LL, v7, v49, 5);
          }
          v13 = v52;
LABEL_16:
          v16 = (__int64 *)*v16;
          if ( v16 == &RawInputManagerObject::gHidRequestTable[4] )
            goto LABEL_17;
        }
      }
      goto LABEL_17;
    }
    v35 = qword_1C03274E8;
    v36 = 0;
    if ( v7 )
    {
      v37 = *((_QWORD *)v7 + 8);
      v38 = v37 ? *(_QWORD *)(v37 + 16) : *((_QWORD *)v7 + 6);
      v36 = *((_DWORD *)v7 + 93);
      v14 = *((_DWORD *)v7 + 94);
      v39 = *(_QWORD *)(v38 + 376);
      v49 = __PAIR64__(v14, v36);
    }
    else
    {
      v39 = 0LL;
    }
    if ( qword_1C03274E8 == (struct tagPROCESS_HID_TABLE *)&qword_1C03274E8 )
    {
LABEL_17:
      a4->UnitId = -1;
      return 1LL;
    }
    while ( 1 )
    {
      v40 = *((_DWORD *)v35 + 25);
      if ( (v40 & 4) == 0 )
        goto LABEL_78;
      v41 = *((_QWORD *)v35 + 8);
      if ( !v41 || *(char *)(v41 + 44) < 0 || *(char *)(v41 + 43) < 0 || *(_QWORD *)(v41 + 24) != grpdeskRitInput )
        goto LABEL_78;
      v42 = *(_QWORD *)(v41 + 16);
      v43 = *(_QWORD *)(v42 + 376);
      v44 = *(_QWORD *)(v43 + 832);
      if ( !gbEnforceUIPI
        || (unsigned int)v44 > v36
        || (_DWORD)v44 == v36 && ((v45 = HIDWORD(v44), (_DWORD)v45 == v14) || (_DWORD)v45 == -1 || v14 == -1)
        || *(int *)(v43 + 12) < 0 )
      {
        if ( v43 == v39 || (v40 & 8) != 0 && !v13 )
          goto LABEL_78;
        v46 = AllocateHidData(v5, 0, 24, 1, *((_QWORD *)v35 + 8));
        v47 = v46;
        if ( !v46 )
          return 0LL;
        v48 = *(_QWORD *)v46;
        *(_WORD *)(v46 + 56) = a4->Flags & 0xFF7F;
        *(_DWORD *)(v46 + 60) = a4->Buttons;
        *(_DWORD *)(v46 + 64) = a4->RawButtons;
        *(_DWORD *)(v46 + 68) = a4->LastX;
        *(_DWORD *)(v46 + 72) = a4->LastY;
        *(_DWORD *)(v46 + 76) = a4->ExtraInformation;
        if ( !(unsigned int)PostInputMessage(
                              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v35 + 8) + 16LL) + 384LL),
                              *((_QWORD *)v35 + 8),
                              255LL,
                              1LL,
                              v48,
                              a2,
                              0LL,
                              a4->ExtraInformation,
                              0,
                              0LL,
                              0LL,
                              0LL) )
          FreeHidData(v47);
        v5 = v51;
      }
      else
      {
        EtwTraceUIPIInputError(v42, 0LL, v7, v49, 5);
      }
      v13 = v52;
LABEL_78:
      v35 = *(struct tagPROCESS_HID_TABLE **)v35;
      if ( v35 == (struct tagPROCESS_HID_TABLE *)&qword_1C03274E8 )
        goto LABEL_17;
    }
  }
  return 0LL;
}
