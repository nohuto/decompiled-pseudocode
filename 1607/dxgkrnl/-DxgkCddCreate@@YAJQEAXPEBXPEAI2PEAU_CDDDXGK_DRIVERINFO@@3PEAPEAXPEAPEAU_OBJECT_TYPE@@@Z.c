/*
 * XREFs of ?DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0071B10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0073DD0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z @ 0x1C00CE5F4 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall DxgkCddCreate(
        char *a1,
        const void *a2,
        unsigned int *a3,
        unsigned int *a4,
        struct _CDDDXGK_DRIVERINFO *a5,
        struct _CDDDXGK_DRIVERINFO *a6,
        void **a7,
        struct _OBJECT_TYPE **a8)
{
  struct _CDDDXGK_DRIVERINFO *v11; // rbx
  struct _CDDDXGK_DRIVERINFO *v12; // r14
  void **v13; // r13
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v18; // rcx
  __int64 v19; // rdi
  struct DXGPROCESS *v20; // r15
  __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // r8
  struct _OBJECT_TYPE **v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  _QWORD *v29; // rbx
  _QWORD *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // [rsp+20h] [rbp-48h]
  struct DXGPROCESS *v33; // [rsp+80h] [rbp+18h] BYREF
  unsigned int *v34; // [rsp+88h] [rbp+20h]

  v34 = a4;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3000);
    a4 = v34;
  }
  if ( !a3 )
    goto LABEL_27;
  if ( !a4 )
    goto LABEL_27;
  v11 = a5;
  if ( !a5 )
    goto LABEL_27;
  v12 = a6;
  if ( !a6 )
    goto LABEL_27;
  v13 = a7;
  if ( !a7 )
    goto LABEL_27;
  *a3 = 0;
  *(_QWORD *)v11 = 0LL;
  *((_QWORD *)v11 + 1) = 0LL;
  *((_QWORD *)v11 + 2) = 0LL;
  *(_QWORD *)v12 = 0LL;
  *((_QWORD *)v12 + 1) = 0LL;
  *((_QWORD *)v12 + 2) = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v15);
  v33 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v28 = DXGPROCESS::CreateDxgProcess(&v33);
    v19 = v28;
    if ( v28 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v29[3] = v19;
      v29[4] = a1;
      v29[5] = PsGetCurrentProcess();
      v30 = v29;
LABEL_29:
      WdLogEvent5_WdError(v30);
      goto LABEL_18;
    }
    ProcessDxgProcess = v33;
  }
  *((_QWORD *)ProcessDxgProcess + 9) = a2;
  *((_BYTE *)ProcessDxgProcess + 288) = 1;
  if ( !a1 )
  {
LABEL_27:
    v31 = WdLogNewEntry5_WdError(a1);
    v19 = -1073741811LL;
    goto LABEL_28;
  }
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(a1 + 268));
  v19 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v31 = WdLogNewEntry5_WdError(v18);
LABEL_28:
    *(_QWORD *)(v31 + 24) = v19;
    v30 = (_QWORD *)v31;
    goto LABEL_29;
  }
  v20 = v33;
  v21 = *(_QWORD *)(*((_QWORD *)v33 + 2) + 16LL);
  if ( !*(_QWORD *)(v21 + 2136) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v26 + 24) = 232LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v22 = *((_QWORD *)v20 + 357);
  if ( v22 && !*(_QWORD *)(v22 + 2128) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v27 + 24) = 234LL;
    WdLogEvent5_WdAssertion(v27);
  }
  *v13 = (void *)v21;
  *(_DWORD *)v12 = *(_DWORD *)(v21 + 276);
  *((_DWORD *)v12 + 1) = *(_DWORD *)(v21 + 280);
  *((_DWORD *)v12 + 2) = *(_DWORD *)(v21 + 284);
  *((_DWORD *)v12 + 3) = *(_DWORD *)(v21 + 288);
  *((_DWORD *)v12 + 4) = *(_DWORD *)(v21 + 292);
  *((_DWORD *)v12 + 5) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v21);
  if ( v22 )
  {
    *(_DWORD *)v11 = *(_DWORD *)(v22 + 276);
    *((_DWORD *)v11 + 1) = *(_DWORD *)(v22 + 280);
    *((_DWORD *)v11 + 2) = *(_DWORD *)(v22 + 284);
    *((_DWORD *)v11 + 3) = *(_DWORD *)(v22 + 288);
    *((_DWORD *)v11 + 4) = *(_DWORD *)(v22 + 292);
    *((_DWORD *)v11 + 5) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v22);
  }
  else
  {
    *(_OWORD *)v11 = *(_OWORD *)v12;
    *((_QWORD *)v11 + 2) = *((_QWORD *)v12 + 2);
  }
  *a3 = *((_DWORD *)v20 + 77);
  *v34 = *(_DWORD *)(v32 + 24);
  v24 = a8;
  *a8 = g_pDxgkSharedAllocationObjectType;
LABEL_18:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v24, &EventProfilerExit, v23, 3000);
  return (unsigned int)v19;
}
