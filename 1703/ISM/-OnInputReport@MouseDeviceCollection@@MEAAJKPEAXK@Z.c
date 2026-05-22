/*
 * XREFs of ?OnInputReport@MouseDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800733D0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800731FC (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseDeviceCollection::OnInputReport(
        MouseDeviceCollection *this,
        int a2,
        _QWORD *a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  DWORD TickCount; // r12d
  unsigned int *v10; // r9
  int DeviceInfo; // eax
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  __int64 v15; // rcx
  int v16; // r9d
  struct DeviceInfo *v18; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v20[118]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = 0;
  v5 = a4;
  if ( a4 >= 0x18 )
  {
    while ( 1 )
    {
      TickCount = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      v18 = 0LL;
      DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, &v18, v10);
      v4 = DeviceInfo;
      if ( DeviceInfo < 0 )
        break;
      memset(v20, 0, sizeof(v20));
      v13 = *(_OWORD *)a3;
      v14 = a3[2];
      DWORD1(v20[0]) = *(_DWORD *)v18;
      v15 = *((_QWORD *)this + 2);
      *(LARGE_INTEGER *)&v20[1] = PerformanceCount;
      LODWORD(v20[0]) = 2;
      DWORD2(v20[0]) = TickCount;
      DWORD2(v20[2]) = 1888;
      v20[44] = v13;
      *(_QWORD *)&v20[45] = v14;
      BYTE11(v20[43]) = 1;
      DeviceInfo = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v15 + 24LL))(v15, v20);
      v4 = DeviceInfo;
      if ( DeviceInfo < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v4;
        v16 = 185;
        goto LABEL_10;
      }
      v5 -= 24;
      a3 += 3;
      if ( v5 < 0x18 )
        return v4;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v4;
    v16 = 154;
LABEL_10:
    Template_qqq(v12, &MinInput_Warning_CheckResult, 0, v16, DeviceInfo);
  }
  return v4;
}
