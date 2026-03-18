/*
 * XREFs of ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C026AAE4
 * Callers:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C004FFEC (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00418B4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C004A0F8 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0065F2C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ @ 0x1C02691F8 (--0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C026FBB4 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GdiUpdateSpriteDevLockEnd(struct XDCOBJ *a1)
{
  HDEV HDEV; // r14
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  DC *v6; // r8
  struct _POINTL *v7; // rax
  int v8; // ebx
  struct _RECTL v9; // xmm0
  unsigned int i; // esi
  struct _RECTL *v11; // r8
  struct REGION *v13; // [rsp+38h] [rbp-D0h] BYREF
  HDEV v14; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v15[8]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-B0h]
  struct _RECTL v18; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v19[20]; // [rsp+78h] [rbp-90h] BYREF
  char v20; // [rsp+8Ch] [rbp-7Ch]
  __int64 v21; // [rsp+B0h] [rbp-58h]
  __int64 v22; // [rsp+C8h] [rbp-40h]
  int v23; // [rsp+D0h] [rbp-38h]
  int v24; // [rsp+F8h] [rbp-10h]
  __int64 v25; // [rsp+108h] [rbp+0h]
  unsigned int v26; // [rsp+118h] [rbp+10h] BYREF
  _OWORD v27[20]; // [rsp+11Ch] [rbp+14h] BYREF

  HDEV = (HDEV)UserGetHDEV();
  if ( !(unsigned int)GreGetBounds(**(_QWORD **)a1, &v18, 4LL) )
  {
LABEL_28:
    REGION::vDeleteREGION(*(REGION **)(*(_QWORD *)a1 + 1568LL));
    *(_QWORD *)(*(_QWORD *)a1 + 1568LL) = 0LL;
    return 0LL;
  }
  v14 = HDEV;
  if ( ((_DWORD)HDEV[14] & 0x400) == 0 )
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v14);
    UNDOENGUPDATEDEVICESURFACE::UNDOENGUPDATEDEVICESURFACE((UNDOENGUPDATEDEVICESURFACE *)&v16, v3, v4, v5);
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v15, (struct PDEVOBJ *)&v14);
    v13 = *(struct REGION **)(*(_QWORD *)a1 + 1568LL);
    if ( !v13 )
    {
      bSpUpdateSpriteDevLockEnd(HDEV, a1, &v18);
      goto LABEL_26;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v13) == 1 )
      goto LABEL_26;
    v7 = (struct _POINTL *)DC::eptlOrigin(v6);
    RGNOBJ::bOffset((RGNOBJ *)&v13, v7);
    v22 = 0LL;
    v23 = 0;
    v25 = 0LL;
    v21 = 0LL;
    v24 = 1;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v19, v13, (struct ERECTL *)&v18, 1);
    if ( v20 )
    {
      if ( v20 != 1 )
      {
        if ( v20 == 3 )
        {
          v8 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v19, 0, 0, 4u, 0x14u);
LABEL_13:
          if ( !v8 )
            goto LABEL_15;
          do
          {
            v8 = XCLIPOBJ::bEnum((XCLIPOBJ *)v19, 0x144u, (char *)&v26, 0LL);
LABEL_15:
            for ( i = 0; i < v26; ++i )
            {
              v11 = (struct _RECTL *)&v27[i];
              if ( v11->left < v18.left )
                v11->left = v18.left;
              if ( v11->right > v18.right )
                v11->right = v18.right;
              if ( v11->top < v18.top )
                v11->top = v18.top;
              if ( v11->bottom > v18.bottom )
                v11->bottom = v18.bottom;
              bSpUpdateSpriteDevLockEnd(HDEV, a1, v11);
            }
          }
          while ( v8 );
        }
LABEL_26:
        SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v15);
        if ( v17 )
          *(_BYTE *)(v17 + 328) = v16;
        goto LABEL_28;
      }
      v9 = *(struct _RECTL *)&v19[4];
    }
    else
    {
      v9 = v18;
    }
    v27[0] = v9;
    v26 = 1;
    v8 = 0;
    goto LABEL_13;
  }
  return 0LL;
}
