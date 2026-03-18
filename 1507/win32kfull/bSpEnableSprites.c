/*
 * XREFs of bSpEnableSprites @ 0x1C00F4BC0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F4F24 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00F5EF0 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 */

__int64 __fastcall bSpEnableSprites(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // r14
  struct _SURFOBJ *Surface; // rcx
  struct REGION *v12; // rdx
  __int64 v13; // rdx
  int v15; // [rsp+20h] [rbp-40h]
  struct REGION *v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+38h] [rbp-28h]
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  int v21; // [rsp+58h] [rbp-8h]

  if ( (*(_DWORD *)(a1 + 56) & 1) == 0 )
    return 1;
  v2 = *(_QWORD *)(a1 + 2576);
  v3 = 0;
  v4 = 0LL;
  if ( v2 )
    v4 = v2 + 24;
  v5 = SURFOBJ_TO_SURFACE_NOT_NULL(v4);
  v6 = v5;
  *(_QWORD *)(a1 + 96) = a1;
  if ( v5 )
    v7 = v5 + 24;
  else
    v7 = 0LL;
  *(_QWORD *)(a1 + 136) = v7;
  *(_DWORD *)(a1 + 212) = *(_DWORD *)(v6 + 96);
  v8 = *(unsigned __int16 *)(v6 + 100);
  *(_DWORD *)(a1 + 200) = v8;
  v9 = *(_DWORD *)(v6 + 112);
  *(_DWORD *)(a1 + 196) = v9;
  *(_DWORD *)(a1 + 208) = v8;
  *(_DWORD *)(a1 + 204) = v9;
  *(_DWORD *)(a1 + 216) = **(_DWORD **)(*(_QWORD *)(v6 + 120) + 128LL) | *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 120)
                                                                                               + 128LL)
                                                                                   + 8LL);
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(v6 + 56);
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(v6 + 60);
  *(_QWORD *)(a1 + 224) = GreCreateSemaphore();
  *(_QWORD *)(a1 + 232) = GreCreateSemaphore();
  RtlInitializeBitMap((PRTL_BITMAP)(a1 + 768), (PULONG)(a1 + 784), 0x40u);
  GreInitializePushLock(a1 + 792);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v18);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
  if ( !v20 )
    goto LABEL_26;
  if ( !v18 )
    goto LABEL_26;
  if ( !v16 )
    goto LABEL_26;
  if ( !*(_QWORD *)(a1 + 224) )
    goto LABEL_26;
  if ( !*(_QWORD *)(a1 + 232) )
    goto LABEL_26;
  v10 = PALLOCMEM2(0x28uLL, 1919972167LL, 1);
  if ( !v10 )
    goto LABEL_26;
  Surface = psoSpCreateSurface((struct _SPRITESTATE *)(a1 + 96), 0, 1, 1, v15);
  if ( !Surface )
  {
    Win32FreePool(v10);
LABEL_26:
    if ( *(_QWORD *)(a1 + 224) )
      GreDeleteSemaphore();
    if ( *(_QWORD *)(a1 + 232) )
      GreDeleteSemaphore();
    *(_QWORD *)(a1 + 224) = 0LL;
    *(_QWORD *)(a1 + 232) = 0LL;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
    goto LABEL_16;
  }
  *v10 = *(_DWORD *)(a1 + 148);
  v10[1] = *(_DWORD *)(a1 + 156);
  *((_QWORD *)v10 + 1) = 40LL;
  *((_QWORD *)v10 + 2) = 0LL;
  v10[6] = *(_DWORD *)(a1 + 144);
  v10[7] = *(_DWORD *)(a1 + 152);
  *((_QWORD *)v10 + 4) = 0LL;
  *(_QWORD *)(a1 + 1128) = Surface;
  *(_QWORD *)(a1 + 248) = v10 + 10;
  *(_QWORD *)(a1 + 240) = v10;
  RGNOBJ::vSet((RGNOBJ *)&v16, (struct _RECTL *)(a1 + 144));
  v12 = v16;
  *(_QWORD *)(a1 + 968) = v16;
  XCLIPOBJ::vSetup((XCLIPOBJ *)(a1 + 976), v12, (struct ERECTL *)(a1 + 144), 1);
  v13 = v20;
  *(_QWORD *)(a1 + 800) = v20;
  *(_DWORD *)(v13 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
  *(_QWORD *)(a1 + 808) = v18;
  *(_QWORD *)(a1 + 1160) = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  *(_QWORD *)(a1 + 1312) = *(_QWORD *)(a1 + 2848);
  *(_QWORD *)(a1 + 1320) = *(_QWORD *)(a1 + 2832);
  *(_QWORD *)(a1 + 1328) = *(_QWORD *)(a1 + 2840);
  *(_QWORD *)(a1 + 1344) = *(_QWORD *)(a1 + 2864);
  *(_QWORD *)(a1 + 1352) = *(_QWORD *)(a1 + 2872);
  *(_QWORD *)(a1 + 1360) = *(_QWORD *)(a1 + 2880);
  *(_QWORD *)(a1 + 1368) = *(_QWORD *)(a1 + 2904);
  *(_QWORD *)(a1 + 1376) = *(_QWORD *)(a1 + 2968);
  *(_QWORD *)(a1 + 1384) = *(_QWORD *)(a1 + 3312);
  *(_QWORD *)(a1 + 1392) = *(_QWORD *)(a1 + 3288);
  *(_QWORD *)(a1 + 1400) = *(_QWORD *)(a1 + 3280);
  *(_QWORD *)(a1 + 1408) = *(_QWORD *)(a1 + 3264);
  *(_QWORD *)(a1 + 1424) = *(_QWORD *)(a1 + 3272);
  *(_QWORD *)(a1 + 1416) = *(_QWORD *)(a1 + 3040);
  *(_QWORD *)(a1 + 1432) = *(_QWORD *)(a1 + 3440);
  if ( (*(_DWORD *)(a1 + 56) & 0x20000) == 0 )
    vSpHook((struct _SPRITESTATE *)(a1 + 96));
  v3 = 1;
LABEL_16:
  if ( v17 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
  if ( v19 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
  if ( v21 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
  return v3;
}
