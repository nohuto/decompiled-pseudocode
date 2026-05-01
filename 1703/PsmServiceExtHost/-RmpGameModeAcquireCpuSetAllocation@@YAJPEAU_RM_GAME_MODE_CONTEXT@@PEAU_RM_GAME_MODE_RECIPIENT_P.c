/*
 * XREFs of ?RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180030680
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002EC94 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 */

__int64 __fastcall RmpGameModeAcquireCpuSetAllocation(
        struct _RM_CPU_SET_MANAGER ***a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // edi
  __int64 v5; // rax
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v10; // [rsp+30h] [rbp-89h] BYREF
  int v11; // [rsp+34h] [rbp-85h] BYREF
  struct _RM_CPU_SET_ALLOCATION *v12; // [rsp+38h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-79h] BYREF
  int *v14; // [rsp+60h] [rbp-59h]
  int v15; // [rsp+68h] [rbp-51h]
  int v16; // [rsp+6Ch] [rbp-4Dh]
  int *v17; // [rsp+70h] [rbp-49h]
  int v18; // [rsp+78h] [rbp-41h]
  int v19; // [rsp+7Ch] [rbp-3Dh]
  struct _RM_CPU_SET_ALLOCATION **v20; // [rsp+80h] [rbp-39h]
  int v21; // [rsp+88h] [rbp-31h]
  int v22; // [rsp+8Ch] [rbp-2Dh]
  char *v23; // [rsp+90h] [rbp-29h]
  int v24; // [rsp+98h] [rbp-21h]
  int v25; // [rsp+9Ch] [rbp-1Dh]
  int v26; // [rsp+E8h] [rbp+2Fh]
  int v27; // [rsp+ECh] [rbp+33h]

  v2 = *((_DWORD *)a2 + 17);
  if ( v2 )
  {
    memset_0(&pData, 0, 0xB0uLL);
    v5 = *((_QWORD *)a2 + 9);
    LODWORD(pData.Ptr) = v2;
    if ( v5 )
    {
      v26 |= 1u;
      *(_QWORD *)&pData.Size = v5;
    }
    v27 |= 1u;
    RtlEnterCriticalSection(&RmpGlobalLock);
    v10 = RmpCpuSetManagerAcquireCpuSets(a1[4], (struct _RM_CPU_SET_REQUEST_INFORMATION *)&pData, &v12);
    if ( v10 >= 0 )
    {
      v10 = 0;
      *((_QWORD *)a2 + 12) = v12;
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  else
  {
    v10 = 255;
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v14 = &v10;
    v11 = *((_DWORD *)a2 + 14);
    v17 = &v11;
    LODWORD(v12) = *((_DWORD *)a2 + 17);
    v20 = &v12;
    v23 = (char *)a2 + 72;
    v15 = (int)v6;
    v18 = (int)v6;
    v21 = (int)v6;
    v24 = 8;
    TlgWrite(v6, &unk_1800421AD, v7, v8, 6u, &pData);
  }
  return (unsigned int)v10;
}
