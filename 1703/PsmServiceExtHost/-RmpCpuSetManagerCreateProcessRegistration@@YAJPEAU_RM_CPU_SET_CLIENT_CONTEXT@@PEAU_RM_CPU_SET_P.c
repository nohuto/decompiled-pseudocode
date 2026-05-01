/*
 * XREFs of ?RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18002F300
 * Callers:
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18002FFC8 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18002F830 (-RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z.c)
 *     ?RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18002FB60 (-RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 */

__int64 __fastcall RmpCpuSetManagerCreateProcessRegistration(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        struct _RM_CPU_SET_PROCESS *a2,
        struct _RM_CPU_SET_ALLOCATION *a3,
        struct _RM_CPU_SET_PROCESS_REGISTRATION **a4)
{
  struct _RM_CPU_SET_PROCESS_REGISTRATION *Heap; // rax
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v9; // rbx
  __int64 v10; // rcx
  int v11; // edx
  const GUID *v12; // r8
  const GUID *v13; // r9
  int v15; // [rsp+30h] [rbp-69h] BYREF
  int v16; // [rsp+34h] [rbp-65h] BYREF
  __int64 v17; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  int *v19; // [rsp+60h] [rbp-39h]
  int v20; // [rsp+68h] [rbp-31h]
  int v21; // [rsp+6Ch] [rbp-2Dh]
  __int64 *v22; // [rsp+70h] [rbp-29h]
  int v23; // [rsp+78h] [rbp-21h]
  int v24; // [rsp+7Ch] [rbp-1Dh]
  char *v25; // [rsp+80h] [rbp-19h]
  int v26; // [rsp+88h] [rbp-11h]
  int v27; // [rsp+8Ch] [rbp-Dh]
  int *v28; // [rsp+90h] [rbp-9h]
  int v29; // [rsp+98h] [rbp-1h]
  int v30; // [rsp+9Ch] [rbp+3h]

  v17 = -1LL;
  Heap = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x70uLL);
  v9 = Heap;
  if ( Heap )
  {
    RmpCpuSetManagerInitializeProcessRegistration(Heap);
    RmpCpuSetManagerInsertProcessRegistration(a1, a2, a3, v9);
    v10 = 0LL;
    v17 = *((_QWORD *)v9 + 3);
    *a4 = v9;
  }
  else
  {
    v10 = 3221225495LL;
  }
  v15 = v10;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v10, 1uLL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v19 = &v15;
    v22 = &v17;
    v25 = (char *)a3 + 24;
    v16 = *((_DWORD *)a2 + 14);
    v28 = &v16;
    v20 = (int)v12;
    v23 = v11 + 7;
    v26 = v11 + 7;
    v29 = (int)v12;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v11 + 7), &unk_180041E50, v12, v13, 6u, &pData);
    LODWORD(v10) = v15;
  }
  return (unsigned int)v10;
}
