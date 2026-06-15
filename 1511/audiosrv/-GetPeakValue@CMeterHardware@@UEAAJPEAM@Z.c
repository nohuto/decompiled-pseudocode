/*
 * XREFs of ?GetPeakValue@CMeterHardware@@UEAAJPEAM@Z @ 0x18006BB30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMeterHardware::GetPeakValue(CMeterHardware *this, float *a2)
{
  int v2; // ebx
  float v5; // xmm6_4
  __int64 i; // rbp
  __int64 v8; // rcx
  float *v9; // rax
  float v10; // xmm0_4
  _DWORD v11[32]; // [rsp+20h] [rbp-D8h] BYREF

  v2 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  if ( !*((_QWORD *)this + 6) )
    goto LABEL_17;
  if ( *((_DWORD *)this + 8) > 0x20u )
    return 2147942487LL;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**((_QWORD **)this + 6) + 32LL))(
           *((_QWORD *)this + 6),
           (unsigned int)i,
           &v11[i]);
    if ( v2 < 0 )
      v11[i] = 0;
  }
  if ( !*((_DWORD *)this + 8) )
    goto LABEL_17;
  v8 = *((unsigned int *)this + 8);
  v9 = (float *)v11;
  do
  {
    if ( *v9 > v5 )
      v5 = *v9;
    ++v9;
    --v8;
  }
  while ( v8 );
  if ( v5 >= 1.0 )
    v10 = FLOAT_1_0;
  else
LABEL_17:
    v10 = v5;
  if ( v10 <= 0.0 )
  {
    v5 = 0.0;
  }
  else if ( v5 >= 1.0 )
  {
    v5 = FLOAT_1_0;
  }
  *a2 = v5;
  if ( v2 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, (__int64)&WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids, v2);
  }
  return (unsigned int)v2;
}
