/*
 * XREFs of ?StartTimer@RMExecServicesProvider@ExecutionModel@@UEAAJKKPEAUIRMExecServicesProviderCallback@2@PEAXPEAPEAX@Z @ 0x180021B00
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GPendingTimerItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z @ 0x180042A54 (--_GPendingTimerItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z.c)
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
  unsigned int v12; // edx
  int v13; // esi
  struct _RTL_CRITICAL_SECTION *v14; // rsi
  char *v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  int v19; // esi
  struct IUnknown *v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22[4]; // [rsp+28h] [rbp-20h] BYREF

  v21 = 0LL;
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
    v19 = -2147024882;
LABEL_20:
    ((void (__fastcall *)(struct IUnknown *, __int64, struct IUnknown *, _QWORD))a4->lpVtbl[1].QueryInterface)(
      a4,
      1LL,
      a5,
      (unsigned int)v19);
    goto LABEL_13;
  }
  v13 = TpAllocTimer(&v21, ExecutionModel::RMExecServicesProvider::TimerCallbackThunk, v11, 0LL);
  if ( v13 < 0 )
  {
    v19 = v13 | 0x10000000;
  }
  else
  {
    v11[3] = v21;
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
    v22[0] = -10000 * v7;
    TpSetTimer(v21, v22, 0LL, a3);
    if ( a6 )
      *a6 = v11;
    v11 = 0LL;
    v21 = 0LL;
    v19 = 0;
  }
  if ( v19 < 0 )
    goto LABEL_20;
LABEL_13:
  if ( v11 )
    ExecutionModel::RMExecServicesProvider::PendingTimerItem::`scalar deleting destructor'(
      (ExecutionModel::RMExecServicesProvider::PendingTimerItem *)v11,
      v12);
  if ( v21 )
    TpReleaseTimer();
  return (unsigned int)v19;
}
