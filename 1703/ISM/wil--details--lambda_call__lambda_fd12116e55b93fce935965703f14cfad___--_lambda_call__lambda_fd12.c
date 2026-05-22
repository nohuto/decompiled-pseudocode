/*
 * XREFs of wil::details::lambda_call__lambda_fd12116e55b93fce935965703f14cfad___::_lambda_call__lambda_fd12116e55b93fce935965703f14cfad___ @ 0x18007A7C4
 * Callers:
 *     _SpatialInputControllerCollection::OnDeviceRemoval_::_1_::dtor$0 @ 0x1800A3127 (_SpatialInputControllerCollection--OnDeviceRemoval_--_1_--dtor$0.c)
 * Callees:
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?DeviceRemoved_@RawInputProvidersTracing@@QEAAXJKK@Z @ 0x1800761EC (-DeviceRemoved_@RawInputProvidersTracing@@QEAAXJKK@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_fd12116e55b93fce935965703f14cfad___::_lambda_call__lambda_fd12116e55b93fce935965703f14cfad___(
        __int64 a1)
{
  int *v2; // rdi
  int *v3; // rsi
  _DWORD *v4; // rcx
  RawInputProvidersTracing *v5; // rcx

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    v2 = *(int **)(a1 + 8);
    v3 = *(int **)a1;
    v4 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( v4 )
    {
      if ( *v4 )
      {
        RawInputProvidersTracing::Instance();
        RawInputProvidersTracing::DeviceRemoved_(v5, *v3, *(_DWORD *)(a1 + 16), *v2);
      }
    }
  }
}
