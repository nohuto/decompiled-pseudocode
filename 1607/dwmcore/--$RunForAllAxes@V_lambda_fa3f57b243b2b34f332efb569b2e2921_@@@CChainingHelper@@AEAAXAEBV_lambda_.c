/*
 * XREFs of ??$RunForAllAxes@V_lambda_fa3f57b243b2b34f332efb569b2e2921_@@@CChainingHelper@@AEAAXAEBV_lambda_fa3f57b243b2b34f332efb569b2e2921_@@@Z @ 0x180168790
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z @ 0x180168B54 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x180168A70 (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 */

__int64 __fastcall CChainingHelper::RunForAllAxes<_lambda_fa3f57b243b2b34f332efb569b2e2921_>(__int64 a1, __int64 a2)
{
  int i; // ebx
  unsigned int TemporaryConfigurationAxis; // eax
  _BYTE *v5; // r9
  __int64 v6; // r8
  _DWORD *v7; // r10
  __int64 v8; // r11
  __int64 result; // rax

  for ( i = 0; i < 3; ++i )
  {
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis(
                                   (unsigned int)i,
                                   a2,
                                   ***(_QWORD ***)a2,
                                   *(_QWORD *)(a2 + 8));
    LOBYTE(v5) = *v5;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *, _DWORD))(v6 + 192))(
               v8,
               TemporaryConfigurationAxis,
               0LL,
               v5,
               *v7);
  }
  return result;
}
