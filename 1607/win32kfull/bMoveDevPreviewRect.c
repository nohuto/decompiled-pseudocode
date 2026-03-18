/*
 * XREFs of bMoveDevPreviewRect @ 0x1C0278C38
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 *     bSetDevPreviewRect @ 0x1C0278E04 (bSetDevPreviewRect.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C00503E0 (GreUpdateSprite.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C005DCD4 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C025C99C (DwmAsyncSendWindowArrangingData.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C026C910 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 */

__int64 __fastcall bMoveDevPreviewRect(HDEV a1, struct _RECTL *a2, char a3, __int64 a4, __int64 a5)
{
  int v7; // edi
  int v9; // r12d
  HDEV v10; // r14
  unsigned int v11; // ebx
  LONG v12; // r10d
  LONG v13; // r9d
  int v14; // edx
  __int64 v15; // rcx
  void *v16; // rax
  int v17; // edx
  int updated; // eax
  struct _LUID *v20; // [rsp+70h] [rbp-31h]
  HDEV v21; // [rsp+80h] [rbp-21h] BYREF
  __int64 v22; // [rsp+88h] [rbp-19h] BYREF
  char v23[8]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v24; // [rsp+98h] [rbp-9h] BYREF
  char v25[8]; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v26[2]; // [rsp+A8h] [rbp+7h] BYREF

  v21 = a1;
  v7 = 1;
  v9 = a3 & 1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v25, ghsemDynamicModeChange);
  v24 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v23, (struct PDEVOBJ *)&v21);
  v10 = v21;
  v11 = 0;
  if ( *((_QWORD *)v21 + 158) )
  {
    v12 = a2->right - a2->left;
    v13 = a2->bottom - a2->top;
    v14 = *((_DWORD *)v21 + 325) - *((_DWORD *)v21 + 323);
    v15 = (unsigned int)(*((_DWORD *)v21 + 326) - *((_DWORD *)v21 + 324));
    LODWORD(v22) = v12;
    HIDWORD(v22) = v13;
    if ( *((_DWORD *)v21 + 306) )
    {
      if ( v14 || (_DWORD)v15 )
      {
        v16 = (void *)UserReferenceDwmApiPort(v15);
        v17 = 1;
      }
      else
      {
        v16 = (void *)UserReferenceDwmApiPort(v15);
        v17 = 0;
      }
      if ( (int)DwmAsyncSendWindowArrangingData(v16, v17, a4, (__int128 *)&a2->left, a5) < 0 )
      {
        v7 = 0;
LABEL_15:
        v11 = v7;
        goto LABEL_16;
      }
    }
    else
    {
      if ( v12 == v14 && v13 == (_DWORD)v15 )
      {
        LODWORD(v20) = 0;
        *(struct _RECTL *)v26 = *a2;
        updated = GreUpdateSprite(
                    a1,
                    0LL,
                    *((void **)v21 + 158),
                    0LL,
                    (struct tagPOINT *)v26,
                    (struct tagSIZE *)&v22,
                    0LL,
                    0LL,
                    0,
                    0LL,
                    0,
                    0LL,
                    0LL,
                    v9,
                    v20);
      }
      else
      {
        updated = bSetPreviewRectContent((void **)v21 + 12, a2);
      }
      v7 = updated;
      if ( !updated )
        goto LABEL_15;
    }
    *(struct _RECTL *)(v10 + 323) = *a2;
    goto LABEL_15;
  }
LABEL_16:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v23);
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v25);
  return v11;
}
