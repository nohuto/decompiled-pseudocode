/*
 * XREFs of ?StartTimer@RMExecServicesProvider@ExecutionModel@@UEAAJKKPEAUIRMExecServicesProviderCallback@2@PEAXPEAPEAX@Z @ 0x1800157D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180005F60 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180008F4C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ??_GPendingTimerItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z @ 0x180015508 (--_GPendingTimerItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::RMExecServicesProvider::StartTimer(
        ExecutionModel::RMExecServicesProvider *this,
        unsigned int a2,
        unsigned int a3,
        struct IUnknown *a4,
        struct IUnknown *a5,
        void **a6)
{
  __int64 v7; // r12
  struct IUnknown **v10; // rax
  struct IUnknown **v11; // rdi
  int v12; // esi
  int v13; // esi
  struct _RTL_CRITICAL_SECTION *v14; // rsi
  char *v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  struct IUnknown *v20; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21[4]; // [rsp+28h] [rbp-20h] BYREF

  v20 = 0LL;
  v7 = a2;
  v10 = (struct IUnknown **)malloc(0x20uLL);
  v11 = v10;
  if ( v10 )
  {
    *v10 = 0LL;
    v10[1] = 0LL;
    v10[2] = 0LL;
    v10[3] = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
  {
    v12 = -2147024882;
LABEL_16:
    ((void (__fastcall *)(struct IUnknown *, __int64, struct IUnknown *, _QWORD))a4->lpVtbl[1].QueryInterface)(
      a4,
      1LL,
      a5,
      (unsigned int)v12);
    goto LABEL_17;
  }
  v13 = TpAllocTimer(&v20, ExecutionModel::RMExecServicesProvider::TimerCallbackThunk, v11, 0LL);
  if ( v13 >= 0 )
  {
    v11[3] = v20;
    v11[1] = (struct IUnknown *)this;
    if ( *v11 != a4 )
      ATL::AtlComPtrAssign(v11, a4);
    v14 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
    v11[2] = a5;
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 32));
    v15 = (char *)this + 96;
    v16 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v17 = v16;
    if ( v16 )
    {
      v16[2] = v11;
      v18 = (_QWORD *)*((_QWORD *)v15 + 1);
      v17[1] = v18;
      *v17 = v15;
      *v18 = v17;
      *((_QWORD *)v15 + 1) = v17;
      ++*((_QWORD *)v15 + 2);
    }
    RtlLeaveCriticalSection(v14);
    v21[0] = -10000 * v7;
    TpSetTimer(v20, v21, 0LL, a3);
    if ( a6 )
      *a6 = v11;
    v11 = 0LL;
    v20 = 0LL;
    v12 = 0;
  }
  else
  {
    v12 = v13 | 0x10000000;
  }
  if ( v12 < 0 )
    goto LABEL_16;
LABEL_17:
  if ( v11 )
    ExecutionModel::RMExecServicesProvider::PendingTimerItem::`scalar deleting destructor'((ExecutionModel::RMExecServicesProvider::PendingTimerItem *)v11);
  if ( v20 )
    TpReleaseTimer(v20);
  return (unsigned int)v12;
}
