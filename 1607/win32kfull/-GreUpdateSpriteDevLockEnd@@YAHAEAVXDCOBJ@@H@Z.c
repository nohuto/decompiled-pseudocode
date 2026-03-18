/*
 * XREFs of ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C004FFEC
 * Callers:
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C004694C (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0046AA0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C0048658 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00418B4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C004A0F8 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     GreUpdateSprite @ 0x1C00503E0 (GreUpdateSprite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C026AAE4 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall GreUpdateSpriteDevLockEnd(struct XDCOBJ *a1, int a2)
{
  unsigned int v2; // r13d
  unsigned int updated; // r12d
  int v6; // edi
  struct REGION *v7; // r8
  __int64 v9; // r10
  struct REGION *v10; // rax
  __int64 v11; // rbx
  DC *v12; // r10
  struct _POINTL *v13; // rax
  __int128 v14; // xmm0
  int v15; // r15d
  int *v16; // rdi
  int v17; // eax
  struct _LUID *v18; // [rsp+78h] [rbp-90h]
  int v19; // [rsp+88h] [rbp-80h]
  __int64 v20; // [rsp+90h] [rbp-78h] BYREF
  struct _LUID *v21; // [rsp+98h] [rbp-70h]
  struct REGION *v22; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-60h] BYREF
  int v24[2]; // [rsp+B0h] [rbp-58h]
  __int64 v25[2]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v26[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v27; // [rsp+CCh] [rbp-3Ch]
  char v28; // [rsp+DCh] [rbp-2Ch]
  __int64 v29; // [rsp+100h] [rbp-8h]
  __int64 v30; // [rsp+118h] [rbp+10h]
  int v31; // [rsp+120h] [rbp+18h]
  int v32; // [rsp+148h] [rbp+40h]
  __int64 v33; // [rsp+158h] [rbp+50h]
  unsigned int v34; // [rsp+168h] [rbp+60h] BYREF
  _OWORD v35[20]; // [rsp+16Ch] [rbp+64h] BYREF

  v2 = 0;
  LODWORD(v21) = a2;
  updated = 0;
  *(_QWORD *)v24 = UserGetHDEV();
  v6 = v24[0];
  v23 = *(_QWORD *)v24;
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v23) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemSprite", ghsemSprite);
  }
  if ( !g_pDwmState )
  {
    GdiUpdateSpriteDevLockEnd(a1);
    goto LABEL_7;
  }
  if ( (unsigned int)GreGetBounds(**(_QWORD **)a1, v25, 4LL) )
  {
    v9 = *(_QWORD *)a1;
    v10 = *(struct REGION **)(*(_QWORD *)a1 + 1568LL);
    v11 = *(_QWORD *)(*(_QWORD *)a1 + 528LL);
    v20 = v11;
    v22 = v10;
    if ( !v10 )
    {
      EtwDevLockEndUpdate(
        *(_QWORD *)(v9 + 488),
        (unsigned int)v11,
        HIDWORD(v20),
        LODWORD(v25[0]),
        HIDWORD(v25[0]),
        v25[1],
        HIDWORD(v25[1]));
      LODWORD(v18) = a2;
      updated = GreUpdateSprite(
                  v6,
                  *(_QWORD *)(*(_QWORD *)a1 + 488LL),
                  0,
                  0,
                  0LL,
                  (__int64)&v20,
                  **(_QWORD **)a1,
                  (__int64)&gptlZero,
                  0,
                  0LL,
                  1075838976,
                  (__int64)v25,
                  0LL,
                  1,
                  v18);
      goto LABEL_5;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v22) != 1 )
    {
      v13 = (struct _POINTL *)DC::eptlOrigin(v12);
      RGNOBJ::bOffset((RGNOBJ *)&v22, v13);
      v30 = 0LL;
      v31 = 0;
      v32 = 1;
      v33 = 0LL;
      v29 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v26, v22, (struct ERECTL *)v25, 1);
      switch ( v28 )
      {
        case 0:
          v14 = *(_OWORD *)v25;
          goto LABEL_18;
        case 1:
          v14 = v27;
LABEL_18:
          v15 = 0;
          v34 = 1;
          v35[0] = v14;
          v19 = 0;
LABEL_19:
          updated = 1;
          if ( v15 )
            goto LABEL_32;
          while ( 1 )
          {
            if ( v34 )
            {
              do
              {
                v16 = (int *)&v35[v2];
                if ( *v16 < SLODWORD(v25[0]) )
                  *v16 = v25[0];
                if ( v16[1] < SHIDWORD(v25[0]) )
                  v16[1] = HIDWORD(v25[0]);
                if ( v16[2] > SLODWORD(v25[1]) )
                  v16[2] = v25[1];
                if ( v16[3] > SHIDWORD(v25[1]) )
                  v16[3] = HIDWORD(v25[1]);
                EtwDevLockEndTightUpdate(
                  *(_QWORD *)(*(_QWORD *)a1 + 488LL),
                  (unsigned int)v11,
                  HIDWORD(v20),
                  (unsigned int)*v16,
                  v16[1],
                  v16[2],
                  v16[3]);
                LODWORD(v18) = (_DWORD)v21;
                v17 = GreUpdateSprite(
                        v24[0],
                        *(_QWORD *)(*(_QWORD *)a1 + 488LL),
                        0,
                        0,
                        0LL,
                        (__int64)&v20,
                        **(_QWORD **)a1,
                        (__int64)&gptlZero,
                        0,
                        0LL,
                        1075838976,
                        (__int64)&v35[v2],
                        0LL,
                        1,
                        v18);
                LODWORD(v11) = v20;
                ++v2;
                updated &= -(v17 != 0);
              }
              while ( v2 < v34 );
              v15 = v19;
            }
            v2 = 0;
            if ( !v15 )
              break;
LABEL_32:
            v15 = XCLIPOBJ::bEnum((XCLIPOBJ *)v26, 0x144u, (char *)&v34, 0LL);
            v19 = v15;
          }
          break;
        case 3:
          v19 = 1;
          v15 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v26, 0, 0, 4u, 0x14u);
          goto LABEL_19;
      }
    }
  }
LABEL_5:
  v7 = *(struct REGION **)(*(_QWORD *)a1 + 1568LL);
  if ( v7 && v7 != prgnDefault )
    FreeObject(*(_QWORD *)(*(_QWORD *)a1 + 1568LL), 4LL);
  *(_QWORD *)(*(_QWORD *)a1 + 1568LL) = 0LL;
LABEL_7:
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v23) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  return updated;
}
