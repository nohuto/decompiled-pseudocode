/*
 * XREFs of ?PostRawKeyboardInput@@YAHPEAUtagQ@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C004A774
 * Callers:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 * Callees:
 *     FreeHidData @ 0x1C0007460 (FreeHidData.c)
 *     AllocateHidData @ 0x1C004B99C (AllocateHidData.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 */

__int64 __fastcall PostRawKeyboardInput(
        struct tagQ *a1,
        int a2,
        void *a3,
        struct _KEYBOARD_INPUT_DATA *a4,
        unsigned int a5,
        unsigned __int16 a6)
{
  __int64 v6; // r15
  int v8; // r11d
  struct tagQ *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // ebp
  unsigned int v15; // r14d
  __int64 v16; // r8
  unsigned int v17; // ebp
  __int64 *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // r10
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 HidData; // rax
  __int64 v35; // rdi
  struct tagPROCESS_HID_TABLE *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // r9d
  __int64 v40; // rdx
  __int64 v41; // r10
  __int64 v42; // r8
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdx
  unsigned __int64 v48; // [rsp+60h] [rbp-48h]
  __int64 v49; // [rsp+B0h] [rbp+8h]

  v6 = 0LL;
  v8 = (int)a3;
  v10 = a1;
  if ( a1 )
  {
    v11 = *((_QWORD *)a1 + 10);
    if ( v11 )
      v12 = *(_QWORD *)(v11 + 16);
    else
      v12 = *((_QWORD *)a1 + 7);
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 384) + 784LL);
  }
  else
  {
    v13 = 0LL;
  }
  v14 = 0;
  if ( !v13 || (*(_DWORD *)(v13 + 100) & 0x10) == 0 )
    goto LABEL_6;
  v31 = *((_QWORD *)v10 + 10);
  if ( v31 )
    v32 = *(_QWORD *)(v31 + 16);
  else
    v32 = *((_QWORD *)v10 + 7);
  v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 384) + 784LL) + 72LL);
  if ( v33 )
    v10 = *(struct tagQ **)(*(_QWORD *)(v33 + 16) + 392LL);
  else
    v33 = *((_QWORD *)v10 + 9);
  HidData = AllocateHidData((_DWORD)a3, 1, 16, 0, v33);
  v35 = HidData;
  if ( HidData )
  {
    *(_WORD *)(HidData + 56) = a4->MakeCode;
    *(_WORD *)(HidData + 58) = a4->Flags;
    *(_WORD *)(HidData + 60) = a4->Reserved;
    *(_DWORD *)(HidData + 64) = a5;
    *(_WORD *)(HidData + 62) = a6;
    *(_DWORD *)(HidData + 68) = a4->ExtraInformation;
    if ( (unsigned int)PostInputMessage(
                         v10,
                         v33,
                         255LL,
                         0LL,
                         *(_QWORD *)HidData,
                         a2,
                         0LL,
                         a4->ExtraInformation,
                         0,
                         0LL,
                         a3,
                         0LL) )
      v14 = 1;
    else
      FreeHidData(v35);
    v8 = (int)a3;
LABEL_6:
    if ( !gHidCounters )
      return 1LL;
    v15 = 0;
    v16 = v14;
    v17 = 0;
    v49 = v16;
    v48 = 0LL;
    if ( aDeviceTemplate[308] )
    {
      v18 = (__int64 *)RawInputManagerObject::gHidRequestTable[4];
      if ( v10 )
      {
        v19 = *((_QWORD *)v10 + 10);
        if ( v19 )
          v20 = *(_QWORD *)(v19 + 16);
        else
          v20 = *((_QWORD *)v10 + 7);
        v17 = *((_DWORD *)v10 + 93);
        v15 = *((_DWORD *)v10 + 94);
        v6 = *(_QWORD *)(v20 + 384);
        v48 = __PAIR64__(v15, v17);
      }
      if ( v18 != &RawInputManagerObject::gHidRequestTable[4] )
      {
        while ( 1 )
        {
          v21 = *((_DWORD *)v18 + 25);
          if ( (v21 & 0x40) != 0 )
          {
            v22 = v18[9];
            if ( v22 )
            {
              if ( *(char *)(v22 + 44) >= 0 && *(char *)(v22 + 43) >= 0 && *(_QWORD *)(v22 + 24) == grpdeskRitInput )
              {
                if ( v10 )
                {
                  v23 = *(_QWORD *)(v22 + 16);
                  v24 = *(_QWORD *)(v23 + 384);
                  v25 = *(_QWORD *)(v24 + 832);
                  if ( gbEnforceUIPI )
                  {
                    if ( (unsigned int)v25 <= v17 )
                    {
                      if ( (_DWORD)v25 != v17
                        || (v26 = HIDWORD(v25), (_DWORD)v26 != v15) && (_DWORD)v26 != -1 && v15 != -1 )
                      {
                        if ( *(int *)(v24 + 12) >= 0 )
                        {
                          EtwTraceUIPIInputError(v23, 0LL, v10, v48, 5);
                          goto LABEL_14;
                        }
                      }
                    }
                  }
                  v16 = v49;
                }
                if ( *(_QWORD *)(*(_QWORD *)(v22 + 16) + 384LL) != v6 && ((v21 & 0x80u) == 0 || !v16) )
                {
                  v27 = AllocateHidData(v8, 1, 16, 1, v18[9]);
                  v28 = v27;
                  if ( !v27 )
                    return 0LL;
                  *(_WORD *)(v27 + 56) = a4->MakeCode;
                  *(_WORD *)(v27 + 58) = a4->Flags;
                  *(_WORD *)(v27 + 60) = a4->Reserved;
                  *(_DWORD *)(v27 + 64) = a5;
                  *(_WORD *)(v27 + 62) = a6;
                  *(_DWORD *)(v27 + 68) = a4->ExtraInformation;
                  v29 = v18[9];
                  v10 = *(struct tagQ **)(*(_QWORD *)(v29 + 16) + 392LL);
                  if ( !(unsigned int)PostInputMessage(
                                        v10,
                                        v29,
                                        255LL,
                                        1LL,
                                        *(_QWORD *)v27,
                                        a2,
                                        0LL,
                                        a4->ExtraInformation,
                                        0,
                                        0LL,
                                        a3,
                                        0LL) )
                    FreeHidData(v28);
                }
              }
            }
          }
LABEL_14:
          v18 = (__int64 *)*v18;
          if ( v18 == &RawInputManagerObject::gHidRequestTable[4] )
            return 1LL;
          v8 = (int)a3;
          v16 = v49;
        }
      }
      return 1LL;
    }
    v36 = qword_1C0328810;
    if ( v10 )
    {
      v37 = *((_QWORD *)v10 + 10);
      if ( v37 )
        v38 = *(_QWORD *)(v37 + 16);
      else
        v38 = *((_QWORD *)v10 + 7);
      v17 = *((_DWORD *)v10 + 93);
      v15 = *((_DWORD *)v10 + 94);
      v6 = *(_QWORD *)(v38 + 384);
      v48 = __PAIR64__(v15, v17);
    }
    if ( qword_1C0328810 == (struct tagPROCESS_HID_TABLE *)&qword_1C0328810 )
      return 1LL;
    while ( 1 )
    {
      v39 = *((_DWORD *)v36 + 25);
      if ( (v39 & 0x40) != 0 )
      {
        v40 = *((_QWORD *)v36 + 9);
        if ( v40 )
        {
          if ( *(char *)(v40 + 44) >= 0 && *(char *)(v40 + 43) >= 0 && *(_QWORD *)(v40 + 24) == grpdeskRitInput )
          {
            if ( v10 )
            {
              v41 = *(_QWORD *)(v40 + 16);
              v42 = *(_QWORD *)(v41 + 384);
              v43 = *(_QWORD *)(v42 + 832);
              if ( gbEnforceUIPI )
              {
                if ( (unsigned int)v43 <= v17 )
                {
                  if ( (_DWORD)v43 != v17 || (v44 = HIDWORD(v43), (_DWORD)v44 != v15) && (_DWORD)v44 != -1 && v15 != -1 )
                  {
                    if ( *(int *)(v42 + 12) >= 0 )
                    {
                      EtwTraceUIPIInputError(v41, 0LL, v10, v48, 5);
                      goto LABEL_79;
                    }
                  }
                }
              }
              v16 = v49;
            }
            if ( *(_QWORD *)(*(_QWORD *)(v40 + 16) + 384LL) != v6 && ((v39 & 0x80u) == 0 || !v16) )
            {
              v45 = AllocateHidData(v8, 1, 16, 1, *((_QWORD *)v36 + 9));
              v46 = v45;
              if ( !v45 )
                return 0LL;
              *(_WORD *)(v45 + 56) = a4->MakeCode;
              *(_WORD *)(v45 + 58) = a4->Flags;
              *(_WORD *)(v45 + 60) = a4->Reserved;
              *(_DWORD *)(v45 + 64) = a5;
              *(_WORD *)(v45 + 62) = a6;
              *(_DWORD *)(v45 + 68) = a4->ExtraInformation;
              v47 = *((_QWORD *)v36 + 9);
              v10 = *(struct tagQ **)(*(_QWORD *)(v47 + 16) + 392LL);
              if ( !(unsigned int)PostInputMessage(
                                    v10,
                                    v47,
                                    255LL,
                                    1LL,
                                    *(_QWORD *)v45,
                                    a2,
                                    0LL,
                                    a4->ExtraInformation,
                                    0,
                                    0LL,
                                    a3,
                                    0LL) )
                FreeHidData(v46);
            }
          }
        }
      }
LABEL_79:
      v36 = *(struct tagPROCESS_HID_TABLE **)v36;
      if ( v36 == (struct tagPROCESS_HID_TABLE *)&qword_1C0328810 )
        return 1LL;
      v8 = (int)a3;
      v16 = v49;
    }
  }
  return 0LL;
}
