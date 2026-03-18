/*
 * XREFs of ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C00D85B4
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00D8498 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C000CB78 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     DxgkSqmOptedIn @ 0x1C000EA40 (DxgkSqmOptedIn.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C00D8834 (-Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ.c)
 *     ?InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ @ 0x1C00D8978 (-InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ.c)
 */

DXGSESSIONDATA *__fastcall DXGSESSIONDATA::DXGSESSIONDATA(DXGSESSIONDATA *this, int a2)
{
  OUTPUTDUPL_SESSION_MGR *v3; // rax
  OUTPUTDUPL_SESSION_MGR *v4; // rcx
  OUTPUTDUPL_SESSION_MGR *v5; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 (*v9)(void); // rax
  void *CurrentProcess; // rax
  DXGSESSIONDATA *result; // rax
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+38h] [rbp-C8h]
  const wchar_t *v14; // [rsp+40h] [rbp-C0h]
  int *v15; // [rsp+48h] [rbp-B8h]
  int v16; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  int v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  int v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  _BYTE v22[32]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-60h] BYREF
  int v24; // [rsp+A8h] [rbp-58h]
  const wchar_t *v25; // [rsp+B0h] [rbp-50h]
  int *v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+C0h] [rbp-40h]
  int *v28; // [rsp+C8h] [rbp-38h]
  int v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  _BYTE v33[32]; // [rsp+F0h] [rbp-10h] BYREF
  int v34; // [rsp+130h] [rbp+30h] BYREF
  int v35; // [rsp+138h] [rbp+38h] BYREF

  *(_DWORD *)this = a2;
  *((_DWORD *)this + 11) = -1;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 12) = 32;
  *((_QWORD *)this + 2313) = 0LL;
  *((_QWORD *)this + 2315) = 0LL;
  *((_QWORD *)this + 2314) = 0LL;
  *((_DWORD *)this + 4632) = 61;
  v3 = (OUTPUTDUPL_SESSION_MGR *)operator new[](0x38uLL, 0x674D444Fu, PagedPool);
  v5 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 1) = 0;
    *((_QWORD *)v3 + 1) = 0LL;
    *((_QWORD *)v3 + 2) = 0LL;
    *((_DWORD *)v3 + 7) = 0;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    *((_QWORD *)v3 + 6) = 0LL;
    OUTPUTDUPL_SESSION_MGR::InitializeMaxActiveOutputDuplApps(v3);
    *((_DWORD *)v5 + 6) = DxgkSqmOptedIn();
  }
  else
  {
    v5 = 0LL;
  }
  *((_QWORD *)this + 1) = v5;
  if ( v5 && (int)OUTPUTDUPL_SESSION_MGR::Initialize(v5) < 0 )
  {
    v4 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
    if ( v4 )
      OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v4);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2318) = (char *)this + 18536;
  *((_QWORD *)this + 2317) = (char *)this + 18536;
  *((_QWORD *)this + 2320) = (char *)this + 18552;
  *((_QWORD *)this + 2319) = (char *)this + 18552;
  if ( MEMORY[0xFFFFF78000000264] == 3 && (MEMORY[0xFFFFF780000002D0] & 0x110) == 0x10 )
  {
    *((_BYTE *)this + 18488) = 0;
    v34 = 0;
    v14 = L"bEnumerateHWBeforeSW";
    v12 = 0LL;
    v13 = 292;
    v15 = &v35;
    v16 = 0x4000000;
    v17 = 0LL;
    v18 = 0;
    v19 = 0LL;
    v20 = 0;
    v21 = 0LL;
    memset(v22, 0, sizeof(v22));
    if ( (int)RtlQueryRegistryValuesEx(
                0LL,
                L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\Terminal Services",
                &v12,
                0LL,
                0LL) >= 0 )
      goto LABEL_13;
    v23 = 0LL;
    v25 = L"fUseHardwareGPU";
    v24 = 288;
    v27 = 67108868;
    v26 = &v35;
    v28 = &v34;
    v29 = 4;
    v30 = 0LL;
    v31 = 0;
    v32 = 0LL;
    memset(v33, 0, sizeof(v33));
    if ( (int)RtlQueryRegistryValuesEx(
                0LL,
                L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\\WinStations",
                &v23,
                0LL,
                0LL) >= 0 )
LABEL_13:
      *((_BYTE *)this + 18488) = v35 != 0;
  }
  else
  {
    *((_BYTE *)this + 18488) = 1;
  }
  *(_QWORD *)((char *)this + 18492) = 0LL;
  *((_DWORD *)this + 4625) = 0;
  Current = DXGPROCESS::GetCurrent((__int64)v4);
  if ( Current )
    v8 = *((_QWORD *)Current + 10);
  else
    v8 = 0LL;
  if ( v8 )
  {
    v9 = *(__int64 (**)(void))(v8 + 360);
    if ( v9 )
      *((_QWORD *)this + 2313) = v9();
  }
  CurrentProcess = (void *)PsGetCurrentProcess(v7);
  *((_QWORD *)this + 2321) = CurrentProcess;
  ObfReferenceObject(CurrentProcess);
  result = this;
  *((_DWORD *)this + 4644) = 0;
  *((_QWORD *)this + 2323) = 0LL;
  return result;
}
