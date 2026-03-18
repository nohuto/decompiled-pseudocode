/*
 * XREFs of ??$RunForAllAxes@V_lambda_9527f4ed72f1bc5b26231b03526f6435_@@@CChainingHelper@@AEAAXAEBV_lambda_9527f4ed72f1bc5b26231b03526f6435_@@@Z @ 0x18016867C
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z @ 0x180168B54 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x180168A70 (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 */

__int64 __fastcall CChainingHelper::RunForAllAxes<_lambda_9527f4ed72f1bc5b26231b03526f6435_>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  unsigned int TemporaryConfigurationAxis; // eax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 result; // rax

  v4 = 0;
  v6 = 0LL;
  v7 = 0LL;
  do
  {
    v8 = *(_QWORD *)(a2 + 8);
    LOBYTE(a4) = (*(_BYTE *)(v6 + v8) & 2) != 0;
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis((unsigned int)v4, a2, v8, a4);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v10 + 192))(v11, TemporaryConfigurationAxis, 0LL);
    ++v4;
    v7 += 12LL;
    v6 += 12LL;
  }
  while ( v4 < 3 );
  return result;
}
