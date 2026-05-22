/*
 * XREFs of CreateSystemInputHost @ 0x180003E90
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x180003FCC (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004214 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateSystemInputHost(void *a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  struct OneCoreUAPInputHost *v6; // rcx
  OneCoreUAPInputHost *v7; // rax
  OneCoreUAPInputHost *v8; // rcx
  OneCoreUAPInputHost *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx

  InitOnceExecuteOnce(&gInitOnce, (PINIT_ONCE_FN)InitEditionOnceCallback, 0LL, 0LL);
  if ( !a2 )
  {
    v5 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 126, 87);
    return v5;
  }
  v6 = OneCoreUAPInputHost::s_pInputHost;
  if ( !OneCoreUAPInputHost::s_pInputHost )
  {
    v7 = (OneCoreUAPInputHost *)malloc(0x60uLL);
    v9 = v7;
    if ( v7 )
    {
      memset(v7, 0, 0x60uLL);
      v7 = OneCoreUAPInputHost::OneCoreUAPInputHost(v9);
    }
    OneCoreUAPInputHost::s_pInputHost = v7;
    if ( !v7 )
    {
      v5 = -2147024882;
LABEL_11:
      if ( v7 )
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v7 + 2) + 24LL))((__int64)v7 + 16, 1LL);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq((__int64)v8, &MinInput_Warning_CheckResult, 0, 145, v5);
      return v5;
    }
    v5 = OneCoreUAPInputHost::Initialize(v8, a1);
    if ( (v5 & 0x80000000) != 0 )
    {
      v7 = OneCoreUAPInputHost::s_pInputHost;
      goto LABEL_11;
    }
    v6 = OneCoreUAPInputHost::s_pInputHost;
  }
  v10 = (**(__int64 (__fastcall ***)(struct OneCoreUAPInputHost *, GUID *, __int64))v6)(
          v6,
          &GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953,
          a2);
  v5 = v10;
  if ( v10 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 150, v10);
  return v5;
}
