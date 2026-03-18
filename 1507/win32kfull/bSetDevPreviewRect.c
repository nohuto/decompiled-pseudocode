/*
 * XREFs of bSetDevPreviewRect @ 0x1C027B8BC
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 * Callees:
 *     GreDeleteSprite @ 0x1C000CBEC (GreDeleteSprite.c)
 *     GreCreateSprite @ 0x1C000D128 (GreCreateSprite.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008A54C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0091630 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C00FA55C (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C011E5C0 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C025FA4C (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevPreviewRect @ 0x1C027B6F4 (bMoveDevPreviewRect.c)
 */

__int64 __fastcall bSetDevPreviewRect(HDEV a1, __int64 a2, _OWORD *a3, char a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // edi
  BOOL v9; // r14d
  __int64 v10; // rcx
  int v11; // esi
  HWND v12; // rdx
  void *Sprite; // rax
  _OWORD *v14; // rax
  void *v15; // rax
  void *v16; // r8
  int v18; // [rsp+30h] [rbp-79h]
  int v19; // [rsp+38h] [rbp-71h]
  int v20; // [rsp+40h] [rbp-69h]
  char v22[8]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v23; // [rsp+60h] [rbp-49h] BYREF
  _OWORD *v24; // [rsp+68h] [rbp-41h]
  char v25[8]; // [rsp+70h] [rbp-39h] BYREF
  HDEV v26; // [rsp+78h] [rbp-31h] BYREF
  _DWORD v27[14]; // [rsp+80h] [rbp-29h] BYREF

  v8 = 1;
  v26 = a1;
  v24 = a3;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v25, ghsemDynamicModeChange);
  v23 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v22, (struct PDEVOBJ *)&v26);
  v9 = *((_DWORD *)a1 + 305) && *((_DWORD *)a1 + 306);
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)(a1 + 24));
  v11 = a4 & 1;
  if ( a2 )
  {
    v27[0] = 0;
    *((_DWORD *)a1 + 306) = v11;
    memset(&v27[1], 0, 0x34uLL);
    vSpDwmGetMiniWinInfoForNonWindowSprite((__int64)v27, 0LL);
    Sprite = GreCreateSprite(
               a1,
               v12,
               0LL,
               (struct tagMINIWINDOWINFO *)v27,
               a4 & 1,
               1,
               (unsigned int)v12 & v18,
               (unsigned int)v12 & v19,
               (unsigned int)v12 & v20);
    *((_QWORD *)a1 + 158) = Sprite;
    if ( Sprite )
    {
      v14 = v24;
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
    v16 = (void *)*((_QWORD *)a1 + 158);
    if ( v16 )
    {
      GreDeleteSprite(a1, 0LL, v16, *((_DWORD *)a1 + 306));
      *((_QWORD *)a1 + 158) = 0LL;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v22);
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v25);
  return v8;
}
