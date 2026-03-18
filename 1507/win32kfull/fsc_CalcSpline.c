/*
 * XREFs of fsc_CalcSpline @ 0x1C00B05F4
 * Callers:
 *     EvaluateSpline @ 0x1C00B01D0 (EvaluateSpline.c)
 * Callees:
 *     fsc_BeginElement @ 0x1C00B0CBC (fsc_BeginElement.c)
 *     PowerOf2 @ 0x1C00B0E4C (PowerOf2.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
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
  signed int v17; // edi
  int v18; // esi
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  int v22; // r10d
  __int64 v23; // rcx
  int v24; // eax
  int v25; // edx
  __int64 v26; // r8
  int v27; // r10d
  int v28; // r11d
  int v29; // esi
  int v30; // r8d
  char v31; // cl
  int v32; // eax
  int v33; // eax
  int v34; // r14d
  int v35; // r10d
  int v36; // r15d
  int v37; // eax
  int v38; // r9d
  int v39; // r15d
  int v40; // r10d
  int v41; // r15d
  int v42; // r14d
  int v43; // r8d
  int v44; // r12d
  int v45; // esi
  int v46; // r14d
  __int64 v47; // r9
  int v48; // esi
  int v49; // r15d
  char v50; // cl
  int v51; // r10d
  int v52; // edx
  __int64 v53; // r8
  __int64 result; // rax
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
  if ( a5 > a1 )
  {
    v78 = 1;
    v20 = (int)(((a1 + 32) & 0xFFFFFFC0) + 32) >> 6;
    v82 = ((a1 + 32) & 0xFFFFFFC0) + 32 - a1;
    v18 = ((a5 - 33) >> 6) + 1;
    v81 = 0;
    v79 = a3 - a1;
    v21 = a5 - a1;
  }
  else
  {
    v81 = 1;
    v67 = 1 - v14;
    v17 = ((a1 - 33) & 0xFFFFFFC0) + 32;
    v18 = ((a5 + 32) >> 6) - 1;
    v9 = (v9 != 1) + 2;
    v19 = a1 - v17;
    v20 = v17 >> 6;
    v82 = v19;
    v79 = a1 - a3;
    v21 = a1 - a5;
  }
  v64 = v21;
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
    if ( v20 != v18 )
      goto LABEL_8;
    v60 = v81 + v20;
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
  else if ( v20 == v18 )
  {
    v59 = v81 + v20;
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
      v23 = (unsigned int)v22;
      if ( v22 <= v15 )
        v23 = (unsigned int)v15;
      v24 = PowerOf2(v23);
      v72 = v24;
      if ( v24 > 12 || (int)v26 > 25 )
        return 4870LL;
      v29 = v69;
      v30 = dword_1C02E2580[v26 + v24];
      v31 = 6 - v30;
      v65 = 6 - v30;
      if ( v30 > 0 )
      {
        v63 = 1 << (v30 - 1);
        v25 = (v63 + v25) >> v30;
        v27 = (v63 + v27) >> v30;
        v13 = (v63 + v13) >> v30;
        v15 = (v63 + v15) >> v30;
        v29 = (v63 + v69) >> v30;
        v31 = 6 - v30;
        v82 = (v63 + v82) >> v30;
        v69 = v29;
        v28 = 2 * (v15 * v25 - v13 * v27);
      }
      v32 = v27 * v28;
      if ( v27 * v28 < 0 )
        v32 = -v32;
      if ( v32 >= 587202560 )
        return 4870LL;
      v33 = v15 * v28;
      if ( v15 * v28 < 0 )
        v33 = -v33;
      if ( v33 >= 587202560 )
        return 4870LL;
      v34 = 1 << v31;
      v35 = v27 - 2 * v25;
      v36 = v15 - 2 * v13;
      v37 = v13 * v28;
      v38 = v36 * v36;
      v39 = v35 * v36;
      v40 = v35 * v35;
      v73[0] = v13 * v28;
      v41 = -v39;
      v74[0] = -(v25 * v28);
      if ( v72 <= 7 )
      {
        v58 = 2 * v41;
        v44 = v82 * (v29 * v58 + 2 * v37 + v82 * v38) + v67 + v29 * (-2 * v25 * v28 + v29 * v40);
        v48 = (v29 * v58 + 2 * v37 + v38 * (v34 + 2 * v82)) << v65;
        v46 = (-2 * v25 * v28 + v40 * (v34 + 2 * v69) + v82 * v58) << v65;
        v50 = 2 * v65;
        v47 = (unsigned int)(v38 << (2 * v65));
        v49 = v58 << (2 * v65);
      }
      else
      {
        v42 = v34 >> 1;
        v43 = v29 * v41;
        v44 = v82 * ((v37 + v29 * v41 + v82 * (v38 >> 1)) >> v31) + v67 + v29 * ((v29 * (v40 >> 1) - v25 * v28) >> v31);
        v45 = v38 * (v42 + v82);
        v46 = v74[0] + v40 * (v42 + v69) + v82 * v41;
        v47 = (unsigned int)(v38 << (v65 - 1));
        v48 = v73[0] + v43 + v45;
        v49 = v41 << v65;
        v50 = v65 - 1;
      }
      v51 = v40 << v50;
      v52 = 2 * v47;
      v53 = 0LL;
      v66 = v51;
      v80 = v47;
      v83 = 2 * v47;
      v68 = 2 * v51;
      if ( v85 )
      {
        v61 = v81 + v76;
        v62 = v81 + v20;
        v77 = v81 + v76;
        if ( v28 > 0 )
        {
          while ( v62 != v61 )
          {
            if ( v12 == v11 )
              return 0LL;
            if ( v44 < 0 || v46 > v51 )
            {
              v62 += v78;
              v44 += v48;
              v48 += v52;
              v46 += v49;
            }
            else
            {
              result = v71(v62, v12);
              v53 = 0LL;
              if ( (_DWORD)result )
                return result;
              v12 += v84;
              v44 += v46;
              v46 += v68;
              v61 = v77;
              v48 += v49;
              v51 = v66;
              v52 = v83;
            }
          }
LABEL_84:
          while ( v12 != v11 )
          {
            result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v71)(v62, v12, v53, v47);
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
            if ( v44 < 0 || v48 > (int)v47 )
            {
              result = v71(v62, v12);
              v53 = 0LL;
              if ( (_DWORD)result )
                return result;
              v12 += v84;
              v44 += v46;
              v46 += v68;
              v61 = v77;
              v48 += v49;
              v47 = v80;
              v52 = v83;
            }
            else
            {
              v62 += v78;
              v44 += v48;
              v48 += v52;
              v46 += v49;
            }
          }
        }
      }
      else
      {
        if ( v28 <= 0 )
        {
          while ( v12 != v11 )
          {
            if ( v44 < 0 || v48 > (int)v47 )
            {
              result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v71)(v20 + v81, v12, v53, v47);
              if ( (_DWORD)result )
                return result;
              v12 += v84;
              v44 += v46;
              v46 += v68;
              v48 += v49;
            }
            else
            {
              result = ((__int64 (__fastcall *)(_QWORD, _QWORD))v75[0])(v20, v12 + v70);
              if ( (_DWORD)result )
                return result;
              v20 += v78;
              v44 += v48;
              v48 += v83;
              v46 += v49;
            }
            if ( v20 == v76 )
              break;
            v47 = v80;
          }
        }
        else
        {
          while ( v12 != v11 )
          {
            if ( v44 < 0 || v46 > v51 )
            {
              result = ((__int64 (__fastcall *)(_QWORD, _QWORD))v75[0])(v20, v12 + v70);
              if ( (_DWORD)result )
                return result;
              v20 += v78;
              v44 += v48;
              v48 += v83;
              v46 += v49;
            }
            else
            {
              result = v71(v20 + v81, v12);
              if ( (_DWORD)result )
                return result;
              v12 += v84;
              v44 += v46;
              v46 += v68;
              v48 += v49;
            }
            if ( v20 == v76 )
              break;
            v51 = v66;
          }
        }
        for ( ; v20 != v76; v20 += v78 )
        {
          result = ((__int64 (__fastcall *)(_QWORD, _QWORD))v75[0])(v20, v12 + v70);
          if ( (_DWORD)result )
            return result;
        }
        if ( v12 != v11 )
        {
          v57 = v81 + v20;
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
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD))v75[0])(v20, v56);
      if ( (_DWORD)result )
        break;
      v20 += v78;
      if ( v20 == v18 )
        return 0LL;
    }
  }
  return result;
}
