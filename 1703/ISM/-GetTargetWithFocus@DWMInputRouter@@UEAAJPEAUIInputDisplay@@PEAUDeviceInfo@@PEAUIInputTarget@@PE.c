/*
 * XREFs of ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x180014C20
 * Callers:
 *     ?GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x180084350 (-GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PE.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::GetTargetWithFocus(
        DWMInputRouter *this,
        struct IInputDisplay *a2,
        struct DeviceInfo *a3,
        struct IInputTarget *a4,
        struct IInputTarget **a5)
{
  struct IInputTarget **v7; // rsi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  struct IInputTarget *v13; // rax
  __int64 v14; // rcx
  struct IInputTarget *v15; // rcx
  int v17; // [rsp+38h] [rbp-20h] BYREF
  struct IInputTarget *v18; // [rsp+40h] [rbp-18h]
  struct IInputDisplay *v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = a2;
  v18 = 0LL;
  v7 = a5;
  if ( !a5 )
  {
    v8 = -2147467261;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 1268, 3);
    goto LABEL_19;
  }
  if ( !a2 )
  {
    v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputDisplay **, struct IInputTarget *))this + 101))(
           *((_QWORD *)this + 101),
           &GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754,
           &v19,
           a4);
    v8 = v9;
    if ( v9 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 1281, v9);
      goto LABEL_19;
    }
    a2 = v19;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct IInputDisplay *, struct DeviceInfo *, _QWORD, int *))(**((_QWORD **)this + 27) + 32LL))(
          *((_QWORD *)this + 27),
          a2,
          a3,
          *((_QWORD *)this + 29),
          &v17);
  v8 = v11;
  if ( v11 >= 0 )
  {
    if ( v17 )
    {
      v13 = v18;
      v18 = 0LL;
    }
    else
    {
      v14 = *((_QWORD *)this + 29);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v13 = (struct IInputTarget *)*((_QWORD *)this + 29);
    }
    *v7 = v13;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v12, &MinInput_Warning_CheckResult, 0, 1288, v11);
  }
LABEL_19:
  v15 = v18;
  v18 = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(struct IInputTarget *, struct IInputDisplay *, struct DeviceInfo *, struct IInputTarget *))(*(_QWORD *)v15 + 16LL))(
      v15,
      a2,
      a3,
      a4);
  return v8;
}
