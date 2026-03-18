/*
 * XREFs of Misoriented @ 0x1C00B1E70
 * Callers:
 *     fsg_CheckOutlineOrientation @ 0x1C00B1330 (fsg_CheckOutlineOrientation.c)
 * Callees:
 *     SetLineToInfinity @ 0x1C00B2690 (SetLineToInfinity.c)
 *     CurveTransitions @ 0x1C00B2720 (CurveTransitions.c)
 *     CurveTransitionsSegment @ 0x1C00B2C30 (CurveTransitionsSegment.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall Misoriented(int a1, unsigned __int16 a2, __int16 a3, __int64 a4, __int64 a5)
{
  __int16 v6; // di
  __int16 v7; // r11
  __int16 v8; // si
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // r14d
  int v17; // r11d
  __int16 v18; // r10
  int v19; // r9^4
  int v20; // ecx
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
  __int64 v66; // [rsp+30h] [rbp-71h]
  __int64 v67; // [rsp+30h] [rbp-71h]
  __int64 v68; // [rsp+30h] [rbp-71h]
  int v69; // [rsp+40h] [rbp-61h]
  __int16 v71; // [rsp+46h] [rbp-5Bh]
  __int64 v72; // [rsp+48h] [rbp-59h]
  __int64 v73; // [rsp+50h] [rbp-51h]
  int v74; // [rsp+58h] [rbp-49h]
  __int64 v75; // [rsp+58h] [rbp-49h]
  int v76; // [rsp+5Ch] [rbp-45h]
  __int64 v77; // [rsp+60h] [rbp-41h] BYREF
  __int64 v78; // [rsp+68h] [rbp-39h] BYREF
  int v79; // [rsp+70h] [rbp-31h]
  __int16 v80; // [rsp+74h] [rbp-2Dh]
  __int16 v81; // [rsp+76h] [rbp-2Bh]
  int v82; // [rsp+78h] [rbp-29h]
  __int64 v83; // [rsp+80h] [rbp-21h]
  __int64 v84; // [rsp+88h] [rbp-19h]
  __int64 v85; // [rsp+90h] [rbp-11h]
  __int64 v86; // [rsp+98h] [rbp-9h]
  __int64 v87; // [rsp+A8h] [rbp+7h]
  __int64 v88; // [rsp+B0h] [rbp+Fh]
  __int64 v89; // [rsp+B8h] [rbp+17h]
  __int64 v90; // [rsp+C0h] [rbp+1Fh]

  v82 = a1;
  v6 = 0;
  v90 = *(_QWORD *)(a5 + 56);
  v7 = *(_WORD *)(v90 + 2LL * a1);
  v89 = *(_QWORD *)(a5 + 64);
  v8 = *(_WORD *)(v89 + 2LL * a1) - v7 + 1;
  SetLineToInfinity(a2, a4, &v77, &v78);
  v9 = *(_QWORD *)(a5 + 40);
  LOWORD(v11) = a3 - v10;
  v12 = *(_QWORD *)(a5 + 32);
  v13 = v10;
  v79 = 0;
  v84 = v9;
  v88 = v12;
  v14 = 4 * (v10 + (__int16)((v8 + (__int16)v11 - 1) % v8));
  LODWORD(v72) = *(_DWORD *)(v12 + v14);
  v15 = v10 + (__int16)v11;
  v17 = *(_DWORD *)(4 * v15 + v12);
  HIDWORD(v72) = *(_DWORD *)(v9 + v14);
  LODWORD(v66) = v17 - v72;
  v18 = 0;
  v19 = *(_DWORD *)(v9 + 4 * v15);
  v16 = v19;
  HIDWORD(v66) = v19 - HIDWORD(v72);
  v20 = v17 - v72;
  v86 = v66;
  if ( v8 > 0 )
  {
    while ( !v6 )
    {
      v11 = ((__int16)v11 + 1) % v8;
      v21 = *(_DWORD *)(v12 + 4 * (v13 + v11));
      v74 = v21;
      v76 = *(_DWORD *)(v84 + 4 * (v13 + v11));
      if ( v17 != v21 || v16 != *(_DWORD *)(v84 + 4 * (v13 + v11)) )
      {
        v22 = v21 - v17;
        v17 = v74;
        LODWORD(v67) = v22;
        HIDWORD(v67) = v76 - v19;
        v23 = v20 * (v76 - v19) - v22 * HIDWORD(v86);
        if ( v23 >= 0 )
          v6 = v23 > 0;
        else
          v6 = -1;
        v19 = *(_DWORD *)(v84 + 4 * (v13 + v11));
        v16 = v19;
        v20 = v67;
        v86 = v67;
      }
      if ( ++v18 >= v8 )
        goto LABEL_13;
    }
    if ( v18 < v8 )
    {
      v24 = v79;
      if ( v6 > 0 )
        v24 = 2;
      v79 = v24;
    }
  }
LABEL_13:
  v25 = (_QWORD *)a5;
  v26 = 0;
  v27 = 0;
  v69 = 0;
  v71 = 0;
  v81 = *(_WORD *)(a5 + 80);
  if ( v81 > 0 )
  {
    v28 = v72;
    v29 = v72;
    v30 = v82;
    while ( 1 )
    {
      if ( v27 != v30 )
      {
        v31 = *(_WORD *)(v90 + 2LL * v27);
        v80 = *(_WORD *)(v89 + 2LL * v27);
        v32 = v80;
        if ( (__int16)(v80 - v31 + 1) > 2 )
          break;
      }
LABEL_104:
      v71 = ++v27;
      if ( v27 >= v81 )
      {
        v26 = v69;
        return 2 * ((v26 & 1) == 0) == v79;
      }
    }
    v33 = v25[6];
    v34 = *(unsigned __int8 *)(v31 + v33);
    v35 = 2 * *(_DWORD *)(v88 + 4LL * v31);
    LODWORD(v73) = v35;
    HIDWORD(v73) = 2 * *(_DWORD *)(v84 + 4LL * v31);
    v36 = v73;
    if ( !*(_BYTE *)(v31 + v33) )
    {
      v28 = 2 * *(_DWORD *)(v88 + 4LL * v80);
      LODWORD(v72) = v28;
      HIDWORD(v72) = 2 * *(_DWORD *)(v84 + 4LL * v80);
      if ( *(_BYTE *)(v33 + v80) )
      {
        v29 = v72;
      }
      else
      {
        HIDWORD(v83) = (HIDWORD(v73) + HIDWORD(v72)) >> 1;
        LODWORD(v83) = (v28 + v35) >> 1;
        v29 = v83;
        HIDWORD(v72) = HIDWORD(v83);
        v28 = v83;
      }
    }
    v37 = v25[4];
    LOWORD(v38) = v31;
    v39 = v25[5];
    v40 = v25[6];
    v86 = v40;
    v87 = v37;
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
          v69 += CurveTransitions(v59, v78, v29, v36, v75);
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
          v69 += CurveTransitionsSegment(v64, v78, v36, v75);
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
        goto LABEL_104;
      }
      v32 = v80;
      v35 = v46;
      v37 = v87;
      v40 = v86;
    }
    v47 = (v45 + v35) >> 1;
    HIDWORD(v85) = (HIDWORD(v36) + v44) >> 1;
    LODWORD(v85) = v47;
    v48 = v85;
    if ( __PAIR64__(HIDWORD(v72), v28) != __PAIR64__(HIDWORD(v85), v47) )
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
      if ( SHIDWORD(v85) < v50 )
        v50 = HIDWORD(v85);
      v51 = v35 <= v28;
      v52 = v29;
      if ( !v51 )
        v52 = v35;
      v53 = HIDWORD(v29);
      if ( v47 > v52 )
        v52 = v47;
      if ( SHIDWORD(v36) > SHIDWORD(v29) )
        v53 = HIDWORD(v36);
      if ( SHIDWORD(v85) > v53 )
        v53 = HIDWORD(v85);
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
      v69 += CurveTransitions(v54, v78, v29, v36, v85);
    }
LABEL_45:
    v29 = v48;
    HIDWORD(v72) = HIDWORD(v48);
    v28 = v48;
    goto LABEL_46;
  }
  return 2 * ((v26 & 1) == 0) == v79;
}
