/*
 * XREFs of ?FindRemoteProxy@LegacyInjectionRawInputProvider@@AEAAJXZ @ 0x1800700D8
 * Callers:
 *     ?Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ @ 0x18006F240 (-Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ.c)
 *     ?EnableInputInjection@LegacyInjectionRawInputProvider@@UEAAJG_N@Z @ 0x18006F510 (-EnableInputInjection@LegacyInjectionRawInputProvider@@UEAAJG_N@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LegacyInjectionRawInputProvider::FindRemoteProxy(LegacyInjectionRawInputProvider *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // r9d
  __int64 (__fastcall ***v6)(_QWORD, GUID *, char *); // rcx
  __int64 v7; // rcx
  unsigned int v9; // [rsp+68h] [rbp+28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+30h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, char *); // [rsp+78h] [rbp+38h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v9 = 0;
  v2 = CoreUIFactoryCreate(&v10);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_14;
    v5 = 889;
    goto LABEL_13;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, GUID *, unsigned int *))(*(_QWORD *)v10 + 24LL))(
         v10,
         &GUID_b30e303e_7340_4446_bd7b_c37fdee42abc,
         &v9);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_14;
    v5 = 893;
    goto LABEL_13;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v10 + 40LL))(
         v10,
         L"System\\RemoteTextInputProcessor",
         v9,
         &v11);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_14;
    v5 = 898;
    goto LABEL_13;
  }
  v2 = (**v11)(v11, &GUID_b30e303e_7340_4446_bd7b_c37fdee42abc, (char *)this + 96);
  v4 = v2;
  if ( v2 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v5 = 902;
LABEL_13:
    Template_qqq(v3, &MinInput_Warning_CheckResult, 0, v5, v2);
  }
LABEL_14:
  v6 = v11;
  v11 = 0LL;
  if ( v6 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v6)[2])(v6);
  v7 = v10;
  v10 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v4;
}
