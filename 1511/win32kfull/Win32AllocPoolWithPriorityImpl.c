/*
 * XREFs of Win32AllocPoolWithPriorityImpl @ 0x1C01F7010
 * Callers:
 *     <none>
 * Callees:
 *     ??$AllocateCommon@V_lambda_f9850308d85abc5e6c9482ec663044d3_@@V_lambda_5e58d0a0dde94a12d43635639bfe7835_@@@CLeakTrackingAllocator@NSInstrumentation@@AEAAPEAX_KIV_lambda_f9850308d85abc5e6c9482ec663044d3_@@V_lambda_5e58d0a0dde94a12d43635639bfe7835_@@@Z @ 0x1C02D46C0 (--$AllocateCommon@V_lambda_f9850308d85abc5e6c9482ec663044d3_@@V_lambda_5e58d0a0dde94a12d43635639.c)
 */

__int64 __fastcall Win32AllocPoolWithPriorityImpl(int a1, __int64 a2, __int64 a3, int a4)
{
  char v5; // [rsp+20h] [rbp-50h]
  __int128 v6; // [rsp+30h] [rbp-40h]
  __int128 v7; // [rsp+50h] [rbp-20h] BYREF
  int *v8; // [rsp+60h] [rbp-10h]
  int v9; // [rsp+80h] [rbp+10h] BYREF
  int v10; // [rsp+90h] [rbp+20h] BYREF
  int v11; // [rsp+98h] [rbp+28h] BYREF

  v9 = a1;
  *(_QWORD *)&v6 = &v9;
  *((_QWORD *)&v6 + 1) = &v10;
  v11 = a4;
  v8 = &v11;
  v5 = a1;
  v10 = a3;
  v7 = v6;
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon<_lambda_f9850308d85abc5e6c9482ec663044d3_,_lambda_5e58d0a0dde94a12d43635639bfe7835_>(
           gpLeakTrackingAllocator,
           a2,
           a3,
           &v7,
           v5);
}
