/*
 * XREFs of fsc_CalcSpline @ 0x1C00A8948
 * Callers:
 *     EvaluateSpline @ 0x1C00A8524 (EvaluateSpline.c)
 * Callees:
 *     fsc_BeginElement @ 0x1C00A9014 (fsc_BeginElement.c)
 *     PowerOf2 @ 0x1C00A91A0 (PowerOf2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall fsc_CalcSpline(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int16 a7)
{
  signed int v8; // ebx
  int v9; // r11d
  int v10; // eax
  int v11; // r13d
  unsigned int v12; // ebx
  int v13; // r12d
  int v14; // edi
  int v15; // r15d
  unsigned int v17; // edi
  int v18; // esi
  int v19; // eax
  int v20; // r10d
  __int64 v21; // rcx
  int v22; // eax
  int v23; // edx
  __int64 v24; // r8
  int v25; // r10d
  int v26; // r11d
  int v27; // esi
  int v28; // r8d
  char v29; // cl
  int v30; // eax
  int v31; // eax
  int v32; // r14d
  int v33; // r10d
  int v34; // r15d
  int v35; // eax
  int v36; // r9d
  int v37; // r15d
  int v38; // r10d
  int v39; // r15d
  int v40; // r14d
  int v41; // r8d
  int v42; // r12d
  int v43; // esi
  int v44; // r14d
  __int64 v45; // r9
  int v46; // esi
  int v47; // r15d
  char v48; // cl
  int v49; // r10d
  int v50; // edx
  __int64 v51; // r8
  __int64 result; // rax
  signed int v53; // edi
  int v54; // eax
  signed int v55; // eax
  unsigned int v56; // ebx
  unsigned int v57; // edi
  int v58; // r15d
  unsigned int v59; // edi
  unsigned int v60; // edi
  int v61; // eax
  unsigned int v62; // edi
  int v63; // eax
  int v64; // [rsp+40h] [rbp-41h]
  char v65; // [rsp+40h] [rbp-41h]
  int v66; // [rsp+40h] [rbp-41h]
  int v67; // [rsp+44h] [rbp-3Dh]
  int v68; // [rsp+44h] [rbp-3Dh]
  int v69; // [rsp+48h] [rbp-39h]
  int v70; // [rsp+4Ch] [rbp-35h]
  __int64 (__fastcall *v71)(_QWORD, _QWORD); // [rsp+50h] [rbp-31h] BYREF
  int v72; // [rsp+58h] [rbp-29h]
  _DWORD v73[2]; // [rsp+60h] [rbp-21h] BYREF
  _DWORD v74[2]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v75[10]; // [rsp+70h] [rbp-11h] BYREF
  int v76; // [rsp+D0h] [rbp+4Fh]
  int v77; // [rsp+D0h] [rbp+4Fh]
  int v78; // [rsp+D8h] [rbp+57h]
  int v79; // [rsp+E0h] [rbp+5Fh]
  unsigned int v80; // [rsp+E0h] [rbp+5Fh]
  int v81; // [rsp+E8h] [rbp+67h]
  int v82; // [rsp+F0h] [rbp+6Fh]
  int v83; // [rsp+F0h] [rbp+6Fh]
  int v84; // [rsp+F8h] [rbp+77h]
  __int16 v85; // [rsp+100h] [rbp+7Fh]

  v78 = -1;
  if ( a6 > a2 )
  {
    v84 = 1;
    v70 = 0;
    v55 = ((a2 + 32) & 0xFFFFFFC0) + 32;
    v12 = v55 >> 6;
    v10 = v55 - a2;
    v11 = ((a6 - 33) >> 6) + 1;
    v13 = a4 - a2;
    v15 = a6 - a2;
    v14 = 0;
    v9 = 1;
  }
  else
  {
    v84 = -1;
    v70 = 1;
    v8 = ((a2 - 33) & 0xFFFFFFC0) + 32;
    v9 = 4;
    v10 = a2 - v8;
    v11 = ((a6 + 32) >> 6) - 1;
    v12 = v8 >> 6;
    v13 = a2 - a4;
    v14 = 1;
    v15 = a2 - a6;
  }
  v69 = v10;
  v67 = v14;
  if ( a5 <= a1 )
  {
    v81 = 1;
    v67 = 1 - v14;
    v53 = ((a1 - 33) & 0xFFFFFFC0) + 32;
    v18 = ((a5 + 32) >> 6) - 1;
    v9 = (v9 != 1) + 2;
    v54 = a1 - v53;
    v17 = v53 >> 6;
    v82 = v54;
    v79 = a1 - a3;
    v19 = a1 - a5;
  }
  else
  {
    v78 = 1;
    v17 = (int)(((a1 + 32) & 0xFFFFFFC0) + 32) >> 6;
    v82 = ((a1 + 32) & 0xFFFFFFC0) + 32 - a1;
    v18 = ((a5 - 33) >> 6) + 1;
    v81 = 0;
    v79 = a3 - a1;
    v19 = a5 - a1;
  }
  v64 = v19;
  v73[0] = a3;
  v74[0] = a4;
  v73[1] = a5;
  v76 = v18;
  v74[1] = a6;
  fsc_BeginElement(a7, v9, 1, 2, (__int64)v73, (__int64)v74, (__int64)&v71, (__int64)v75);
  v85 = a7 & 2;
  if ( v85 )
  {
    if ( v12 == v11 )
      return 0LL;
    if ( v17 != v18 )
      goto LABEL_8;
    v60 = v81 + v17;
    while ( 1 )
    {
      result = v71(v60, v12);
      if ( (_DWORD)result )
        break;
      v12 += v84;
      if ( v12 == v11 )
        return 0LL;
    }
  }
  else if ( v17 == v18 )
  {
    v59 = v81 + v17;
    if ( v12 == v11 )
      return 0LL;
    while ( 1 )
    {
      result = v71(v59, v12);
      if ( (_DWORD)result )
        break;
      v12 += v84;
      if ( v12 == v11 )
        return 0LL;
    }
  }
  else
  {
    if ( v12 != v11 )
    {
LABEL_8:
      PowerOf2((unsigned int)(2 * (v15 * v79 - v13 * v64)));
      v21 = (unsigned int)v20;
      if ( v20 <= v15 )
        v21 = (unsigned int)v15;
      v22 = PowerOf2(v21);
      v72 = v22;
      if ( v22 > 12 || (int)v24 > 25 )
        return 4870LL;
      v27 = v69;
      v28 = dword_1C02E1CA0[v24 + v22];
      v29 = 6 - v28;
      v65 = 6 - v28;
      if ( v28 > 0 )
      {
        v63 = 1 << (v28 - 1);
        v23 = (v63 + v23) >> v28;
        v25 = (v63 + v25) >> v28;
        v13 = (v63 + v13) >> v28;
        v15 = (v63 + v15) >> v28;
        v27 = (v63 + v69) >> v28;
        v29 = 6 - v28;
        v82 = (v63 + v82) >> v28;
        v69 = v27;
        v26 = 2 * (v15 * v23 - v13 * v25);
      }
      v30 = v25 * v26;
      if ( v25 * v26 < 0 )
        v30 = -v30;
      if ( v30 >= 587202560 )
        return 4870LL;
      v31 = v15 * v26;
      if ( v15 * v26 < 0 )
        v31 = -v31;
      if ( v31 >= 587202560 )
        return 4870LL;
      v32 = 1 << v29;
      v33 = v25 - 2 * v23;
      v34 = v15 - 2 * v13;
      v35 = v13 * v26;
      v36 = v34 * v34;
      v37 = v33 * v34;
      v38 = v33 * v33;
      v73[0] = v13 * v26;
      v39 = -v37;
      v74[0] = -(v23 * v26);
      if ( v72 <= 7 )
      {
        v58 = 2 * v39;
        v42 = v82 * (v27 * v58 + 2 * v35 + v82 * v36) + v67 + v27 * (-2 * v23 * v26 + v27 * v38);
        v46 = (v27 * v58 + 2 * v35 + v36 * (v32 + 2 * v82)) << v65;
        v44 = (-2 * v23 * v26 + v38 * (v32 + 2 * v69) + v82 * v58) << v65;
        v48 = 2 * v65;
        v45 = (unsigned int)(v36 << (2 * v65));
        v47 = v58 << (2 * v65);
      }
      else
      {
        v40 = v32 >> 1;
        v41 = v27 * v39;
        v42 = v82 * ((v35 + v27 * v39 + v82 * (v36 >> 1)) >> v29) + v67 + v27 * ((v27 * (v38 >> 1) - v23 * v26) >> v29);
        v43 = v36 * (v40 + v82);
        v44 = v74[0] + v38 * (v40 + v69) + v82 * v39;
        v45 = (unsigned int)(v36 << (v65 - 1));
        v46 = v73[0] + v41 + v43;
        v47 = v39 << v65;
        v48 = v65 - 1;
      }
      v49 = v38 << v48;
      v50 = 2 * v45;
      v51 = 0LL;
      v66 = v49;
      v80 = v45;
      v83 = 2 * v45;
      v68 = 2 * v49;
      if ( v85 )
      {
        v61 = v81 + v76;
        v62 = v81 + v17;
        v77 = v81 + v76;
        if ( v26 > 0 )
        {
          while ( v62 != v61 )
          {
            if ( v12 == v11 )
              return 0LL;
            if ( v42 < 0 || v44 > v49 )
            {
              v62 += v78;
              v42 += v46;
              v46 += v50;
              v44 += v47;
            }
            else
            {
              result = v71(v62, v12);
              v51 = 0LL;
              if ( (_DWORD)result )
                return result;
              v12 += v84;
              v42 += v44;
              v44 += v68;
              v61 = v77;
              v46 += v47;
              v49 = v66;
              v50 = v83;
            }
          }
LABEL_84:
          while ( v12 != v11 )
          {
            result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v71)(v62, v12, v51, v45);
            if ( (_DWORD)result )
              return result;
            v12 += v84;
          }
        }
        else
        {
          while ( 1 )
          {
            if ( v62 == v61 )
              goto LABEL_84;
            if ( v12 == v11 )
              break;
            if ( v42 < 0 || v46 > (int)v45 )
            {
              result = v71(v62, v12);
              v51 = 0LL;
              if ( (_DWORD)result )
                return result;
              v12 += v84;
              v42 += v44;
              v44 += v68;
              v61 = v77;
              v46 += v47;
              v45 = v80;
              v50 = v83;
            }
            else
            {
              v62 += v78;
              v42 += v46;
              v46 += v50;
              v44 += v47;
            }
          }
        }
      }
      else
      {
        if ( v26 <= 0 )
        {
          while ( v12 != v11 )
          {
            if ( v42 < 0 || v46 > (int)v45 )
            {
              result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v71)(v17 + v81, v12, v51, v45);
              if ( (_DWORD)result )
                return result;
              v12 += v84;
              v42 += v44;
              v44 += v68;
              v46 += v47;
            }
            else
            {
              result = ((__int64 (__fastcall *)(_QWORD, _QWORD))v75[0])(v17, v12 + v70);
              if ( (_DWORD)result )
                return result;
              v17 += v78;
              v42 += v46;
              v46 += v83;
              v44 += v47;
            }
            if ( v17 == v76 )
              break;
            v45 = v80;
          }
        }
        else
        {
          while ( v12 != v11 )
          {
            if ( v42 < 0 || v44 > v49 )
            {
              result = ((__int64 (__fastcall *)(_QWORD, _QWORD))v75[0])(v17, v12 + v70);
              if ( (_DWORD)result )
                return result;
              v17 += v78;
              v42 += v46;
              v46 += v83;
              v44 += v47;
            }
            else
            {
              result = v71(v17 + v81, v12);
              if ( (_DWORD)result )
                return result;
              v12 += v84;
              v42 += v44;
              v44 += v68;
              v46 += v47;
            }
            if ( v17 == v76 )
              break;
            v49 = v66;
          }
        }
        for ( ; v17 != v76; v17 += v78 )
        {
          result = ((__int64 (__fastcall *)(_QWORD, _QWORD))v75[0])(v17, v12 + v70);
          if ( (_DWORD)result )
            return result;
        }
        if ( v12 != v11 )
        {
          v57 = v81 + v17;
          while ( 1 )
          {
            result = v71(v57, v12);
            if ( (_DWORD)result )
              break;
            v12 += v84;
            if ( v12 == v11 )
              return 0LL;
          }
          return result;
        }
      }
      return 0LL;
    }
    v56 = v70 + v12;
    while ( 1 )
    {
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD))v75[0])(v17, v56);
      if ( (_DWORD)result )
        break;
      v17 += v78;
      if ( v17 == v18 )
        return 0LL;
    }
  }
  return result;
}
