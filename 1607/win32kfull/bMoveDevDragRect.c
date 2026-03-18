/*
 * XREFs of bMoveDevDragRect @ 0x1C0278970
 * Callers:
 *     bSetDevDragRect @ 0x1C00940E0 (bSetDevDragRect.c)
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C00503E0 (GreUpdateSprite.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C005DCD4 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall bMoveDevDragRect(HDEV a1, int *a2, int a3)
{
  HDEV v4; // r14
  int v6; // r9d
  int v7; // edx
  _DWORD *v8; // rsi
  int v9; // r10d
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // r8
  int *v13; // r9
  unsigned int v14; // r12d
  int v15; // r10d
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // ebx
  HDEV v21; // r15
  int *v22; // rdi
  void **v23; // r14
  void *v24; // r8
  __int64 v25; // rdi
  __int64 v26; // rbx
  void **v27; // rdi
  struct _LUID *v29; // [rsp+78h] [rbp-59h]
  _DWORD *v30; // [rsp+88h] [rbp-49h] BYREF
  __int64 v31; // [rsp+90h] [rbp-41h] BYREF
  int v32[2]; // [rsp+98h] [rbp-39h]
  _BYTE v33[8]; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-29h] BYREF
  _BYTE v35[8]; // [rsp+B0h] [rbp-21h] BYREF
  int v36; // [rsp+B8h] [rbp-19h] BYREF
  _DWORD v37[15]; // [rsp+BCh] [rbp-15h] BYREF

  *(_QWORD *)v32 = a1;
  v4 = a1;
  v30 = a1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v35, ghsemDynamicModeChange);
  v34 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v33, (struct PDEVOBJ *)&v30);
  v6 = a2[3];
  v7 = a2[1];
  v8 = v30;
  v9 = v30[318];
  v36 = *a2;
  v37[2] = v6;
  v37[6] = v6;
  v37[14] = v6;
  v10 = a2[2] - v9;
  v37[5] = a2[2];
  v37[1] = v36 + v9;
  v37[10] = v7 + v9;
  v11 = v6 - v9;
  v37[7] = v36 + v9;
  v37[11] = v36 + v9;
  v37[0] = v7;
  v12 = v37;
  v37[3] = v10;
  v13 = v37;
  v37[4] = v7;
  v14 = 0;
  v37[9] = v10;
  v15 = 4;
  v37[8] = v7;
  v37[13] = v10;
  v37[12] = v11;
  do
  {
    v16 = v8[319];
    if ( *(v13 - 1) > v16 )
      v16 = *(v13 - 1);
    *(v12 - 1) = v16;
    v17 = v8[321];
    if ( v13[1] < v17 )
      v17 = v13[1];
    v12[1] = v17;
    if ( v16 < v17 )
    {
      v18 = v8[320];
      if ( *v13 > v18 )
        v18 = *v13;
      *v12 = v18;
      v19 = v8[322];
      if ( v13[2] < v19 )
        v19 = v13[2];
      v12[2] = v19;
      if ( v18 < v19 )
      {
        v12 += 4;
        ++v14;
      }
    }
    v13 += 4;
    --v15;
  }
  while ( v15 );
  v20 = 0;
  if ( !v14 )
    goto LABEL_21;
  v21 = *(HDEV *)v32;
  v22 = &v36;
  v23 = (void **)(v8 + 308);
  do
  {
    v24 = *v23;
    LODWORD(v31) = v22[2] - *v22;
    HIDWORD(v31) = v22[3] - v22[1];
    if ( v24 )
    {
      LODWORD(v29) = 0;
      GreUpdateSprite(
        v21,
        0LL,
        v24,
        0LL,
        (struct tagPOINT *)&v37[4 * v20 - 1],
        (struct tagSIZE *)&v31,
        0LL,
        0LL,
        0,
        0LL,
        0x2000000u,
        0LL,
        0LL,
        a3,
        v29);
    }
    ++v20;
    ++v23;
    v22 += 4;
  }
  while ( v20 < v14 );
  if ( v20 < 4 )
  {
    v4 = *(HDEV *)v32;
LABEL_21:
    v25 = v20 + 154LL;
    v26 = 4 - v20;
    v27 = (void **)&v8[2 * v25];
    do
    {
      if ( *v27 )
      {
        LODWORD(v29) = 0;
        GreUpdateSprite(v4, 0LL, *v27, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0LL, a3 != 0 ? 0x2000000 : 0, 0LL, 0LL, a3, v29);
      }
      ++v27;
      --v26;
    }
    while ( v26 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v33);
  SEMOBJ::vUnlock((SEMOBJ *)&v34);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v35);
  return 1LL;
}
