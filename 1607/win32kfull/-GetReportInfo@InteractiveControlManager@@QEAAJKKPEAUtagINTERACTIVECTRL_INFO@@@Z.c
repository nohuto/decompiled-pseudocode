/*
 * XREFs of ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C023B1F4
 * Callers:
 *     NtUserGetInteractiveControlInfo @ 0x1C0213A30 (NtUserGetInteractiveControlInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GetDPITransformationMonitor @ 0x1C01DBDF0 (GetDPITransformationMonitor.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C023ABC4 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C023D260 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::GetReportInfo(
        InteractiveControlManager *this,
        int a2,
        int a3,
        struct tagINTERACTIVECTRL_INFO *a4)
{
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  LPCGUID v10; // r9
  LPCGUID v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct InteractiveControlInput *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  int Device; // [rsp+30h] [rbp-59h] BYREF
  int v23; // [rsp+34h] [rbp-55h] BYREF
  int v24; // [rsp+38h] [rbp-51h] BYREF
  struct InteractiveControlDevice *v25; // [rsp+40h] [rbp-49h] BYREF
  struct InteractiveControlInput *v26; // [rsp+48h] [rbp-41h] BYREF
  __int64 v27; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-9h] BYREF
  int *p_Device; // [rsp+90h] [rbp+7h]
  int v31; // [rsp+98h] [rbp+Fh]
  int v32; // [rsp+9Ch] [rbp+13h]
  int *v33; // [rsp+A0h] [rbp+17h]
  int v34; // [rsp+A8h] [rbp+1Fh]
  int v35; // [rsp+ACh] [rbp+23h]

  Device = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::GetReportInfo entry");
    v32 = 0;
    v35 = 0;
    p_Device = &v24;
    v33 = &v23;
    v24 = a2;
    v31 = 4;
    v23 = a3;
    v34 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF6A0, v8, v9, 5u, &pData);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v25, 0LL);
  if ( Device >= 0 )
  {
    if ( (unsigned int)InteractiveControlDevice::GetInputReport(v25, (unsigned __int16)a3, &v26) )
    {
      v15 = v26;
      LOBYTE(v12) = 1;
      *(_OWORD *)a4 = *(_OWORD *)((char *)v26 + 52);
      *((_QWORD *)a4 + 2) = *(_QWORD *)((char *)v15 + 68);
      *((_DWORD *)a4 + 6) = *((_DWORD *)v15 + 19);
      v18 = HMValidateHandleNoSecure(*((_QWORD *)v15 + 2), v12, v13, v14);
      if ( v18 )
      {
        if ( PsGetCurrentProcessWin32Process(v17, v16) == *(_QWORD *)(*(_QWORD *)(v18 + 16) + 376LL) )
        {
          GetDPITransformationMonitor(*(_QWORD *)((char *)a4 + 4), v18, &v27);
          PhysicalToLogicalDPIPoint((char *)a4 + 4, (char *)a4 + 4, 0LL);
        }
        else
        {
          Device = -1073741727;
        }
      }
    }
    else
    {
      Device = -1073741811;
    }
  }
  else if ( (unsigned int)hProvider > 2 )
  {
    TlgCreateSz(&pDesc, "Function failed.");
    v32 = 0;
    p_Device = &v23;
    v23 = (int)v10;
    v31 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v11, v10, 4u, &pData);
  }
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::GetReportInfo exit");
    v32 = 0;
    p_Device = &Device;
    v31 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF3B0, v19, v20, 4u, &pData);
  }
  return (unsigned int)Device;
}
