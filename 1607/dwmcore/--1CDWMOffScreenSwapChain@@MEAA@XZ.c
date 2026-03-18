/*
 * XREFs of ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x1800B9248
 * Callers:
 *     ??_GCDWMOffScreenSwapChain@@MEAAPEAXI@Z @ 0x1800B9330 (--_GCDWMOffScreenSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMOffScreenSwapChain::~CDWMOffScreenSwapChain(CDWMOffScreenSwapChain *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rdi
  HANDLE CurrentProcess; // rax
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  HMODULE v11; // rcx

  *(_QWORD *)this = &CDWMOffScreenSwapChain::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  v4 = *((_QWORD *)this + 36);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 36) = 0LL;
  }
  v5 = *((_QWORD *)this + 49);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 49) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 48);
  if ( v6 && *((_QWORD *)this + 57) )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v6);
  }
  v8 = (void *)*((_QWORD *)this + 47);
  if ( v8 )
    CloseHandle(v8);
  v9 = *((_QWORD *)this + 59);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 59) = 0LL;
  }
  v10 = *((_QWORD *)this + 60);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *((_QWORD *)this + 60) = 0LL;
  }
  v11 = (HMODULE)*((_QWORD *)this + 56);
  if ( v11 )
    FreeLibrary(v11);
  CSwapChainBase::~CSwapChainBase(this, a2, a3);
}
