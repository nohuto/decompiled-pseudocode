/*
 * XREFs of CheckPointerDeviceMonitors @ 0x1C0114170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckPointerDeviceMonitors(__int64 a1)
{
  __int64 v2; // rcx
  __int64 i; // rdx
  __int64 v5; // rax
  HANDLE Handle; // [rsp+48h] [rbp+10h]

  EnterDeviceInfoListCrit_(a1);
  if ( LODWORD(aDeviceTemplate[154]) )
  {
    v2 = aDeviceTemplate[156];
    if ( v2 && (int)RawInputManagerObjectCreateKernelHandle(v2, 3LL, 0LL) >= 0 )
    {
      RIMOnCheckPointerDeviceMonitors(Handle, a1);
      ZwClose(Handle);
    }
  }
  else
  {
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( *(_DWORD *)(i + 308) )
      {
        if ( (*(_BYTE *)(i + 64) & 0x40) == 0 )
        {
          v5 = *(_QWORD *)(i + 416);
          if ( *(_QWORD *)(v5 + 280) == a1 )
          {
            *(_QWORD *)(v5 + 280) = 0LL;
            *(_DWORD *)(*(_QWORD *)(i + 416) + 900LL) = 0;
          }
        }
      }
    }
  }
  return LeaveDeviceInfoListCrit_(v2);
}
