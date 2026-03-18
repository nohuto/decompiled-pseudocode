/*
 * XREFs of ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C02960E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngDrawStream @ 0x1C009B840 (EngDrawStream.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025E60C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C026C228 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0294520 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0294690 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0299694 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C029996C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0299AA4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     OffDrawStream @ 0x1C02C0DFC (OffDrawStream.c)
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
  __int64 v20; // r14
  __int64 v21; // r12
  struct _DISPSURF *v22; // rax
  struct _XLATEOBJ *v23; // rdi
  __int64 pulXlate; // r14
  struct PALETTE *v25; // r13
  __int64 v26; // rcx
  __int64 v27; // rax
  bool v28; // zf
  int v29; // r9d
  int iUniq; // r12d
  int v31; // r11d
  int flXlate; // r10d
  int v33; // r8d
  ULONG *v34; // rdx
  int v35; // edx
  int v36; // ecx
  int v37; // eax
  int v38; // r8d
  int v39; // edx
  int v40; // ecx
  __int64 v41; // r9
  struct _SURFOBJ *v42; // r14
  int v43; // r8d
  int v44; // edx
  int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rbx
  unsigned int v48; // eax
  __int64 (__fastcall *v49)(__int64, __int64, __int64, __int64, int, int *, unsigned int, __int64, _QWORD *); // r10
  int v51; // [rsp+60h] [rbp-A0h]
  __int64 v52; // [rsp+68h] [rbp-98h]
  __int64 v53; // [rsp+78h] [rbp-88h] BYREF
  int v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h] BYREF
  __int64 v56; // [rsp+90h] [rbp-70h] BYREF
  struct _XLATEOBJ *v57; // [rsp+98h] [rbp-68h] BYREF
  struct _SURFOBJ *v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+A8h] [rbp-58h]
  __int64 v60; // [rsp+B0h] [rbp-50h]
  struct _SURFOBJ *v61; // [rsp+B8h] [rbp-48h]
  __int64 v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+C8h] [rbp-38h]
  __int64 v64; // [rsp+D0h] [rbp-30h]
  __int64 v65; // [rsp+D8h] [rbp-28h]
  struct _XLATEOBJ *v66; // [rsp+E0h] [rbp-20h]
  _BYTE v67[64]; // [rsp+F0h] [rbp-10h] BYREF
  struct _DISPSURF *v68; // [rsp+130h] [rbp+30h]
  int v69[2]; // [rsp+138h] [rbp+38h]
  struct _CLIPOBJ *v70; // [rsp+140h] [rbp+40h]
  int v71[6]; // [rsp+148h] [rbp+48h]
  _BYTE v72[96]; // [rsp+160h] [rbp+60h] BYREF
  int v73[2]; // [rsp+1C0h] [rbp+C0h]
  _BYTE v74[96]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v75; // [rsp+230h] [rbp+130h]

  v10 = a4;
  v62 = (__int64)a6;
  v60 = (__int64)a8;
  v65 = *((_QWORD *)a9 + 5);
  v63 = *((_QWORD *)a9 + 6);
  v64 = *((_QWORD *)a9 + 4);
  v13 = *((_DWORD *)a9 + 1);
  v61 = a1;
  v54 = v13;
  v58 = a2;
  v66 = a4;
  v14 = 1;
  v15 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 48);
  if ( a2->iType != 1 || !v15 || (*(_DWORD *)(v15 + 56) & 0x20000) == 0 )
  {
    v51 = 1;
    v16 = 1;
    v17 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v67, a1, a3, a5);
    MULTISURF::MULTISURF((MULTISURF *)v72, a2);
    if ( v17 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v74, v61);
      v51 = EngDrawStream(v75, *(__int64 *)v73, (__int64)a3, (__int64)v10, (int)a5, (int *)v62, a7, v60, a9);
      v16 = v51;
      MULTISURF::~MULTISURF((MULTISURF *)v74);
    }
    if ( !Surface )
    {
LABEL_85:
      v14 = v16;
      MULTISURF::~MULTISURF((MULTISURF *)v72);
      return v14;
    }
    while ( 1 )
    {
      v57 = 0LL;
      v55 = 0LL;
      v53 = 0LL;
      v56 = 0LL;
      v19 = MULTISURF::bLoadSource((MULTISURF *)v72, v68) == 0;
      v52 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v69);
      v20 = v52;
      if ( !v19 )
      {
        v21 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v73);
        v59 = v21;
        v22 = v68;
        if ( !*((_DWORD *)v68 + 6) )
          goto LABEL_75;
        v23 = v10;
        pulXlate = *(_QWORD *)(v21 + 120);
        v25 = ppalDefault;
        v26 = *((_QWORD *)v68 + 6);
        if ( (*(_DWORD *)(v26 + 2196) & 0x100) != 0 )
          v25 = DrvRealizeHalftonePalette((_QWORD *)v26, 0);
        if ( !pulXlate )
        {
          if ( v10 && v10[1].pulXlate )
          {
            pulXlate = (__int64)v10[1].pulXlate;
          }
          else
          {
            v27 = SURFOBJ_TO_SURFACE_NOT_NULL(v61);
            if ( !v10 || (v10->flXlate & 1) != 0 )
            {
              v28 = *(_QWORD *)v73 == (_QWORD)v58;
            }
            else
            {
              v25 = *(struct PALETTE **)&v10[2].iSrcType;
              if ( !v25 )
                goto LABEL_83;
              v28 = *(_DWORD *)(v21 + 96) == *(_DWORD *)(v27 + 96);
            }
            if ( v28 )
              pulXlate = *(_QWORD *)(v27 + 120);
          }
        }
        v29 = 0;
        if ( pulXlate )
        {
          if ( (*(_DWORD *)(pulXlate + 24) & 0x800) != 0 )
          {
            v29 = 0x4000;
            if ( v25 == ppalDefault )
              v29 = 0x2000;
          }
        }
        if ( v10 )
          iUniq = v10[1].iUniq;
        else
          iUniq = 0;
        if ( v10 )
          v31 = *(_DWORD *)&v10[1].iSrcType;
        else
          v31 = 0;
        if ( v10 )
          flXlate = v10[1].flXlate;
        else
          flXlate = 0;
        if ( v10 )
          v33 = v10[3].iUniq;
        else
          v33 = 0;
        if ( v10 )
          v34 = v10[2].pulXlate;
        else
          v34 = 0LL;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v57,
                             v34,
                             v33,
                             pulXlate,
                             *(_QWORD *)(v52 + 120),
                             (__int64)ppalDefault,
                             (__int64)v25,
                             flXlate,
                             v31,
                             iUniq,
                             v29) )
        {
          v10 = v57;
          v35 = v23 ? v23[1].iUniq : 0;
          v36 = v23 ? *(_DWORD *)&v23[1].iSrcType : 0;
          v37 = v23 ? v23[1].flXlate : 0;
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                               &v55,
                               0LL,
                               0,
                               *(_QWORD *)(v52 + 120),
                               (__int64)gppalRGB,
                               (__int64)v25,
                               (__int64)v25,
                               v37,
                               v36,
                               v35,
                               0) )
          {
            *((_QWORD *)a9 + 5) = v55;
            v38 = v23 ? v23[1].iUniq : 0;
            v39 = v23 ? *(_DWORD *)&v23[1].iSrcType : 0;
            v40 = v23 ? v23[1].flXlate : 0;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v53,
                                 0LL,
                                 0,
                                 (__int64)gppalRGB,
                                 *(_QWORD *)(v52 + 120),
                                 (__int64)v25,
                                 (__int64)v25,
                                 v40,
                                 v39,
                                 v38,
                                 0) )
            {
              v41 = *(_QWORD *)v73;
              v42 = v58;
              *((_QWORD *)a9 + 6) = v53;
              if ( (struct _SURFOBJ *)v41 == v42 )
              {
                v22 = v68;
                v21 = v59;
                v20 = v52;
                goto LABEL_76;
              }
              if ( v23 )
                v43 = v23[1].iUniq;
              else
                v43 = 0;
              if ( v23 )
                v44 = *(_DWORD *)&v23[1].iSrcType;
              else
                v44 = 0;
              if ( v23 )
                v45 = v23[1].flXlate;
              else
                v45 = 0;
              v21 = v59;
              if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                   &v56,
                                   0LL,
                                   0,
                                   *(_QWORD *)(v59 + 120),
                                   (__int64)gppalRGB,
                                   (__int64)ppalDefault,
                                   (__int64)v25,
                                   v45,
                                   v44,
                                   v43,
                                   0) )
              {
                *((_QWORD *)a9 + 4) = v56;
                v46 = SURFOBJ_TO_SURFACE_NOT_NULL(v42);
                v47 = *(_QWORD *)(v21 + 120);
                v48 = ulIndexToRGB(*(_QWORD *)(v46 + 120), ppalDefault, *((unsigned int *)a9 + 1));
                v20 = v52;
                *((_DWORD *)a9 + 1) = ulGetNearestIndexFromColorref(v47, ppalDefault, v48, 1LL);
                v22 = v68;
LABEL_75:
                v41 = *(_QWORD *)v73;
LABEL_76:
                v49 = EngDrawStream;
                if ( *(_QWORD *)(*((_QWORD *)v22 + 7) + 3440LL) )
                  LODWORD(v49) = *(_QWORD *)(*((_QWORD *)v22 + 7) + 3440LL);
                if ( *(_WORD *)(v41 + 76) == 1 && *(_QWORD *)(v21 + 48) != *(_QWORD *)(v20 + 48) )
                  v49 = EngDrawStream;
                v16 = OffDrawStream(
                        (int)v49,
                        v71[0],
                        v69[0],
                        v41,
                        v70,
                        (__int64)v10,
                        (__int64)a5,
                        v62,
                        a7,
                        v60,
                        (__int64)a9) & v51;
                goto LABEL_84;
              }
            }
          }
        }
      }
LABEL_83:
      v16 = 0;
LABEL_84:
      v10 = v66;
      *((_QWORD *)a9 + 6) = v63;
      *((_QWORD *)a9 + 5) = v65;
      *((_QWORD *)a9 + 4) = v64;
      *((_DWORD *)a9 + 1) = v54;
      v51 = v16;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v56);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v53);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v55);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v57);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v67) )
        goto LABEL_85;
    }
  }
  DbgPrint("MulDrawStream: this should never happen\n");
  return v14;
}
