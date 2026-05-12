/*
 * XREFs of PortTraceInitGlobalLogger @ 0x1C003AF50
 * Callers:
 *     RaidHandleTraceNotifyType @ 0x1C002EFDC (RaidHandleTraceNotifyType.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012FC0 (memmove.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     WppGuidToStr @ 0x1C003B254 (WppGuidToStr.c)
 */

char __fastcall PortTraceInitGlobalLogger(__int64 *a1)
{
  __int64 v1; // r14
  _QWORD *v2; // rbx
  int *v3; // rdi
  _BYTE *v4; // rsi
  PVOID SystemRoutineAddress; // rax
  int v6; // eax
  __int64 v7; // rax
  PVOID v8; // rax
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+58h] [rbp-A8h]
  const wchar_t *v17; // [rsp+60h] [rbp-A0h]
  int *v18; // [rsp+68h] [rbp-98h]
  int v19; // [rsp+70h] [rbp-90h]
  int *v20; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  int v23; // [rsp+90h] [rbp-70h]
  const wchar_t *v24; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  int v26; // [rsp+A8h] [rbp-58h]
  int *v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+B8h] [rbp-48h]
  __int64 v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C8h] [rbp-38h]
  _OWORD Src[2]; // [rsp+100h] [rbp+0h] BYREF
  int v32; // [rsp+120h] [rbp+20h]
  _WORD v33[56]; // [rsp+130h] [rbp+30h] BYREF

  v1 = *a1;
  v2 = (_QWORD *)a1[1];
  v3 = (int *)a1[2];
  v4 = (_BYTE *)a1[3];
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  Src[0] = *(_OWORD *)L"WMI\\GlobalLogger\\";
  v32 = *(_DWORD *)L"\\";
  Src[1] = *(_OWORD *)L"alLogger\\";
  memset(v33, 0, 0x26uLL);
  memmove(v33, Src, 0x24uLL);
  v15 = 0LL;
  v17 = L"Start";
  v16 = 32;
  v18 = &v11;
  v19 = 4;
  v20 = &v10;
  v21 = 4;
  v22 = 0LL;
  v23 = 0;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v6 = ((__int64 (__fastcall *)(__int64, _WORD *, __int64 *, _QWORD, _QWORD))SystemRoutineAddress)(
         2147483650LL,
         v33,
         &v15,
         0LL,
         0LL);
  if ( v6 >= 0 && v11 )
  {
    v19 = 4;
    v17 = L"Flags";
    v21 = 4;
    v18 = &v13;
    v20 = &v10;
    v24 = L"Level";
    v25 = &v12;
    v26 = 4;
    v27 = &v10;
    v7 = -1LL;
    v15 = 0LL;
    v16 = 32;
    v22 = 0LL;
    v23 = 32;
    v28 = 1;
    v29 = 0LL;
    v30 = 0;
    do
      ++v7;
    while ( v33[v7] );
    WppGuidToStr(&v33[v7], v1);
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    v8 = MmGetSystemRoutineAddress(&DestinationString);
    if ( !v8 )
      v8 = RtlQueryRegistryValues;
    v6 = ((__int64 (__fastcall *)(__int64, _WORD *, __int64 *, _QWORD, _QWORD))v8)(2147483650LL, v33, &v15, 0LL, 0LL);
    if ( v6 >= 0 && v11 == 1 )
    {
      *v2 = 1LL;
      *v3 = v13 & 0x7FFFFFFF;
      LOBYTE(v6) = v12;
      *v4 = v12;
    }
  }
  return v6;
}
