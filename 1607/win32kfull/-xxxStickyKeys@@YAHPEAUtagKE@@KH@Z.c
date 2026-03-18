/*
 * XREFs of ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C00E8950
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     xxxProcessKeyEvent @ 0x1C00A24AC (xxxProcessKeyEvent.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C00E88E0 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01E542C (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C01E54C4 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01E5648 (-xxxUpdateModifierState@@YAXHH@Z.c)
 */

__int64 __fastcall xxxStickyKeys(struct tagKE *a1, unsigned int a2, int a3)
{
  __int64 v3; // r12
  unsigned int v4; // ebx
  __int64 v6; // rbp
  char v7; // r8
  char v9; // r10
  __int64 v10; // r13
  int v11; // r9d
  int v12; // r11d
  char v13; // dl
  char v14; // al
  char v15; // r15
  int v17; // ecx
  __int64 v18; // rcx
  char v19; // cl
  char v20; // dl
  unsigned __int8 v21; // si
  unsigned __int8 v22; // bp
  int v23; // eax
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // rcx

  v3 = grpdeskRitInput;
  v4 = 0;
  v6 = a2;
  v7 = gCurrentModifierBit;
  v9 = 0;
  v10 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL);
  v11 = *((unsigned __int16 *)a1 + 1);
  v12 = *((_WORD *)a1 + 1) & 0x8000;
  if ( gCurrentModifierBit )
  {
    if ( (*((_WORD *)a1 + 1) & 0x8000) == 0
      && ((unsigned __int8)gCurrentModifierBit & (unsigned __int8)gPrevModifierState) != 0 )
    {
      gPrevModifierState = gPhysModifierState;
      return 1LL;
    }
    gPrevModifierState = gPhysModifierState;
    if ( (unsigned __int8)v11 != 160
      || ((unsigned __int8)~gCurrentModifierBit & (unsigned __int8)gPhysModifierState) != 0 )
    {
      v13 = 0;
      gStickyKeysLeftShiftCount = 0;
    }
    else
    {
      v13 = ++gStickyKeysLeftShiftCount;
    }
    if ( (unsigned __int8)v11 != 161
      || ((unsigned __int8)~gCurrentModifierBit & (unsigned __int8)gPhysModifierState) != 0 )
    {
      v14 = 0;
      gStickyKeysRightShiftCount = 0;
    }
    else
    {
      v14 = ++gStickyKeysRightShiftCount;
    }
    if ( v13 == 10 || v14 == 10 )
    {
      if ( (dword_1C0326F2C & 4) != 0 )
      {
        if ( (dword_1C0326F2C & 1) != 0 )
        {
          xxxTurnOffStickyKeys();
          if ( (dword_1C0326F2C & 0x10) != 0 )
            PostEventMessageEx(
              *(_QWORD *)(v10 + 16),
              *(_QWORD *)(*(_QWORD *)(v10 + 16) + 384LL),
              0xEu,
              0LL,
              1u,
              0LL,
              0LL,
              0LL);
        }
        else
        {
          if ( (dword_1C0326F2C & 0x10) != 0 )
            PostEventMessageEx(
              *(_QWORD *)(v10 + 16),
              *(_QWORD *)(*(_QWORD *)(v10 + 16) + 384LL),
              0xEu,
              0LL,
              0,
              0LL,
              0LL,
              0LL);
          PostWinlogonMessage(1026LL, 1LL);
        }
      }
      gStickyKeysLeftShiftCount = 0;
      gStickyKeysRightShiftCount = 0;
      return 1LL;
    }
    v15 = dword_1C0326F2C;
    if ( (dword_1C0326F2C & 1) == 0 )
      return 1LL;
    if ( v12 )
    {
      LOBYTE(v4) = ((unsigned __int8)(gLatchBits | gLockBits) & (unsigned __int8)gCurrentModifierBit) == 0;
      return v4;
    }
    if ( gPhysModifierState == gCurrentModifierBit )
    {
      if ( v11 >= 91 )
      {
        if ( v11 <= 92 )
        {
          v9 = -64;
        }
        else if ( v11 > 159 )
        {
          if ( v11 <= 161 )
          {
            v9 = 3;
          }
          else if ( v11 <= 163 )
          {
            v9 = 12;
          }
          else if ( v11 <= 165 )
          {
            v9 = 48;
          }
        }
      }
      v19 = gLockBits;
      v20 = gLatchBits;
      v21 = gLockBits;
      v22 = gLatchBits;
      if ( ((unsigned __int8)gLockBits & (unsigned __int8)v9) != 0 )
      {
        v22 = gLatchBits & ~v9;
        v21 = gLockBits & ~v9;
        xxxUpdateModifierState(v22 | v21 | (unsigned __int8)gCurrentModifierBit, a3);
        v7 = gCurrentModifierBit;
        v20 = gLatchBits;
        v19 = gLockBits;
        v3 = grpdeskRitInput;
        v15 = dword_1C0326F2C;
      }
      else
      {
        if ( ((unsigned __int8)gLockBits & (unsigned __int8)gCurrentModifierBit) == 0 )
          v22 = gCurrentModifierBit ^ gLatchBits;
        if ( (dword_1C0326F2C & 0x80u) != 0
          && ((unsigned __int8)(gLatchBits | gLockBits) & (unsigned __int8)gCurrentModifierBit) != 0 )
        {
          v21 = gCurrentModifierBit ^ gLockBits;
        }
      }
      if ( v20 != v22 || (v23 = 0, v19 != v21) )
        v23 = 1;
      gLatchBits = v22;
      gLockBits = v21;
      if ( v23 )
      {
        v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 24LL) + 24LL) + 16LL);
        PostEventMessageEx(v24, *(_QWORD *)(v24 + 384), 0xDu, 0LL, 0, 11LL, 1LL, 0LL);
        v7 = gCurrentModifierBit;
        v15 = dword_1C0326F2C;
        v21 = gLockBits;
      }
      if ( (v15 & 0x40) != 0 )
      {
        if ( (v21 & (unsigned __int8)v7) == 0 )
        {
          PostEventMessageEx(
            *(_QWORD *)(v10 + 16),
            *(_QWORD *)(*(_QWORD *)(v10 + 16) + 384LL),
            0xEu,
            0LL,
            2u,
            0LL,
            0LL,
            0LL);
          v7 = gCurrentModifierBit;
          v21 = gLockBits;
        }
        if ( ((unsigned __int8)(gLatchBits | v21) & (unsigned __int8)v7) != 0 )
        {
          PostEventMessageEx(
            *(_QWORD *)(v10 + 16),
            *(_QWORD *)(*(_QWORD *)(v10 + 16) + 384LL),
            0xEu,
            0LL,
            3u,
            0LL,
            0LL,
            0LL);
          v7 = gCurrentModifierBit;
        }
      }
      LOBYTE(v4) = ((unsigned __int8)v7 & (unsigned __int8)gLatchBits) != 0;
      return v4;
    }
    if ( !(unsigned int)xxxTwoKeysDown(a3) )
      return 1LL;
    if ( gLockBits || (v17 = 0, gLatchBits != gPhysModifierState) )
      v17 = 1;
    gLatchBits = gPhysModifierState;
    gLockBits = 0;
    if ( v17 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
      PostEventMessageEx(v18, *(_QWORD *)(v18 + 384), 0xDu, 0LL, 0, 11LL, 1LL, 0LL);
    }
    if ( (dword_1C0326F2C & 0x40) != 0 )
    {
      PostEventMessageEx(
        *(_QWORD *)(v10 + 16),
        *(_QWORD *)(*(_QWORD *)(v10 + 16) + 384LL),
        0xEu,
        0LL,
        2u,
        0LL,
        0LL,
        0LL);
      PostEventMessageEx(
        *(_QWORD *)(v10 + 16),
        *(_QWORD *)(*(_QWORD *)(v10 + 16) + 384LL),
        0xEu,
        0LL,
        3u,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    gStickyKeysLeftShiftCount = 0;
    gStickyKeysRightShiftCount = 0;
    if ( (dword_1C0326F2C & 1) == 0 )
      return 1LL;
    if ( gPhysModifierState && !v12 )
    {
      xxxTwoKeysDown(a3);
      return 1LL;
    }
    if ( (unsigned int)AccessProceduresStream(a1, a2, a3) )
      xxxProcessKeyEvent(a1, v6, 0, 0, 0LL);
    xxxUpdateModifierState((unsigned __int8)gLockBits, a3);
    v25 = gLatchBits == 0;
    gLatchBits = 0;
    if ( !v25 )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
      PostEventMessageEx(v26, *(_QWORD *)(v26 + 384), 0xDu, 0LL, 0, 11LL, 1LL, 0LL);
    }
  }
  return 0LL;
}
