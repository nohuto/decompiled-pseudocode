/*
 * XREFs of ?OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z @ 0x180073FC0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z @ 0x18000C9E8 (-GetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z @ 0x18000CAA0 (-SetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800731FC (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?ExistsValueForKey@?$DynamicSizeMap@KPEAVInputInfoSanitizer@@$00@@QEAA_NAEBK@Z @ 0x180073B84 (-ExistsValueForKey@-$DynamicSizeMap@KPEAVInputInfoSanitizer@@$00@@QEAA_NAEBK@Z.c)
 *     ??0InputInfoSanitizer@@QEAA@PEAUIInputClient@@_N1@Z @ 0x18007E364 (--0InputInfoSanitizer@@QEAA@PEAUIInputClient@@_N1@Z.c)
 *     ?OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z @ 0x18007E4D8 (-OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchDeviceCollection::OnInputReport(
        struct IInputClient **this,
        int a2,
        _DWORD *a3,
        unsigned int *a4)
{
  int DeviceInfo; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // r9d
  struct DeviceInfo *v11; // r13
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  char v16; // al
  struct DeviceInfo *v17; // rax
  bool v18; // r9
  struct DeviceInfo *v19; // rbx
  struct DeviceInfo *v20; // rdi
  int ValueForKey; // eax
  __int64 v22; // rcx
  int v23; // r9d
  struct DeviceInfo *v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h]
  _QWORD v28[236]; // [rsp+50h] [rbp-B0h] BYREF
  struct tagMONITORINFO mi; // [rsp+7B0h] [rbp+6B0h] BYREF

  v27 = -2LL;
  v26 = a2;
  v25 = 0LL;
  DeviceInfo = RIMDeviceCollection::GetDeviceInfo((RIMDeviceCollection *)this, a2, &v25, a4);
  v9 = DeviceInfo;
  if ( DeviceInfo < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 162;
LABEL_45:
      Template_qqq(v8, &MinInput_Warning_CheckResult, 0, v10, DeviceInfo);
      return v9;
    }
    return v9;
  }
  if ( a3[6] <= 0xAu )
  {
    memset(v28, 0, sizeof(v28));
    HIDWORD(v28[0]) = a2;
    v11 = v25;
    LODWORD(v28[0]) = *((_DWORD *)v25 + 1);
    LODWORD(v28[1]) = a3[15];
    v28[2] = *((_QWORD *)a3 + 8);
    v28[3] = *((_QWORD *)a3 + 5);
    LODWORD(v28[5]) = 1888;
    BYTE3(v28[87]) = 1;
    v12 = 0LL;
    if ( a3[6] )
    {
      v13 = LODWORD(v28[6]);
      while ( 1 )
      {
        v14 = 168LL * (unsigned int)v12;
        v15 = *((_QWORD *)a3 + 11);
        if ( *(_DWORD *)(v14 + v15 + 16) != 2 )
          break;
        HIDWORD(v28[6 * v13 + 6]) = *(unsigned __int16 *)(v14 + v15 + 8);
        if ( (*(_BYTE *)(v14 + v15 + 28) & 2) != 0 )
          LODWORD(v28[6 * LODWORD(v28[6]) + 7]) |= 1u;
        if ( (*(_BYTE *)(v14 + v15 + 28) & 4) != 0 )
          LODWORD(v28[6 * LODWORD(v28[6]) + 7]) |= 2u;
        if ( (*(_DWORD *)(v14 + v15 + 28) & 0x8000) != 0 )
          LODWORD(v28[6 * LODWORD(v28[6]) + 7]) |= 4u;
        LODWORD(v28[6 * LODWORD(v28[6]) + 8]) = *(_DWORD *)(v14 + v15 + 64);
        HIDWORD(v28[6 * LODWORD(v28[6]) + 8]) = *(_DWORD *)(v14 + v15 + 68);
        v8 = 6 * v12;
        LODWORD(v28[6 * v12 + 11]) = *(_DWORD *)(v14 + v15 + 156);
        if ( *((_QWORD *)v11 + 2) )
        {
          memset(&mi.rcMonitor, 0, 0x24uLL);
          mi.cbSize = 40;
          if ( GetMonitorInfoW(*((HMONITOR *)v11 + 2), &mi) )
          {
            LODWORD(v28[6 * LODWORD(v28[6]) + 8]) -= mi.rcMonitor.left;
            v8 = 6LL * LODWORD(v28[6]);
            HIDWORD(v28[6 * LODWORD(v28[6]) + 8]) -= mi.rcMonitor.top;
          }
        }
        v16 = v28[87];
        if ( *(_DWORD *)(v14 + v15 + 160) )
          v16 = 1;
        LOBYTE(v28[87]) = v16;
        v13 = (unsigned int)++LODWORD(v28[6]);
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= a3[6] )
          goto LABEL_25;
      }
      LOBYTE(DeviceInfo) = -1;
      v9 = -2147418113;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v10 = 205;
        goto LABEL_45;
      }
      return v9;
    }
LABEL_25:
    v25 = 0LL;
    if ( DynamicSizeMap<unsigned long,InputInfoSanitizer *,1>::ExistsValueForKey((__int64)(this + 345), &v26) )
    {
      ValueForKey = DynamicSizeMap<unsigned long,DeviceInfo *,1>::GetValueForKey((__int64)(this + 345), &v26, &v25);
      if ( ValueForKey < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        {
LABEL_35:
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v23 = 287;
LABEL_34:
        Template_qqq(v22, &MinInput_Warning_CheckResult, 0, v23, ValueForKey);
        goto LABEL_35;
      }
      v20 = v25;
    }
    else
    {
      v17 = (struct DeviceInfo *)malloc(0x38uLL);
      v19 = v17;
      if ( v17 )
        memset(v17, 0, 0x38uLL);
      v25 = v19;
      if ( v19 )
        v20 = InputInfoSanitizer::InputInfoSanitizer(v19, this[2], 0, v18);
      else
        v20 = 0LL;
      v25 = v20;
      ValueForKey = DynamicSizeMap<unsigned long,DeviceInfo *,1>::SetValueForKey((__int64)(this + 345), &v26, &v25);
      if ( ValueForKey < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_35;
        v23 = 281;
        goto LABEL_34;
      }
    }
    DeviceInfo = InputInfoSanitizer::OnInputReport(v20, (struct InputInfo *)v28, *((_BYTE *)v20 + 24));
    v9 = DeviceInfo;
    if ( DeviceInfo < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 294;
      goto LABEL_45;
    }
    return v9;
  }
  LOBYTE(DeviceInfo) = -1;
  v9 = -2147418113;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v10 = 171;
    goto LABEL_45;
  }
  return v9;
}
