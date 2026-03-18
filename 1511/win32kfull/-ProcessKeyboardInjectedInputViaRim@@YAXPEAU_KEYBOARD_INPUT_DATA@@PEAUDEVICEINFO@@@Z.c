/*
 * XREFs of ?ProcessKeyboardInjectedInputViaRim@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C01D8B30
 * Callers:
 *     ?ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z @ 0x1C01D8D34 (-ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00830F4 (xxxProcessKeyEvent.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     VKFromVSC @ 0x1C022A6E0 (VKFromVSC.c)
 */

void __fastcall ProcessKeyboardInjectedInputViaRim(struct _KEYBOARD_INPUT_DATA *a1, struct DEVICEINFO *a2)
{
  struct DEVICEINFO *v2; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  USHORT Flags; // cx
  unsigned __int8 v9; // dl
  __int16 v10; // cx
  USHORT v11; // ax
  USHORT MakeCode; // cx
  USHORT v13; // r8
  __int16 v14; // cx
  __int16 v15; // ax
  int i; // eax
  unsigned __int8 v17; // [rsp+30h] [rbp-30h]
  _QWORD v18[4]; // [rsp+38h] [rbp-28h] BYREF

  v2 = a2;
  if ( !gpqForeground
    || (v4 = *((_QWORD *)a2 + 47),
        a2 = (struct DEVICEINFO *)gbEnforceUIPI,
        v5 = *(_QWORD *)(gpqForeground + 372LL),
        !gbEnforceUIPI)
    || (unsigned int)v4 > (unsigned int)v5
    || (_DWORD)v4 == (_DWORD)v5
    && ((v6 = HIDWORD(v4), v7 = HIDWORD(v5), (_DWORD)v6 == (_DWORD)v7) || (_DWORD)v6 == -1 || (_DWORD)v7 == -1)
    || *((_DWORD *)v2 + 96) )
  {
    Flags = a1->Flags;
    memset(v18, 0, sizeof(v18));
    if ( (Flags & 0x20) != 0 || (Flags & 0x40) != 0 )
    {
      v10 = WORD1(v18[0]);
      v9 = v17;
    }
    else
    {
      LOBYTE(v18[0]) = a1->MakeCode;
      LOBYTE(a2) = (Flags & 2) != 0 ? 0xE0 : 0;
      v9 = VKFromVSC(v18, a2);
      v10 = v9;
      WORD1(v18[0]) = v9;
    }
    v11 = a1->Flags;
    if ( (v11 & 0x40) != 0 )
    {
      MakeCode = a1->MakeCode;
      v9 = a1->MakeCode;
      switch ( MakeCode )
      {
        case 0x10u:
          v9 = -95;
          break;
        case 0x11u:
          v9 = ((v11 & 2) != 0) | 0xA2;
          break;
        case 0x12u:
          v9 = ((v11 & 2) != 0) | 0xA4;
          break;
      }
      v10 = v9 | 0x2000;
      a1->MakeCode = 0;
      WORD1(v18[0]) = v10;
      a1->Flags = v11 ^ 0x40;
    }
    v13 = a1->Flags;
    if ( (v13 & 1) != 0 )
    {
      v10 |= 0x8000u;
      WORD1(v18[0]) = v10;
    }
    if ( (v13 & 0x20) != 0 )
    {
      v14 = ((v13 & 1) != 0 ? 0x8000 : 0) | 0x10E7 | v10;
      LOWORD(v18[0]) = a1->MakeCode;
    }
    else
    {
      if ( (v13 & 2) != 0 )
      {
        v15 = 256;
      }
      else
      {
        if ( (unsigned __int8)(v9 - 96) > 9u && v9 != 110 )
        {
          for ( i = 0; *(_WORD *)&ausNumPadCvt[2 * i]; ++i )
          {
            if ( v9 == ausNumPadCvt[2 * i] )
              goto LABEL_33;
          }
          goto LABEL_36;
        }
LABEL_33:
        v15 = 2048;
      }
      v14 = v15 | v10;
    }
    WORD1(v18[0]) = v14;
LABEL_36:
    HIDWORD(v18[0]) = a1->ExtraInformation;
    a1->ExtraInformation = 0;
    v18[2] = *(_QWORD *)&a1->UnitId;
    LODWORD(v18[3]) = 0;
    xxxProcessKeyEvent((struct tagKE *)v18, 0LL, 1u, 0, (__int64)v2 + 376);
  }
}
