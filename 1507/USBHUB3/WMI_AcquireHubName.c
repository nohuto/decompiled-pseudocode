/*
 * XREFs of WMI_AcquireHubName @ 0x1C006ED48
 * Callers:
 *     WMI_ExecuteMethodUsbWmiStdData @ 0x1C006F380 (WMI_ExecuteMethodUsbWmiStdData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x1C0026D08 (HUBMISC_StripSymbolicNamePrefix.c)
 *     memmove @ 0x1C0034300 (memmove.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall WMI_AcquireHubName(__int64 a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v7; // rax
  size_t v8; // rbp
  _WORD *v9; // rbx
  size_t v10; // rsi
  size_t v11; // r8
  size_t v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  *a3 = 0;
  v13 = 0LL;
  if ( a2 < 0xA || (v7 = *(unsigned int *)(a4 + 4), (unsigned int)v7 < 0xA) || (unsigned int)v7 > a2 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2440), 2u, 3u, 0xAu, (__int64)&WPP_0aebd9e813344ad5cfb424a7bef6ec1b_Traceguids);
    return (unsigned int)-1073741789;
  }
  else
  {
    v8 = v7 - 8;
    v9 = HUBMISC_StripSymbolicNamePrefix((unsigned __int16 *)(a1 + 2464), &v13);
    memset((void *)(a4 + 8), 0, v8);
    v10 = v13;
    v11 = v13;
    if ( v8 < v13 )
      v11 = v8;
    memmove((void *)(a4 + 8), v9, v11);
    if ( v8 < v10 )
      LODWORD(v10) = v8;
    *a3 = v10 + 8;
  }
  return v4;
}
