/*
 * XREFs of wil::details::lambda_call__lambda_4361eceb4e5663aaadde433ebf2ce929___::_lambda_call__lambda_4361eceb4e5663aaadde433ebf2ce929___ @ 0x18007A750
 * Callers:
 *     _RIMRawInputProvider::SendCommandToInputDevice_::_1_::dtor$1 @ 0x1800A2E17 (_RIMRawInputProvider--SendCommandToInputDevice_--_1_--dtor$1.c)
 * Callees:
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?SetHapticsFeedback_@RawInputProvidersTracing@@QEAAXJKEEG@Z @ 0x18007684C (-SetHapticsFeedback_@RawInputProvidersTracing@@QEAAXJKEEG@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_4361eceb4e5663aaadde433ebf2ce929___::_lambda_call__lambda_4361eceb4e5663aaadde433ebf2ce929___(
        __int64 a1)
{
  int *v2; // rdi
  _DWORD *v3; // rcx
  RawInputProvidersTracing *v4; // rcx

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v2 = *(int **)a1;
    v3 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( v3 )
    {
      if ( *v3 )
      {
        RawInputProvidersTracing::Instance();
        RawInputProvidersTracing::SetHapticsFeedback_(
          v4,
          *v2,
          *(_DWORD *)(a1 + 8),
          *(_BYTE *)(a1 + 12),
          *(_BYTE *)(a1 + 13),
          *(_WORD *)(a1 + 14));
      }
    }
  }
}
