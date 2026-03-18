/*
 * XREFs of WPP_RECORDER_SF_sqqDqs @ 0x1C0045FE0
 * Callers:
 *     ACPIBuildDiscoverPowerNodeCompletion @ 0x1C0043E60 (ACPIBuildDiscoverPowerNodeCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sqqDqs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        char a10,
        const char *a11)
{
  const char *v11; // rbp
  const char *v12; // rbx
  __int64 v13; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  const char *v18; // r8
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // rsi
  int v23; // [rsp+20h] [rbp-88h]

  v11 = "NULL";
  v12 = a11;
  v13 = -1LL;
  v15 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a11 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a11[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = "NULL";
    v19 = -1LL;
    if ( a11 )
      v18 = a11;
    do
      ++v19;
    while ( aAcpibuilddisco[v19] );
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, const ULONG_PTR *, __int64, const char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
      87LL,
      "ACPIBuildDiscoverPowerNodeCompletion",
      v19 + 1,
      &a7,
      8LL,
      &a8,
      8LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v18,
      v17,
      0LL);
  }
  v20 = v12 == 0LL;
  if ( v12 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v12[v21] );
    v15 = v21 + 1;
    v20 = v12 == 0LL;
  }
  if ( !v20 )
    v11 = v12;
  do
    ++v13;
  while ( aAcpibuilddisco[v13] );
  LOWORD(v23) = 87;
  return WppAutoLogTrace(
           a1,
           4LL,
           10LL,
           &WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
           v23,
           "ACPIBuildDiscoverPowerNodeCompletion",
           v13 + 1,
           &a7,
           8LL,
           &a8,
           8LL,
           &a9,
           4LL,
           &a10,
           8LL,
           v11,
           v15,
           0LL);
}
