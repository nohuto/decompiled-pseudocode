/*
 * XREFs of ?ProcessKeyboardInjectedInputViaRim@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C01D06B0
 * Callers:
 *     ?ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z @ 0x1C00E85CC (-ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00A24AC (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1C00E8DD4 (VKFromVSC.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall ProcessKeyboardInjectedInputViaRim(
        struct _KEYBOARD_INPUT_DATA *a1,
        struct DEVICEINFO *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  struct DEVICEINFO *v4; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  USHORT Flags; // cx
  unsigned __int8 v9; // dl
  __int16 v10; // cx
  USHORT v11; // ax
  USHORT MakeCode; // cx
  USHORT v13; // r8
  __int16 v14; // cx
  __int16 v15; // ax
  __int64 v16; // r8
  unsigned __int8 *v17; // rax
  unsigned __int8 v18; // [rsp+30h] [rbp-30h]
  _QWORD v19[4]; // [rsp+38h] [rbp-28h] BYREF

  v4 = a2;
  if ( !gpqForeground
    || (a3 = *((_QWORD *)a2 + 49),
        a2 = (struct DEVICEINFO *)gbEnforceUIPI,
        v6 = *(_QWORD *)(gpqForeground + 380LL),
        !gbEnforceUIPI)
    || (unsigned int)a3 > (unsigned int)v6
    || (_DWORD)a3 == (_DWORD)v6
    && ((a3 >>= 32, v7 = HIDWORD(v6), (_DWORD)a3 == (_DWORD)v7) || (_DWORD)a3 == -1 || (_DWORD)v7 == -1)
    || *((_DWORD *)v4 + 100) )
  {
    Flags = a1->Flags;
    memset(v19, 0, sizeof(v19));
    if ( (Flags & 0x20) != 0 || (Flags & 0x40) != 0 )
    {
      v10 = WORD1(v19[0]);
      v9 = v18;
    }
    else
    {
      LOBYTE(v19[0]) = a1->MakeCode;
      LOBYTE(a2) = (Flags & 2) != 0 ? 0xE0 : 0;
      v9 = VKFromVSC((unsigned __int8 *)v19, (__int64)a2, a3, a4);
      v10 = v9;
      WORD1(v19[0]) = v9;
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
      WORD1(v19[0]) = v10;
      a1->Flags = v11 ^ 0x40;
    }
    v13 = a1->Flags;
    if ( (v13 & 1) != 0 )
    {
      v10 |= 0x8000u;
      WORD1(v19[0]) = v10;
    }
    if ( (v13 & 0x20) != 0 )
    {
      v14 = ((v13 & 1) != 0 ? 0x8000 : 0) | 0x10E7 | v10;
      LOWORD(v19[0]) = a1->MakeCode;
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
          LODWORD(v16) = 0;
          v17 = ausNumPadCvt;
          while ( v9 != *v17 )
          {
            v16 = (unsigned int)(v16 + 1);
            v17 = &ausNumPadCvt[2 * v16];
            if ( !*(_WORD *)v17 )
              goto LABEL_36;
          }
        }
        v15 = 2048;
      }
      v14 = v15 | v10;
    }
    WORD1(v19[0]) = v14;
LABEL_36:
    HIDWORD(v19[0]) = a1->ExtraInformation;
    a1->ExtraInformation = 0;
    v19[2] = *(_QWORD *)&a1->UnitId;
    LODWORD(v19[3]) = 0;
    xxxProcessKeyEvent((struct tagKE *)v19, 0LL, 1u, 0, (__int64)v4 + 392);
  }
}
