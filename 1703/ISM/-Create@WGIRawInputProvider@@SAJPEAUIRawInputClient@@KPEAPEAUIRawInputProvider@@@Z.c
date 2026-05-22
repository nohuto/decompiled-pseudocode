/*
 * XREFs of ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180060A50
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Release@PTPProcessor@@UEAAKXZ @ 0x180001BA0 (-Release@PTPProcessor@@UEAAKXZ.c)
 *     ?Initialize@WGIRawInputProvider@@AEAAJXZ @ 0x180060BF4 (-Initialize@WGIRawInputProvider@@AEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall WGIRawInputProvider::Create(struct IRawInputClient *a1, __int64 a2, struct IRawInputProvider **a3)
{
  PTPProcessor *v5; // rsi
  unsigned int v6; // edi
  int v7; // r9d
  char *v8; // rax
  char *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx

  v5 = 0LL;
  if ( !a3 )
  {
    v6 = -2147467261;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_20;
    v7 = 48;
LABEL_4:
    Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v7, v6);
    goto LABEL_20;
  }
  *a3 = 0LL;
  if ( !a1 )
  {
    v6 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_20;
    v7 = 50;
    goto LABEL_4;
  }
  v8 = (char *)malloc(0x90uLL);
  v9 = v8;
  if ( v8 )
    memset(v8, 0, 0x90uLL);
  if ( v9 )
  {
    *((_QWORD *)v9 + 2) = &RefCountedObject::`vftable';
    *((_DWORD *)v9 + 6) = 1;
    *(_QWORD *)v9 = &WGIRawInputProvider::`vftable'{for `IRawInputProvider'};
    *((_QWORD *)v9 + 1) = &WGIRawInputProvider::`vftable'{for `IInputFocusListener'};
    *((_QWORD *)v9 + 2) = &WGIRawInputProvider::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v9 + 4) = a1;
    (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a1 + 8LL))(a1);
    *((_QWORD *)v9 + 5) = 0LL;
    *((_QWORD *)v9 + 6) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::`vftable';
    *((_QWORD *)v9 + 7) = -1LL;
    *((_QWORD *)v9 + 8) = 0LL;
    *((_QWORD *)v9 + 9) = 0LL;
    *((_QWORD *)v9 + 10) = 0LL;
    *((_QWORD *)v9 + 11) = 0LL;
    *((_QWORD *)v9 + 12) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v9 + 104), 0, 0);
  }
  v5 = (PTPProcessor *)v9;
  if ( !v9 )
  {
    v6 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_20;
    v7 = 53;
    goto LABEL_4;
  }
  v10 = WGIRawInputProvider::Initialize((WGIRawInputProvider *)v9);
  v6 = v10;
  if ( v10 >= 0 )
  {
    v5 = 0LL;
    *a3 = (struct IRawInputProvider *)v9;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 54, v10);
  }
LABEL_20:
  if ( v5 )
    PTPProcessor::Release(v5);
  return v6;
}
