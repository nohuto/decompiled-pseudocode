/*
 * XREFs of ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C006BA14
 * Callers:
 *     EngGradientFill @ 0x1C0061580 (EngGradientFill.c)
 * Callees:
 *     ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x1C0067EE8 (-bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6.c)
 *     ?bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z @ 0x1C0067FE0 (-bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C006807C (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?MDiv64@@YA_J_J00@Z @ 0x1C006BE08 (-MDiv64@@YA_J_J00@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bRectangleMesh(
        struct SURFACE *a1,
        struct _XLATEOBJ *a2,
        struct _TRIVERTEX *a3,
        int a4,
        struct _GRADIENT_RECT *a5,
        unsigned int a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9)
{
  int v9; // r15d
  struct _TRIVERTEX *v10; // rbx
  unsigned int v13; // esi
  struct _GRADIENT_RECT *v14; // r11
  __int64 v15; // rdi
  void (__fastcall *v16)(struct SURFACE *, struct _GRADIENTRECTDATA *); // r12
  unsigned int UpperLeft; // edx
  unsigned int LowerRight; // ecx
  struct _TRIVERTEX *v19; // rdx
  struct _TRIVERTEX *v20; // r8
  LONG y; // eax
  LONG v22; // ecx
  int v23; // r9d
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r10
  __int64 v29; // r8
  __int64 v30; // r11
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  LONG x; // ecx
  __int64 v38; // rbx
  __int64 v39; // r8
  __int64 v40; // r10
  __int64 v41; // r8
  __int64 v42; // r11
  __int64 v43; // r8
  __int64 v44; // [rsp+30h] [rbp-168h] BYREF
  struct _GRADIENT_RECT *v45; // [rsp+38h] [rbp-160h]
  struct _TRIVERTEX *v46; // [rsp+40h] [rbp-158h]
  void (*v47[3])(struct SURFACE *, struct _GRADIENTRECTDATA *); // [rsp+48h] [rbp-150h] BYREF
  __int64 v48; // [rsp+60h] [rbp-138h]
  void (*v49)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+68h] [rbp-130h] BYREF
  __int128 v50; // [rsp+70h] [rbp-128h] BYREF
  LONG v51; // [rsp+80h] [rbp-118h]
  LONG v52; // [rsp+84h] [rbp-114h]
  LONG v53; // [rsp+88h] [rbp-110h]
  LONG v54; // [rsp+8Ch] [rbp-10Ch]
  unsigned __int64 v55; // [rsp+A0h] [rbp-F8h]
  unsigned __int64 v56; // [rsp+A8h] [rbp-F0h]
  unsigned __int64 v57; // [rsp+B0h] [rbp-E8h]
  unsigned __int64 v58; // [rsp+B8h] [rbp-E0h]
  __int128 v59; // [rsp+C0h] [rbp-D8h]
  __int128 v60; // [rsp+D0h] [rbp-C8h]
  __int128 v61; // [rsp+E0h] [rbp-B8h]
  __int128 v62; // [rsp+F0h] [rbp-A8h]
  __int64 v63; // [rsp+100h] [rbp-98h]
  unsigned int v64; // [rsp+108h] [rbp-90h]
  struct _XLATEOBJ *v65; // [rsp+110h] [rbp-88h]
  __int64 *v66; // [rsp+118h] [rbp-80h]
  struct _TRIVERTEX v67; // [rsp+130h] [rbp-68h] BYREF
  struct _TRIVERTEX v68; // [rsp+140h] [rbp-58h] BYREF

  v9 = a4;
  v10 = a3;
  v46 = a3;
  v47[2] = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))a1;
  v47[1] = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))a3;
  v45 = a5;
  v13 = 1;
  v44 = *((_QWORD *)a1 + 15);
  if ( v44 || (v48 = *((_QWORD *)a1 + 6), (v44 = *(_QWORD *)(v48 + 1832)) != 0) )
  {
    bDetermineTriangleFillRoutine(a1, (struct XEPALOBJ *)&v44, &v49, v47);
    v65 = a2;
    v66 = &v44;
    v63 = (__int64)*a9;
    v50 = (__int128)*a8;
    v15 = 0LL;
    v16 = (void (__fastcall *)(struct SURFACE *, struct _GRADIENTRECTDATA *))v47[0];
    while ( (unsigned int)v15 < a6 )
    {
      UpperLeft = v14[v15].UpperLeft;
      LowerRight = v14[v15].LowerRight;
      if ( UpperLeft > v9 - 1 || LowerRight > v9 - 1 )
        return 0;
      v68 = v10[UpperLeft];
      v67 = v10[LowerRight];
      v19 = &v68;
      v20 = &v67;
      if ( a7 )
      {
        if ( v68.y > v67.y )
        {
          v19 = &v67;
          v20 = &v68;
        }
        x = v20->x;
        if ( v19->x > v20->x )
        {
          v20->x = v19->x;
          v19->x = x;
        }
      }
      else
      {
        if ( v68.x > v67.x )
        {
          v19 = &v67;
          v20 = &v68;
        }
        y = v19->y;
        v22 = v20->y;
        if ( y > v22 )
        {
          v20->y = y;
          v19->y = v22;
        }
      }
      v51 = v19->x;
      v52 = v19->y;
      v53 = v20->x;
      v54 = v20->y;
      v64 = a7;
      v23 = v54 - v52;
      if ( v53 - v51 > 0 && v23 > 0 )
      {
        v55 = (unsigned __int64)v19->Red << 40;
        v56 = (unsigned __int64)v19->Green << 40;
        v57 = (unsigned __int64)v19->Blue << 40;
        v24 = (unsigned __int64)v19->Alpha << 40;
        v58 = v24;
        v25 = ((unsigned __int64)v20->Red << 40) - v55;
        if ( a7 )
        {
          v61 = 0LL;
          v62 = 0LL;
          v38 = ((unsigned __int64)v20->Alpha << 40) - v24;
          *(_QWORD *)&v59 = MDiv64(v25, 1LL, v23);
          *((_QWORD *)&v59 + 1) = MDiv64(v40, 1LL, v39);
          *(_QWORD *)&v60 = MDiv64(v42, 1LL, v41);
          *((_QWORD *)&v60 + 1) = MDiv64(v38, 1LL, v43);
        }
        else
        {
          v59 = 0LL;
          v60 = 0LL;
          v26 = ((unsigned __int64)v20->Alpha << 40) - v24;
          *(_QWORD *)&v61 = MDiv64(v25, 1LL, v53 - v51);
          *((_QWORD *)&v61 + 1) = MDiv64(v28, 1LL, v27);
          *(_QWORD *)&v62 = MDiv64(v30, 1LL, v29);
          *((_QWORD *)&v62 + 1) = MDiv64(v26, 1LL, v31);
        }
        if ( (unsigned int)bCalcGradientRectOffsets((struct _GRADIENTRECTDATA *)&v50) )
        {
          if ( bUMPDSecurityGateEx(v33, v32, v34, v35) && !v65 && (v16 == vFillGRectDIB4 || v16 == vFillGRectDIB8) )
          {
            if ( gfUMPDDebug )
              DbgPrint(
                "windows\\core\\ntgdi\\gre\\windows\\trimesh.cxx:%d:bRectangleMesh:pfnG references NULL grData.pxlo.\n",
                1930);
            return v13;
          }
          v16(a1, (struct _GRADIENTRECTDATA *)&v50);
          v14 = v45;
          v10 = v46;
        }
        else
        {
          v14 = v45;
          v10 = v46;
        }
      }
      v15 = (unsigned int)(v15 + 1);
      v9 = a4;
    }
  }
  return v13;
}
