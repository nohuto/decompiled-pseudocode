/*
 * XREFs of _lambda_a65f3cbb6a5b5b3d53fda08bac78d7e4_::operator() @ 0x18007A1C0
 * Callers:
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x1800798C4 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 *     wil::details::lambda_call__lambda_a65f3cbb6a5b5b3d53fda08bac78d7e4___::_lambda_call__lambda_a65f3cbb6a5b5b3d53fda08bac78d7e4___ @ 0x18007A7AC (wil--details--lambda_call__lambda_a65f3cbb6a5b5b3d53fda08bac78d7e4___--_lambda_call__lambda_a65f.c)
 * Callees:
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?OnHolographicDisplayChanged_@RawInputProvidersTracing@@QEAAXJPEBG_N1@Z @ 0x180076544 (-OnHolographicDisplayChanged_@RawInputProvidersTracing@@QEAAXJPEBG_N1@Z.c)
 *     ?SpatialGraphDriver_@RawInputProvidersTracing@@QEAAXPEBG@Z @ 0x180076650 (-SpatialGraphDriver_@RawInputProvidersTracing@@QEAAXPEBG@Z.c)
 *     ?HolographicDisplayDriver_@RawInputProvidersTracing@@QEAAXPEBG@Z @ 0x1800766F8 (-HolographicDisplayDriver_@RawInputProvidersTracing@@QEAAXPEBG@Z.c)
 */

void __fastcall lambda_a65f3cbb6a5b5b3d53fda08bac78d7e4_::operator()(__int64 a1)
{
  const unsigned __int16 *v2; // rdi
  HSTRING *v3; // rcx
  const unsigned __int16 *StringRawBuffer; // rsi
  __int64 v5; // rcx
  PCWSTR v6; // rax
  bool *v7; // r14
  const unsigned __int16 *v8; // rbp
  char *v9; // r15
  int *v10; // rbx
  _DWORD *v11; // rcx
  RawInputProvidersTracing *v12; // rcx
  _DWORD *v13; // rcx
  RawInputProvidersTracing *v14; // rcx
  _DWORD *v15; // rcx
  RawInputProvidersTracing *v16; // rcx

  v2 = L"UndefinedDeviceInterfacePath";
  v3 = *(HSTRING **)a1;
  StringRawBuffer = L"UndefinedDeviceInterfacePath";
  if ( *v3 )
    StringRawBuffer = WindowsGetStringRawBuffer(*v3, 0LL);
  v5 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v5 + 2888) )
    v2 = WindowsGetStringRawBuffer(*(HSTRING *)(v5 + 2888), 0LL);
  v6 = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 24), 0LL);
  v7 = *(bool **)(a1 + 40);
  v8 = v6;
  v9 = *(char **)(a1 + 32);
  v10 = *(int **)(a1 + 16);
  v11 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v11 && *v11 )
  {
    RawInputProvidersTracing::Instance();
    LOBYTE(v12) = *v7;
    RawInputProvidersTracing::OnHolographicDisplayChanged_(v12, *v10, v8, *v9, *v7);
  }
  v13 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v13 && *v13 )
  {
    RawInputProvidersTracing::Instance();
    RawInputProvidersTracing::HolographicDisplayDriver_(v14, StringRawBuffer);
  }
  v15 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v15 )
  {
    if ( *v15 )
    {
      RawInputProvidersTracing::Instance();
      RawInputProvidersTracing::SpatialGraphDriver_(v16, v2);
    }
  }
}
