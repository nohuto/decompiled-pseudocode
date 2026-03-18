/*
 * XREFs of ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C0271338
 * Callers:
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C027114C (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0271C40 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0275738 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C004A0F8 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall vSpAddAndCompactDirtyRegion(struct SPRITE *a1, struct REGION *a2)
{
  int v3; // edi
  BOOL v4; // esi
  __int64 v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  struct REGION *v7; // [rsp+28h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+38h] [rbp-38h]
  _QWORD v10[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _RECTL v11; // [rsp+50h] [rbp-20h] BYREF

  do
  {
    v3 = 0;
    v7 = a2;
    v6 = 0LL;
    if ( !a2 )
      break;
    v6 = _InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
    if ( v6 )
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
      if ( v10[0] )
      {
        v4 = RGNOBJ::iComplexity((RGNOBJ *)&v6) == 3;
        if ( RGNOBJ::bMerge((RGNOBJ *)v10, (struct RGNOBJ *)&v6, (struct RGNOBJ *)&v7, BYTE2(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)v10, (struct RGNOBJ *)&v6);
          v3 = 1;
          if ( v4 )
          {
            if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v6) == 2 )
            {
              RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8);
              if ( v8 )
              {
                v11 = *(struct _RECTL *)(v6 + 88);
                RGNOBJ::vSet((RGNOBJ *)&v8, &v11);
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
                v6 = v8;
              }
              if ( v9 == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
            }
          }
        }
      }
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
      v5 = v6;
    }
    else
    {
      v5 = (__int64)v7;
      v3 = 1;
      v6 = (__int64)v7;
    }
    if ( !v3 )
      break;
    if ( !v5 )
      break;
    a2 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, v5);
    v6 = 0LL;
  }
  while ( a2 );
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
}
