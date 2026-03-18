/*
 * XREFs of vSpDynamicModeChange @ 0x140185A00
 * Callers:
 *     <none>
 * Callees:
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x14009BA38 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x14009BDF8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400BC308 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140185EB0 (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpCorrectHdevReferences@@YAXPEAU_SPRITESTATE@@PEAUHDEV__@@@Z @ 0x140185F84 (-vSpCorrectHdevReferences@@YAXPEAU_SPRITESTATE@@PEAUHDEV__@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1401862C8 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x14026C9C4 (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x140314F7C (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1403152D0 (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x140315410 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x140315814 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall vSpDynamicModeChange(HDEV a1, HDEV a2)
{
  HDEV v2; // rbx
  HDEV v4; // rax
  HDEV v5; // r15
  HDEV v6; // r14
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rdi
  struct _SPRITESTATE *v14; // rbx
  struct _SPRITESTATE *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  struct _METASPRITE *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  struct SPRITE *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  HDEV v25; // rdi
  __int64 i; // rsi
  HDEV v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // rsi
  struct _METASPRITE *v32; // rax
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  struct _SPRITESTATE *v40; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE Src[1408]; // [rsp+30h] [rbp-D0h] BYREF
  HDEV v42; // [rsp+5C8h] [rbp+4C8h] BYREF
  HDEV v43; // [rsp+5D0h] [rbp+4D0h] BYREF
  struct _SPRITESTATE *v44; // [rsp+5D8h] [rbp+4D8h] BYREF

  v43 = a1;
  v42 = a2;
  v2 = a2;
  v4 = a2;
  if ( ((_DWORD)a1[10] & 0x20000) == 0 )
  {
    vSpRemoveAllSpriteOverlapPresents(a1);
    v4 = v42;
  }
  if ( ((_DWORD)v4[10] & 0x20000) == 0 )
  {
    vSpRemoveAllSpriteOverlapPresents(v4);
    v4 = v42;
  }
  v5 = v43 + 20;
  v6 = v4 + 20;
  memmove(Src, v43 + 20, 0x548uLL);
  memmove(v5, v6, 0x548uLL);
  memmove(v6, Src, 0x548uLL);
  v7 = *((_DWORD *)v5 + 294);
  v5[294] = v6[294];
  *((_DWORD *)v6 + 294) = v7;
  RtlInitializeBitMap((PRTL_BITMAP)v5 + 42, (PULONG)v5 + 172, 0x40u);
  RtlInitializeBitMap((PRTL_BITMAP)v6 + 42, (PULONG)v6 + 172, 0x40u);
  vSpCorrectHdevReferences((struct _SPRITESTATE *)v5, a1);
  vSpCorrectHdevReferences((struct _SPRITESTATE *)v6, v2);
  MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v40, (struct PDEVOBJ *)&v43);
  MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v44, (struct PDEVOBJ *)&v42);
  v8 = *((_QWORD *)v5 + 141);
  *((_QWORD *)v5 + 140) = 0LL;
  *((_QWORD *)v5 + 141) = 0LL;
  *((_DWORD *)v5 + 273) = 0;
  if ( v8 )
  {
    do
    {
      v16 = *(_QWORD *)(v8 + 24);
      vSpDeleteSprite((struct SPRITE *)v8);
      v8 = v16;
    }
    while ( v16 );
  }
  v9 = *((_QWORD *)v6 + 141);
  *((_QWORD *)v6 + 140) = 0LL;
  *((_QWORD *)v6 + 141) = 0LL;
  *((_DWORD *)v6 + 273) = 0;
  if ( v9 )
  {
    do
    {
      v17 = *(_QWORD *)(v9 + 24);
      vSpDeleteSprite((struct SPRITE *)v9);
      v9 = v17;
    }
    while ( v17 );
  }
  if ( ((_DWORD)v43[10] & 0x20000) != 0 )
  {
    if ( ((_DWORD)v42[10] & 0x20000) != 0 )
    {
      v10 = *((_QWORD *)v5 + 9);
      if ( v10 )
      {
        do
        {
          v18 = *(_QWORD *)(v10 + 8);
          v19 = pSpTransferMetaSprite(v2, a1, (struct _METASPRITE *)v10);
          if ( v19 )
            *((_DWORD *)v19 + 4) |= 2u;
          v10 = v18;
        }
        while ( v18 );
      }
      v11 = *((_QWORD *)v6 + 9);
      if ( v11 )
      {
        do
        {
          v12 = *(_DWORD *)(v11 + 16);
          v13 = *(_QWORD *)(v11 + 8);
          if ( (v12 & 2) != 0 )
            *(_DWORD *)(v11 + 16) = v12 & 0xFFFFFFFD;
          else
            pSpTransferMetaSprite(a1, v2, (struct _METASPRITE *)v11);
          v11 = v13;
        }
        while ( v13 );
      }
      goto LABEL_60;
    }
  }
  else if ( ((_DWORD)v42[10] & 0x20000) == 0 )
  {
    v20 = *((_QWORD *)v5 + 1);
    if ( v20 )
    {
      do
      {
        v21 = *(_QWORD *)(v20 + 24);
        v22 = pSpTransferSprite(v2, (struct SPRITE *)v20);
        if ( v22 )
          *(_DWORD *)v22 |= 2u;
        v20 = v21;
      }
      while ( v21 );
    }
    v23 = *((_QWORD *)v6 + 1);
    if ( v23 )
    {
      do
      {
        v24 = *(_QWORD *)(v23 + 24);
        if ( (*(_DWORD *)v23 & 2) != 0 )
          *(_DWORD *)v23 &= ~2u;
        else
          pSpTransferSprite(a1, (struct SPRITE *)v23);
        v23 = v24;
      }
      while ( v24 );
    }
    goto LABEL_60;
  }
  v25 = a1;
  if ( ((_DWORD)v43[10] & 0x20000) == 0 )
  {
    v25 = v2;
    v2 = a1;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v25 + 35); i = (unsigned int)(i + 1) )
  {
    v27 = (HDEV)*((_QWORD *)v25 + 18);
    if ( *((HDEV *)v27 + i) == v25 )
    {
      *((_QWORD *)v27 + i) = v2;
      v28 = *((_QWORD *)v25 + 19);
      if ( v28 )
      {
        do
        {
          v29 = *(_QWORD *)(v28 + 8);
          pSpMoveSpriteFromMeta(v27, v25, (struct _METASPRITE *)v28, i);
          v28 = v29;
        }
        while ( v29 );
      }
      goto LABEL_13;
    }
  }
  v30 = *((_QWORD *)v2 + 11);
  if ( v30 )
  {
    do
    {
      v31 = *(_QWORD *)(v30 + 24);
      v32 = pSpConvertSpriteToMeta(v25, v2, (struct SPRITE *)v30);
      if ( v32 )
        *((_DWORD *)v32 + 4) |= 2u;
      v30 = v31;
    }
    while ( v31 );
  }
  v33 = *((_QWORD *)v25 + 19);
  if ( v33 )
  {
    do
    {
      v34 = *(_DWORD *)(v33 + 16);
      v35 = *(_QWORD *)(v33 + 8);
      if ( (v34 & 2) != 0 )
        *(_DWORD *)(v33 + 16) = v34 & 0xFFFFFFFD;
      else
        pSpConvertSpriteFromMeta(v2, v25, (struct _METASPRITE *)v33);
      v33 = v35;
    }
    while ( v35 );
  }
LABEL_60:
  if ( ((_DWORD)v43[10] & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)&v43);
  if ( ((_DWORD)v42[10] & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)&v42);
LABEL_13:
  v14 = v44;
  if ( v44 )
  {
    if ( *((_DWORD *)v44 + 15) )
    {
      v36 = 0LL;
      do
      {
        v37 = *(_QWORD *)(*((_QWORD *)v14 + 8) + 8 * v36);
        if ( *(_DWORD *)(v37 + 168) && (*(_DWORD *)(v37 + 40) & 0x20000) == 0 )
          vSpDirectDriverAccess((struct _SPRITESTATE *)(v37 + 80), 0);
        v36 = (unsigned int)(v36 + 1);
      }
      while ( (unsigned int)v36 < *((_DWORD *)v14 + 15) );
    }
    else if ( *((_DWORD *)v44 + 22) && (*(_DWORD *)(*(_QWORD *)v44 + 40LL) & 0x20000) == 0 )
    {
      vSpDirectDriverAccess(v44, 0);
    }
  }
  v15 = v40;
  if ( v40 )
  {
    if ( *((_DWORD *)v40 + 15) )
    {
      v38 = 0LL;
      do
      {
        v39 = *(_QWORD *)(*((_QWORD *)v15 + 8) + 8 * v38);
        if ( *(_DWORD *)(v39 + 168) && (*(_DWORD *)(v39 + 40) & 0x20000) == 0 )
          vSpDirectDriverAccess((struct _SPRITESTATE *)(v39 + 80), 0);
        v38 = (unsigned int)(v38 + 1);
      }
      while ( (unsigned int)v38 < *((_DWORD *)v15 + 15) );
    }
    else if ( *((_DWORD *)v40 + 22) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v40 + 40LL) & 0x20000) == 0 )
        vSpDirectDriverAccess(v40, 0);
    }
  }
}
