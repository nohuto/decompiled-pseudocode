/*
 * XREFs of ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180044088
 * Callers:
 *     ?MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180044AF0 (-MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?MPCProcessor_FocusHandDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180044C8C (-MPCProcessor_FocusHandDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?MPCProcessor_OnTargetWithFocusChanged_@ISMTracing@@QEAAX_NPEAUIInputTarget@@1@Z @ 0x180046E7C (-MPCProcessor_OnTargetWithFocusChanged_@ISMTracing@@QEAAX_NPEAUIInputTarget@@1@Z.c)
 *     ?MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPostProcessor@@@Z @ 0x180083A3C (-MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPost.c)
 *     ?MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCInputTarget@@0@Z @ 0x180083C08 (-MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCInputTarget@@0@Z.c)
 *     ?MPCInputRouter_CreateMPCTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_KPEAUIMPCInputTarget@@@Z @ 0x180083D14 (-MPCInputRouter_CreateMPCTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_KPEAUIMPCInputTarget@@@Z.c)
 *     ?MPCHFXInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@KPEAUInputInfo@@_N@Z @ 0x1800856DC (-MPCHFXInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@KPEAUInputInfo@@_N@Z.c)
 *     ?MPCExclusiveInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180086E34 (-MPCExclusiveInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ISMTracing::GetPIDOfTarget(struct IInputTarget *a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  struct IInputTarget *v8; // [rsp+50h] [rbp+18h]

  v2 = 0;
  v6 = 0;
  if ( a1 )
  {
    v8 = a1;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a1 + 8LL))(a1);
    v7 = 0LL;
    v3 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a1)(
           a1,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v7);
    v4 = v7;
    if ( v3 >= 0 && v7 )
    {
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 32LL))(v7, &v6);
      v4 = v7;
    }
    if ( v4 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a1 + 16LL))(a1);
    return v6;
  }
  return v2;
}
