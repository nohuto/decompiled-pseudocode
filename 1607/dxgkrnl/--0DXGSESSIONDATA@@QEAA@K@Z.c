/*
 * XREFs of ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C007BD98
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C0077D5C (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C00016AC (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ @ 0x1C0078444 (-InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ.c)
 *     ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C0078544 (-Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

DXGSESSIONDATA *__fastcall DXGSESSIONDATA::DXGSESSIONDATA(DXGSESSIONDATA *this, unsigned int a2)
{
  __int64 v2; // r14
  OUTPUTDUPL_SESSION_MGR *v4; // rax
  OUTPUTDUPL_SESSION_MGR *v5; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(_QWORD *); // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  char v12; // al
  __int64 (*v13)(void); // rax
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 ProcessDxgProcess; // rax
  void *v17; // rax
  DXGSESSIONDATA *result; // rax
  OUTPUTDUPL_SESSION_MGR *v19; // rcx
  __int64 v20; // rax
  _QWORD v21[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+48h] [rbp-B8h]
  const wchar_t *v24; // [rsp+50h] [rbp-B0h]
  int *v25; // [rsp+58h] [rbp-A8h]
  int v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  int v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+80h] [rbp-80h]
  _BYTE v31[40]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-50h] BYREF
  int v33; // [rsp+B8h] [rbp-48h]
  const wchar_t *v34; // [rsp+C0h] [rbp-40h]
  int *v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+F0h] [rbp-10h]
  _BYTE v41[40]; // [rsp+F8h] [rbp-8h] BYREF
  int v42; // [rsp+150h] [rbp+50h] BYREF
  char v43; // [rsp+158h] [rbp+58h] BYREF
  _NT_PRODUCT_TYPE ProductType; // [rsp+160h] [rbp+60h] BYREF

  v2 = a2;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 11) = -1;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 12) = 32;
  *((_QWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 18488) = 0;
  *((_QWORD *)this + 2313) = 0LL;
  *((_QWORD *)this + 2315) = 0LL;
  *((_QWORD *)this + 2314) = 0LL;
  *((_DWORD *)this + 4632) = 61;
  v4 = (OUTPUTDUPL_SESSION_MGR *)operator new(0x1C0uLL, 0x674D444Fu, PagedPool);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 1) = 0;
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_DWORD *)v4 + 6) = 0;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    OUTPUTDUPL_SESSION_MGR::InitializeMaxActiveOutputDuplApps(v4);
    *((_DWORD *)v5 + 14) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  *((_QWORD *)this + 1) = v5;
  if ( v5 && (int)OUTPUTDUPL_SESSION_MGR::Initialize(v5) < 0 )
  {
    v19 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
    if ( v19 )
      OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v19);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2318) = (char *)this + 18536;
  *((_QWORD *)this + 2317) = (char *)this + 18536;
  *((_QWORD *)this + 2320) = (char *)this + 18552;
  *((_QWORD *)this + 2319) = (char *)this + 18552;
  *((_QWORD *)this + 2322) = (char *)this + 18568;
  *((_QWORD *)this + 2321) = (char *)this + 18568;
  RtlGetNtProductType(&ProductType);
  *((_BYTE *)this + 18489) = ProductType != NtProductServer || (MEMORY[0xFFFFF780000002D0] & 0x110) != 0x10;
  v22 = 0LL;
  v27 = 0LL;
  v24 = L"bEnumerateHWBeforeSW";
  v28 = 0;
  v25 = &v42;
  v23 = 292;
  v26 = 0x4000000;
  v29 = 0LL;
  v30 = 0;
  memset(v31, 0, sizeof(v31));
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\Terminal Services",
              &v22,
              0LL,
              0LL) >= 0 )
    goto LABEL_25;
  v32 = 0LL;
  v33 = 292;
  v34 = L"fUseHardwareGPU";
  v36 = 0x4000000;
  v35 = &v42;
  v37 = 0LL;
  v38 = 0;
  v39 = 0LL;
  v40 = 0;
  memset(v41, 0, sizeof(v41));
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\\WinStations",
              &v32,
              0LL,
              0LL) >= 0 )
LABEL_25:
    *((_BYTE *)this + 18489) = v42 != 0;
  v43 = 0;
  *(_QWORD *)((char *)this + 18492) = 0LL;
  v21[1] = &v43;
  *((_DWORD *)this + 4625) = 0;
  v21[0] = 0x100000003LL;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    v7 = *((_QWORD *)Current + 9);
  else
    v7 = 0LL;
  if ( v7 && (v8 = *(__int64 (__fastcall **)(_QWORD *))(v7 + 368)) != 0LL && (v9 = v8(v21), v11 = v9, v9 < 0) )
  {
    v20 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v20 + 24) = v2;
    *(_QWORD *)(v20 + 32) = v11;
    WdLogEvent5_WdError(v20);
    v12 = 0;
    v43 = 0;
  }
  else
  {
    v12 = v43;
  }
  *((_BYTE *)this + 18488) = v12;
  if ( v7 )
  {
    v13 = *(__int64 (**)(void))(v7 + 352);
    if ( v13 )
      *((_QWORD *)this + 2313) = v13();
  }
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v15);
  *((_QWORD *)this + 2324) = ProcessDxgProcess;
  *(_BYTE *)(ProcessDxgProcess + 288) = 1;
  v17 = (void *)PsGetCurrentProcess();
  *((_QWORD *)this + 2323) = v17;
  ObfReferenceObject(v17);
  result = this;
  *((_DWORD *)this + 4650) = 0;
  *((_QWORD *)this + 2326) = 0LL;
  return result;
}
