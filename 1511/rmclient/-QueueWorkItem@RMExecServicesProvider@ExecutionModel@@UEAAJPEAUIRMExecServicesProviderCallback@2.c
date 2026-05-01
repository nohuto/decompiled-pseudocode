/*
 * XREFs of ?QueueWorkItem@RMExecServicesProvider@ExecutionModel@@UEAAJPEAUIRMExecServicesProviderCallback@2@PEAX@Z @ 0x1800156E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180005F60 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180008F4C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::RMExecServicesProvider::QueueWorkItem(
        ExecutionModel::RMExecServicesProvider *this,
        struct IUnknown *a2,
        struct IUnknown *a3)
{
  struct IUnknown **v6; // rax
  unsigned int v7; // ebx
  struct IUnknown **v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx

  v6 = (struct IUnknown **)malloc(0x10uLL);
  v7 = 0;
  v8 = v6;
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    if ( *v8 != a2 )
      ATL::AtlComPtrAssign(v8, a2);
    v8[1] = a3;
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 32));
    v9 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      v9[2] = v8;
      v11 = (_QWORD *)*((_QWORD *)this + 10);
      v10[1] = v11;
      *v10 = (char *)this + 72;
      *v11 = v10;
      *((_QWORD *)this + 10) = v10;
      ++*((_QWORD *)this + 11);
    }
    if ( !*((_BYTE *)this + 25) )
    {
      v12 = *((_QWORD *)this + 2);
      *((_BYTE *)this + 25) = 1;
      TpPostWork(v12);
    }
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 32));
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v7;
}
