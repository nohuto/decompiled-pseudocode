/*
 * XREFs of RmpPolicyComputeUsageLimits @ 0x18000A5B0
 * Callers:
 *     RmpPolicyGetCurrentUsageLimits @ 0x180006F48 (RmpPolicyGetCurrentUsageLimits.c)
 *     RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x18000A190 (RmpMemoryMonitorCheckMetricsAndRemediateSingleStep.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000B760 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180029C70 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x18000AA00 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

int __fastcall RmpPolicyComputeUsageLimits(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  bool v11; // cf
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // r10
  unsigned __int64 v17; // r9
  unsigned __int64 *v18; // r10
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 *v22; // r10
  unsigned __int64 v23; // rdx
  unsigned __int64 *v24; // r10
  unsigned __int64 *v25; // r10
  int v26; // r11d
  unsigned int v27; // ecx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int16 v35; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v36; // [rsp+32h] [rbp-CEh] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v40; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v42; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v44; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v45; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v47; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v48; // [rsp+98h] [rbp-68h] BYREF
  __int128 v49; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v50; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v51; // [rsp+C0h] [rbp-40h]
  __int128 v52; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v53; // [rsp+E0h] [rbp-20h]
  __int128 v54; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+110h] [rbp+10h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+120h] [rbp+20h] BYREF
  void *v58; // [rsp+130h] [rbp+30h]
  int v59; // [rsp+138h] [rbp+38h]
  int v60; // [rsp+13Ch] [rbp+3Ch]
  unsigned __int64 *v61; // [rsp+140h] [rbp+40h]
  __int64 v62; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v63; // [rsp+150h] [rbp+50h]
  __int64 v64; // [rsp+158h] [rbp+58h]
  __int16 *v65; // [rsp+160h] [rbp+60h]
  __int64 v66; // [rsp+168h] [rbp+68h]
  __int128 *v67; // [rsp+170h] [rbp+70h]
  __int64 v68; // [rsp+178h] [rbp+78h]
  __int16 *v69; // [rsp+180h] [rbp+80h]
  __int64 v70; // [rsp+188h] [rbp+88h]
  __int128 *v71; // [rsp+190h] [rbp+90h]
  __int64 v72; // [rsp+198h] [rbp+98h]
  __int128 *v73; // [rsp+1A0h] [rbp+A0h]
  __int64 v74; // [rsp+1A8h] [rbp+A8h]
  char *v75; // [rsp+1B0h] [rbp+B0h]
  __int64 v76; // [rsp+1B8h] [rbp+B8h]

  v37 = a4;
  if ( *(_QWORD *)a5 != a4 || (v9 = *(_QWORD *)(a3 + 24), *(_QWORD *)(a5 + 8) != v9) )
  {
    memset_0(&v49, 0, 0x78uLL);
    v10 = *(unsigned int *)(a1 + 24);
    *((_QWORD *)&v49 + 1) = *(_QWORD *)(a3 + 24);
    v11 = *(_QWORD *)(a1 + 8) < a4;
    v12 = 0LL;
    *(_QWORD *)&v49 = a4;
    if ( v11 )
      v12 = *(_QWORD *)(a1 + 8);
    v56 = v12;
    RtlULongLongMult(a4, v10, &v43);
    v13 = *(unsigned int *)(a1 + 48);
    v14 = v43 / 0x64;
    if ( v43 / 0x64 >= v37 - *(_QWORD *)a1 )
      v14 = v37 - *(_QWORD *)a1;
    *((_QWORD *)&v51 + 1) = v14;
    RtlULongLongMult(v37, v13, &v45);
    *(_QWORD *)&v51 = *((_QWORD *)&v51 + 1);
    v15 = *(unsigned int *)(a1 + 16);
    *((_QWORD *)&v55 + 1) = v45 / 0x64;
    RtlULongLongMult(v37, v15, &v41);
    RtlULongLongMult(*v16, *(unsigned int *)(a1 + 20), &v48);
    v19 = *(unsigned int *)(a1 + 28);
    if ( v17 >= v48 / 0x64 )
      v17 = v48 / 0x64;
    v20 = *v18;
    if ( *((_QWORD *)&v51 + 1) < v17 )
      v17 = *((_QWORD *)&v51 + 1);
    *((_QWORD *)&v50 + 1) = v17;
    RtlULongLongMult(v20, v19, &v38);
    v21 = *(unsigned int *)(a1 + 32);
    *((_QWORD *)&v52 + 1) = v38 / 0x64;
    RtlULongLongMult(*v22, v21, &v47);
    v23 = *(unsigned int *)(a1 + 36);
    *(_QWORD *)&v53 = v47 / 0x64;
    RtlULongLongMult(*v24, v23, &v39);
    LODWORD(v9) = -515396075 * v39;
    *((_QWORD *)&v53 + 1) = v39 / 0x64;
    if ( *(_DWORD *)(a2 + 32) != v26 )
    {
      RtlULongLongMult(v37, *(unsigned int *)(a1 + 40), &v40);
      LODWORD(v9) = -515396075 * v40;
      *(_QWORD *)&v54 = v40 / 0x64;
    }
    if ( *(_DWORD *)(a2 + 36) != v26 )
    {
      RtlULongLongMult(*v25, *(unsigned int *)(a1 + 44), &v42);
      LODWORD(v9) = -515396075 * v42;
      *((_QWORD *)&v54 + 1) = v42 / 0x64;
    }
    v27 = *(_DWORD *)(a1 + 52);
    if ( v27 )
    {
      RtlULongLongMult(*v25, v27, &v44);
      LODWORD(v9) = -515396075 * v44;
      *(_QWORD *)&v55 = v44 / 0x64;
    }
    if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 1) != 0 )
    {
      v9 = qword_180071078 & 1;
      if ( v9 == qword_180071078 )
      {
        v62 = 8LL;
        v61 = &v37;
        v63 = v25;
        v65 = &v36;
        v67 = &v50;
        v69 = &v35;
        v71 = &v52;
        v73 = &v54;
        v75 = (char *)&v54 + 8;
        v64 = 8LL;
        v36 = 4;
        v66 = 2LL;
        v68 = 32LL;
        v35 = 4;
        v70 = 2LL;
        v72 = 32LL;
        v74 = 8LL;
        v76 = 8LL;
        *(_DWORD *)&EventDescriptor.Level = 4;
        UserData.Ptr = (ULONGLONG)off_180071068;
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800630CE - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        EventDescriptor.Keyword = 1LL;
        UserData.Size = *(unsigned __int16 *)off_180071068;
        v58 = &unk_1800630D9;
        UserData.Reserved = 2;
        v59 = 164;
        v60 = 1;
        LODWORD(v9) = EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
      }
    }
    v28 = v50;
    *(_OWORD *)a5 = v49;
    v29 = v51;
    *(_OWORD *)(a5 + 16) = v28;
    v30 = v52;
    *(_OWORD *)(a5 + 32) = v29;
    v31 = v53;
    *(_OWORD *)(a5 + 48) = v30;
    v32 = v54;
    *(_OWORD *)(a5 + 64) = v31;
    v33 = v55;
    *(_OWORD *)(a5 + 80) = v32;
    *(_QWORD *)&v32 = v56;
    *(_OWORD *)(a5 + 96) = v33;
    *(_QWORD *)(a5 + 112) = v32;
  }
  return v9;
}
