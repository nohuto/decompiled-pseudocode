/*
 * XREFs of NtGdiGetMonitorID @ 0x1401D6DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x1401D6F9C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtGdiGetMonitorID(HDC a1, unsigned int a2, void *a3)
{
  size_t v4; // r14
  unsigned int v6; // ebx
  _WORD *v7; // rcx
  __int64 v8; // rax
  size_t v9; // r8
  __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // [rsp+30h] [rbp-408h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-400h] BYREF
  _QWORD v16[14]; // [rsp+50h] [rbp-3E8h] BYREF
  _DWORD v17[82]; // [rsp+C0h] [rbp-378h] BYREF
  _WORD Src[260]; // [rsp+208h] [rbp-230h] BYREF

  v4 = a2;
  v6 = 0;
  memset_0(v17, 0, 0x348uLL);
  if ( (unsigned int)UserSessionSwitchEnterCrit() )
    return 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v16, a1);
  if ( v16[0] )
  {
    v11 = *(_QWORD *)(v16[0] + 48LL);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v14);
    v12 = *(_DWORD *)(v11 + 40) & 0x20000;
    if ( v12 )
      v11 = *(_QWORD *)(*(_QWORD *)(v11 + 1784) + 40LL);
    v13 = *(_QWORD *)(v11 + 2568);
    if ( v13 == -4 )
    {
      GrepCaptureLiveMemoryDump(400LL, 46LL, v12);
      v13 = 0LL;
    }
    if ( v13 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v13 + 64));
      v17[0] = 840;
      if ( (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, v17) >= 0 )
        v6 = 1;
    }
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v14);
  }
  if ( v6 )
  {
    v7 = Src;
    v8 = -1LL;
    do
      ++v8;
    while ( Src[v8] );
    v9 = 2 * v8 + 2;
    if ( v9 > v4 )
      v6 = 0;
    else
      RtlCopyToUser(a3, Src, v9);
  }
  UserSessionSwitchLeaveCrit(v7);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
  return v6;
}
