/*
 * XREFs of ComputeProcessorEnergyMsrEx @ 0x1C0003400
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001AAC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001AE8 (ResetEnumerationContext.c)
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 *     ComputeProcessorEnergyMsr @ 0x1C0003370 (ComputeProcessorEnergyMsr.c)
 *     ProcLibTraceEnergyCounterUpdate @ 0x1C0003EB8 (ProcLibTraceEnergyCounterUpdate.c)
 *     ProcLibTracePackageEnergyCounterUpdate @ 0x1C000404C (ProcLibTracePackageEnergyCounterUpdate.c)
 */

unsigned __int64 *__fastcall ComputeProcessorEnergyMsrEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // r8
  unsigned int v7; // r10d
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r14
  unsigned int v12; // ebx
  unsigned int *v13; // r15
  unsigned __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  __int64 v19; // r13
  __int64 *v20; // r15
  unsigned int *v21; // r12
  unsigned __int64 *v22; // rdi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r14
  __int64 v25; // rbx
  signed __int64 v26; // r8
  double v27; // xmm1_8
  double v28; // xmm0_8
  double v29; // xmm1_8
  double v30; // xmm3_8
  double v31; // xmm4_8
  double v32; // xmm0_8
  __int64 v33; // rdx
  double v34; // xmm3_8
  double v35; // xmm1_8
  int *v36; // rcx
  __int64 v37; // r10
  double *v38; // r9
  __int64 v39; // r13
  int v40; // eax
  unsigned __int64 v41; // rcx
  double v42; // xmm1_8
  unsigned int *v43; // r9
  __int64 v44; // r11
  double *v45; // r10
  signed __int64 v46; // rax
  double v47; // xmm0_8
  __int64 v48; // r9
  double v49; // xmm1_8
  double v50; // xmm1_8
  __int64 *v51; // rcx
  __int64 v52; // r11
  double *v53; // r10
  double v54; // xmm0_8
  double v55; // xmm1_8
  unsigned __int64 v56; // rax
  double v57; // xmm0_8
  double *v58; // rax
  double *v59; // rcx
  double v60; // xmm0_8
  double v61; // xmm0_8
  double *v62; // rax
  __int64 v63; // rdx
  double *v64; // rcx
  double v65; // xmm0_8
  double v66; // xmm0_8
  double v67; // xmm0_8
  double v68; // xmm0_8
  unsigned __int64 v69; // rax
  unsigned __int64 *result; // rax
  __int64 v74[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v75; // [rsp+68h] [rbp-98h]
  _DWORD v76[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v77[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v78[2]; // [rsp+A0h] [rbp-60h]
  __int64 v79; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-48h]
  __int64 v81; // [rsp+C0h] [rbp-40h]
  _QWORD v82[4]; // [rsp+C8h] [rbp-38h] BYREF
  double v83[4]; // [rsp+E8h] [rbp-18h]
  _BYTE v84[32]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v85[40]; // [rsp+128h] [rbp+28h] BYREF

  v5 = 0LL;
  if ( (EnergyModelContext[0] & 0x40) == 0 )
  {
    ComputeProcessorEnergyMsr(0LL, 0LL, 0LL, 0LL, a5);
    v5 = *a5;
    goto LABEL_76;
  }
  v6 = (unsigned int)dword_1C000DC50;
  if ( (unsigned int)dword_1C000DC50 > 4 )
    goto LABEL_76;
  v7 = 0;
  if ( !dword_1C000DC50 )
  {
LABEL_10:
    if ( dword_1C000DC64 )
    {
      v13 = (unsigned int *)&unk_1C000DC68;
      v14 = 0LL;
      v15 = (unsigned int)dword_1C000DC64;
      do
      {
        v16 = *v13;
        v17 = __readmsr(v16);
        v18 = v17 - *(_QWORD *)&EnergyModelContext[v14 / 4 + 10];
        ProcLibTracePackageEnergyCounterUpdate(v16, v18);
        v77[v14 / 8] = v18;
        ++v13;
        *(_QWORD *)&EnergyModelContext[v14 / 4 + 10] = v17;
        v14 += 8LL;
        --v15;
      }
      while ( v15 );
    }
    v75 = 32;
    v79 = 0LL;
    v80 = 0LL;
    v81 = 0LL;
    v74[0] = (__int64)&qword_1C000DD18;
    v74[1] = (__int64)&qword_1C000DD18;
    v74[2] = 0LL;
    ResetEnumerationContext(v74);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v74, v82) )
    {
      v19 = v82[0];
      v20 = &v79;
      v21 = (unsigned int *)&CounterId;
      v78[0] = 3LL;
      v22 = (unsigned __int64 *)(*(_QWORD *)(v82[0] + 312LL) + 24LL);
      do
      {
        v23 = *v22;
        v24 = *(v22 - 1);
        if ( v24 < *v22 )
          v25 = qword_1C000DC10 - v23 + v24 + 1;
        else
          v25 = v24 - v23;
        ProcLibTraceEnergyCounterUpdate(v19, *v21, v25);
        *v20 += v25;
        ++v21;
        *v22 = v24;
        ++v20;
        v22 += 3;
        --v78[0];
      }
      while ( v78[0] );
    }
    v26 = 1000000 * a3 / (qword_1C000E3C8 * (unsigned __int64)(unsigned int)dword_1C000E3C0);
    if ( !v26 )
      goto LABEL_76;
    v27 = (double)(int)a2;
    if ( a2 < 0 )
      v27 = v27 + 1.844674407370955e19;
    v28 = (double)(int)a3;
    if ( a3 < 0 )
      v28 = v28 + 1.844674407370955e19;
    v29 = v27 / v28;
    if ( !v79 )
      goto LABEL_76;
    v30 = (double)(int)v80;
    if ( v80 < 0 )
      v30 = v30 + 1.844674407370955e19;
    v31 = (double)(int)v79;
    if ( v79 < 0 )
      v31 = v31 + 1.844674407370955e19;
    v83[0] = v30 / v31 * v29;
    if ( !v81 )
      goto LABEL_76;
    v32 = (double)(int)v81;
    if ( v81 < 0 )
      v32 = v32 + 1.844674407370955e19;
    v33 = (unsigned int)dword_1C000DC50;
    v83[2] = v29;
    v83[1] = v30 / v32 * v29;
    v83[3] = 1.0 - v29;
    if ( (EnergyModelContext[0] & 1) != 0 )
    {
      if ( (EnergyModelContext[0] & 1) == 1 && dword_1C000DC50 )
      {
        v34 = *(double *)&qword_1C000DC08;
        v35 = (double)(int)v26;
        if ( v26 < 0 )
          v35 = v35 + 1.844674407370955e19;
        v36 = v76;
        v37 = (unsigned int)dword_1C000DC50;
        v38 = (double *)v84;
        v39 = 4LL;
        do
        {
          v40 = *v36++;
          *v38++ = (double)v40 * 1000000.0 * v34 / v35;
          --v37;
        }
        while ( v37 );
        goto LABEL_51;
      }
    }
    else if ( dword_1C000DC50 )
    {
      v41 = ((unsigned __int64)(unsigned int)EnergyModelContext[0] >> 1) & 0x1F;
      v42 = (double)(int)v26;
      if ( v26 < 0 )
        v42 = v42 + 1.844674407370955e19;
      v43 = v76;
      v44 = (unsigned int)dword_1C000DC50;
      v45 = (double *)v84;
      v39 = 4LL;
      do
      {
        v46 = (unsigned __int64)*v43 << v41;
        v47 = (double)(int)v46;
        if ( v46 < 0 )
          v47 = v47 + 1.844674407370955e19;
        ++v43;
        *v45++ = v47 / v42;
        --v44;
      }
      while ( v44 );
      goto LABEL_51;
    }
    v39 = 4LL;
LABEL_51:
    v48 = (unsigned int)dword_1C000DC64;
    if ( dword_1C000DC64 )
    {
      v49 = (double)((int)v26 * (int)qword_1C000E3D0);
      if ( v26 * qword_1C000E3D0 < 0 )
        v49 = v49 + 1.844674407370955e19;
      v50 = v49 / 1000000.0;
      v51 = v77;
      v52 = (unsigned int)dword_1C000DC64;
      v53 = (double *)v85;
      do
      {
        v54 = (double)(int)*v51;
        if ( *v51 < 0 )
          v54 = v54 + 1.844674407370955e19;
        ++v51;
        *v53++ = v54 * 100.0 / v50;
        --v52;
      }
      while ( v52 );
    }
    v55 = *(double *)&qword_1C000DC78;
    v56 = 0LL;
    do
    {
      v57 = *(double *)&EnergyModelContext[v56 / 4 + 32] * v83[v56 / 8];
      v56 += 8LL;
      v55 = v55 + v57;
      --v39;
    }
    while ( v39 );
    if ( (_DWORD)v33 )
    {
      v58 = (double *)&unk_1C000DCA0;
      v59 = (double *)v84;
      do
      {
        v60 = *v59++;
        v61 = v60 * *v58++;
        v55 = v55 + v61;
        --v33;
      }
      while ( v33 );
    }
    if ( (_DWORD)v48 )
    {
      v62 = (double *)&unk_1C000DCC0;
      v63 = v48;
      v64 = (double *)v85;
      do
      {
        v65 = *v62++;
        v66 = v65 * *v64++;
        v55 = v55 + v66;
        --v63;
      }
      while ( v63 );
    }
    if ( v55 >= 0.0
      && v55 <= (double)dword_1C000DC4C
      && (v55 <= (double)((unsigned int)dword_1C000DC4C >> 1) || v55 <= (double)(a4 * dword_1C000DC4C / 0x64u)) )
    {
      v67 = (double)(int)v26;
      if ( v26 < 0 )
        v67 = v67 + 1.844674407370955e19;
      v68 = v67 * v55;
      v69 = 0LL;
      if ( v68 >= 9.223372036854776e18 )
      {
        v68 = v68 - 9.223372036854776e18;
        if ( v68 < 9.223372036854776e18 )
          v69 = 0x8000000000000000uLL;
      }
      v5 = v69 + (unsigned int)(int)v68;
    }
    goto LABEL_76;
  }
  v8 = 0LL;
  while ( 1 )
  {
    v9 = __readmsr(EnergyModelContext[v8 + 21]);
    *(_DWORD *)((char *)v78 + v8 * 4) = v9;
    LODWORD(v9) = v9 - EnergyModelContext[v8 + 6];
    *(_DWORD *)((char *)v82 + v8 * 4) = v9;
    if ( (unsigned int)v9 > 0x7FFFFFFF )
      break;
    ++v7;
    ++v8;
    if ( v7 >= (unsigned int)v6 )
    {
      v10 = 0LL;
      v11 = v6;
      do
      {
        v12 = *(_DWORD *)((char *)v82 + v10 * 4);
        ProcLibTracePackageEnergyCounterUpdate((unsigned int)EnergyModelContext[v10 + 21], v12);
        EnergyModelContext[v10 + 6] = *(_DWORD *)((char *)v78 + v10 * 4);
        v76[v10++] = v12;
        --v11;
      }
      while ( v11 );
      goto LABEL_10;
    }
  }
LABEL_76:
  result = a5;
  *a5 = v5;
  return result;
}
