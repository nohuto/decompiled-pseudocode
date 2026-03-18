/*
 * XREFs of ?DxgkWnfStateChangeCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C01322F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWnfStateChangeCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        unsigned int a3,
        unsigned int a4,
        const struct _WNF_TYPE_ID *a5,
        PRKPROCESS *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGGLOBAL *Global; // rax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGGLOBAL *v20; // rax
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  KeStackAttachProcess(a6[3], &ApcState);
  Global = DXGGLOBAL::GetGlobal(v11, v10, v12, v13);
  DXGPUSHLOCK::AcquireShared((struct DXGGLOBAL *)((char *)Global + 872));
  v15 = ((__int64 (__fastcall *)(struct _EX_WNF_SUBSCRIPTION *, const struct _WNF_STATE_NAME *, _QWORD, _QWORD, const struct _WNF_TYPE_ID *, PRKPROCESS *))a6[1])(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6);
  v20 = DXGGLOBAL::GetGlobal(v17, v16, v18, v19);
  ExReleasePushLockSharedEx((char *)v20 + 872, 0LL);
  KeLeaveCriticalRegion();
  KeUnstackDetachProcess(&ApcState);
  return v15;
}
