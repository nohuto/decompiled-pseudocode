/*
 * XREFs of ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18002EFE0
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001F6DC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18002FFC8 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     ?RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18002F428 (-RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z @ 0x180037E14 (-RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z.c)
 */

void __fastcall RmpCpuSetManagerApplyProcessPolicy(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_PROCESS *a2)
{
  _QWORD *v2; // rax
  __int64 v4; // rdx
  _QWORD *v6; // rcx
  _BYTE *v7; // rdi
  struct _RM_CPU_SET_PROCESS *i; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  _QWORD *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v17; // r8
  const GUID *v18; // r9
  __int16 v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v23; // [rsp+60h] [rbp-A0h]
  int v24; // [rsp+68h] [rbp-98h]
  int v25; // [rsp+6Ch] [rbp-94h]
  int *v26; // [rsp+70h] [rbp-90h]
  int v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+7Ch] [rbp-84h]
  __int16 *v29; // [rsp+80h] [rbp-80h]
  int v30; // [rsp+88h] [rbp-78h]
  int v31; // [rsp+8Ch] [rbp-74h]
  _BYTE *v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  _BYTE v35[160]; // [rsp+B0h] [rbp-50h] BYREF

  v2 = (_QWORD *)((char *)a2 + 40);
  v4 = *((_QWORD *)a2 + 5);
  v6 = (_QWORD *)v2[1];
  if ( *(_QWORD **)(v4 + 8) != v2 || (_QWORD *)*v6 != v2 )
    __fastfail(3u);
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  *v2 = 0LL;
  v2[1] = 0LL;
  memset_0(v35, 0, sizeof(v35));
  v7 = 0LL;
  for ( i = (struct _RM_CPU_SET_PROCESS *)*((_QWORD *)a2 + 3);
        i != (struct _RM_CPU_SET_PROCESS *)((char *)a2 + 24);
        i = *(struct _RM_CPU_SET_PROCESS **)i )
  {
    v9 = *((_QWORD *)i - 3);
    if ( *(_DWORD *)(v9 + 256) )
    {
      v10 = 20LL;
      v11 = v9 - (_QWORD)v35;
      v12 = v35;
      do
      {
        *v12 |= *(_QWORD *)((char *)v12 + v11 + 96);
        ++v12;
        --v10;
      }
      while ( v10 );
      v7 = v35;
    }
  }
  v21 = RmpSystemSetProcessAllowedCpuSets(*((HANDLE *)a2 + 2), v7);
  if ( v7 )
  {
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
    {
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v23 = &v21;
      v20 = *((_DWORD *)a2 + 14);
      v26 = &v20;
      v29 = &v19;
      v24 = (int)v13;
      v27 = (int)v13;
      v19 = 20;
      v30 = 2;
      v32 = v7;
      v33 = 160;
      TlgWrite(v13, &unk_180041DA1, v14, v15, 6u, &pData);
    }
  }
  else if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v25 = 0;
    v28 = 0;
    v23 = &v21;
    v20 = *((_DWORD *)a2 + 14);
    v26 = &v20;
    v24 = (int)cData;
    v27 = (int)cData;
    TlgWrite(cData, &unk_180041D64, v17, v18, (UINT32)cData, &pData);
  }
  if ( !*((_DWORD *)a2 + 15) )
    RmpCpuSetManagerDestroyProcess(a1, a2);
}
