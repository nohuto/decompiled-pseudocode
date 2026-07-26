/*
 * XREFs of ndisOidPostIovCreateNicSwitch @ 0x1C0068FD0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C001B5AC (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0022244 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ndisIovFinalizeNicSwitch @ 0x1C00685E8 (ndisIovFinalizeNicSwitch.c)
 *     ndisIovInitializeNicSwitch @ 0x1C0068A68 (ndisIovInitializeNicSwitch.c)
 */

void __fastcall ndisOidPostIovCreateNicSwitch(__int64 a1)
{
  __int64 v1; // r13
  void *v2; // rdi
  __int64 v3; // r15
  void *v4; // r14
  _QWORD *v5; // rsi
  _OWORD *v7; // r12
  int v8; // eax
  void *v9; // [rsp+70h] [rbp+40h] BYREF
  void *v10; // [rsp+78h] [rbp+48h] BYREF
  _QWORD *v11; // [rsp+80h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0LL;
  v3 = *(_QWORD *)a1;
  v4 = 0LL;
  v5 = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qq(0xEu, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, v3, v1);
  if ( *(_QWORD *)a1 )
  {
    if ( ndisIovNicSwitchWithoutIovSupported(v3) )
    {
      if ( (_UNKNOWN *)ndisGetOidSourceHandle(*(_QWORD *)(a1 + 32)) != &ndisIntReqGeneric && !*(_DWORD *)(a1 + 40) )
      {
        v7 = *(_OWORD **)(v1 + 40);
        v8 = ndisIovInitializeNicSwitch(v3, (__int64)v7, &v9, &v10, &v11);
        v5 = v11;
        v4 = v10;
        v2 = v9;
        *(_DWORD *)(a1 + 40) = v8;
        if ( !v8 )
          *(_DWORD *)(a1 + 40) = ndisIovFinalizeNicSwitch(v3, v7, (__int64)v2, (__int64)v4, v5);
      }
    }
  }
  if ( *(_DWORD *)(a1 + 40) )
  {
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qq(0xFu, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, v3, v1);
}
