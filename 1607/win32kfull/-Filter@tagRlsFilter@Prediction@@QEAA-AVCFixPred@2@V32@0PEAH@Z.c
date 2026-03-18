/*
 * XREFs of ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C524C
 * Callers:
 *     ?InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01C57F4 (-InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTI.c)
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01C6530 (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01C4860 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01C4928 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction_ea_1C01C4928.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01C49A4 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBV.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01C4A0C (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV-$Squar.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AVCFixPred@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01C4A94 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AVCFixPred@0@AEBV-$Vector@VCFixPred@Prediction@@$0.c)
 *     ??$?GVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01C4B00 (--$-GVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?HVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01C4B70 (--$-HVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z.c)
 *     ??$?TVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01C4BD4 (--$-TVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV-.c)
 *     ??$Tri@VCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01C4C58 (--$Tri@VCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEB.c)
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C4CE0 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ??4?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z @ 0x1C01C4D84 (--4-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z @ 0x1C01C4DBC (--4-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??KPrediction@@YA?AVCFixPred@0@AEBV10@0@Z @ 0x1C01C4DE8 (--KPrediction@@YA-AVCFixPred@0@AEBV10@0@Z.c)
 *     ?FastMul64by64@@YA_J_J0@Z @ 0x1C01C51B8 (-FastMul64by64@@YA_J_J0@Z.c)
 *     ?diag@?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAXAEBVCFixPred@2@@Z @ 0x1C01C7014 (-diag@-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAXAEBVCFixPred@2@@Z.c)
 */

