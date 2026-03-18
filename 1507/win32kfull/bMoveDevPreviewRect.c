/*
 * XREFs of bMoveDevPreviewRect @ 0x1C027B6F4
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 *     bSetDevPreviewRect @ 0x1C027B8BC (bSetDevPreviewRect.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008A54C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0091630 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C025FA4C (DwmAsyncSendWindowArrangingData.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C026F414 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 */

__int64 __fastcall bMoveDevPreviewRect(HDEV a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  int v7; // edi
  int v9; // r12d
  HDEV v10; // r14
  unsigned int v11; // ebx
  void *v12; // r8
  LONG v13; // r10d
  LONG v14; // r9d
  int v15; // edx
  __int64 v16; // rcx
  void *v17; // rax
  int v18; // edx
  int updated; // eax
  HDEV v21; // [rsp+80h] [rbp-21h] BYREF
  struct tagSIZE v22; // [rsp+88h] [rbp-19h] BYREF
  char v23[8]; // [rsp+90h] [rbp-11h] BYREF
  char v24[8]; // [rsp+98h] [rbp-9h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v26; // [rsp+A8h] [rbp+7h] BYREF

  v21 = a1;
  v7 = 1;
  v9 = a3 & 1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v24, ghsemDynamicModeChange);
  v25 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v23, (struct PDEVOBJ *)&v21);
  v10 = v21;
  v11 = 0;
  v12 = (void *)*((_QWORD *)v21 + 158);
  if ( v12 )
  {
    v13 = *(_DWORD *)(a2 + 8) - *(_DWORD *)a2;
    v14 = *(_DWORD *)(a2 + 12) - *(_DWORD *)(a2 + 4);
    v15 = *((_DWORD *)v21 + 325) - *((_DWORD *)v21 + 323);
    v16 = (unsigned int)(*((_DWORD *)v21 + 326) - *((_DWORD *)v21 + 324));
    v22.cx = v13;
    v22.cy = v14;
    if ( *((_DWORD *)v21 + 306) )
    {
      if ( v15 || (_DWORD)v16 )
      {
        v17 = (void *)UserReferenceDwmApiPort(v16);
        v18 = 1;
      }
      else
      {
        v17 = (void *)UserReferenceDwmApiPort(v16);
        v18 = 0;
      }
      if ( (int)DwmAsyncSendWindowArrangingData(v17, v18, a4, (__int128 *)a2, a5) < 0 )
      {
        v7 = 0;
LABEL_15:
        v11 = v7;
        goto LABEL_16;
      }
    }
    else
    {
      if ( v13 == v15 && v14 == (_DWORD)v16 )
      {
        v26 = *(_OWORD *)a2;
        updated = GreUpdateSprite(
                    a1,
                    0LL,
                    v12,
                    0LL,
                    (struct tagPOINT *)&v26,
                    &v22,
                    0LL,
                    0LL,
                    0,
                    0LL,
                    0,
                    0LL,
                    0LL,
                    v9,
                    0);
      }
      else
      {
        updated = bSetPreviewRectContent((void **)v21 + 12, (const struct _RECTL *)a2);
      }
      v7 = updated;
      if ( !updated )
        goto LABEL_15;
    }
    *(_OWORD *)(v10 + 323) = *(_OWORD *)a2;
    goto LABEL_15;
  }
LABEL_16:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v23);
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v24);
  return v11;
}
