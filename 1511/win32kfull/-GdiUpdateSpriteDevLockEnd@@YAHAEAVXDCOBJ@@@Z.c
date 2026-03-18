/*
 * XREFs of ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C026C62C
 * Callers:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00326B0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002DDC0 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00368B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C007B840 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ @ 0x1C026AD38 (--0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C0271688 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GdiUpdateSpriteDevLockEnd(struct XDCOBJ *a1)
{
  HDEV HDEV; // r14
  DC *v3; // r8
  struct _POINTL *v4; // rax
  int v5; // ebx
  struct _RECTL v6; // xmm0
  unsigned int i; // esi
  struct _RECTL *v8; // r8
  struct REGION *v10; // [rsp+38h] [rbp-D0h] BYREF
  HDEV v11; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v12[8]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-B0h]
  struct _RECTL v15; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v16[20]; // [rsp+78h] [rbp-90h] BYREF
  char v17; // [rsp+8Ch] [rbp-7Ch]
  __int64 v18; // [rsp+B0h] [rbp-58h]
  __int64 v19; // [rsp+C8h] [rbp-40h]
  int v20; // [rsp+D0h] [rbp-38h]
  int v21; // [rsp+F8h] [rbp-10h]
  __int64 v22; // [rsp+108h] [rbp+0h]
  unsigned int v23; // [rsp+118h] [rbp+10h] BYREF
  _OWORD v24[20]; // [rsp+11Ch] [rbp+14h] BYREF

  HDEV = (HDEV)UserGetHDEV();
  if ( !(unsigned int)GreGetBounds(**(_QWORD **)a1, &v15, 4LL) )
  {
LABEL_28:
    REGION::vDeleteREGION(*(REGION **)(*(_QWORD *)a1 + 1544LL));
    *(_QWORD *)(*(_QWORD *)a1 + 1544LL) = 0LL;
    return 0LL;
  }
  v11 = HDEV;
  if ( ((_DWORD)HDEV[14] & 0x400) == 0 )
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v11);
    UNDOENGUPDATEDEVICESURFACE::UNDOENGUPDATEDEVICESURFACE((UNDOENGUPDATEDEVICESURFACE *)&v13);
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v12, (struct PDEVOBJ *)&v11);
    v10 = *(struct REGION **)(*(_QWORD *)a1 + 1544LL);
    if ( !v10 )
    {
      bSpUpdateSpriteDevLockEnd(HDEV, a1, &v15);
      goto LABEL_26;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v10) == 1 )
      goto LABEL_26;
    v4 = (struct _POINTL *)DC::eptlOrigin(v3);
    RGNOBJ::bOffset((RGNOBJ *)&v10, v4);
    v19 = 0LL;
    v20 = 0;
    v22 = 0LL;
    v18 = 0LL;
    v21 = 1;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v16, v10, (struct ERECTL *)&v15, 1);
    if ( v17 )
    {
      if ( v17 != 1 )
      {
        if ( v17 == 3 )
        {
          v5 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v16, 0, 0, 4u, 0x14u);
LABEL_13:
          if ( !v5 )
            goto LABEL_15;
          do
          {
            v5 = XCLIPOBJ::bEnum((XCLIPOBJ *)v16, 0x144u, (char *)&v23, 0LL);
LABEL_15:
            for ( i = 0; i < v23; ++i )
            {
              v8 = (struct _RECTL *)&v24[i];
              if ( v8->left < v15.left )
                v8->left = v15.left;
              if ( v8->right > v15.right )
                v8->right = v15.right;
              if ( v8->top < v15.top )
                v8->top = v15.top;
              if ( v8->bottom > v15.bottom )
                v8->bottom = v15.bottom;
              bSpUpdateSpriteDevLockEnd(HDEV, a1, v8);
            }
          }
          while ( v5 );
        }
LABEL_26:
        SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v12);
        if ( v14 )
          *(_BYTE *)(v14 + 328) = v13;
        goto LABEL_28;
      }
      v6 = *(struct _RECTL *)&v16[4];
    }
    else
    {
      v6 = v15;
    }
    v24[0] = v6;
    v23 = 1;
    v5 = 0;
    goto LABEL_13;
  }
  return 0LL;
}
