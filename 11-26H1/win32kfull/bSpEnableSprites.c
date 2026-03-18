/*
 * XREFs of bSpEnableSprites @ 0x140227250
 * Callers:
 *     <none>
 * Callees:
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z @ 0x140186748 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x140227634 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x140316F74 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

__int64 __fastcall bSpEnableSprites(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  const struct _RECTL *v4; // r14
  __int64 v5; // r8
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  _DWORD *v12; // rsi
  struct _SURFOBJ *Surface; // rdx
  struct REGION *v14; // rdx
  REGION *v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-10h]
  struct REGION *v18; // [rsp+60h] [rbp+30h] BYREF
  REGION *v19; // [rsp+68h] [rbp+38h] BYREF
  __int64 v20; // [rsp+70h] [rbp+40h] BYREF

  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    return 1LL;
  v2 = *(_QWORD *)(a1 + 2544);
  v3 = a1 + 80;
  *(_QWORD *)(a1 + 80) = a1;
  v4 = (const struct _RECTL *)(a1 + 120);
  v5 = (v2 + 24) & -(__int64)(v2 != 0);
  *(_QWORD *)(a1 + 112) = v5 & -(__int64)(v5 != 24);
  *(_DWORD *)(a1 + 188) = *(_DWORD *)(v5 + 0x48);
  v6 = *(unsigned __int16 *)(v5 + 0x4C);
  *(_DWORD *)(v3 + 96) = v6;
  LODWORD(v2) = *(_DWORD *)(v5 + 0x58);
  *(_DWORD *)(v3 + 92) = v2;
  *(_DWORD *)(v3 + 104) = v6;
  *(_DWORD *)(v3 + 100) = v2;
  *(_DWORD *)(v3 + 112) = **(_DWORD **)(*(_QWORD *)(v5 + 104) + 112LL) | *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 104)
                                                                                               + 112LL)
                                                                                   + 8LL);
  v4->left = 0;
  *(_DWORD *)(v3 + 48) = *(_DWORD *)(v5 + 32);
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 52) = *(_DWORD *)(v5 + 36);
  *(_QWORD *)(v3 + 120) = GreCreateSemaphore();
  *(_BYTE *)(v3 + 128) = 0;
  *(_QWORD *)(v3 + 136) = GreCreateSemaphore();
  RtlInitializeBitMap((PRTL_BITMAP)(v3 + 672), (PULONG)(v3 + 688), 0x40u);
  GreInitializePushLock((struct W32_PUSH_LOCK *)(v3 + 696));
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v19);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v18);
  if ( v19 )
  {
    if ( v20 )
    {
      if ( v18 )
      {
        if ( *(_QWORD *)(v3 + 120) )
        {
          if ( *(_QWORD *)(v3 + 136) )
          {
            v12 = (_DWORD *)Win32AllocPoolZInit(40LL, 1919972167LL);
            if ( v12 )
            {
              Surface = psoSpCreateSurface((struct _SPRITESTATE *)v3, 0, 1, 1, v17);
              if ( Surface )
              {
                *v12 = *(_DWORD *)(v3 + 44);
                v12[1] = *(_DWORD *)(v3 + 52);
                *((_QWORD *)v12 + 1) = 40LL;
                *((_QWORD *)v12 + 2) = 0LL;
                v12[6] = v4->left;
                v12[7] = *(_DWORD *)(v3 + 48);
                *((_QWORD *)v12 + 4) = 0LL;
                *(_QWORD *)(v3 + 1032) = Surface;
                *(_QWORD *)(v3 + 144) = v12;
                *(_QWORD *)(v3 + 152) = v12 + 10;
                RGNOBJ::vSet((RGNOBJ *)&v18, v4);
                v14 = v18;
                *(_QWORD *)(v3 + 872) = v18;
                XCLIPOBJ::vSetup((XCLIPOBJ *)(v3 + 880), v14, (const struct ERECTL *)v4, 1);
                v15 = v19;
                *(_QWORD *)(v3 + 704) = v19;
                REGION::vStamp(v15);
                *(_QWORD *)(v3 + 712) = v20;
                *(_QWORD *)(v3 + 1064) = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
                *(_QWORD *)(v3 + 1200) = *(_QWORD *)(a1 + 2808);
                *(_QWORD *)(v3 + 1208) = *(_QWORD *)(a1 + 2792);
                *(_QWORD *)(v3 + 1216) = *(_QWORD *)(a1 + 2800);
                *(_QWORD *)(v3 + 1232) = *(_QWORD *)(a1 + 2824);
                *(_QWORD *)(v3 + 1240) = *(_QWORD *)(a1 + 2832);
                *(_QWORD *)(v3 + 1248) = *(_QWORD *)(a1 + 2840);
                *(_QWORD *)(v3 + 1256) = *(_QWORD *)(a1 + 2864);
                *(_QWORD *)(v3 + 1264) = *(_QWORD *)(a1 + 2928);
                *(_QWORD *)(v3 + 1272) = *(_QWORD *)(a1 + 3272);
                *(_QWORD *)(v3 + 1280) = *(_QWORD *)(a1 + 3248);
                *(_QWORD *)(v3 + 1288) = *(_QWORD *)(a1 + 3240);
                *(_QWORD *)(v3 + 1296) = *(_QWORD *)(a1 + 3224);
                *(_QWORD *)(v3 + 1312) = *(_QWORD *)(a1 + 3232);
                *(_QWORD *)(v3 + 1304) = *(_QWORD *)(a1 + 3000);
                *(_QWORD *)(v3 + 1320) = *(_QWORD *)(a1 + 3400);
                if ( (*(_DWORD *)(a1 + 40) & 0x20000) == 0 )
                {
                  vSpHook((struct _SPRITESTATE *)v3);
                  vSpComputeSpriteRanges(v16);
                }
                return 1LL;
              }
              Win32FreePool(v12);
            }
          }
        }
      }
    }
  }
  v9 = *(_QWORD *)(v3 + 120);
  if ( v9 )
    GreDeleteSemaphore(v9, v7, v8);
  v10 = *(_QWORD *)(v3 + 136);
  if ( v10 )
    GreDeleteSemaphore(v10, v7, v8);
  *(_QWORD *)(v3 + 120) = 0LL;
  *(_QWORD *)(v3 + 136) = 0LL;
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
  return 0LL;
}
