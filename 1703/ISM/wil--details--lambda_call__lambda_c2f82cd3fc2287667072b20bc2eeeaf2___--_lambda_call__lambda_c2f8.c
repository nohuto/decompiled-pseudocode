/*
 * XREFs of wil::details::lambda_call__lambda_c2f82cd3fc2287667072b20bc2eeeaf2___::_lambda_call__lambda_c2f82cd3fc2287667072b20bc2eeeaf2___ @ 0x18007A820
 * Callers:
 *     _SpatialInputControllerCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1800A310F (_SpatialInputControllerCollection--OnDeviceAttach_--_1_--dtor$0.c)
 * Callees:
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?DeviceAttached_@RawInputProvidersTracing@@QEAAXJKK@Z @ 0x180076140 (-DeviceAttached_@RawInputProvidersTracing@@QEAAXJKK@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_c2f82cd3fc2287667072b20bc2eeeaf2___::_lambda_call__lambda_c2f82cd3fc2287667072b20bc2eeeaf2___(
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
        RawInputProvidersTracing::DeviceAttached_(v5, *v3, *(_DWORD *)(a1 + 16), *v2);
      }
    }
  }
}
