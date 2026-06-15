/*
 * XREFs of ??$?4UIMMDevice@@@?$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV?$CComPtr@UIMMDevice@@@1@@Z @ 0x18002B9D0
 * Callers:
 *     ?SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z @ 0x18001934C (-SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002B950 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

struct IUnknown *__fastcall ATL::CComPtr<IMMEndpointInternal>::operator=<IMMDevice>(
        struct IUnknown **a1,
        struct IUnknown **a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // r15
  struct IUnknown *v4; // rdi
  bool v6; // bp
  __int64 v8; // rbx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1;
  v4 = *a2;
  if ( !*a1 )
  {
    if ( !v4 )
      return *a1;
    goto LABEL_3;
  }
  if ( !v4 )
  {
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  v9 = 0LL;
  v10 = 0LL;
  (**v2)(v2, &GUID_00000000_0000_0000_c000_000000000046, &v9);
  ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v4->lpVtbl->QueryInterface)(
    v4,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v10);
  v8 = v9;
  v6 = v9 == v10;
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v8 = v9;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
LABEL_4:
  if ( !v6 )
    return ATL::AtlComQIPtrAssign(a1, *a2, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
  return *a1;
}
