/*
 * XREFs of PopPowerTransitionTimesInMs @ 0x140114634
 * Callers:
 *     PopValidateRTCWake @ 0x1403D0CA8 (PopValidateRTCWake.c)
 *     PopDiagTracePowerTransitionTime @ 0x140530D88 (PopDiagTracePowerTransitionTime.c)
 * Callees:
 *     PopQpcTimeInMs @ 0x1403D055C (PopQpcTimeInMs.c)
 */

unsigned __int64 __fastcall PopPowerTransitionTimesInMs(_DWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4, __int64 a5)
{
  unsigned __int64 result; // rax
  __int64 v8; // r11
  unsigned __int64 v10; // rbp
  _DWORD *v11; // r11
  _DWORD *v12; // r10
  bool v13; // zf
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  result = (unsigned __int64)KeGetCurrentPrcb();
  v8 = a2;
  v10 = 1000LL * *(unsigned int *)(result + 1524);
  if ( a1 )
  {
    result = PopQpcTimeInMs(&qword_140303848, &qword_140303850);
    *a1 = result;
  }
  if ( v8 )
  {
    result = PopQpcTimeInMs(&qword_140303868, &qword_140303870);
    *v11 = result;
  }
  if ( a5 )
  {
    v14 = 0LL;
    result = PopQpcTimeInMs(&v14, &qword_140303888);
    v13 = PoResumeFromHibernate == 0;
    *v12 = result;
    if ( !v13 )
    {
      result = (unsigned int)(dword_140303908 + result);
      *v12 = result;
    }
  }
  if ( a3 )
  {
    result = qword_1403038D0 / v10;
    *a3 = qword_1403038D0 / v10;
  }
  if ( a4 )
  {
    result = (qword_1403039F8 + qword_140303940) / v10;
    *a4 = result;
  }
  return result;
}
