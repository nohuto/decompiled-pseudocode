/*
 * XREFs of ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C009F1F0
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C009E4A0 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DD4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C000BF04 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     DxgkSqmOptedIn @ 0x1C000BF30 (DxgkSqmOptedIn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ @ 0x1C00BBD70 (-InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ.c)
 *     ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C00BBE74 (-Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ.c)
 */

DXGSESSIONDATA *__fastcall DXGSESSIONDATA::DXGSESSIONDATA(DXGSESSIONDATA *this, int a2)
{
  OUTPUTDUPL_SESSION_MGR *v3; // rax
  OUTPUTDUPL_SESSION_MGR *v4; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rax
  __int64 (*v7)(void); // rax
  struct DXGPROCESS *v8; // rax
  void *CurrentProcess; // rax
  DXGSESSIONDATA *result; // rax
  OUTPUTDUPL_SESSION_MGR *v11; // rcx
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
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 16, -1, 32);
  *((_QWORD *)this + 2316) = 0LL;
  *((_QWORD *)this + 2318) = 0LL;
  *((_QWORD *)this + 2317) = 0LL;
  *((_DWORD *)this + 4638) = 61;
  v3 = (OUTPUTDUPL_SESSION_MGR *)operator new[](0x38uLL, 0x674D444Fu, PagedPool);
  v4 = v3;
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
    *((_DWORD *)v4 + 6) = DxgkSqmOptedIn();
  }
  else
  {
    v4 = 0LL;
  }
  *((_QWORD *)this + 1) = v4;
  if ( v4 && (int)OUTPUTDUPL_SESSION_MGR::Initialize(v4) < 0 )
  {
    v11 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
    if ( v11 )
      OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v11);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2321) = (char *)this + 18560;
  *((_QWORD *)this + 2320) = (char *)this + 18560;
  *((_QWORD *)this + 2323) = (char *)this + 18576;
  *((_QWORD *)this + 2322) = (char *)this + 18576;
  if ( MEMORY[0xFFFFF78000000264] == 3 && (MEMORY[0xFFFFF780000002D0] & 0x110) == 0x10 )
  {
    *((_BYTE *)this + 18512) = 0;
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
      goto LABEL_21;
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
LABEL_21:
      *((_BYTE *)this + 18512) = v35 != 0;
  }
  else
  {
    *((_BYTE *)this + 18512) = 1;
  }
  *(_QWORD *)((char *)this + 18516) = 0LL;
  *((_DWORD *)this + 4631) = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    v6 = *((_QWORD *)Current + 10);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = *(__int64 (**)(void))(v6 + 360);
    if ( v7 )
      *((_QWORD *)this + 2316) = v7();
  }
  v8 = DXGPROCESS::GetCurrent();
  *((_QWORD *)this + 2325) = v8;
  *((_BYTE *)v8 + 312) = 1;
  CurrentProcess = (void *)PsGetCurrentProcess();
  *((_QWORD *)this + 2324) = CurrentProcess;
  ObfReferenceObject(CurrentProcess);
  result = this;
  *((_DWORD *)this + 4652) = 0;
  *((_QWORD *)this + 2327) = 0LL;
  return result;
}
