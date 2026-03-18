/*
 * XREFs of ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00FA7B8
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C004F4A0 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C0068398 (GreDeleteSpriteOverlapPresent.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00FA73C (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C026C9C4 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00368B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0037A14 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C007B840 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FAA54 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C0151088 (--0RGNMEMOBJTMP@@QEAA@H@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     UserGetClientRgn @ 0x1C01E83B8 (UserGetClientRgn.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C02625A0 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 */

void __fastcall vSpComputeNoPresentRegion(struct _SPRITESTATE *a1, int a2)
{
  __int64 v2; // rbx
  REGION *v4; // rcx
  REGION *v6; // rcx
  _QWORD *v7; // rsi
  int v8; // edx
  int v9; // edx
  HRGN ClientRgn; // rax
  int v11; // eax
  struct RGNOBJ *v12; // r8
  __int64 v13; // rdx
  struct _POINTL v14; // [rsp+20h] [rbp-59h] BYREF
  __int64 v15; // [rsp+28h] [rbp-51h] BYREF
  int v16; // [rsp+30h] [rbp-49h]
  __int64 v17; // [rsp+38h] [rbp-41h] BYREF
  __int64 v18; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v21[2]; // [rsp+70h] [rbp-9h] BYREF
  struct _RECTL v22; // [rsp+90h] [rbp+17h] BYREF
  struct _RECTL v23; // [rsp+A0h] [rbp+27h] BYREF

  v2 = *(_QWORD *)a1;
  v4 = (REGION *)*((_QWORD *)a1 + 132);
  v18 = v2;
  if ( v4 )
  {
    REGION::vDeleteREGION(v4);
    *((_QWORD *)a1 + 132) = 0LL;
  }
  if ( !a2 )
  {
    v6 = (REGION *)*((_QWORD *)a1 + 131);
    if ( v6 )
    {
      REGION::vDeleteREGION(v6);
      *((_QWORD *)a1 + 131) = 0LL;
    }
  }
  SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5));
  v7 = (_QWORD *)*((_QWORD *)a1 + 11);
  if ( v7 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15, 0, 1);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v21, v8);
    if ( v15 && v21[0] )
    {
      v22.left = 0;
      v22.top = 0;
      v22.right = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v18).cx;
      v22.bottom = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v18) + 4LL);
      RGNOBJ::vSet((RGNOBJ *)&v15, &v22);
      RGNOBJ::vSet((RGNOBJ *)v21, &v22);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v20, v9);
      if ( v20[0] )
      {
        do
        {
          ClientRgn = (HRGN)UserGetClientRgn(*v7, &v23, 0LL);
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, ClientRgn, 0);
          if ( v19[0] )
          {
            v14.x = -*(_DWORD *)(v2 + 2608);
            v14.y = -*(_DWORD *)(v2 + 2612);
            RGNOBJ::bOffset((RGNOBJ *)v19, &v14);
            v17 = *((_QWORD *)a1 + 89);
            RGNOBJ::vSet((RGNOBJ *)&v17, &v23);
            v14.x = -*(_DWORD *)(v2 + 2608);
            v14.y = -*(_DWORD *)(v2 + 2612);
            RGNOBJ::bOffset((RGNOBJ *)v19, &v14);
            RGNOBJ::bOffset((RGNOBJ *)&v17, &v14);
            v11 = RGNOBJ::iComplexity((RGNOBJ *)v19);
            v12 = (struct RGNOBJ *)v19;
            if ( v11 == 1 )
              v12 = (struct RGNOBJ *)&v17;
            if ( RGNOBJ::bMerge((RGNOBJ *)v20, (struct RGNOBJ *)&v15, v12, BYTE4(gafjRgnOp)) )
              RGNOBJ::bSwap((RGNOBJ *)v20, (struct RGNOBJ *)&v15);
            RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v19);
          }
          v7 = (_QWORD *)v7[1];
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
        }
        while ( v7 );
      }
      v13 = v15;
      *(_DWORD *)(v13 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
      if ( a2 )
        *((_QWORD *)a1 + 132) = v15;
      else
        *((_QWORD *)a1 + 131) = v15;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
    }
    else
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
    if ( v16 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
  }
  if ( !a2 )
    vSpComputeUnlockedRegion(a1);
}
