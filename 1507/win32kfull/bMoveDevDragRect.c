/*
 * XREFs of bMoveDevDragRect @ 0x1C027B430
 * Callers:
 *     bSetDevDragRect @ 0x1C00FA430 (bSetDevDragRect.c)
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008A54C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0091630 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall bMoveDevDragRect(HDEV a1, int *a2, int a3)
{
  HDEV v4; // rsi
  int v6; // r9d
  int v7; // edx
  _DWORD *v8; // r13
  int v9; // r10d
  int v10; // r11d
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // r15d
  int *v16; // r9
  _DWORD *v17; // r8
  int v18; // r10d
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // ebx
  HDEV v24; // r14
  int *v25; // rdi
  void **v26; // rsi
  void *v27; // r8
  __int64 v28; // rax
  __int64 v29; // rbx
  void **v30; // rdi
  struct tagSIZE v32; // [rsp+88h] [rbp-49h] BYREF
  _DWORD *v33; // [rsp+90h] [rbp-41h] BYREF
  HDEV v34; // [rsp+98h] [rbp-39h]
  _BYTE v35[8]; // [rsp+A0h] [rbp-31h] BYREF
  _BYTE v36[8]; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-21h] BYREF
  int v38; // [rsp+B8h] [rbp-19h] BYREF
  _DWORD v39[3]; // [rsp+BCh] [rbp-15h] BYREF
  int v40; // [rsp+C8h] [rbp-9h]
  int v41; // [rsp+CCh] [rbp-5h]
  int v42; // [rsp+D0h] [rbp-1h]
  int v43; // [rsp+D4h] [rbp+3h]
  int v44; // [rsp+D8h] [rbp+7h]
  int v45; // [rsp+DCh] [rbp+Bh]
  int v46; // [rsp+E0h] [rbp+Fh]
  int v47; // [rsp+E4h] [rbp+13h]
  int v48; // [rsp+E8h] [rbp+17h]
  int v49; // [rsp+ECh] [rbp+1Bh]
  int v50; // [rsp+F0h] [rbp+1Fh]
  int v51; // [rsp+F4h] [rbp+23h]

  v34 = a1;
  v4 = a1;
  v33 = a1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v36, ghsemDynamicModeChange);
  v37 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v35, (struct PDEVOBJ *)&v33);
  v6 = a2[3];
  v7 = a2[1];
  v8 = v33;
  v38 = *a2;
  v39[2] = v6;
  v43 = v6;
  v9 = v33[318];
  v10 = v33[319];
  v51 = v6;
  v39[0] = v7;
  v41 = v7;
  v11 = a2[2];
  v12 = v11;
  v13 = v33[321];
  v42 = v11;
  v47 = v7 + v9;
  v14 = v6 - v9;
  v39[1] = v38 + v9;
  v15 = 0;
  v44 = v38 + v9;
  v48 = v38 + v9;
  v16 = v39;
  v40 = v12 - v9;
  v17 = v39;
  v46 = v12 - v9;
  v45 = v7;
  v18 = 4;
  v50 = v40;
  v49 = v14;
  do
  {
    v19 = v10;
    v20 = v13;
    if ( *(v16 - 1) > v10 )
      v19 = *(v16 - 1);
    *(v17 - 1) = v19;
    if ( v16[1] < v13 )
      v20 = v16[1];
    v17[1] = v20;
    if ( v19 < v20 )
    {
      v21 = v8[320];
      v22 = v8[322];
      if ( *v16 > v21 )
        v21 = *v16;
      *v17 = v21;
      if ( v16[2] < v22 )
        v22 = v16[2];
      v17[2] = v22;
      if ( v21 < v22 )
      {
        v17 += 4;
        ++v15;
      }
    }
    v16 += 4;
    --v18;
  }
  while ( v18 );
  v23 = 0;
  if ( !v15 )
    goto LABEL_21;
  v24 = v34;
  v25 = &v38;
  v26 = (void **)(v8 + 308);
  do
  {
    v27 = *v26;
    v32.cx = v25[2] - *v25;
    v32.cy = v25[3] - v25[1];
    if ( v27 )
      GreUpdateSprite(
        v24,
        0LL,
        v27,
        0LL,
        (struct tagPOINT *)&v39[4 * v23 - 1],
        &v32,
        0LL,
        0LL,
        0,
        0LL,
        0x2000000u,
        0LL,
        0LL,
        a3,
        0);
    ++v23;
    ++v26;
    v25 += 4;
  }
  while ( v23 < v15 );
  if ( v23 < 4 )
  {
    v4 = v34;
LABEL_21:
    v28 = v23;
    v29 = 4 - v23;
    v30 = (void **)&v8[2 * v28 + 308];
    do
    {
      if ( *v30 )
        GreUpdateSprite(v4, 0LL, *v30, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0LL, a3 != 0 ? 0x2000000 : 0, 0LL, 0LL, a3, 0);
      ++v30;
      --v29;
    }
    while ( v29 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v35);
  SEMOBJ::vUnlock((SEMOBJ *)&v37);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v36);
  return 1LL;
}
