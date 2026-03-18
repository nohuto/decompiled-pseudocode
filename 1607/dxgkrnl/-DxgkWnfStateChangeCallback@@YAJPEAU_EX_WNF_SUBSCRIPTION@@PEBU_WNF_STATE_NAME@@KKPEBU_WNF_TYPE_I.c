/*
 * XREFs of ?DxgkWnfStateChangeCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C00D87E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWnfStateChangeCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        unsigned int a3,
        unsigned int a4,
        const struct _WNF_TYPE_ID *a5,
        PRKPROCESS *a6)
{
  __int64 v10; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  struct DXGGLOBAL *v14; // rax
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  KeStackAttachProcess(a6[3], &ApcState);
  Global = DXGGLOBAL::GetGlobal(v10);
  DXGPUSHLOCK::AcquireShared((struct DXGGLOBAL *)((char *)Global + 856));
  v12 = ((__int64 (__fastcall *)(struct _EX_WNF_SUBSCRIPTION *, const struct _WNF_STATE_NAME *, _QWORD, _QWORD, const struct _WNF_TYPE_ID *, PRKPROCESS *))a6[1])(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6);
  v14 = DXGGLOBAL::GetGlobal(v13);
  ExReleasePushLockSharedEx((char *)v14 + 856, 0LL);
  KeLeaveCriticalRegion();
  KeUnstackDetachProcess(&ApcState);
  return v12;
}
