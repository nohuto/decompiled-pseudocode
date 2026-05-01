/*
 * XREFs of RmpPolicyComputeUsageLimits @ 0x180008C00
 * Callers:
 *     RmpPolicyGetCurrentUsageLimits @ 0x18000705C (RmpPolicyGetCurrentUsageLimits.c)
 *     RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x180008710 (RmpMemoryMonitorCheckMetricsAndRemediateSingleStep.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009A90 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInf.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001ED60 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x180029D8C (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

int __fastcall RmpPolicyComputeUsageLimits(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  unsigned __int64 v10; // r11
  unsigned __int64 *v11; // r14
  bool v12; // cf
  __int64 v13; // rax
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // kr00_8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // kr10_8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // kr20_8
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // kr30_8
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // kr40_8
  unsigned __int64 v32; // kr50_8
  unsigned __int64 v33; // rcx
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int16 v42; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v43; // [rsp+32h] [rbp-CEh] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v45; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v47; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v48; // [rsp+70h] [rbp-90h] BYREF
  __int128 v49; // [rsp+80h] [rbp-80h]
  __int128 v50; // [rsp+90h] [rbp-70h] BYREF
  __int128 v51; // [rsp+A0h] [rbp-60h]
  __int128 v52; // [rsp+B0h] [rbp-50h]
  __int128 v53; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v57; // [rsp+100h] [rbp+0h]
  int v58; // [rsp+108h] [rbp+8h]
  int v59; // [rsp+10Ch] [rbp+Ch]
  unsigned __int64 *v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  __int16 *v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  __int128 *v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  __int16 *v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  char *v70; // [rsp+160h] [rbp+60h]
  __int64 v71; // [rsp+168h] [rbp+68h]
  __int128 *v72; // [rsp+170h] [rbp+70h]
  __int64 v73; // [rsp+178h] [rbp+78h]
  char *v74; // [rsp+180h] [rbp+80h]
  __int64 v75; // [rsp+188h] [rbp+88h]

  v45 = a4;
  if ( *(_QWORD *)a5 != a4 || (v9 = *(_QWORD *)(a3 + 32), *(_QWORD *)(a5 + 8) != v9) )
  {
    memset_0(&v47, 0, 0x88uLL);
    v10 = *(_QWORD *)(a3 + 32);
    v11 = (unsigned __int64 *)(a3 + 32);
    *(_QWORD *)&v47 = a4;
    v12 = *(_QWORD *)(a1 + 8) < a4;
    v13 = 0LL;
    *((_QWORD *)&v47 + 1) = v10;
    if ( v12 )
      v13 = *(_QWORD *)(a1 + 8);
    v14 = -1LL;
    v55 = v13;
    v15 = -1LL;
    if ( is_mul_ok(a4, *(unsigned int *)(a1 + 28)) )
      v15 = a4 * *(unsigned int *)(a1 + 28);
    v16 = v15 / 0x64;
    if ( v16 >= a4 - *(_QWORD *)a1 )
      v16 = a4 - *(_QWORD *)a1;
    v17 = -1LL;
    v18 = *(unsigned int *)(a1 + 52);
    v19 = -1LL;
    *(_QWORD *)&v50 = v16;
    *((_QWORD *)&v49 + 1) = v16;
    if ( is_mul_ok(a4, v18) )
      v17 = a4 * v18;
    v20 = *(unsigned int *)(a1 + 20);
    *((_QWORD *)&v54 + 1) = v17 / 0x64;
    v21 = -1LL;
    if ( is_mul_ok(a4, v20) )
      v19 = a4 * v20;
    v22 = v19 / 0x64;
    if ( is_mul_ok(v10, *(unsigned int *)(a1 + 24)) )
      v21 = v10 * *(unsigned int *)(a1 + 24);
    v23 = v21 / 0x64;
    if ( v22 >= v23 )
      v22 = v23;
    if ( v16 < v22 )
      v22 = v16;
    v24 = -1LL;
    v25 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)&v49 = v22;
    if ( is_mul_ok(a4, v25) )
      v24 = a4 * v25;
    v26 = v24 / 0x64;
    if ( v22 < v26 )
      v26 = v22;
    v27 = -1LL;
    v28 = *(unsigned int *)(a1 + 32);
    *((_QWORD *)&v48 + 1) = v26;
    v29 = -1LL;
    v30 = -1LL;
    if ( is_mul_ok(v10, v28) )
      v27 = v10 * v28;
    v31 = *(unsigned int *)(a1 + 36);
    *((_QWORD *)&v51 + 1) = v27 / 0x64;
    *(_QWORD *)&v51 = v27 / 0x64;
    if ( is_mul_ok(v10, v31) )
      v30 = v10 * v31;
    v32 = *(unsigned int *)(a1 + 40);
    *(_QWORD *)&v52 = v30 / 0x64;
    if ( is_mul_ok(v10, v32) )
      v29 = v10 * v32;
    *((_QWORD *)&v52 + 1) = v29 / 0x64;
    if ( *(_DWORD *)(a2 + 40) )
    {
      RtlULongLongMult(a4, *(unsigned int *)(a1 + 44), &v44);
      *(_QWORD *)&v53 = v44 / 0x64;
    }
    if ( *(_DWORD *)(a2 + 44) )
    {
      v33 = v14;
      if ( is_mul_ok(*v11, *(unsigned int *)(a1 + 48)) )
        v33 = *v11 * *(unsigned int *)(a1 + 48);
      *((_QWORD *)&v53 + 1) = v33 / 0x64;
    }
    LODWORD(v9) = *(_DWORD *)(a1 + 56);
    if ( (_DWORD)v9 )
    {
      if ( is_mul_ok(*v11, *(unsigned int *)(a1 + 56)) )
        v14 = *v11 * *(unsigned int *)(a1 + 56);
      LODWORD(v9) = -515396075 * v14;
      *(_QWORD *)&v54 = v14 / 0x64;
    }
    if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 1) != 0 )
    {
      v9 = qword_18004C048 & 1;
      if ( v9 == qword_18004C048 )
      {
        v61 = 8LL;
        v60 = &v45;
        v62 = v11;
        v64 = &v42;
        v66 = &v48;
        v68 = &v43;
        v70 = (char *)&v50 + 8;
        v72 = &v53;
        v74 = (char *)&v53 + 8;
        v63 = 8LL;
        v42 = 5;
        v65 = 2LL;
        v67 = 40LL;
        v43 = 5;
        v69 = 2LL;
        v71 = 40LL;
        v73 = 8LL;
        v75 = 8LL;
        *(_DWORD *)&EventDescriptor.Level = 4;
        UserData.Ptr = (ULONGLONG)off_18004C038;
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800420CF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        EventDescriptor.Keyword = 1LL;
        UserData.Size = *(unsigned __int16 *)off_18004C038;
        v57 = &unk_1800420DA;
        UserData.Reserved = 2;
        v58 = 164;
        v59 = 1;
        LODWORD(v9) = EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
      }
    }
    v34 = v48;
    *(_OWORD *)a5 = v47;
    v35 = v49;
    *(_OWORD *)(a5 + 16) = v34;
    v36 = v50;
    *(_OWORD *)(a5 + 32) = v35;
    v37 = v51;
    *(_OWORD *)(a5 + 48) = v36;
    v38 = v52;
    *(_OWORD *)(a5 + 64) = v37;
    v39 = v53;
    *(_OWORD *)(a5 + 80) = v38;
    v40 = v54;
    *(_OWORD *)(a5 + 96) = v39;
    *(_QWORD *)&v39 = v55;
    *(_OWORD *)(a5 + 112) = v40;
    *(_QWORD *)(a5 + 128) = v39;
  }
  return v9;
}
