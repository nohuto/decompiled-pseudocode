/*
 * XREFs of ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x180072514
 * Callers:
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x1800725A4 (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x180072764 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::CreateReadBuffer(RIMDeviceCollection *this, unsigned int a2)
{
  unsigned __int64 v3; // rsi
  void *v4; // rcx
  unsigned int v5; // ebx
  void *v6; // rax
  __int64 v7; // rcx

  v3 = a2;
  v4 = (void *)*((_QWORD *)this + 335);
  v5 = 0;
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 335) = 0LL;
  }
  *((_DWORD *)this + 672) = 0;
  v6 = operator new[](v3);
  *((_QWORD *)this + 335) = v6;
  if ( v6 )
  {
    *((_DWORD *)this + 672) = v3;
  }
  else
  {
    v5 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v7, &MinInput_Warning_CheckResult, 2, 608, 14);
  }
  return v5;
}
