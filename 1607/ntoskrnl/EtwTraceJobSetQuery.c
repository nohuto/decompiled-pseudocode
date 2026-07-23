/*
 * XREFs of EtwTraceJobSetQuery @ 0x1406A1AA8
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 *     PspSetNetRateControl @ 0x140680CC4 (PspSetNetRateControl.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1406A2104 (EtwpCopyJobGuidSafe.c)
 *     EtwpCopyJobIdSafe @ 0x1406A2120 (EtwpCopyJobIdSafe.c)
 */

__int64 __fastcall EtwTraceJobSetQuery(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, unsigned __int16 a6)
{
  __int64 v6; // r8
  _DWORD *v7; // r9
  int v8; // r11d
  __int16 v9; // cx
  __int64 result; // rax
  unsigned int v11; // r10d
  int v12; // r10d
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v30[16]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE *v32; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h]
  char *v34; // [rsp+78h] [rbp-90h]
  __int64 v35; // [rsp+80h] [rbp-88h]
  __int64 v36; // [rsp+88h] [rbp-80h]
  __int64 v37; // [rsp+90h] [rbp-78h]
  __int64 v38; // [rsp+98h] [rbp-70h]
  __int64 v39; // [rsp+A0h] [rbp-68h]
  __int64 v40; // [rsp+A8h] [rbp-60h]
  __int64 v41; // [rsp+B0h] [rbp-58h]
  __int64 v42; // [rsp+B8h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-48h]
  __int64 v44; // [rsp+C8h] [rbp-40h]
  __int64 v45; // [rsp+D0h] [rbp-38h]
  __int64 v46; // [rsp+D8h] [rbp-30h]
  __int64 v47; // [rsp+E0h] [rbp-28h]
  __int64 v48; // [rsp+E8h] [rbp-20h]
  __int64 v49; // [rsp+F0h] [rbp-18h]
  __int64 v50; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h]
  __int64 v52; // [rsp+108h] [rbp+0h]
  __int64 v53; // [rsp+110h] [rbp+8h]
  __int64 v54; // [rsp+118h] [rbp+10h]
  __int64 v55; // [rsp+120h] [rbp+18h]
  __int64 v56; // [rsp+128h] [rbp+20h]
  __int64 v57; // [rsp+130h] [rbp+28h]
  __int64 v58; // [rsp+138h] [rbp+30h]
  __int64 v59; // [rsp+140h] [rbp+38h]
  __int64 v60; // [rsp+148h] [rbp+40h]
  __int64 v61; // [rsp+150h] [rbp+48h]
  __int64 v62; // [rsp+158h] [rbp+50h]
  __int64 v63; // [rsp+160h] [rbp+58h]
  __int64 v64; // [rsp+168h] [rbp+60h]
  __int64 v65; // [rsp+170h] [rbp+68h]
  __int64 v66; // [rsp+178h] [rbp+70h]
  __int64 v67; // [rsp+180h] [rbp+78h]
  __int64 *v68; // [rsp+188h] [rbp+80h]
  __int64 v69; // [rsp+190h] [rbp+88h]

  EtwpCopyJobGuidSafe(v30, a1);
  EtwpCopyJobIdSafe(&v31);
  v9 = a6;
  v32 = v30;
  HIDWORD(v31) = v8;
  result = a6;
  v33 = 24LL;
  v11 = 1;
  if ( a6 != 1829 )
  {
    if ( a6 == 1830 )
    {
      if ( v8 != 13 )
        return result;
      v34 = (char *)v6;
      v36 = v6 + 4;
      v12 = 19;
      v35 = 4LL;
      v38 = v6 + 8;
      v9 = 1835;
      v37 = 4LL;
      v40 = v6 + 16;
      v42 = v6 + 24;
      v44 = v6 + 32;
      v46 = v6 + 40;
      v48 = v6 + 48;
      v50 = v6 + 56;
      v52 = v6 + 80;
      v54 = v6 + 64;
      v56 = v6 + 72;
      v58 = v6 + 76;
      v60 = v6 + 88;
      v62 = v6 + 92;
      v64 = v6 + 96;
      v66 = v6 + 100;
      LODWORD(v27) = *v7;
      v68 = &v27;
      v39 = 8LL;
      v41 = 8LL;
      v43 = 8LL;
      v45 = 8LL;
      v47 = 8LL;
      v49 = 8LL;
      v51 = 8LL;
      v53 = 8LL;
      v55 = 8LL;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 4LL;
      v69 = 4LL;
    }
    else
    {
      result = (unsigned int)a6 - 1831;
      if ( (unsigned int)result > 1 )
        return result;
      v35 = 4LL;
      v34 = &a5;
      v12 = 2;
    }
    return EtwTraceKernelEvent((int)&v32, v12, 0x80000u, v9, 5249284);
  }
  if ( v8 != 12 )
  {
    if ( v8 == 15 )
    {
      v34 = (char *)v6;
      v36 = v6 + 4;
      v9 = 1836;
      v35 = 4LL;
      v12 = 3;
      v37 = 4LL;
      return EtwTraceKernelEvent((int)&v32, v12, 0x80000u, v9, 5249284);
    }
    if ( v8 != 32 )
      return result;
    v34 = (char *)v6;
    v36 = v6 + 8;
    v11 = 4;
    v35 = 4LL;
    v38 = v6 + 16;
    v37 = 8LL;
    v39 = 1LL;
  }
  v13 = 2LL * v11;
  (&v32)[v13] = (_BYTE *)(v6 + 40);
  *(&v33 + v13) = 4LL;
  v14 = v11 + 1;
  v15 = v11 + 2;
  v14 *= 2LL;
  v16 = 2LL * v15;
  (&v32)[v14] = (_BYTE *)v6;
  *(&v33 + v14) = 8LL;
  (&v32)[v16] = (_BYTE *)(v6 + 8);
  *(&v33 + v16) = 8LL;
  v17 = v15 + 1;
  v15 += 2;
  v17 *= 2LL;
  (&v32)[v17] = (_BYTE *)(v6 + 16);
  v18 = *(_QWORD *)(v6 + 48);
  *(&v33 + v17) = 8LL;
  v28 = v18 >> 12;
  v19 = 2LL * v15;
  (&v32)[v19] = &v28;
  *(&v33 + v19) = 8LL;
  v29 = *(_QWORD *)(v6 + 24) >> 12;
  v20 = v15 + 1;
  v15 += 2;
  v20 *= 2LL;
  (&v32)[v20] = &v29;
  *(&v33 + v20) = 8LL;
  v21 = 2LL * v15;
  (&v32)[v21] = (_BYTE *)(v6 + 32);
  *(&v33 + v21) = 4LL;
  v22 = v15 + 1;
  v15 += 2;
  v22 *= 2LL;
  (&v32)[v22] = (_BYTE *)(v6 + 36);
  *(&v33 + v22) = 4LL;
  v23 = 2LL * v15;
  (&v32)[v23] = (_BYTE *)(v6 + 44);
  *(&v33 + v23) = 4LL;
  v24 = v15 + 1;
  v15 += 2;
  v24 *= 2LL;
  (&v32)[v24] = (_BYTE *)(v6 + 56);
  *(&v33 + v24) = 4LL;
  v25 = v15++;
  v25 *= 2LL;
  (&v32)[v25] = (_BYTE *)(v6 + 60);
  *(&v33 + v25) = 4LL;
  v26 = 2LL * v15;
  v12 = v15 + 1;
  (&v32)[v26] = (_BYTE *)(v6 + 64);
  *(&v33 + v26) = 4LL;
  v9 = 1833;
  return EtwTraceKernelEvent((int)&v32, v12, 0x80000u, v9, 5249284);
}
