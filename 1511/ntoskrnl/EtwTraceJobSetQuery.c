/*
 * XREFs of EtwTraceJobSetQuery @ 0x140660C64
 * Callers:
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspSetNetRateControl @ 0x140642924 (PspSetNetRateControl.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1406612BC (EtwpCopyJobGuidSafe.c)
 */

__int64 __fastcall EtwTraceJobSetQuery(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        char a6,
        unsigned __int16 a7)
{
  int v7; // r8d
  __int64 v8; // r9
  int v9; // r11d
  unsigned __int16 v10; // cx
  int v11; // r10d
  __int64 result; // rax
  unsigned int v13; // r10d
  int v14; // r10d
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // r10d
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v32[16]; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+58h] [rbp-A8h]
  int v34; // [rsp+5Ch] [rbp-A4h]
  _BYTE *v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h]
  char *v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  __int64 v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  __int64 v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  __int64 v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  __int64 v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  __int64 v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  __int64 v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  __int64 v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  __int64 v61; // [rsp+130h] [rbp+30h]
  __int64 v62; // [rsp+138h] [rbp+38h]
  __int64 v63; // [rsp+140h] [rbp+40h]
  __int64 v64; // [rsp+148h] [rbp+48h]
  __int64 v65; // [rsp+150h] [rbp+50h]
  __int64 v66; // [rsp+158h] [rbp+58h]
  __int64 v67; // [rsp+160h] [rbp+60h]
  __int64 v68; // [rsp+168h] [rbp+68h]
  __int64 v69; // [rsp+170h] [rbp+70h]
  __int64 v70; // [rsp+178h] [rbp+78h]
  int *v71; // [rsp+180h] [rbp+80h]
  __int64 v72; // [rsp+188h] [rbp+88h]

  EtwpCopyJobGuidSafe(v32, a1);
  v10 = a7;
  v35 = v32;
  v33 = v11;
  result = a7;
  v34 = v7;
  v13 = 1;
  v36 = 24LL;
  if ( a7 != 1829 )
  {
    if ( a7 == 1830 )
    {
      if ( v7 != 13 )
        return result;
      v37 = (char *)v8;
      v39 = v8 + 4;
      v14 = 19;
      v38 = 4LL;
      v41 = v8 + 8;
      v43 = v8 + 16;
      v45 = v8 + 24;
      v47 = v8 + 32;
      v49 = v8 + 40;
      v51 = v8 + 48;
      v53 = v8 + 56;
      v55 = v8 + 80;
      v57 = v8 + 64;
      v59 = v8 + 72;
      v61 = v8 + 76;
      v63 = v8 + 88;
      v65 = v8 + 92;
      v67 = v8 + 96;
      v69 = v8 + 100;
      v40 = 4LL;
      v42 = 8LL;
      v44 = 8LL;
      v29 = *a5;
      v10 = 1835;
      v71 = &v29;
      v46 = 8LL;
      v48 = 8LL;
      v50 = 8LL;
      v52 = 8LL;
      v54 = 8LL;
      v56 = 8LL;
      v58 = 8LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 4LL;
    }
    else
    {
      result = (unsigned int)a7 - 1831;
      if ( (unsigned int)result > 1 )
        return result;
      v38 = 4LL;
      v37 = &a6;
      v14 = 2;
    }
    return EtwTraceKernelEvent((int)&v35, v14, 0x80000u, v10, 5249284);
  }
  if ( v9 != 12 )
  {
    if ( v9 == 15 )
    {
      v37 = (char *)v8;
      v39 = v8 + 4;
      v10 = 1836;
      v38 = 4LL;
      v14 = 3;
      v40 = 4LL;
      return EtwTraceKernelEvent((int)&v35, v14, 0x80000u, v10, 5249284);
    }
    if ( v9 != 32 )
      return result;
    v37 = (char *)v8;
    v39 = v8 + 8;
    v13 = 4;
    v38 = 4LL;
    v41 = v8 + 16;
    v40 = 8LL;
    v42 = 1LL;
  }
  v15 = 2LL * v13;
  (&v35)[v15] = (_BYTE *)(v8 + 40);
  *(&v36 + v15) = 4LL;
  v16 = v13 + 1;
  v17 = v13 + 2;
  v16 *= 2LL;
  v18 = 2LL * v17;
  (&v35)[v16] = (_BYTE *)v8;
  *(&v36 + v16) = 8LL;
  (&v35)[v18] = (_BYTE *)(v8 + 8);
  *(&v36 + v18) = 8LL;
  v19 = v17 + 1;
  v17 += 2;
  v19 *= 2LL;
  (&v35)[v19] = (_BYTE *)(v8 + 16);
  v20 = *(_QWORD *)(v8 + 48);
  *(&v36 + v19) = 8LL;
  v31 = v20 >> 12;
  v21 = 2LL * v17;
  (&v35)[v21] = &v31;
  *(&v36 + v21) = 8LL;
  v30 = *(_QWORD *)(v8 + 24) >> 12;
  v22 = v17 + 1;
  v17 += 2;
  v22 *= 2LL;
  (&v35)[v22] = &v30;
  *(&v36 + v22) = 8LL;
  v23 = 2LL * v17;
  (&v35)[v23] = (_BYTE *)(v8 + 32);
  *(&v36 + v23) = 4LL;
  v24 = v17 + 1;
  v17 += 2;
  v24 *= 2LL;
  (&v35)[v24] = (_BYTE *)(v8 + 36);
  *(&v36 + v24) = 4LL;
  v25 = 2LL * v17;
  (&v35)[v25] = (_BYTE *)(v8 + 44);
  *(&v36 + v25) = 4LL;
  v26 = v17 + 1;
  v17 += 2;
  v26 *= 2LL;
  (&v35)[v26] = (_BYTE *)(v8 + 56);
  *(&v36 + v26) = 4LL;
  v27 = v17++;
  v27 *= 2LL;
  (&v35)[v27] = (_BYTE *)(v8 + 60);
  *(&v36 + v27) = 4LL;
  v28 = 2LL * v17;
  v14 = v17 + 1;
  (&v35)[v28] = (_BYTE *)(v8 + 64);
  *(&v36 + v28) = 4LL;
  v10 = 1833;
  return EtwTraceKernelEvent((int)&v35, v14, 0x80000u, v10, 5249284);
}
