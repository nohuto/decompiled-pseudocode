/*
 * XREFs of Misoriented @ 0x1C00C65A0
 * Callers:
 *     fsg_CheckOutlineOrientation @ 0x1C00C5A70 (fsg_CheckOutlineOrientation.c)
 * Callees:
 *     SetLineToInfinity @ 0x1C00C6DB8 (SetLineToInfinity.c)
 *     CurveTransitions @ 0x1C00C6E48 (CurveTransitions.c)
 *     CurveTransitionsSegment @ 0x1C01043A4 (CurveTransitionsSegment.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall Misoriented(int a1, unsigned __int16 a2, __int16 a3, __int64 a4, __int64 a5)
{
  __int16 v6; // si
  __int16 v7; // r11
  __int16 v8; // r14
  int v9; // r11d
  __int16 v10; // di
  int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  int v15; // r15d
  int v16; // r9^4
  __int16 v17; // r10
  int v18; // r11d
  int v19; // edx
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // r8d
  int v23; // edx
  int v24; // eax
  _QWORD *v25; // rsi
  char v26; // dl
  __int16 v27; // cx
  int v28; // r12d
  __int64 v29; // r13
  int v30; // edx
  __int16 v31; // r15
  __int16 v32; // r9
  __int64 v33; // rdx
  int v34; // r10d
  int v35; // r11d
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rsi
  __int16 v41; // ax
  int v42; // eax
  int v43; // esi
  int v44; // edx
  int v45; // r9d
  __int64 v46; // r14
  int v47; // ecx
  __int64 v48; // rbx
  int v49; // r9d
  int v50; // r10d
  bool v51; // cc
  int v52; // r12d
  int v53; // r11d
  int v54; // ecx
  int v55; // edx
  int v56; // r10d
  int v57; // ebx
  int v58; // r9d
  int v59; // ecx
  int v60; // r10d
  int v61; // edx
  int v62; // ebx
  int v63; // r9d
  __int64 v64; // rcx
  __int64 v66; // [rsp+30h] [rbp-81h]
  __int64 v67; // [rsp+30h] [rbp-81h]
  __int64 v68; // [rsp+30h] [rbp-81h]
  int v70; // [rsp+44h] [rbp-6Dh]
  __int16 v71; // [rsp+48h] [rbp-69h]
  __int64 v72; // [rsp+50h] [rbp-61h]
  __int64 v73; // [rsp+58h] [rbp-59h]
  int v74; // [rsp+60h] [rbp-51h]
  __int64 v75; // [rsp+60h] [rbp-51h]
  int v76; // [rsp+64h] [rbp-4Dh]
  __int64 v77; // [rsp+68h] [rbp-49h] BYREF
  __int64 v78; // [rsp+70h] [rbp-41h] BYREF
  __int16 v79; // [rsp+78h] [rbp-39h]
  __int16 v80; // [rsp+7Ah] [rbp-37h]
  int v81; // [rsp+7Ch] [rbp-35h]
  int v82; // [rsp+80h] [rbp-31h]
  __int64 v83; // [rsp+88h] [rbp-29h]
  __int64 v84; // [rsp+90h] [rbp-21h]
  __int64 v85; // [rsp+98h] [rbp-19h]
  __int64 v86; // [rsp+A0h] [rbp-11h]
  __int64 v87; // [rsp+A8h] [rbp-9h]
  __int64 v88; // [rsp+B8h] [rbp+7h]
  __int64 v89; // [rsp+C0h] [rbp+Fh]
  __int64 v90; // [rsp+C8h] [rbp+17h]

  v82 = a1;
  v6 = 0;
  v88 = *(_QWORD *)(a5 + 56);
  v7 = *(_WORD *)(v88 + 2LL * a1);
  v89 = *(_QWORD *)(a5 + 64);
  v8 = *(_WORD *)(v89 + 2LL * a1) - v7 + 1;
  SetLineToInfinity(a2, a4, &v77, &v78);
  v10 = a3 - v9;
  v11 = v9;
  v83 = *(_QWORD *)(a5 + 32);
  v81 = 0;
  v12 = 4LL * (v9 + (__int16)((v8 + v10 - 1) % v8));
  LODWORD(v72) = *(_DWORD *)(v83 + v12);
  v13 = v10 + v9;
  v14 = *(_DWORD *)(v83 + 4 * v13);
  v84 = *(_QWORD *)(a5 + 40);
  v15 = *(_DWORD *)(v84 + 4 * v13);
  HIDWORD(v72) = *(_DWORD *)(v84 + v12);
  v16 = v15;
  LODWORD(v66) = v14 - v72;
  v17 = 0;
  HIDWORD(v66) = v15 - HIDWORD(v72);
  v18 = v14 - v72;
  v87 = v66;
  if ( v8 > 0 )
  {
    while ( !v6 )
    {
      v19 = (v10 + 1) % v8;
      v10 = v19;
      v20 = v19 + v11;
      v21 = *(_DWORD *)(v83 + 4 * v20);
      v74 = v21;
      v76 = *(_DWORD *)(v84 + 4 * v20);
      if ( v14 != v21 || v15 != *(_DWORD *)(v84 + 4 * v20) )
      {
        v22 = v21 - v14;
        v14 = v74;
        LODWORD(v67) = v22;
        HIDWORD(v67) = v76 - v16;
        v23 = v18 * (v76 - v16) - v22 * HIDWORD(v87);
        if ( v23 >= 0 )
          v6 = v23 > 0;
        else
          v6 = -1;
        v16 = *(_DWORD *)(v84 + 4 * v20);
        v15 = v16;
        v18 = v67;
        v87 = v67;
      }
      if ( ++v17 >= v8 )
        goto LABEL_13;
    }
    if ( v17 < v8 )
    {
      v24 = v81;
      if ( v6 > 0 )
        v24 = 2;
      v81 = v24;
    }
  }
LABEL_13:
  v25 = (_QWORD *)a5;
  v26 = 0;
  v27 = 0;
  v70 = 0;
  v71 = 0;
  v80 = *(_WORD *)(a5 + 80);
  if ( v80 > 0 )
  {
    v28 = v72;
    v29 = v72;
    v30 = v82;
    while ( 1 )
    {
      if ( v27 != v30 )
      {
        v31 = *(_WORD *)(v88 + 2LL * v27);
        v79 = *(_WORD *)(v89 + 2LL * v27);
        v32 = v79;
        if ( (__int16)(v79 - v31 + 1) > 2 )
          break;
      }
LABEL_108:
      v71 = ++v27;
      if ( v27 >= v80 )
      {
        v26 = v70;
        return 2 * ((v26 & 1) == 0) == v81;
      }
    }
    v33 = v25[6];
    v34 = *(unsigned __int8 *)(v33 + v31);
    v35 = 2 * *(_DWORD *)(v83 + 4LL * v31);
    LODWORD(v73) = v35;
    HIDWORD(v73) = 2 * *(_DWORD *)(v84 + 4LL * v31);
    v36 = v73;
    if ( !*(_BYTE *)(v33 + v31) )
    {
      v28 = 2 * *(_DWORD *)(v83 + 4LL * v79);
      LODWORD(v72) = v28;
      HIDWORD(v72) = 2 * *(_DWORD *)(v84 + 4LL * v79);
      if ( *(_BYTE *)(v33 + v79) )
      {
        v29 = v72;
      }
      else
      {
        HIDWORD(v85) = (HIDWORD(v73) + HIDWORD(v72)) >> 1;
        LODWORD(v85) = (v28 + v35) >> 1;
        v29 = v85;
        HIDWORD(v72) = HIDWORD(v85);
        v28 = v85;
      }
    }
    v37 = v25[4];
    LOWORD(v38) = v31;
    v39 = v25[5];
    v40 = v25[6];
    v87 = v40;
    v90 = v37;
    v68 = v39;
    while ( 1 )
    {
      v41 = v38 + 1;
      if ( (_WORD)v38 == v32 )
        v41 = v31;
      v38 = v41;
      v42 = *(_DWORD *)(v37 + 4LL * v41);
      v43 = *(unsigned __int8 *)(v38 + v40);
      v44 = 2 * *(_DWORD *)(v39 + 4 * v38);
      HIDWORD(v75) = v44;
      v45 = 2 * v42;
      LODWORD(v75) = 2 * v42;
      v46 = v75;
      if ( !(v43 | (2 * v34)) )
        break;
      if ( (v43 | (2 * v34)) == 1 )
      {
        if ( v28 != v45 || HIDWORD(v29) != v44 )
        {
          v55 = HIDWORD(v29);
          v56 = v29;
          if ( v35 < v28 )
            v56 = v35;
          v57 = v29;
          if ( v45 < v56 )
            v56 = 2 * v42;
          if ( SHIDWORD(v36) < SHIDWORD(v29) )
            v55 = HIDWORD(v36);
          if ( SHIDWORD(v75) < v55 )
            v55 = HIDWORD(v75);
          if ( v35 > v28 )
            v57 = v35;
          if ( v45 > v57 )
            v57 = 2 * v42;
          v58 = HIDWORD(v29);
          if ( SHIDWORD(v36) > SHIDWORD(v29) )
            v58 = HIDWORD(v36);
          if ( SHIDWORD(v75) > v58 )
            v58 = HIDWORD(v75);
          if ( a2 )
          {
            if ( a2 == 1 )
            {
              v59 = v77;
              if ( v58 < SHIDWORD(v77) || v55 > SHIDWORD(v77) || v57 < (int)v77 )
                goto LABEL_46;
            }
            else if ( a2 == 2 )
            {
              v59 = v77;
              if ( v57 < (int)v77 || v56 > (int)v77 || v55 > SHIDWORD(v77) )
                goto LABEL_46;
            }
            else
            {
              v59 = v77;
              if ( a2 == 3 && (v57 < (int)v77 || v56 > (int)v77 || v58 < SHIDWORD(v77)) )
                goto LABEL_46;
            }
          }
          else
          {
            v59 = v77;
            if ( v55 > SHIDWORD(v77) || v58 < SHIDWORD(v77) || v56 > (int)v77 )
              goto LABEL_46;
          }
          v70 += CurveTransitions(v59, v78, v29, v36, v75);
LABEL_46:
          v39 = v68;
        }
      }
      else
      {
        if ( (v43 | (2 * v34)) == 2 )
        {
          v29 = v36;
          HIDWORD(v72) = HIDWORD(v36);
          v28 = v36;
          goto LABEL_47;
        }
        if ( (v43 | (2 * v34)) == 3 && (v35 != v45 || HIDWORD(v36) != v44) )
        {
          v60 = v36;
          v61 = HIDWORD(v36);
          if ( v45 < v35 )
            v60 = 2 * v42;
          v62 = v36;
          if ( SHIDWORD(v75) < SHIDWORD(v36) )
            v61 = HIDWORD(v75);
          if ( v45 > v35 )
            v62 = 2 * v42;
          v63 = HIDWORD(v36);
          if ( SHIDWORD(v75) > SHIDWORD(v36) )
            v63 = HIDWORD(v75);
          if ( a2 )
          {
            if ( a2 == 1 )
            {
              v64 = v77;
              if ( v63 < SHIDWORD(v77) || v61 > SHIDWORD(v77) || v62 < (int)v77 )
                goto LABEL_46;
            }
            else
            {
              if ( a2 != 2 )
              {
                v64 = v77;
                if ( a2 != 3 || v60 <= (int)v77 && v62 >= (int)v77 && v63 >= SHIDWORD(v77) )
                  goto LABEL_91;
                goto LABEL_46;
              }
              v64 = v77;
              if ( v62 < (int)v77 || v60 > (int)v77 || v61 > SHIDWORD(v77) )
                goto LABEL_46;
            }
          }
          else
          {
            v64 = v77;
            if ( v61 > SHIDWORD(v77) || v63 < SHIDWORD(v77) || v60 > (int)v77 )
              goto LABEL_46;
          }
LABEL_91:
          v70 += CurveTransitionsSegment(v64, v78, v36, v75);
          goto LABEL_46;
        }
      }
LABEL_47:
      v36 = v46;
      v34 = v43;
      if ( (_WORD)v38 == v31 )
      {
        v27 = v71;
        v25 = (_QWORD *)a5;
        v30 = v82;
        goto LABEL_108;
      }
      v32 = v79;
      v35 = v46;
      v37 = v90;
      v40 = v87;
    }
    v47 = (v45 + v35) >> 1;
    HIDWORD(v86) = (HIDWORD(v36) + v44) >> 1;
    LODWORD(v86) = v47;
    v48 = v86;
    if ( __PAIR64__(HIDWORD(v72), v28) != __PAIR64__(HIDWORD(v86), v47) )
    {
      v46 = v75;
      v49 = v29;
      v50 = HIDWORD(v29);
      if ( v35 < v28 )
        v49 = v35;
      if ( v47 < v49 )
        v49 = v47;
      if ( SHIDWORD(v36) < SHIDWORD(v29) )
        v50 = HIDWORD(v36);
      if ( SHIDWORD(v86) < v50 )
        v50 = HIDWORD(v86);
      v51 = v35 <= v28;
      v52 = v29;
      if ( !v51 )
        v52 = v35;
      v53 = HIDWORD(v29);
      if ( v47 > v52 )
        v52 = v47;
      if ( SHIDWORD(v36) > SHIDWORD(v29) )
        v53 = HIDWORD(v36);
      if ( SHIDWORD(v86) > v53 )
        v53 = HIDWORD(v86);
      if ( a2 )
      {
        if ( a2 == 1 )
        {
          v54 = v77;
          if ( v53 < SHIDWORD(v77) || v50 > SHIDWORD(v77) || v52 < (int)v77 )
            goto LABEL_45;
        }
        else if ( a2 == 2 )
        {
          v54 = v77;
          if ( v52 < (int)v77 || v49 > (int)v77 || v50 > SHIDWORD(v77) )
            goto LABEL_45;
        }
        else
        {
          v54 = v77;
          if ( a2 == 3 && (v52 < (int)v77 || v49 > (int)v77 || v53 < SHIDWORD(v77)) )
            goto LABEL_45;
        }
      }
      else
      {
        v54 = v77;
        if ( v50 > SHIDWORD(v77) || v53 < SHIDWORD(v77) || v49 > (int)v77 )
          goto LABEL_45;
      }
      v70 += CurveTransitions(v54, v78, v29, v36, v86);
    }
LABEL_45:
    v29 = v48;
    HIDWORD(v72) = HIDWORD(v48);
    v28 = v48;
    goto LABEL_46;
  }
  return 2 * ((v26 & 1) == 0) == v81;
}
