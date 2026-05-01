/*
 * XREFs of ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18002FA28
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800032EC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     RmpCpuSetManagerRegisterProcessWithAllocation @ 0x1800315D0 (RmpCpuSetManagerRegisterProcessWithAllocation.c)
 * Callees:
 *     RmpUtilRemoveEntryListAndClear @ 0x1800033D8 (RmpUtilRemoveEntryListAndClear.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     ?RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x1800300F0 (-RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     RmpSystemSetProcessAllowedCpuSets @ 0x180037E00 (RmpSystemSetProcessAllowedCpuSets.c)
 */

void __fastcall RmpCpuSetManagerApplyProcessPolicy(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_PROCESS *a2)
{
  _QWORD *v4; // rdi
  struct _RM_CPU_SET_PROCESS *i; // r8
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // r10
  int v9; // ecx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  __int16 v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v20; // [rsp+60h] [rbp-A0h]
  int v21; // [rsp+68h] [rbp-98h]
  int v22; // [rsp+6Ch] [rbp-94h]
  int *v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+7Ch] [rbp-84h]
  __int16 *v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+8Ch] [rbp-74h]
  _QWORD *v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  _QWORD v32[20]; // [rsp+A0h] [rbp-60h] BYREF

  RmpUtilRemoveEntryListAndClear((_QWORD *)a2 + 5);
  memset_0(v32, 0, sizeof(v32));
  v4 = 0LL;
  for ( i = (struct _RM_CPU_SET_PROCESS *)*((_QWORD *)a2 + 3);
        i != (struct _RM_CPU_SET_PROCESS *)((char *)a2 + 24);
        i = *(struct _RM_CPU_SET_PROCESS **)i )
  {
    v6 = *((_QWORD *)i - 3);
    if ( *(_DWORD *)(v6 + 272) )
    {
      v7 = v32;
      v8 = 20LL;
      do
      {
        *v7 |= *(_QWORD *)((char *)v7 + v6 - (_QWORD)v32 + 112);
        ++v7;
        --v8;
      }
      while ( v8 );
      if ( *(_DWORD *)(v6 + 280) == 1 )
      {
        v9 = *((_DWORD *)a1 + 236);
        if ( v9 != -1 )
          v32[(unsigned int)(v9 - 256) >> 16] |= 1LL << v9;
      }
      v4 = v32;
    }
  }
  v18 = RmpSystemSetProcessAllowedCpuSets(*((HANDLE *)a2 + 2), v4);
  if ( v4 )
  {
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
    {
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v20 = &v18;
      v17 = *((_DWORD *)a2 + 14);
      v23 = &v17;
      v26 = &v16;
      v21 = (int)v10;
      v24 = (int)v10;
      v16 = 20;
      v27 = 2;
      v29 = v4;
      v30 = 160;
      TlgWrite(v10, &unk_180041547, v11, v12, 6u, &pData);
    }
  }
  else if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v22 = 0;
    v25 = 0;
    v20 = &v18;
    v17 = *((_DWORD *)a2 + 14);
    v23 = &v17;
    v21 = (int)cData;
    v24 = (int)cData;
    TlgWrite(cData, &unk_18004145D, v14, v15, (UINT32)cData, &pData);
  }
  if ( !*((_DWORD *)a2 + 15) )
    RmpCpuSetManagerDestroyProcess(a1, a2);
}
