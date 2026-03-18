/*
 * XREFs of ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00F5598
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0061784 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C008A328 (GreDeleteSpriteOverlapPresent.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00F551C (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C026DE54 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0010EEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00160F4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001617C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F5838 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C015B940 (--0RGNMEMOBJTMP@@QEAA@H@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     UserGetClientRgn @ 0x1C01E7F44 (UserGetClientRgn.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0263E20 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
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
  struct _POINTL v14; // [rsp+20h] [rbp-79h] BYREF
  __int64 v15; // [rsp+28h] [rbp-71h] BYREF
  int v16; // [rsp+30h] [rbp-69h]
  __int64 v17; // [rsp+38h] [rbp-61h] BYREF
  __int64 v18; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v20[2]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v21[7]; // [rsp+68h] [rbp-31h] BYREF
  struct _RECTL v22; // [rsp+B0h] [rbp+17h] BYREF
  struct _RECTL v23; // [rsp+C0h] [rbp+27h] BYREF

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
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v20, v8);
    if ( v15 && v20[0] )
    {
      v22.left = 0;
      v22.top = 0;
      v22.right = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v18).cx;
      v22.bottom = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v18) + 4LL);
      RGNOBJ::vSet((RGNOBJ *)&v15, &v22);
      RGNOBJ::vSet((RGNOBJ *)v20, &v22);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v19, v9);
      if ( v19[0] )
      {
        do
        {
          ClientRgn = (HRGN)UserGetClientRgn(*v7, &v23, 0LL);
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, ClientRgn, 0, 0);
          if ( v21[0] )
          {
            v14.x = -*(_DWORD *)(v2 + 2608);
            v14.y = -*(_DWORD *)(v2 + 2612);
            RGNOBJ::bOffset((RGNOBJ *)v21, &v14);
            v17 = *((_QWORD *)a1 + 89);
            RGNOBJ::vSet((RGNOBJ *)&v17, &v23);
            v14.x = -*(_DWORD *)(v2 + 2608);
            v14.y = -*(_DWORD *)(v2 + 2612);
            RGNOBJ::bOffset((RGNOBJ *)v21, &v14);
            RGNOBJ::bOffset((RGNOBJ *)&v17, &v14);
            v11 = RGNOBJ::iComplexity((RGNOBJ *)v21);
            v12 = (struct RGNOBJ *)v21;
            if ( v11 == 1 )
              v12 = (struct RGNOBJ *)&v17;
            if ( RGNOBJ::bMerge((RGNOBJ *)v19, (struct RGNOBJ *)&v15, v12, BYTE4(gafjRgnOp)) )
              RGNOBJ::bSwap((RGNOBJ *)v19, (struct RGNOBJ *)&v15);
            RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v21);
          }
          v7 = (_QWORD *)v7[1];
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
        }
        while ( v7 );
      }
      v13 = v15;
      *(_DWORD *)(v13 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
      if ( a2 )
        *((_QWORD *)a1 + 132) = v15;
      else
        *((_QWORD *)a1 + 131) = v15;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
    }
    else
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
    if ( v16 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
  }
  if ( !a2 )
    vSpComputeUnlockedRegion(a1);
}
