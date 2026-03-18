/*
 * XREFs of ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0002560
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C0082E7C (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     AllocateHidData @ 0x1C000285C (AllocateHidData.c)
 *     FreeHidData @ 0x1C00076D0 (FreeHidData.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 */

void __fastcall PostRawKeyboardInputToSinks(
        int a1,
        void *a2,
        struct _KEYBOARD_INPUT_DATA *a3,
        int a4,
        unsigned __int16 a5,
        int a6)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  struct tagPROCESS_HID_TABLE *v12; // rdi
  struct tagPROCESS_HID_TABLE **v13; // rbp
  int v14; // r11d
  __int64 v15; // rdx
  __int64 v16; // r10
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 HidData; // rax
  __int64 v21; // rsi

  v6 = 0LL;
  v7 = 0LL;
  if ( gpqForeground )
  {
    v10 = *(_QWORD *)(gpqForeground + 80LL);
    if ( v10 )
      v11 = *(_QWORD *)(v10 + 16);
    else
      v11 = *(_QWORD *)(gpqForeground + 56LL);
    v6 = *(_QWORD *)(v11 + 376);
    v7 = *(_QWORD *)(gpqForeground + 372LL);
  }
  v12 = qword_1C03274E8;
  if ( aDeviceTemplate[308] )
  {
    v12 = (struct tagPROCESS_HID_TABLE *)RawInputManagerObject::gHidRequestTable[4];
    v13 = (struct tagPROCESS_HID_TABLE **)&RawInputManagerObject::gHidRequestTable[4];
  }
  else
  {
    v13 = &qword_1C03274E8;
  }
  for ( ; v12 != (struct tagPROCESS_HID_TABLE *)v13; v12 = *(struct tagPROCESS_HID_TABLE **)v12 )
  {
    v14 = *((_DWORD *)v12 + 25);
    if ( (v14 & 0x40) != 0 )
    {
      v15 = *((_QWORD *)v12 + 9);
      if ( v15 )
      {
        if ( *(char *)(v15 + 44) >= 0 && *(char *)(v15 + 43) >= 0 && *(_QWORD *)(v15 + 24) == grpdeskRitInput )
        {
          if ( !v6
            || (v16 = *(_QWORD *)(v15 + 16), v17 = *(_QWORD *)(v16 + 376), v18 = *(_QWORD *)(v17 + 832), !gbEnforceUIPI)
            || (unsigned int)v18 > (unsigned int)v7
            || (_DWORD)v18 == (_DWORD)v7
            && ((v19 = HIDWORD(v18), (_DWORD)v19 == HIDWORD(v7)) || HIDWORD(v7) == -1 || (_DWORD)v19 == -1)
            || *(int *)(v17 + 12) < 0 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v15 + 16) + 376LL) != v6 && ((v14 & 0x80u) == 0 || !a6) )
            {
              HidData = AllocateHidData((_DWORD)a2, 1, 16, 1, *((_QWORD *)v12 + 9));
              v21 = HidData;
              if ( !HidData )
                return;
              *(_WORD *)(HidData + 56) = a3->MakeCode;
              *(_WORD *)(HidData + 58) = a3->Flags;
              *(_WORD *)(HidData + 60) = a3->Reserved;
              *(_DWORD *)(HidData + 64) = a4;
              *(_WORD *)(HidData + 62) = a5;
              *(_DWORD *)(HidData + 68) = a3->ExtraInformation;
              if ( !(unsigned int)PostInputMessage(
                                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 9) + 16LL) + 384LL),
                                    *((_QWORD *)v12 + 9),
                                    255LL,
                                    1LL,
                                    *(_QWORD *)HidData,
                                    a1,
                                    0LL,
                                    a3->ExtraInformation,
                                    0,
                                    0LL,
                                    a2,
                                    0LL) )
                FreeHidData(v21);
            }
          }
          else
          {
            EtwTraceUIPIInputError(v16, 0LL, gpqForeground, v7, 5);
          }
        }
      }
    }
  }
}
