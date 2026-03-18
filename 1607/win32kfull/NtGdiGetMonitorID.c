/*
 * XREFs of NtGdiGetMonitorID @ 0x1C025BCA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtGdiGetMonitorID(HDC a1, SIZE_T Length, void *a3)
{
  SIZE_T v4; // r14
  unsigned int v6; // edi
  __int64 v8; // rbx
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _WORD *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // esi
  _BYTE v15[8]; // [rsp+30h] [rbp-3D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-3D0h] BYREF
  _QWORD v17[7]; // [rsp+48h] [rbp-3C0h] BYREF
  int v18[82]; // [rsp+80h] [rbp-388h] BYREF
  _WORD Src[260]; // [rsp+1C8h] [rbp-240h] BYREF

  v4 = (unsigned int)Length;
  v6 = 0;
  if ( (unsigned int)UserSessionSwitchEnterCrit() )
    return 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( v17[0] )
  {
    v8 = *(_QWORD *)(v17[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v15);
    if ( (*(_DWORD *)(v8 + 56) & 0x20000) != 0 )
    {
      v9 = *(DYNAMICMODECHANGESHARELOCK **)(*(_QWORD *)(v8 + 1824) + 40LL);
      v10 = *((_QWORD *)v9 + 325);
    }
    else
    {
      v10 = *(_QWORD *)(v8 + 2600);
    }
    if ( v10 )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v10 + 64));
      v18[0] = 840;
      if ( (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, v18, 0, 0) >= 0 )
        v6 = 1;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v17);
  if ( v6 )
  {
    v12 = Src;
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
  UserSessionSwitchLeaveCrit(v12, v11);
  return v6;
}
