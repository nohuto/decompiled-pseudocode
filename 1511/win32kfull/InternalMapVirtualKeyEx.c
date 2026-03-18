/*
 * XREFs of InternalMapVirtualKeyEx @ 0x1C00DB7DC
 * Callers:
 *     NtUserMapVirtualKeyEx @ 0x1C00DB750 (NtUserMapVirtualKeyEx.c)
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C01D8E30 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C01D97C0 (-SendKeyUpDown@@YAXEE@Z.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C01DDA70 (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?xxxSend3FingerTapHotkey@@YAXXZ @ 0x1C01F66E8 (-xxxSend3FingerTapHotkey@@YAXXZ.c)
 *     ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C01F6828 (-xxxSend4FingerTapHotkey@@YAXXZ.c)
 *     _GetKeyNameText @ 0x1C022A894 (_GetKeyNameText.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

unsigned int __fastcall InternalMapVirtualKeyEx(unsigned int a1, int a2, __int64 a3)
{
  int v3; // r10d
  unsigned int v5; // r9d
  unsigned __int16 v6; // dx
  unsigned __int8 *v7; // rcx
  unsigned int result; // eax
  unsigned __int8 v9; // al
  __int64 *v10; // rcx
  unsigned __int8 **v11; // rdx
  unsigned __int8 *v12; // rcx
  _BYTE *v13; // rax
  unsigned __int8 *v14; // rcx

  v3 = a1;
  v5 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      if ( a2 == 2 )
      {
        if ( a1 - 65 <= 0x19 )
          return a1;
        v11 = *(unsigned __int8 ***)(a3 + 8);
        if ( v11 )
        {
LABEL_35:
          v12 = *v11;
          if ( *v11 )
          {
            while ( 1 )
            {
              if ( !*v12 )
              {
                v11 += 2;
                goto LABEL_35;
              }
              if ( *v12 == v3 )
                break;
              v12 += *((unsigned __int8 *)v11 + 9);
            }
            LOWORD(result) = *((_WORD *)v12 + 1);
            if ( (_WORD)result == 0xF001 )
              return *(unsigned __int16 *)&v12[*((unsigned __int8 *)v11 + 9) + 2] | 0x80000000;
            if ( (_WORD)result != 0xF000 )
              return (unsigned __int16)result;
            return 0;
          }
        }
LABEL_26:
        UserSetLastError(87);
        return 0;
      }
      if ( a2 != 3 )
      {
        if ( a2 == 4 )
          goto LABEL_2;
        goto LABEL_26;
      }
    }
    if ( a1 < *(unsigned __int8 *)(a3 + 56) )
    {
      v5 = *(unsigned __int8 *)(*(_QWORD *)(a3 + 48) + 2LL * a1);
      goto LABEL_54;
    }
    if ( (a1 & 0xFFFFFF00) == 0xE000 )
    {
      v13 = *(_BYTE **)(a3 + 64);
    }
    else
    {
      if ( (a1 & 0xFFFFFF00) != 0xE100 )
      {
LABEL_54:
        if ( a2 == 1 && v5 - 160 <= 5 )
          v5 = ((v5 - 160) >> 1) + 16;
        if ( v5 == 255 )
          return 0;
        return v5;
      }
      v13 = *(_BYTE **)(a3 + 72);
    }
    if ( v13 )
    {
      while ( *((_WORD *)v13 + 1) )
      {
        if ( *v13 == (_BYTE)a1 )
        {
          v5 = (unsigned __int8)v13[2];
          goto LABEL_54;
        }
        v13 += 4;
      }
    }
    goto LABEL_54;
  }
LABEL_2:
  if ( a1 - 16 <= 2 )
    v3 = 2 * a1 + 128;
  v6 = 0;
  if ( !*(_BYTE *)(a3 + 56) )
  {
LABEL_7:
    v7 = *(unsigned __int8 **)(a3 + 64);
    if ( v7 )
    {
      while ( *((_WORD *)v7 + 1) )
      {
        if ( v7[2] == v3 )
        {
          result = *v7;
          if ( a2 == 4 )
            result |= 0xE000u;
          return result;
        }
        v7 += 4;
      }
    }
    if ( a2 == 4 )
    {
      v14 = *(unsigned __int8 **)(a3 + 72);
      if ( v14 )
      {
        while ( *((_WORD *)v14 + 1) )
        {
          if ( v14[2] == v3 )
            return *v14 | 0xE100;
          v14 += 4;
          if ( !v14 )
            break;
        }
      }
    }
    v9 = aVkNumpad;
    v10 = &aVkNumpad;
    while ( v9 )
    {
      if ( v9 == v3 )
        return (_DWORD)v10 - (unsigned int)&aVkNumpad + 71;
      v10 = (__int64 *)((char *)v10 + 1);
      v9 = *(_BYTE *)v10;
    }
    return 0;
  }
  while ( *(unsigned __int8 *)(*(_QWORD *)(a3 + 48) + 2LL * v6) != v3 )
  {
    if ( ++v6 >= *(unsigned __int8 *)(a3 + 56) )
      goto LABEL_7;
  }
  return (unsigned __int8)v6;
}
