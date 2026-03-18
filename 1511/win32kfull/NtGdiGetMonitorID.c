/*
 * XREFs of NtGdiGetMonitorID @ 0x1C025E520
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtGdiGetMonitorID(HDC a1, SIZE_T Length, void *a3)
{
  SIZE_T v4; // r14
  unsigned int v6; // edi
  __int64 v8; // rdx
  _WORD *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // esi
  _BYTE v15[8]; // [rsp+30h] [rbp-3B8h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-3B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-3A0h] BYREF
  int v18[82]; // [rsp+60h] [rbp-388h] BYREF
  _WORD Src[260]; // [rsp+1A8h] [rbp-240h] BYREF

  v4 = (unsigned int)Length;
  v6 = 0;
  if ( (unsigned int)UserSessionSwitchEnterCrit() )
    return 0LL;
  v16[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v16, a1);
  if ( v16[0] )
  {
    v10 = *(_QWORD *)(v16[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v15);
    if ( (*(_DWORD *)(v10 + 56) & 0x20000) != 0 )
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 1824) + 40LL) + 2600LL);
    else
      v11 = *(_QWORD *)(v10 + 2600);
    if ( v11 )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v11 + 64));
      v18[0] = 840;
      if ( (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, v18, 0, 0) >= 0 )
        v6 = 1;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v12);
  }
  if ( v6 )
  {
    v9 = Src;
    v13 = -1LL;
    do
      ++v13;
    while ( Src[v13] );
    v14 = 2 * v13 + 2;
    if ( v14 > (unsigned int)v4 )
    {
      v6 = 0;
    }
    else
    {
      ProbeForWrite(a3, v4, 1u);
      memmove(a3, Src, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v6;
}
