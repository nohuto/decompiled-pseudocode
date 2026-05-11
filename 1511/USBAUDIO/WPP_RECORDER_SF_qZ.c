/*
 * XREFs of WPP_RECORDER_SF_qZ @ 0x1C00010F8
 * Callers:
 *     DriverEntry @ 0x1C00137A0 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned __int16 *a7)
{
  __int64 *v7; // rbx
  __int64 v9; // r8
  const wchar_t *v10; // rcx
  __int64 *v11; // rdx
  int v13; // [rsp+20h] [rbp-48h]

  v7 = (__int64 *)a7;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a7 && *((_QWORD *)a7 + 1) )
      v9 = *a7;
    else
      v9 = 10LL;
    if ( !a7 || (v10 = (const wchar_t *)*((_QWORD *)a7 + 1)) == 0LL )
      v10 = L"NULL";
    if ( !a7 || (v11 = (__int64 *)a7, !*a7) )
      v11 = qword_1C0008110;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, __int64 *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_2f55663bb2019a56db71a685c2757be1_Traceguids,
      21LL,
      &a6,
      8LL,
      v11,
      2LL,
      v10,
      v9,
      0LL);
  }
  if ( !v7 || !*(_WORD *)v7 )
    v7 = qword_1C0008110;
  LOWORD(v13) = 21;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_2f55663bb2019a56db71a685c2757be1_Traceguids, v13, &a6, 8LL, v7);
}
