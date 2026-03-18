/*
 * XREFs of fsc_CalcSpline @ 0x1C00C075C
 * Callers:
 *     EvaluateSpline @ 0x1C00C0038 (EvaluateSpline.c)
 * Callees:
 *     fsc_BeginElement @ 0x1C00C0F2C (fsc_BeginElement.c)
 *     PowerOf2 @ 0x1C00C10BC (PowerOf2.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
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
  signed int v16; // edi
  int v17; // esi
  int v18; // eax
  unsigned int v19; // edi
  int v20; // eax
  int v21; // r10d
  __int64 v22; // rcx
  int v23; // eax
  int v24; // edx
  int v25; // r8d
  int v26; // r10d
  int v27; // r11d
  int v28; // r9d
  int v29; // esi
  int v30; // edx
  char v31; // cl
  int v32; // r14d
  int v33; // r10d
  int v34; // edx
  int v35; // r15d
  int v36; // eax
  int v37; // r15d
  int v38; // r10d
  int v39; // r12d
  int v40; // r15d
  int v41; // r14d
  int v42; // r8d
  int v43; // r12d
  int v44; // esi
  int v45; // r12d
  int v46; // r14d
  int v47; // edx
  int v48; // esi
  int v49; // r15d
  char v50; // cl
  int v51; // r10d
  int v52; // r8d
  __int64 result; // rax
  signed int v54; // eax
  unsigned int v55; // ebx
  unsigned int v56; // edi
  int v57; // edx
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
  int v80; // [rsp+E0h] [rbp+5Fh]
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
    v54 = ((a2 + 32) & 0xFFFFFFC0) + 32;
    v12 = v54 >> 6;
    v10 = v54 - a2;
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
    v19 = (int)(((a1 + 32) & 0xFFFFFFC0) + 32) >> 6;
    v76 = ((a1 + 32) & 0xFFFFFFC0) + 32 - a1;
    v17 = ((a5 - 33) >> 6) + 1;
    v81 = 0;
    v79 = a3 - a1;
    v20 = a5 - a1;
  }
  else
  {
    v81 = 1;
    v67 = 1 - v14;
    v16 = ((a1 - 33) & 0xFFFFFFC0) + 32;
    v17 = ((a5 + 32) >> 6) - 1;
    v9 = (v9 != 1) + 2;
    v18 = a1 - v16;
    v19 = v16 >> 6;
    v76 = v18;
    v79 = a1 - a3;
    v20 = a1 - a5;
  }
  v64 = v20;
  v73[0] = a3;
  v74[0] = a4;
  v73[1] = a5;
  v82 = v17;
  v74[1] = a6;
  fsc_BeginElement(a7, v9, 1, 2, (__int64)v73, (__int64)v74, (__int64)&v71, (__int64)v75);
  v85 = a7 & 2;
  if ( v85 )
  {
    if ( v12 == v11 )
      return 0LL;
    if ( v19 != v17 )
      goto LABEL_8;
    v60 = v81 + v19;
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
  else if ( v19 == v17 )
  {
    v59 = v81 + v19;
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
      v22 = (unsigned int)v21;
      if ( v21 <= v15 )
        v22 = (unsigned int)v15;
      v23 = PowerOf2(v22);
      v72 = v23;
      if ( v23 > 12 || v24 > 25 )
        return 4870LL;
      v28 = v76;
      v29 = v69;
      v30 = dword_1C02E8FA0[v24 + v23];
      v31 = 6 - v30;
      v65 = 6 - v30;
      if ( v30 > 0 )
      {
        v63 = 1 << (v30 - 1);
        v25 = (v63 + v25) >> v30;
        v26 = (v63 + v26) >> v30;
        v13 = (v63 + v13) >> v30;
        v15 = (v63 + v15) >> v30;
        v28 = (v63 + v76) >> v30;
        v29 = (v63 + v69) >> v30;
        v31 = 6 - v30;
        v76 = v28;
        v69 = v29;
        v27 = 2 * (v15 * v25 - v13 * v26);
      }
      if ( (int)abs32(v26 * v27) >= 587202560 || (int)abs32(v15 * v27) >= 587202560 )
        return 4870LL;
      v32 = 1 << v31;
      v33 = v26 - 2 * v25;
      v34 = v13 * v27;
      v35 = v15 - 2 * v13;
      v36 = v35 * v35;
      v37 = v33 * v35;
      v38 = v33 * v33;
      v73[0] = v13 * v27;
      v39 = -(v25 * v27);
      v40 = -v37;
      v74[0] = v39;
      if ( v72 <= 7 )
      {
        v57 = 2 * v34;
        v58 = 2 * v40;
        v45 = v76 * (v29 * v58 + v57 + v76 * v36) + v67 + v29 * (-2 * v25 * v27 + v29 * v38);
        v48 = (v29 * v58 + v57 + v36 * (v32 + 2 * v76)) << v65;
        v46 = (-2 * v25 * v27 + v38 * (v32 + 2 * v69) + v76 * v58) << v65;
        v50 = 2 * v65;
        v47 = v36 << (2 * v65);
        v49 = v58 << (2 * v65);
      }
      else
      {
        v41 = v32 >> 1;
        v42 = v29 * v40;
        v43 = v29 * ((v29 * (v38 >> 1) + v39) >> v31);
        v44 = v41 + v28;
        v45 = v28 * ((v73[0] + v42 + v28 * (v36 >> 1)) >> v31) + v67 + v43;
        v46 = v74[0] + v38 * (v41 + v69) + v28 * v40;
        v47 = v36 << (v31 - 1);
        v48 = v73[0] + v42 + v36 * v44;
        v49 = v40 << v65;
        v50 = v31 - 1;
      }
      v51 = v38 << v50;
      v52 = 2 * v47;
      v66 = v51;
      v80 = v47;
      v77 = 2 * v47;
      v68 = 2 * v51;
      if ( v85 )
      {
        v61 = v81 + v82;
        v62 = v81 + v19;
        v83 = v81 + v82;
        if ( v27 > 0 )
        {
          while ( v62 != v61 )
          {
            if ( v12 == v11 )
              return 0LL;
            if ( v45 < 0 || v46 > v51 )
            {
              v62 += v78;
              v45 += v48;
              v48 += v52;
              v46 += v49;
            }
            else
            {
              result = v71(v62, v12);
              if ( (_DWORD)result )
                return result;
              v12 += v84;
              v45 += v46;
              v46 += v68;
              v61 = v83;
              v48 += v49;
              v51 = v66;
              v52 = v77;
            }
          }
LABEL_80:
          while ( v12 != v11 )
          {
            result = v71(v62, v12);
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
              goto LABEL_80;
            if ( v12 == v11 )
              break;
            if ( v45 < 0 || v48 > v47 )
            {
              result = v71(v62, v12);
              if ( (_DWORD)result )
                return result;
              v12 += v84;
              v45 += v46;
              v46 += v68;
              v61 = v83;
              v48 += v49;
              v47 = v80;
              v52 = v77;
            }
            else
            {
              v62 += v78;
              v45 += v48;
              v48 += v52;
              v46 += v49;
            }
          }
        }
      }
      else
      {
        if ( v27 <= 0 )
        {
          while ( v12 != v11 )
          {
            if ( v45 < 0 || v48 > v47 )
            {
              result = v71(v19 + v81, v12);
              if ( (_DWORD)result )
                return result;
              v12 += v84;
              v45 += v46;
              v46 += v68;
              v48 += v49;
            }
            else
            {
              result = ((__int64 (__fastcall *)(_QWORD, _QWORD))v75[0])(v19, v12 + v70);
              if ( (_DWORD)result )
                return result;
              v19 += v78;
              v45 += v48;
              v48 += v77;
              v46 += v49;
            }
            if ( v19 == v82 )
              break;
            v47 = v80;
          }
        }
        else
        {
          while ( v12 != v11 )
          {
            if ( v45 < 0 || v46 > v51 )
            {
              result = ((__int64 (__fastcall *)(_QWORD, _QWORD))v75[0])(v19, v12 + v70);
              if ( (_DWORD)result )
                return result;
              v19 += v78;
              v45 += v48;
              v48 += v77;
              v46 += v49;
            }
            else
            {
              result = v71(v19 + v81, v12);
              if ( (_DWORD)result )
                return result;
              v12 += v84;
              v45 += v46;
              v46 += v68;
              v48 += v49;
            }
            if ( v19 == v82 )
              break;
            v51 = v66;
          }
        }
        for ( ; v19 != v82; v19 += v78 )
        {
          result = ((__int64 (__fastcall *)(_QWORD, _QWORD))v75[0])(v19, v12 + v70);
          if ( (_DWORD)result )
            return result;
        }
        if ( v12 != v11 )
        {
          v56 = v81 + v19;
          while ( 1 )
          {
            result = v71(v56, v12);
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
    v55 = v70 + v12;
    while ( 1 )
    {
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD))v75[0])(v19, v55);
      if ( (_DWORD)result )
        break;
      v19 += v78;
      if ( v19 == v17 )
        return 0LL;
    }
  }
  return result;
}
