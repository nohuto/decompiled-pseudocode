/*
 * XREFs of ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C0295BE0
 * Callers:
 *     <none>
 * Callees:
 *     EngDrawStream @ 0x1C00353A0 (EngDrawStream.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025DDFC (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C026AD98 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0294028 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0294198 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0299194 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C029946C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02995A4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     OffDrawStream @ 0x1C02C024C (OffDrawStream.c)
 */

__int64 __fastcall MulDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        void *a8,
        struct _DSSTATE *a9)
{
  struct _XLATEOBJ *v10; // rsi
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  int v16; // r12d
  int v17; // ebx
  int Surface; // r14d
  BOOL v19; // edi
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // r12
  struct _DISPSURF *v23; // rax
  struct _XLATEOBJ *v24; // rdi
  __int64 pulXlate; // r14
  struct PALETTE *v26; // r13
  __int64 v27; // rcx
  __int64 v28; // rax
  bool v29; // zf
  int v30; // r9d
  int iUniq; // r12d
  int v32; // r11d
  int flXlate; // r10d
  unsigned int v34; // r8d
  __int64 v35; // rdx
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  int v39; // r8d
  int v40; // edx
  int v41; // ecx
  __int64 v42; // r9
  struct _SURFOBJ *v43; // r14
  int v44; // r8d
  int v45; // edx
  int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rbx
  unsigned int v49; // eax
  __int64 (__fastcall *v50)(__int64, __int64, __int64, __int64, int, struct _POINTL *, unsigned int, __int64, _QWORD *); // r10
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  int v55; // [rsp+60h] [rbp-A0h]
  __int64 v56; // [rsp+68h] [rbp-98h]
  __int64 v57; // [rsp+78h] [rbp-88h] BYREF
  int v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+88h] [rbp-78h] BYREF
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  struct _XLATEOBJ *v61; // [rsp+98h] [rbp-68h] BYREF
  struct _SURFOBJ *v62; // [rsp+A0h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-58h]
  __int64 v64; // [rsp+B0h] [rbp-50h]
  struct _SURFOBJ *v65; // [rsp+B8h] [rbp-48h]
  __int64 v66; // [rsp+C0h] [rbp-40h]
  __int64 v67; // [rsp+C8h] [rbp-38h]
  __int64 v68; // [rsp+D0h] [rbp-30h]
  __int64 v69; // [rsp+D8h] [rbp-28h]
  struct _XLATEOBJ *v70; // [rsp+E0h] [rbp-20h]
  _BYTE v71[64]; // [rsp+F0h] [rbp-10h] BYREF
  struct _DISPSURF *v72; // [rsp+130h] [rbp+30h]
  int v73[2]; // [rsp+138h] [rbp+38h]
  struct _CLIPOBJ *v74; // [rsp+140h] [rbp+40h]
  int v75[6]; // [rsp+148h] [rbp+48h]
  _BYTE v76[96]; // [rsp+160h] [rbp+60h] BYREF
  int v77[2]; // [rsp+1C0h] [rbp+C0h]
  _BYTE v78[96]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v79; // [rsp+230h] [rbp+130h]

  v10 = a4;
  v66 = (__int64)a6;
  v64 = (__int64)a8;
  v69 = *((_QWORD *)a9 + 5);
  v67 = *((_QWORD *)a9 + 6);
  v68 = *((_QWORD *)a9 + 4);
  v13 = *((_DWORD *)a9 + 1);
  v65 = a1;
  v58 = v13;
  v62 = a2;
  v70 = a4;
  v14 = 1;
  v15 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 48);
  if ( a2->iType != 1 || !v15 || (*(_DWORD *)(v15 + 56) & 0x20000) == 0 )
  {
    v55 = 1;
    v16 = 1;
    v17 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v71, a1, a3, a5);
    MULTISURF::MULTISURF((MULTISURF *)v76, a2);
    if ( v17 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v78, v65);
      v55 = EngDrawStream(v79, *(__int64 *)v77, (__int64)a3, (__int64)v10, (int)a5, (struct _POINTL *)v66, a7, v64, a9);
      v16 = v55;
      MULTISURF::~MULTISURF((MULTISURF *)v78);
    }
    if ( !Surface )
    {
LABEL_85:
      v14 = v16;
      MULTISURF::~MULTISURF((MULTISURF *)v76);
      return v14;
    }
    while ( 1 )
    {
      v61 = 0LL;
      v59 = 0LL;
      v57 = 0LL;
      v60 = 0LL;
      v19 = MULTISURF::bLoadSource((MULTISURF *)v76, v72) == 0;
      v56 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v73);
      v21 = v56;
      if ( !v19 )
      {
        v22 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v77);
        v63 = v22;
        v23 = v72;
        if ( !*((_DWORD *)v72 + 6) )
          goto LABEL_75;
        v24 = v10;
        pulXlate = *(_QWORD *)(v22 + 120);
        v26 = ppalDefault;
        v27 = *((_QWORD *)v72 + 6);
        if ( (*(_DWORD *)(v27 + 2196) & 0x100) != 0 )
          v26 = DrvRealizeHalftonePalette((_QWORD *)v27, 0);
        if ( !pulXlate )
        {
          if ( v10 && v10[1].pulXlate )
          {
            pulXlate = (__int64)v10[1].pulXlate;
          }
          else
          {
            v28 = SURFOBJ_TO_SURFACE_NOT_NULL(v65);
            if ( !v10 || (v10->flXlate & 1) != 0 )
            {
              v29 = *(_QWORD *)v77 == (_QWORD)v62;
            }
            else
            {
              v26 = *(struct PALETTE **)&v10[2].iSrcType;
              if ( !v26 )
                goto LABEL_83;
              v29 = *(_DWORD *)(v22 + 96) == *(_DWORD *)(v28 + 96);
            }
            if ( v29 )
              pulXlate = *(_QWORD *)(v28 + 120);
          }
        }
        v30 = 0;
        if ( pulXlate )
        {
          if ( (*(_DWORD *)(pulXlate + 24) & 0x800) != 0 )
          {
            v30 = 0x4000;
            if ( v26 == ppalDefault )
              v30 = 0x2000;
          }
        }
        if ( v10 )
          iUniq = v10[1].iUniq;
        else
          iUniq = 0;
        if ( v10 )
          v32 = *(_DWORD *)&v10[1].iSrcType;
        else
          v32 = 0;
        if ( v10 )
          flXlate = v10[1].flXlate;
        else
          flXlate = 0;
        if ( v10 )
          v34 = v10[3].iUniq;
        else
          v34 = 0;
        if ( v10 )
          v35 = (__int64)v10[2].pulXlate;
        else
          v35 = 0LL;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v61,
                             v35,
                             v34,
                             pulXlate,
                             *(_QWORD *)(v56 + 120),
                             (__int64)ppalDefault,
                             (__int64)v26,
                             flXlate,
                             v32,
                             iUniq,
                             v30) )
        {
          v10 = v61;
          v36 = v24 ? v24[1].iUniq : 0;
          v37 = v24 ? *(_DWORD *)&v24[1].iSrcType : 0;
          v38 = v24 ? v24[1].flXlate : 0;
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                               &v59,
                               0LL,
                               0,
                               *(_QWORD *)(v56 + 120),
                               (__int64)gppalRGB,
                               (__int64)v26,
                               (__int64)v26,
                               v38,
                               v37,
                               v36,
                               0) )
          {
            *((_QWORD *)a9 + 5) = v59;
            v39 = v24 ? v24[1].iUniq : 0;
            v40 = v24 ? *(_DWORD *)&v24[1].iSrcType : 0;
            v41 = v24 ? v24[1].flXlate : 0;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v57,
                                 0LL,
                                 0,
                                 (__int64)gppalRGB,
                                 *(_QWORD *)(v56 + 120),
                                 (__int64)v26,
                                 (__int64)v26,
                                 v41,
                                 v40,
                                 v39,
                                 0) )
            {
              v42 = *(_QWORD *)v77;
              v43 = v62;
              *((_QWORD *)a9 + 6) = v57;
              if ( (struct _SURFOBJ *)v42 == v43 )
              {
                v23 = v72;
                v22 = v63;
                v21 = v56;
                goto LABEL_76;
              }
              if ( v24 )
                v44 = v24[1].iUniq;
              else
                v44 = 0;
              if ( v24 )
                v45 = *(_DWORD *)&v24[1].iSrcType;
              else
                v45 = 0;
              if ( v24 )
                v46 = v24[1].flXlate;
              else
                v46 = 0;
              v22 = v63;
              if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                   &v60,
                                   0LL,
                                   0,
                                   *(_QWORD *)(v63 + 120),
                                   (__int64)gppalRGB,
                                   (__int64)ppalDefault,
                                   (__int64)v26,
                                   v46,
                                   v45,
                                   v44,
                                   0) )
              {
                *((_QWORD *)a9 + 4) = v60;
                v47 = SURFOBJ_TO_SURFACE_NOT_NULL(v43);
                v48 = *(_QWORD *)(v22 + 120);
                v49 = ulIndexToRGB(*(_QWORD *)(v47 + 120), ppalDefault, *((unsigned int *)a9 + 1));
                v21 = v56;
                *((_DWORD *)a9 + 1) = ulGetNearestIndexFromColorref(v48, ppalDefault, v49, 1LL);
                v23 = v72;
LABEL_75:
                v42 = *(_QWORD *)v77;
LABEL_76:
                v50 = EngDrawStream;
                if ( *(_QWORD *)(*((_QWORD *)v23 + 7) + 3440LL) )
                  LODWORD(v50) = *(_QWORD *)(*((_QWORD *)v23 + 7) + 3440LL);
                if ( *(_WORD *)(v42 + 76) == 1 && *(_QWORD *)(v22 + 48) != *(_QWORD *)(v21 + 48) )
                  v50 = EngDrawStream;
                v16 = OffDrawStream(
                        (int)v50,
                        v75[0],
                        v73[0],
                        v42,
                        v74,
                        (__int64)v10,
                        (__int64)a5,
                        v66,
                        a7,
                        v64,
                        (__int64)a9) & v55;
                goto LABEL_84;
              }
            }
          }
        }
      }
LABEL_83:
      v16 = 0;
LABEL_84:
      v10 = v70;
      *((_QWORD *)a9 + 6) = v67;
      *((_QWORD *)a9 + 5) = v69;
      *((_QWORD *)a9 + 4) = v68;
      *((_DWORD *)a9 + 1) = v58;
      v55 = v16;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v60, v20);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v57, v51);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v59, v52);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v61, v53);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v71) )
        goto LABEL_85;
    }
  }
  DbgPrint("MulDrawStream: this should never happen\n");
  return v14;
}
