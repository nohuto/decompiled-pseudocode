/*
 * XREFs of bMoveDevDragRect @ 0x14021935C
 * Callers:
 *     bSetDevDragRect @ 0x14009C3F0 (bSetDevDragRect.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     GreUpdateSprite @ 0x140016514 (GreUpdateSprite.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?cIntersect@@YAKPEBU_RECTL@@PEAU1@J@Z @ 0x14021964C (-cIntersect@@YAKPEBU_RECTL@@PEAU1@J@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bMoveDevDragRect(Gre::Base *a1, LONG *a2, const struct _RECTL *a3, int a4)
{
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  HSEMAPHORE v9; // r13
  LONG v10; // r8d
  LONG v11; // r10d
  LONG v12; // eax
  Gre::Base *v13; // r14
  int v14; // r11d
  int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // edi
  struct _RECTL *v18; // rbx
  void **v19; // r14
  unsigned int v20; // r13d
  LONG v21; // ecx
  __int64 v23; // rbx
  __int64 v24; // rdi
  void **v25; // rbx
  int v26; // [rsp+70h] [rbp-90h]
  struct tagSIZE v27; // [rsp+88h] [rbp-78h] BYREF
  Gre::Base *v28; // [rsp+90h] [rbp-70h] BYREF
  HSEMAPHORE v29; // [rsp+98h] [rbp-68h]
  Gre::Base *v30; // [rsp+A0h] [rbp-60h]
  char v31[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-50h] BYREF
  struct _RECTL v33; // [rsp+C0h] [rbp-40h] BYREF
  int v34; // [rsp+D0h] [rbp-30h]
  LONG v35; // [rsp+D4h] [rbp-2Ch]
  LONG v36; // [rsp+D8h] [rbp-28h]
  LONG v37; // [rsp+DCh] [rbp-24h]
  int v38; // [rsp+E0h] [rbp-20h]
  LONG v39; // [rsp+E4h] [rbp-1Ch]
  int v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+ECh] [rbp-14h]
  int v42; // [rsp+F0h] [rbp-10h]
  int v43; // [rsp+F4h] [rbp-Ch]
  int v44; // [rsp+F8h] [rbp-8h]
  LONG v45; // [rsp+FCh] [rbp-4h]

  v27 = 0LL;
  v28 = a1;
  v8 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v32, v8);
  v9 = (HSEMAPHORE)(*(_QWORD *)v8 + 1144LL);
  v29 = v9;
  GreAcquireSemaphoreInternal(v9);
  GrepAcquireLockValidate<2>();
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v31, (struct PDEVOBJ *)&v28);
  v10 = a2[1];
  v11 = a2[3];
  v12 = *a2;
  v13 = v28;
  v30 = v28;
  v14 = *((_DWORD *)v28 + 314);
  v33.left = v12;
  v33.top = v10;
  v33.bottom = v11;
  v35 = v10;
  v15 = a2[2] - v14;
  v36 = a2[2];
  v34 = v15;
  v41 = v10 + v14;
  v40 = v15;
  v44 = v15;
  v43 = v11 - v14;
  v33.right = v12 + v14;
  v37 = v11;
  v38 = v12 + v14;
  v39 = v10;
  v42 = v12 + v14;
  v45 = v11;
  v16 = cIntersect(a3, &v33, v10);
  v17 = 0;
  if ( !v16 )
  {
LABEL_10:
    v23 = v17 + 152LL;
    v24 = 4 - v17;
    v25 = (void **)((char *)v13 + 8 * v23);
    if ( a4 )
    {
      do
      {
        if ( *v25 )
          GreUpdateSprite(a1, 0LL, *v25, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0LL, 0x2000000u, 0LL, 0LL, a4, v26, 0);
        ++v25;
        --v24;
      }
      while ( v24 );
    }
    else
    {
      do
      {
        if ( *v25 )
          GreUpdateSprite(a1, 0LL, *v25, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL, 0LL, 0, v26, 0);
        ++v25;
        --v24;
      }
      while ( v24 );
    }
    goto LABEL_7;
  }
  v18 = &v33;
  v19 = (void **)((char *)v13 + 1216);
  v20 = v16;
  do
  {
    v21 = v18->bottom - v18->top;
    v27.cx = v18->right - v18->left;
    v27.cy = v21;
    if ( *v19 )
      GreUpdateSprite(
        a1,
        0LL,
        *v19,
        0LL,
        (struct tagPOINT *)&v33 + 2 * v17,
        &v27,
        0LL,
        0LL,
        0,
        0LL,
        0x2000000u,
        0LL,
        0LL,
        a4,
        v26,
        0);
    ++v17;
    ++v19;
    ++v18;
  }
  while ( v17 < v20 );
  v9 = v29;
  if ( v17 < 4 )
  {
    v13 = v30;
    goto LABEL_10;
  }
LABEL_7:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v31);
  if ( v9 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      (__int64)v9);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v32);
  return 1LL;
}
