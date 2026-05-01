/*
 * XREFs of ?ApplyResourceLimits@ExecutionModel@@YAJAEAV?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@_K1@Z @ 0x18004D964
 * Callers:
 *     ?SetAffinityMask@HostResourceInfo@ExecutionModel@@QEAAJ_KW4MaskType@2@@Z @ 0x1800131D0 (-SetAffinityMask@HostResourceInfo@ExecutionModel@@QEAAJ_KW4MaskType@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ApplyResourceLimits(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r12
  int v11; // eax
  _QWORD v14[5]; // [rsp+30h] [rbp-40h] BYREF
  __int64 i; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+60h] [rbp-10h]

  v3 = a3;
  v6 = 0;
  memset_0(v14, 0, 0x38uLL);
  LODWORD(v7) = 0;
  v8 = a1[1] - *a1;
  v9 = 0LL;
  v14[0] |= 0x100uLL;
  v10 = v8 >> 3;
  v16 = 1;
  i = a2;
  if ( (int)v10 <= 0 )
    goto LABEL_9;
  while ( 1 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**(_QWORD **)(*a1 + 8 * v9) + 136LL))(
            *(_QWORD *)(*a1 + 8 * v9),
            0LL,
            v14);
    v6 = v11;
    if ( v11 != -2147220218 )
      break;
    v6 = 0;
LABEL_5:
    LODWORD(v7) = v7 + 1;
    if ( ++v9 >= (int)v10 )
      goto LABEL_8;
  }
  if ( v11 >= 0 )
    goto LABEL_5;
  LODWORD(v7) = v7 - 1;
LABEL_8:
  v3 = a3;
LABEL_9:
  if ( (int)v7 < (int)v10 )
  {
    memset_0(v14, 0, 0x38uLL);
    v14[0] |= 0x100uLL;
    v7 = (int)v7;
    v16 = 1;
    for ( i = v3; v7 >= 0; --v7 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**(_QWORD **)(*a1 + 8 * v7) + 136LL))(
        *(_QWORD *)(*a1 + 8 * v7),
        0LL,
        v14);
  }
  return v6;
}
