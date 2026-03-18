/*
 * XREFs of vSpDynamicModeChange @ 0x1C00F5060
 * Callers:
 *     <none>
 * Callees:
 *     ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C00F53C4 (--1MULTISPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00F540C (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpCorrectHdevReferences@@YAXPEAU_SPRITESTATE@@PEAUHDEV__@@@Z @ 0x1C00F54D0 (-vSpCorrectHdevReferences@@YAXPEAU_SPRITESTATE@@PEAUHDEV__@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00F551C (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C0272910 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C0272ACC (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C0273228 (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0273350 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C0273718 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C02739C0 (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0275DF4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

void __fastcall vSpDynamicModeChange(HDEV a1, HDEV a2)
{
  HDEV v3; // rdi
  HDEV v4; // rax
  HDEV v5; // rsi
  __int64 v6; // rdx
  _OWORD *v7; // rcx
  HDEV v8; // r15
  __int64 v9; // r8
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // r8
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rax
  _OWORD *v24; // rcx
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  _OWORD *v27; // rcx
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int64 v40; // rax
  int v41; // ecx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // edx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rbx
  __int64 v49; // r8
  __int64 v50; // rbx
  struct _METASPRITE *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rbx
  struct SPRITE *v55; // rax
  __int64 v56; // rbx
  HDEV v57; // rsi
  __int64 v58; // r14
  unsigned int v59; // edx
  HDEV v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rbx
  struct _METASPRITE *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // r8
  __int64 v67; // rbx
  _BYTE v68[1424]; // [rsp+20h] [rbp-E0h] BYREF
  HDEV v69; // [rsp+5C0h] [rbp+4C0h] BYREF
  HDEV v70; // [rsp+5C8h] [rbp+4C8h] BYREF
  char v71; // [rsp+5D0h] [rbp+4D0h] BYREF
  char v72; // [rsp+5D8h] [rbp+4D8h] BYREF

  v70 = a1;
  v69 = a2;
  v3 = a1;
  v4 = a2;
  if ( ((_DWORD)a1[14] & 0x20000) == 0 )
  {
    vSpRemoveAllSpriteOverlapPresents(a1);
    v4 = v69;
  }
  if ( ((_DWORD)v4[14] & 0x20000) == 0 )
  {
    vSpRemoveAllSpriteOverlapPresents(v4);
    v4 = v69;
  }
  v5 = v4 + 24;
  v6 = 10LL;
  v7 = v68;
  v8 = v70 + 24;
  v9 = 10LL;
  v10 = v70 + 24;
  do
  {
    v11 = v10[1];
    *v7 = *v10;
    v12 = v10[2];
    v7[1] = v11;
    v13 = v10[3];
    v7[2] = v12;
    v14 = v10[4];
    v7[3] = v13;
    v15 = v10[5];
    v7[4] = v14;
    v16 = v10[6];
    v7[5] = v15;
    v17 = v10[7];
    v10 += 8;
    v7[6] = v16;
    v7 += 8;
    *(v7 - 1) = v17;
    --v9;
  }
  while ( v9 );
  v18 = 10LL;
  v19 = v10[1];
  *v7 = *v10;
  v20 = v10[2];
  v7[1] = v19;
  v21 = v10[3];
  v7[2] = v20;
  v22 = v10[4];
  v23 = *((_QWORD *)v10 + 10);
  v7[3] = v21;
  v7[4] = v22;
  *((_QWORD *)v7 + 10) = v23;
  v24 = v8;
  v25 = v5;
  do
  {
    *v24 = *v25;
    v24[1] = v25[1];
    v24[2] = v25[2];
    v24[3] = v25[3];
    v24[4] = v25[4];
    v24[5] = v25[5];
    v24[6] = v25[6];
    v24 += 8;
    v26 = v25[7];
    v25 += 8;
    *(v24 - 1) = v26;
    --v18;
  }
  while ( v18 );
  *v24 = *v25;
  v24[1] = v25[1];
  v24[2] = v25[2];
  v24[3] = v25[3];
  v24[4] = v25[4];
  *((_QWORD *)v24 + 10) = *((_QWORD *)v25 + 10);
  v27 = v5;
  v28 = v68;
  do
  {
    v29 = v28[1];
    *v27 = *v28;
    v30 = v28[2];
    v27[1] = v29;
    v31 = v28[3];
    v27[2] = v30;
    v32 = v28[4];
    v27[3] = v31;
    v33 = v28[5];
    v27[4] = v32;
    v34 = v28[6];
    v27[5] = v33;
    v35 = v28[7];
    v28 += 8;
    v27[6] = v34;
    v27 += 8;
    *(v27 - 1) = v35;
    --v6;
  }
  while ( v6 );
  v36 = v28[1];
  *v27 = *v28;
  v37 = v28[2];
  v27[1] = v36;
  v38 = v28[3];
  v27[2] = v37;
  v39 = v28[4];
  v40 = *((_QWORD *)v28 + 10);
  v27[3] = v38;
  v27[4] = v39;
  *((_QWORD *)v27 + 10) = v40;
  v41 = *((_DWORD *)v8 + 294);
  v8[294] = v5[294];
  *((_DWORD *)v5 + 294) = v41;
  RtlInitializeBitMap((PRTL_BITMAP)v8 + 42, (PULONG)v8 + 172, 0x40u);
  RtlInitializeBitMap((PRTL_BITMAP)v5 + 42, (PULONG)v5 + 172, 0x40u);
  vSpCorrectHdevReferences((struct _SPRITESTATE *)v8, v3);
  vSpCorrectHdevReferences((struct _SPRITESTATE *)v5, a2);
  MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v72, (struct PDEVOBJ *)&v70);
  MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v71, (struct PDEVOBJ *)&v69);
  v42 = *((_QWORD *)v8 + 137);
  *((_QWORD *)v8 + 137) = 0LL;
  *((_QWORD *)v8 + 136) = 0LL;
  *((_DWORD *)v8 + 276) = 0;
  if ( v42 )
  {
    do
    {
      v47 = *(_QWORD *)(v42 + 24);
      vSpDeleteSprite((struct SPRITE *)v42);
      v42 = v47;
    }
    while ( v47 );
  }
  v43 = *((_QWORD *)v5 + 137);
  *((_QWORD *)v5 + 137) = 0LL;
  *((_QWORD *)v5 + 136) = 0LL;
  *((_DWORD *)v5 + 276) = 0;
  if ( v43 )
  {
    do
    {
      v48 = *(_QWORD *)(v43 + 24);
      vSpDeleteSprite((struct SPRITE *)v43);
      v43 = v48;
    }
    while ( v48 );
  }
  v44 = (_DWORD)v70[14] & 0x20000;
  if ( v44 && ((_DWORD)v69[14] & 0x20000) != 0 )
  {
    v49 = *((_QWORD *)v8 + 10);
    if ( v49 )
    {
      do
      {
        v50 = *(_QWORD *)(v49 + 16);
        v51 = pSpTransferMetaSprite(a2, v3, (struct _METASPRITE *)v49);
        if ( v51 )
          *(_DWORD *)v51 |= 2u;
        v49 = v50;
      }
      while ( v50 );
    }
    v52 = *((_QWORD *)v5 + 10);
    if ( v52 )
    {
      do
      {
        v53 = *(_QWORD *)(v52 + 16);
        if ( (*(_DWORD *)v52 & 2) != 0 )
          *(_DWORD *)v52 &= ~2u;
        else
          pSpTransferMetaSprite(v3, a2, (struct _METASPRITE *)v52);
        v52 = v53;
      }
      while ( v53 );
    }
LABEL_18:
    if ( ((_DWORD)v70[14] & 0x20000) != 0 )
      vFixupMetaSpriteList((struct PDEVOBJ *)&v70);
    if ( ((_DWORD)v69[14] & 0x20000) != 0 )
      vFixupMetaSpriteList((struct PDEVOBJ *)&v69);
    goto LABEL_22;
  }
  if ( !v44 && ((_DWORD)v69[14] & 0x20000) == 0 )
  {
    v45 = *((_QWORD *)v8 + 2);
    if ( v45 )
    {
      do
      {
        v54 = *(_QWORD *)(v45 + 24);
        v55 = pSpTransferSprite(a2, (struct SPRITE *)v45);
        if ( v55 )
          *(_DWORD *)v55 |= 2u;
        v45 = v54;
      }
      while ( v54 );
    }
    v46 = *((_QWORD *)v5 + 2);
    if ( v46 )
    {
      do
      {
        v56 = *(_QWORD *)(v46 + 24);
        if ( (*(_DWORD *)v46 & 2) != 0 )
          *(_DWORD *)v46 &= ~2u;
        else
          pSpTransferSprite(v3, (struct SPRITE *)v46);
        v46 = v56;
      }
      while ( v56 );
    }
    goto LABEL_18;
  }
  v57 = a2;
  if ( v44 )
  {
    v57 = v3;
    v3 = a2;
  }
  v58 = 0LL;
  v59 = *((_DWORD *)v57 + 41);
  if ( !v59 )
  {
LABEL_53:
    v61 = *((_QWORD *)v3 + 14);
    if ( v61 )
    {
      do
      {
        v62 = *(_QWORD *)(v61 + 24);
        v63 = pSpConvertSpriteToMeta(v57, v3, (struct SPRITE *)v61);
        if ( v63 )
          *(_DWORD *)v63 |= 2u;
        v61 = v62;
      }
      while ( v62 );
    }
    v64 = *((_QWORD *)v57 + 22);
    if ( v64 )
    {
      do
      {
        v65 = *(_QWORD *)(v64 + 16);
        if ( (*(_DWORD *)v64 & 2) != 0 )
          *(_DWORD *)v64 &= ~2u;
        else
          pSpConvertSpriteFromMeta(v3, v57, (struct _METASPRITE *)v64);
        v64 = v65;
      }
      while ( v65 );
    }
    goto LABEL_18;
  }
  v60 = (HDEV)*((_QWORD *)v57 + 21);
  while ( *((HDEV *)v60 + v58) != v57 )
  {
    v58 = (unsigned int)(v58 + 1);
    if ( (unsigned int)v58 >= v59 )
      goto LABEL_53;
  }
  *((_QWORD *)v60 + v58) = v3;
  v66 = *((_QWORD *)v57 + 22);
  if ( v66 )
  {
    do
    {
      v67 = *(_QWORD *)(v66 + 16);
      pSpMoveSpriteFromMeta(v60, v57, (struct _METASPRITE *)v66, v58);
      v66 = v67;
    }
    while ( v67 );
  }
LABEL_22:
  MULTISPRITEDDIACCESS::~MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v71);
  MULTISPRITEDDIACCESS::~MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v72);
}
