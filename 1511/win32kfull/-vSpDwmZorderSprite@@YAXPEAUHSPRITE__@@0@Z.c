/*
 * XREFs of ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C007C034
 * Callers:
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C000AA24 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     GreZorderSprite @ 0x1C003C468 (GreZorderSprite.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C007C164 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     DwmAsyncZorderSprite @ 0x1C007C1C0 (DwmAsyncZorderSprite.c)
 */

void __fastcall vSpDwmZorderSprite(HSPRITE a1, HSPRITE a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  void *v10; // rax
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v11, a1);
  v12 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v12, a2);
  v3 = v11;
  v4 = v12;
  if ( v11 )
  {
    v5 = (_QWORD *)(v11 + 24);
    v6 = *(_QWORD *)(v11 + 24);
    v7 = *(_QWORD **)(v11 + 32);
    if ( *(_QWORD *)(v6 + 8) != v11 + 24 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    if ( v4 )
    {
      v8 = *(_QWORD *)(v4 + 24);
      *v5 = v8;
      *(_QWORD *)(v3 + 32) = v4 + 24;
      if ( *(_QWORD *)(v8 + 8) != v4 + 24 )
        __fastfail(3u);
      *(_QWORD *)(v8 + 8) = v5;
      *(_QWORD *)(v4 + 24) = v5;
    }
    else
    {
      v9 = *((_QWORD *)g_pDwmState + 10);
      *v5 = v9;
      *(_QWORD *)(v3 + 32) = (char *)g_pDwmState + 80;
      if ( *(struct DwmState **)(v9 + 8) != (struct DwmState *)((char *)g_pDwmState + 80) )
        __fastfail(3u);
      *(_QWORD *)(v9 + 8) = v5;
      *((_QWORD *)g_pDwmState + 10) = v5;
    }
    v10 = (void *)UserReferenceDwmApiPort(v5);
    DwmAsyncZorderSprite(v10);
  }
  if ( v4 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
    v3 = v11;
  }
  if ( v3 )
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
}
