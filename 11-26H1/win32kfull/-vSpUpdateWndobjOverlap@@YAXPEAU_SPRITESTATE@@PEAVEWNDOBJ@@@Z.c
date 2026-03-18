/*
 * XREFs of ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x14031808C
 * Callers:
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x140253454 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1403162AC (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x140316B14 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1403163E8 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 *     ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x14031881C (-vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x140319690 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 */

void __fastcall vSpUpdateWndobjOverlap(struct _SPRITESTATE *a1, struct EWNDOBJ *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 i; // rdi
  struct _RECTL *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // r8d
  __int64 j; // rdx
  __int64 k; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 m; // rcx
  __int64 v18; // rcx
  int v19; // esi
  int v20; // eax
  struct RGNOBJ *v21; // r8
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v26[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v27; // [rsp+80h] [rbp+40h] BYREF
  struct _POINTL v28; // [rsp+88h] [rbp+48h] BYREF
  __int64 v29; // [rsp+90h] [rbp+50h] BYREF
  __int64 v30; // [rsp+98h] [rbp+58h] BYREF

  if ( _bittest((const signed __int32 *)a2 + 46, 9u) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)a2 + 21) + 32LL);
    v5 = *(_QWORD *)(v4 + 48);
    if ( v5 )
    {
      if ( v4 == *(_QWORD *)(v5 + 2544) && v5 != *(_QWORD *)a1 )
        return;
    }
  }
  v30 = *((_QWORD *)a1 + 89);
  v26[0] = *((_QWORD *)a2 + 24);
  RGNOBJ::vSet((RGNOBJ *)&v30);
  for ( i = *((_QWORD *)a1 + 1); i; i = *(_QWORD *)(i + 24) )
  {
    v7 = (struct _RECTL *)((char *)a2 + 4);
    if ( (unsigned int)bIntersect((char *)a2 + 4, i + 80) || _bittest((const signed __int32 *)a2 + 46, 9u) )
    {
      if ( RGNOBJ::bInside((struct EWNDOBJ *)((char *)a2 + 56), (struct _RECTL *)(i + 80)) != 2 )
      {
        if ( !_bittest((const signed __int32 *)a2 + 46, 9u)
          || !v26[0]
          || RGNOBJ::bInside((RGNOBJ *)v26, (struct _RECTL *)(i + 80)) != 2 )
        {
          continue;
        }
        v7 = (struct _RECTL *)((char *)a2 + 4);
      }
      v9 = *(_QWORD *)(i + 184);
      v10 = *((_DWORD *)a2 + 46);
      v24 = v9;
      if ( (v10 & 0x200) != 0 )
      {
        if ( (*(_DWORD *)i & 1) == 0 && *(_QWORD *)(i + 72) )
        {
          for ( j = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v9, v8) + 96) + 4816LL); j; j = *(_QWORD *)(j + 8) )
          {
            for ( k = *(_QWORD *)(j + 24); k; k = *(_QWORD *)(k + 160) )
            {
              if ( _bittest((const signed __int32 *)(k + 184), 9u) && *(_QWORD *)(k + 176) == *(_QWORD *)(i + 72) )
                goto LABEL_58;
            }
          }
          v15 = *(_QWORD *)(i + 16);
          if ( *(_QWORD *)(i + 72) )
          {
            v16 = *(_QWORD *)(v15 + 8);
            for ( m = *(_QWORD *)(v15 + 1128); v16 != m; v16 = *(_QWORD *)(v16 + 24) )
            {
              if ( *(_QWORD *)(v16 + 72) == *((_QWORD *)a2 + 22) )
                break;
            }
            v18 = 0LL;
            if ( v16 != *(_QWORD *)(v15 + 1128) )
              v18 = v16;
            if ( !v18 || *(_DWORD *)(i + 64) > *(_DWORD *)(v18 + 64) )
            {
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v25);
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
              if ( v29 && v25 && v27 )
              {
                RGNOBJ::vSet((RGNOBJ *)&v25, (const struct _RECTL *const)(i + 80));
                v19 = 1;
                if ( !v24 )
                  goto LABEL_52;
                if ( RGNOBJ::bMerge((RGNOBJ *)&v29, (struct RGNOBJ *)&v24, (struct RGNOBJ *)v26, 8u)
                  && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v29) == 1
                  || !RGNOBJ::bCopy((RGNOBJ *)&v27, (struct RGNOBJ *)&v24)
                  || (v28.x = -*(_DWORD *)(i + 80),
                      v28.y = -*(_DWORD *)(i + 84),
                      RGNOBJ::bOffset((RGNOBJ *)&v27, &v28),
                      vSpComputeClipEffective((struct SPRITE *)i, (struct RGNOBJ *)&v27),
                      (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v27) == 1) )
                {
                  v19 = 0;
                }
                else
                {
                  v28.x = -v28.x;
                  v28.y = -v28.y;
                  RGNOBJ::bOffset((RGNOBJ *)&v27, &v28);
                }
                if ( v24 )
                {
                  if ( v19 == 1 )
                  {
                    v20 = 1;
                    goto LABEL_53;
                  }
                }
                else
                {
LABEL_52:
                  v20 = 0;
LABEL_53:
                  v21 = (struct RGNOBJ *)&v25;
                  if ( v20 )
                    v21 = (struct RGNOBJ *)&v27;
                  if ( RGNOBJ::bMerge((RGNOBJ *)&v29, (struct RGNOBJ *)&v30, v21, 0xEu) )
                  {
                    RGNOBJ::vSwap((RGNOBJ *)&v29, (struct RGNOBJ *)&v30);
                    *((_QWORD *)a1 + 89) = v30;
                  }
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v25);
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
              continue;
            }
          }
        }
      }
      else
      {
        if ( !v9 )
          goto LABEL_18;
        if ( RGNOBJ::bInside((RGNOBJ *)&v24, v7) == 2 )
        {
          v10 = *((_DWORD *)a2 + 46);
LABEL_18:
          if ( (v10 & 0x2000000) == 0 )
          {
            v11 = v10 | 0x2000000;
            *((_DWORD *)a2 + 46) = v11;
            if ( (v11 & 0x80u) != 0 )
            {
              v12 = 128;
LABEL_62:
              TRACKOBJ::vUpdateDrv(*((TRACKOBJ **)a2 + 21), a2, v12);
              goto LABEL_63;
            }
          }
          goto LABEL_63;
        }
      }
    }
LABEL_58:
    ;
  }
  v22 = *((_DWORD *)a2 + 46);
  if ( (v22 & 0x2000000) != 0 )
  {
    v23 = v22 & 0xFDFFFFFF;
    *((_DWORD *)a2 + 46) = v23;
    if ( (v23 & 0x80u) != 0 )
    {
      v12 = 256;
      goto LABEL_62;
    }
  }
LABEL_63:
  if ( _bittest((const signed __int32 *)a2 + 46, 9u) )
  {
    vUpdateClientRgnOnSpriteOverlap(a2, (struct RGNOBJ *)&v30);
    *((_QWORD *)a1 + 89) = v30;
  }
}