_QWORD *__fastcall Prediction::tagRlsFilter::Filter(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 *v6; // r11
  __int64 *v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // r8
  __int64 v10; // rax
  int v11; // r9d
  __int64 *v12; // rdx
  BOOL v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 *v19; // r12
  __int64 v20; // rdi
  __int64 v21; // r14
  __int64 *v22; // r8
  __int64 *v23; // rax
  char *v24; // rax
  char *v25; // rax
  __int64 *v26; // rbx
  __int64 *v27; // rdi
  __int64 *v28; // rax
  char *v29; // rax
  char *v30; // rax
  _QWORD *v31; // r14
  __int64 *v32; // r12
  char *v33; // rax
  char *v34; // rax
  _QWORD *v35; // r13
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  _QWORD *v39; // rax
  __int64 *v40; // rax
  signed __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  _QWORD *v44; // rax
  char *v45; // rdi
  char *v46; // rax
  __int64 *v47; // rbx
  char *v48; // rax
  __int64 *v49; // rax
  __int64 *v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rbx
  char *v53; // rdx
  signed __int64 v54; // rdi
  __int64 v55; // r10
  __int64 v56; // r9
  char *v57; // rax
  char *v58; // rax
  __int64 v59; // rcx
  char *v60; // rax
  char *v61; // rbx
  char *v62; // rax
  char *v63; // rax
  char *v64; // rax
  char *v65; // rax
  _QWORD *result; // rax
  __int64 v67; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v68; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v69; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v70; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *i; // [rsp+40h] [rbp-C0h]
  _QWORD *v72; // [rsp+48h] [rbp-B8h]
  char v73[24]; // [rsp+50h] [rbp-B0h] BYREF
  char v74[24]; // [rsp+68h] [rbp-98h] BYREF
  char v75[80]; // [rsp+80h] [rbp-80h] BYREF
  char v76[24]; // [rsp+D0h] [rbp-30h] BYREF
  char v77[24]; // [rsp+E8h] [rbp-18h] BYREF
  char v78[80]; // [rsp+100h] [rbp+0h] BYREF
  char v79[80]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v80[10]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v81[80]; // [rsp+1F0h] [rbp+F0h] BYREF
  char v82[80]; // [rsp+240h] [rbp+140h] BYREF
  char v83[80]; // [rsp+290h] [rbp+190h] BYREF
  char v84[80]; // [rsp+2E0h] [rbp+1E0h] BYREF
  char v85[80]; // [rsp+330h] [rbp+230h] BYREF
  char v86[80]; // [rsp+380h] [rbp+280h] BYREF

  v70 = a4;
  v6 = (__int64 *)a3;
  v69 = a3;
  v72 = a2;
  *a5 = 0;
  v7 = a1 + 2;
  for ( i = a5; ; *i = 1 )
  {
    v8 = a1 + 3;
    v9 = a1 + 1;
    v10 = *v7;
    v11 = 2;
    v12 = v7;
    do
    {
      if ( v12 != v9 )
        *v12 = *v9;
      if ( v12 + 3 != v9 + 3 )
        v12[3] = v9[3];
      --v9;
      --v12;
      --v11;
    }
    while ( v11 );
    if ( a1 != v6 )
      *a1 = *v6;
    if ( v8 != &v68 )
      *v8 = v10;
    v13 = 1;
    v14 = a1;
    v15 = 3LL;
    do
    {
      v13 = v13 && *v14 && (v16 = v14[3]) != 0 && (*v14 ^ v16) < 0;
      ++v14;
      --v15;
    }
    while ( v15 );
    if ( !v13 )
      break;
    v17 = a1[51];
    v18 = a1[53];
    v19 = a1 + 50;
    v20 = a1[50];
    v21 = a1[52];
    memset(a1, 0, 0x1B0uLL);
    if ( a1 + 53 != &v68 )
      a1[53] = v18;
    if ( v19 != &v68 )
      *v19 = v20;
    if ( a1 + 51 != &v68 )
      a1[51] = v17;
    if ( a1 + 52 != &v68 )
      a1[52] = v21;
    v22 = a1 + 48;
    if ( a1 + 48 != v19 )
      *v22 = *v19;
    v68 = 0x100000000LL;
    v23 = Prediction::operator/(&v67, &v68, v22);
    if ( a1 + 49 != v23 )
      a1[49] = *v23;
    Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(a1 + 18, a1 + 53);
    v68 = 0x100000000LL;
    Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(a1 + 36, &v68);
    v7 = a1 + 2;
    v6 = (__int64 *)v69;
  }
  v24 = Prediction::operator*<Prediction::CFixPred,3>(v73, (__int64)(a1 + 18), a1);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 12, (__int64)v24);
  v25 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v67, a1, (__int64)(a1 + 12));
  v26 = a1 + 45;
  if ( a1 + 45 != (__int64 *)v25 )
    *v26 = *(_QWORD *)v25;
  v27 = a1 + 48;
  if ( v26 != &v67 )
    *v26 += a1[48];
  v69 = 0x100000000LL;
  v28 = Prediction::operator/(&v67, &v69, a1 + 45);
  if ( v26 != v28 )
    *v26 = *v28;
  v29 = Prediction::operator*<Prediction::CFixPred,3>(v73, (__int64)(a1 + 12), a1 + 45);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 9, (__int64)v29);
  v30 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v67, a1 + 6, (__int64)a1);
  v31 = a1 + 46;
  if ( a1 + 46 != (__int64 *)v30 )
    *v31 = *(_QWORD *)v30;
  v32 = a1 + 47;
  if ( a1 + 47 != &v67 )
    *v32 = *(_QWORD *)v70 - *v31;
  v33 = Prediction::operator*<Prediction::CFixPred,3>(v73, (__int64)(a1 + 9), a1 + 47);
  v34 = Prediction::operator+<Prediction::CFixPred,3>(v74, (__int64)(a1 + 6), (__int64)v33);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 6, (__int64)v34);
  v35 = a1 + 49;
  v36 = Prediction::operator^<Prediction::CFixPred,3>(v75, (__int64)(a1 + 9), (__int64)(a1 + 12));
  v37 = Prediction::operator-<Prediction::CFixPred,3>(v78, (__int64)(a1 + 18), (__int64)v36);
  v38 = Prediction::operator*<Prediction::CFixPred,3>(v79, (__int64)v37, a1 + 49);
  v39 = Prediction::Tri<Prediction::CFixPred,3>(v80, (__int64)v38);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::operator=(a1 + 18, (__int64)v39);
  v40 = (__int64 *)Prediction::operator*<Prediction::CFixPred,3>((char *)&v67, a1 + 15, (__int64)a1);
  v41 = FastMul64by64(*v40, *v32);
  v42 = a1[50];
  if ( v41 >= v42 )
  {
    v42 = v41;
    if ( v41 > a1[51] )
      v42 = a1[51];
  }
  v43 = *v27 + FastMul64by64(a1[52], v42);
  if ( v27 != &v67 )
    *v27 = v43;
  v70 = 0x100000000LL;
  v44 = Prediction::operator/(&v67, &v70, a1 + 48);
  if ( v35 != v44 )
    *v35 = *v44;
  v45 = Prediction::operator^<Prediction::CFixPred,3>((char *)v80, (__int64)(a1 + 9), (__int64)(a1 + 9));
  v46 = Prediction::operator^<Prediction::CFixPred,3>(v79, (__int64)a1, (__int64)(a1 + 9));
  v47 = (__int64 *)Prediction::operator-<Prediction::CFixPred,3>(v78, (__int64)(a1 + 36), (__int64)v46);
  v48 = Prediction::operator^<Prediction::CFixPred,3>(v83, (__int64)(a1 + 9), (__int64)a1);
  v49 = (__int64 *)Prediction::operator-<Prediction::CFixPred,3>(v84, (__int64)(a1 + 36), (__int64)v48);
  v50 = (__int64 *)Prediction::operator*<Prediction::CFixPred,3>((__int64)v85, v49, a1 + 27);
  v51 = Prediction::operator*<Prediction::CFixPred,3>((__int64)v86, v50, v47);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>(v75);
  v52 = v51 - (_QWORD)v45;
  v53 = v75;
  v54 = v45 - v75;
  v55 = 3LL;
  do
  {
    v56 = 3LL;
    do
    {
      if ( v53 != (char *)&v67 )
        *(_QWORD *)v53 = *(_QWORD *)&v53[v54] + *(_QWORD *)&v53[v54 + v52];
      v53 += 8;
      --v56;
    }
    while ( v56 );
    --v55;
  }
  while ( v55 );
  v57 = Prediction::operator-<Prediction::CFixPred,3>(v81, (__int64)v75, (__int64)(a1 + 18));
  v58 = Prediction::operator*<Prediction::CFixPred,3>(v82, (__int64)v57, a1 + 49);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::operator=(a1 + 27, (__int64)v58);
  v60 = Prediction::operator*<Prediction::CFixPred,3>(v74, v59, a1);
  v61 = Prediction::operator*<Prediction::CFixPred,3>(v73, (__int64)v60, a1 + 47);
  v62 = Prediction::operator^<Prediction::CFixPred,3>(v82, (__int64)(a1 + 9), (__int64)a1);
  v63 = Prediction::operator-<Prediction::CFixPred,3>(v81, (__int64)(a1 + 36), (__int64)v62);
  v64 = Prediction::operator*<Prediction::CFixPred,3>(v76, (__int64)v63, a1 + 15);
  v65 = Prediction::operator+<Prediction::CFixPred,3>(v77, (__int64)v64, (__int64)v61);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 15, (__int64)v65);
  result = v72;
  *v72 = *v31;
  return result;
}
