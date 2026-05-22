/*
 * XREFs of ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x18000AD58
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004214 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x18000AF54 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Win32kInterop::Create(
        struct IRawInputClient *a1,
        struct ISystemInputRouter *a2,
        struct Win32kInterop **a3)
{
  unsigned int v6; // edi
  _QWORD *v7; // rbx
  int v8; // r9d
  struct Win32kInterop *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx

  v6 = 0;
  v7 = 0LL;
  if ( a1 )
  {
    if ( !a2 )
    {
      v6 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v6;
      v8 = 55;
      goto LABEL_4;
    }
    if ( !a3 )
    {
      v6 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v6;
      v8 = 56;
      goto LABEL_4;
    }
    v9 = Win32kInterop::s_pInterop;
    if ( !Win32kInterop::s_pInterop )
    {
      v10 = malloc(0x88uLL);
      v7 = v10;
      if ( v10 )
        memset(v10, 0, 0x88uLL);
      if ( !v7 )
      {
        v6 = -2147024882;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 64, 14);
LABEL_24:
        if ( v7 )
          (*(void (__fastcall **)(_QWORD *, __int64))(v7[2] + 24LL))(v7 + 2, 1LL);
        return v6;
      }
      v7[2] = &RefCountedObject::`vftable';
      *((_DWORD *)v7 + 6) = 1;
      *v7 = &Win32kInterop::`vftable'{for `IRawInputProvider'};
      v7[1] = &Win32kInterop::`vftable'{for `IDisplayBindingObserver'};
      v7[2] = &Win32kInterop::`vftable'{for `RefCountedObject'};
      v7[5] = 0LL;
      v7[6] = 0LL;
      *((_DWORD *)v7 + 18) = 0;
      v12 = operator new[](0x10uLL);
      v7[7] = v12;
      *v12 = *((_DWORD *)v7 + 18);
      *((_DWORD *)v7 + 16) = 1;
      *((_DWORD *)v7 + 17) = 0;
      *((_BYTE *)v7 + 88) = 0;
      v7[12] = 0LL;
      v7[13] = 0LL;
      *((_DWORD *)v7 + 28) = 0;
      v7[15] = 0LL;
      *((_DWORD *)v7 + 32) = 0;
      v13 = Win32kInterop::Initialize((Win32kInterop *)v7, a1, a2);
      v6 = v13;
      if ( v13 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v14, &MinInput_Warning_CheckResult, 0, 67, v13);
LABEL_23:
        if ( (v6 & 0x80000000) == 0 )
          return v6;
        goto LABEL_24;
      }
      v9 = (struct Win32kInterop *)v7;
      Win32kInterop::s_pInterop = (struct Win32kInterop *)v7;
    }
    *a3 = v9;
    goto LABEL_23;
  }
  v6 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 54;
LABEL_4:
    Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v8, 87);
  }
  return v6;
}
