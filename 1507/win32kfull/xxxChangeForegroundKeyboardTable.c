/*
 * XREFs of xxxChangeForegroundKeyboardTable @ 0x1C00472A4
 * Callers:
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C0046D80 (xxxSetForegroundThreadWithWindowHint.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C013A750 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C013AE4C (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     UpdateKeyLights @ 0x1C01383A4 (UpdateKeyLights.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C013A708 (SetGlobalKeyboardTableInfo.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C01DD69C (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 */

void __fastcall xxxChangeForegroundKeyboardTable(struct tagKL *a1, struct tagKL *a2)
{
  bool v4; // zf
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( a2 == (struct tagKL *)qword_1C0322D70 )
    return;
  HMAssignmentLock(gspklGlobalActive, a2);
  if ( !a1 || !a2 || ((*((_WORD *)a2 + 20) ^ *((_WORD *)a1 + 20)) & 0x3FF) != 0 )
    gdwIMEConversionStatus = -1;
  v4 = qword_1C0322D70 == 0;
  qword_1C0322D70 = (__int64)a2;
  if ( v4 )
  {
LABEL_6:
    SetGlobalKeyboardTableInfo(a2);
    return;
  }
  if ( a1 != a2 && (!a1 || *((_QWORD *)a1 + 6) != *((_QWORD *)a2 + 6)) || !gpKL )
  {
    xxxManageKeyboardModifiers(a1, a2);
    if ( (*((_WORD *)a2 + 20) & 0x3FF) == 0x11 )
    {
      LOBYTE(v5) = 8;
      if ( !a1 )
      {
        if ( (BYTE5(gafAsyncKeyState[0]) & 8) != 0 )
        {
          gfKanaToggle = 1;
LABEL_21:
          BYTE5(gafAsyncKeyState[0]) |= 8u;
          byte_1C03230D5 |= 8u;
          if ( gptiForeground )
          {
            v6 = *(_QWORD *)(gptiForeground + 392LL);
            if ( v6 )
              *(_BYTE *)(v6 + 189) |= 8u;
          }
LABEL_30:
          UpdateKeyLights(1LL, v5);
          goto LABEL_31;
        }
        gfKanaToggle = 0;
LABEL_27:
        LOBYTE(v5) = -9;
        BYTE5(gafAsyncKeyState[0]) &= ~8u;
        byte_1C03230D5 &= ~8u;
        if ( gptiForeground )
        {
          v7 = *(_QWORD *)(gptiForeground + 392LL);
          if ( v7 )
            *(_BYTE *)(v7 + 189) &= ~8u;
        }
        goto LABEL_30;
      }
      if ( (*((_WORD *)a1 + 20) & 0x3FF) != 0x11 )
      {
        if ( gfKanaToggle )
          goto LABEL_21;
        goto LABEL_27;
      }
    }
    else
    {
      if ( !a1 )
        goto LABEL_6;
      if ( (*((_WORD *)a1 + 20) & 0x3FF) == 0x11 )
      {
        gfKanaToggle = (BYTE5(gafAsyncKeyState[0]) & 8) != 0;
        goto LABEL_27;
      }
    }
LABEL_31:
    if ( a1 )
    {
      if ( (*((_WORD *)a1 + 20) & 0x3FF) == 0x12 && (*((_WORD *)a2 + 20) & 0x3FF) != 0x12 )
      {
        byte_1C03230D5 &= ~4u;
        BYTE5(gafAsyncKeyState[0]) &= ~4u;
        if ( gptiForeground )
        {
          v8 = *(_QWORD *)(gptiForeground + 392LL);
          if ( v8 )
            *(_BYTE *)(v8 + 189) &= ~4u;
        }
      }
    }
    goto LABEL_6;
  }
}
