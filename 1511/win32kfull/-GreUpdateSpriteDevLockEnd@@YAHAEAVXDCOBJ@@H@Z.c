/*
 * XREFs of ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00326B0
 * Callers:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C002CD28 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002E950 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C01C30D8 (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002DDC0 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     GreUpdateSprite @ 0x1C0032AF0 (GreUpdateSprite.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00368B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C026C62C (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall GreUpdateSpriteDevLockEnd(struct XDCOBJ *a1, int a2)
{
  unsigned int v3; // r13d
  unsigned int updated; // edi
  HDEV v6; // rsi
  struct REGION *v7; // r8
  __int64 v9; // r10
  DC *v10; // r10
  struct _POINTL *v11; // rax
  struct tagRECT v12; // xmm0
  int v13; // r12d
  LONG *v14; // r12
  int v15; // [rsp+88h] [rbp-80h]
  struct tagSIZE v16; // [rsp+90h] [rbp-78h] BYREF
  struct REGION *v17; // [rsp+98h] [rbp-70h] BYREF
  __int64 HDEV; // [rsp+A0h] [rbp-68h] BYREF
  struct tagRECT v19; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v20[4]; // [rsp+B8h] [rbp-50h] BYREF
  struct tagRECT v21; // [rsp+BCh] [rbp-4Ch]
  char v22; // [rsp+CCh] [rbp-3Ch]
  __int64 v23; // [rsp+F0h] [rbp-18h]
  __int64 v24; // [rsp+108h] [rbp+0h]
  int v25; // [rsp+110h] [rbp+8h]
  int v26; // [rsp+138h] [rbp+30h]
  __int64 v27; // [rsp+148h] [rbp+40h]
  unsigned int v28; // [rsp+158h] [rbp+50h] BYREF
  _OWORD v29[20]; // [rsp+15Ch] [rbp+54h] BYREF

  v3 = 0;
  updated = 0;
  HDEV = UserGetHDEV();
  v6 = (HDEV)HDEV;
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&HDEV) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemSprite", ghsemSprite);
  }
  if ( !g_pDwmState )
  {
    GdiUpdateSpriteDevLockEnd(a1);
    goto LABEL_7;
  }
  if ( (unsigned int)GreGetBounds(**(_QWORD **)a1, &v19, 4LL) )
  {
    v9 = *(_QWORD *)a1;
    v16 = *(struct tagSIZE *)(*(_QWORD *)a1 + 528LL);
    v17 = *(struct REGION **)(v9 + 1544);
    if ( !v17 )
    {
      EtwDevLockEndUpdate(
        *(_QWORD *)(v9 + 488),
        (unsigned int)v16.cx,
        (unsigned int)v16.cy,
        (unsigned int)v19.left,
        v19.top,
        v19.right,
        v19.bottom);
      updated = GreUpdateSprite(
                  v6,
                  *(HWND *)(*(_QWORD *)a1 + 488LL),
                  0LL,
                  0LL,
                  0LL,
                  &v16,
                  **(HDC **)a1,
                  (struct tagPOINT *)&gptlZero,
                  0,
                  0LL,
                  1075838976,
                  &v19,
                  0LL,
                  1,
                  a2);
      goto LABEL_5;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v17) != 1 )
    {
      v11 = (struct _POINTL *)DC::eptlOrigin(v10);
      RGNOBJ::bOffset((RGNOBJ *)&v17, v11);
      v24 = 0LL;
      v25 = 0;
      v26 = 1;
      v27 = 0LL;
      v23 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v20, v17, (struct ERECTL *)&v19, 1);
      switch ( v22 )
      {
        case 1:
          v12 = v21;
LABEL_18:
          v13 = 0;
          v28 = 1;
          v29[0] = v12;
          v15 = 0;
LABEL_19:
          updated = 1;
          if ( v13 )
            goto LABEL_34;
          while ( 1 )
          {
            if ( v28 )
            {
              do
              {
                v14 = (LONG *)&v29[v3];
                if ( *v14 < v19.left )
                  *v14 = v19.left;
                if ( v14[1] < v19.top )
                  v14[1] = v19.top;
                if ( v14[2] > v19.right )
                  v14[2] = v19.right;
                if ( v14[3] > v19.bottom )
                  v14[3] = v19.bottom;
                EtwDevLockEndTightUpdate(
                  *(_QWORD *)(*(_QWORD *)a1 + 488LL),
                  (unsigned int)v16.cx,
                  (unsigned int)v16.cy,
                  (unsigned int)*v14,
                  v14[1],
                  v14[2],
                  v14[3]);
                if ( !(unsigned int)GreUpdateSprite(
                                      v6,
                                      *(HWND *)(*(_QWORD *)a1 + 488LL),
                                      0LL,
                                      0LL,
                                      0LL,
                                      &v16,
                                      **(HDC **)a1,
                                      (struct tagPOINT *)&gptlZero,
                                      0,
                                      0LL,
                                      1075838976,
                                      (struct tagRECT *)&v29[v3],
                                      0LL,
                                      1,
                                      a2) )
                  updated = 0;
                ++v3;
              }
              while ( v3 < v28 );
              v13 = v15;
            }
            v3 = 0;
            if ( !v13 )
              break;
LABEL_34:
            v13 = XCLIPOBJ::bEnum((XCLIPOBJ *)v20, 0x144u, (char *)&v28, 0LL);
            v15 = v13;
          }
          break;
        case 0:
          v12 = v19;
          goto LABEL_18;
        case 3:
          v13 = 1;
          v15 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v20, 0, 0, 4u, 0x14u);
          goto LABEL_19;
      }
    }
  }
LABEL_5:
  v7 = *(struct REGION **)(*(_QWORD *)a1 + 1544LL);
  if ( v7 && v7 != prgnDefault )
    FreeObject(*(_QWORD *)(*(_QWORD *)a1 + 1544LL), 4LL);
  *(_QWORD *)(*(_QWORD *)a1 + 1544LL) = 0LL;
LABEL_7:
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&HDEV) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  return updated;
}
