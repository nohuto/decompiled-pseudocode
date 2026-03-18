/*
 * XREFs of ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x18008C524
 * Callers:
 *     ??_GCDWMOffScreenSwapChain@@MEAAPEAXI@Z @ 0x18008C630 (--_GCDWMOffScreenSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDWMOffScreenSwapChain::~CDWMOffScreenSwapChain(CDWMOffScreenSwapChain *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  void *v4; // rbx
  HANDLE CurrentProcess; // rax
  void *v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rsi
  HMODULE v9; // rcx

  v1 = *((_QWORD *)this + 36);
  *(_QWORD *)this = &CDWMOffScreenSwapChain::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 36) = 0LL;
  }
  v3 = *((_QWORD *)this + 49);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 49));
    *((_QWORD *)this + 49) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 48);
  if ( v4 && *((_QWORD *)this + 57) )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v4);
  }
  v6 = (void *)*((_QWORD *)this + 47);
  if ( v6 )
    CloseHandle(v6);
  v7 = *((_QWORD *)this + 59);
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 59));
    *((_QWORD *)this + 59) = 0LL;
  }
  v8 = *((_QWORD *)this + 60);
  if ( v8 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 60));
    *((_QWORD *)this + 60) = 0LL;
  }
  v9 = (HMODULE)*((_QWORD *)this + 56);
  if ( v9 )
    FreeLibrary(v9);
  CSwapChainBase::~CSwapChainBase(this);
}
