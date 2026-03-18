/*
 * XREFs of DxgkReserveGpuVirtualAddressRangeCB @ 0x1C00BD3D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C00048A0 (DpiGetDxgAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddressRangeCB(__int64 a1, __int64 a2)
{
  __int64 DxgAdapter; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 result; // rax
  int v7; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  DxgAdapter = DpiGetDxgAdapter(a1);
  v4 = (_QWORD *)a2;
  v5 = *(_QWORD *)(DxgAdapter + 1992);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DxgAdapter + 176) + 64LL) + 40LL) + 28LL) <= 0x5003u )
  {
    v7 = *(_DWORD *)(a2 + 16);
    v4 = v8;
    v11 = 0LL;
    v10 = 0LL;
    v9 = v7;
    v8[0] = *(_QWORD *)a2;
    v8[1] = *(_QWORD *)(a2 + 8);
  }
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(v5 + 424) + 8LL) + 808LL))(
             *(_QWORD *)(v5 + 432),
             v4);
  *(_QWORD *)(a2 + 24) = v4[3];
  return result;
}
