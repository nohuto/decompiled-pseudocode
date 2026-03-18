/*
 * XREFs of Win32AllocPoolWithPriorityImpl @ 0x1C01EE1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AllocateCommon@V_lambda_c4c4ea517b44899cfbbfd85c0dbd9cda_@@V_lambda_fb1d754a87bb4379b691d90d9f0cbdb4_@@@CLeakTrackingAllocator@NSInstrumentation@@AEAAPEAX_KIV_lambda_c4c4ea517b44899cfbbfd85c0dbd9cda_@@V_lambda_fb1d754a87bb4379b691d90d9f0cbdb4_@@@Z @ 0x1C02D7768 (--$AllocateCommon@V_lambda_c4c4ea517b44899cfbbfd85c0dbd9cda_@@V_lambda_fb1d754a87bb4379b691d90d9.c)
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

  v11 = a4;
  *(_QWORD *)&v6 = &v9;
  v9 = a1;
  *((_QWORD *)&v6 + 1) = &v10;
  v8 = &v11;
  v10 = a3;
  v7 = v6;
  v5 = 0;
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon<_lambda_c4c4ea517b44899cfbbfd85c0dbd9cda_,_lambda_fb1d754a87bb4379b691d90d9f0cbdb4_>(
           gpLeakTrackingAllocator,
           a2,
           a3,
           &v7,
           v5);
}
