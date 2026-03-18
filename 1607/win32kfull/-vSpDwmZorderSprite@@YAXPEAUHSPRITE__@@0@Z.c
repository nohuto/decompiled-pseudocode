/*
 * XREFs of ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C0062EF0
 * Callers:
 *     GreZorderSprite @ 0x1C0062B5C (GreZorderSprite.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00D748C (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1C00630FC (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     DwmAsyncZorderSprite @ 0x1C0063130 (DwmAsyncZorderSprite.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall vSpDwmZorderSprite(HSPRITE a1, HSPRITE a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rdx
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
    v3 = *(_QWORD **)(v13 + 32);
    v4 = v13 + 24;
    v5 = *(_QWORD *)(v13 + 24);
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v3 != v4 )
      __fastfail(3u);
    *v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    if ( v15 )
    {
      v6 = (_QWORD *)v13;
      if ( v13 )
        v6 = (_QWORD *)(v13 + 24);
      v7 = (_QWORD *)(v15 + 24);
      v8 = *(_QWORD *)(v15 + 24);
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        __fastfail(3u);
      *v6 = v8;
      v6[1] = v7;
      *(_QWORD *)(v8 + 8) = v6;
      *v7 = v6;
    }
    else
    {
      v7 = (_QWORD *)v13;
      if ( v13 )
        v7 = (_QWORD *)(v13 + 24);
      v9 = (_QWORD *)((char *)g_pDwmState + 80);
      v10 = *((_QWORD *)g_pDwmState + 10);
      if ( *(struct DwmState **)(v10 + 8) != (struct DwmState *)((char *)g_pDwmState + 80) )
        __fastfail(3u);
      *v7 = v10;
      v7[1] = v9;
      *(_QWORD *)(v10 + 8) = v7;
      *v9 = v7;
    }
    v11 = (void *)UserReferenceDwmApiPort(v7);
    DwmAsyncZorderSprite(v11);
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
