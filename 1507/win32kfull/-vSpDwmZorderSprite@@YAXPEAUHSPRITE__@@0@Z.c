/*
 * XREFs of ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C00101F8
 * Callers:
 *     GreZorderSprite @ 0x1C0010648 (GreZorderSprite.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0260028 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     DwmAsyncZorderSprite @ 0x1C000F720 (DwmAsyncZorderSprite.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1C0010410 (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall vSpDwmZorderSprite(HSPRITE a1, HSPRITE a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  void *v11; // rax
  _BYTE v12[32]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+40h] [rbp-30h]
  _BYTE v14[32]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+68h] [rbp-8h]

  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v12, a1);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v14, a2);
  if ( v13 )
  {
    v4 = *(_QWORD **)(v13 + 32);
    v5 = v13 + 24;
    v6 = *(_QWORD *)(v13 + 24);
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v4 != v5 )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    if ( v15 )
    {
      v7 = (_QWORD *)v13;
      if ( v13 )
        v7 = (_QWORD *)(v13 + 24);
      v8 = (_QWORD *)(v15 + 24);
      v9 = *(_QWORD *)(v15 + 24);
      *v7 = v9;
      v7[1] = v8;
      if ( *(_QWORD **)(v9 + 8) != v8 )
        __fastfail(3u);
      *(_QWORD *)(v9 + 8) = v7;
      *v8 = v7;
    }
    else
    {
      v8 = (_QWORD *)v13;
      if ( v13 )
        v8 = (_QWORD *)(v13 + 24);
      v10 = *((_QWORD *)g_pDwmState + 10);
      *v8 = v10;
      v8[1] = (char *)g_pDwmState + 80;
      if ( *(struct DwmState **)(v10 + 8) != (struct DwmState *)((char *)g_pDwmState + 80) )
        __fastfail(3u);
      *(_QWORD *)(v10 + 8) = v8;
      *((_QWORD *)g_pDwmState + 10) = v8;
    }
    v11 = (void *)UserReferenceDwmApiPort(v8);
    DwmAsyncZorderSprite(v11, (__int64)a1, (__int64)a2);
  }
  if ( v15 )
    _InterlockedDecrement((volatile signed __int32 *)(v15 + 12));
  v15 = 0LL;
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v14);
  if ( v13 )
    _InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
  v13 = 0LL;
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v12);
}
