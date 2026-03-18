/*
 * XREFs of bSetDevPreviewRect @ 0x1C0278E04
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C005DCD4 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     GreCreateSprite @ 0x1C0065AC4 (GreCreateSprite.c)
 *     GreDeleteSprite @ 0x1C00660AC (GreDeleteSprite.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C009420C (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C012845C (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C025C99C (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevPreviewRect @ 0x1C0278C38 (bMoveDevPreviewRect.c)
 */

__int64 __fastcall bSetDevPreviewRect(HDEV a1, struct _RECTL *a2, _OWORD *a3, char a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // edi
  BOOL v9; // r14d
  __int64 v10; // rcx
  int v11; // esi
  struct PDEVOBJ *v12; // rdx
  HSPRITE Sprite; // rax
  _OWORD *v14; // rax
  void *v15; // rax
  HSPRITE v16; // r8
  int v18; // [rsp+30h] [rbp-79h]
  char v19; // [rsp+38h] [rbp-71h]
  int v20; // [rsp+40h] [rbp-69h]
  HDEV v22; // [rsp+58h] [rbp-51h] BYREF
  _OWORD *v23; // [rsp+60h] [rbp-49h]
  char v24[8]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v25; // [rsp+70h] [rbp-39h] BYREF
  char v26[8]; // [rsp+78h] [rbp-31h] BYREF
  _BYTE v27[56]; // [rsp+80h] [rbp-29h] BYREF

  v8 = 1;
  v22 = a1;
  v23 = a3;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v26, ghsemDynamicModeChange);
  v25 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v24, (struct PDEVOBJ *)&v22);
  v9 = *((_DWORD *)a1 + 305) && *((_DWORD *)a1 + 306);
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)(a1 + 24));
  v11 = a4 & 1;
  if ( a2 )
  {
    *((_DWORD *)a1 + 306) = v11;
    memset(v27, 0, sizeof(v27));
    vSpDwmGetMiniWinInfoForNonWindowSprite((__int64)v27, 0LL);
    Sprite = GreCreateSprite(
               a1,
               v12,
               0LL,
               (struct tagMINIWINDOWINFO *)v27,
               a4 & 1,
               1,
               (unsigned int)v12 & v18,
               (unsigned __int8)v12 & v19,
               (unsigned int)v12 & v20);
    *((_QWORD *)a1 + 158) = Sprite;
    if ( Sprite )
    {
      v14 = v23;
      *((_DWORD *)a1 + 305) = 1;
      *((_DWORD *)a1 + 306) = v11;
      *(_OWORD *)(a1 + 319) = *v14;
      if ( (a4 & 4) == 0 )
        bMoveDevPreviewRect(a1, a2, 1, a5, a6);
    }
    else
    {
      v8 = 0;
    }
  }
  else if ( v9 )
  {
    v15 = (void *)UserReferenceDwmApiPort(v10);
    DwmAsyncSendWindowArrangingData(v15, 2, a5, 0LL, a6);
  }
  if ( !*((_DWORD *)a1 + 305) )
  {
    v16 = (HSPRITE)*((_QWORD *)a1 + 158);
    if ( v16 )
    {
      GreDeleteSprite(a1, 0LL, v16, *((_DWORD *)a1 + 306));
      *((_QWORD *)a1 + 158) = 0LL;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v24);
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v26);
  return v8;
}
