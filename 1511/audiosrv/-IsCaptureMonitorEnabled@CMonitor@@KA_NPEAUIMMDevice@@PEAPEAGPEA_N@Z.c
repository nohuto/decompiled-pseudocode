/*
 * XREFs of ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180097A58
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18003C9A8 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180092640 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800927B8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x180092C48 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x1800934D8 (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180094790 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall CMonitor::IsCaptureMonitorEnabled(struct IMMDevice *a1, unsigned __int16 **a2, bool *a3)
{
  __int64 v5; // rbx
  char v6; // si
  unsigned __int16 *v7; // rax
  void *v8; // rcx
  _QWORD v10[2]; // [rsp+30h] [rbp-40h] BYREF
  PROPVARIANT pvar; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 *v12; // [rsp+48h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-20h]
  PROPVARIANT v14; // [rsp+58h] [rbp-18h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]
  __int64 v16; // [rsp+68h] [rbp-8h]
  LPVOID pv; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+50h] BYREF
  LPVOID ppv; // [rsp+C8h] [rbp+58h] BYREF

  v10[1] = -2LL;
  v5 = 0LL;
  v10[0] = 0LL;
  v6 = 0;
  pvar = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( a2 && a1 )
  {
    if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, _QWORD *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, v10) >= 0
      && (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)v10[0] + 40LL))(
           v10[0],
           &PKEY_MonitorEnabled,
           &v14) >= 0
      && (_WORD)v14 == 11
      && (_WORD)v15 == 0xFFFF
      && (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)v10[0] + 40LL))(
           v10[0],
           &PKEY_MonitorOutput,
           &pvar) >= 0 )
    {
      if ( (_WORD)pvar == 31 )
      {
        *a2 = v12;
        LOWORD(pvar) = 0;
        v6 = 1;
      }
      else if ( !(_WORD)pvar )
      {
        ppv = 0LL;
        v18 = 0LL;
        pv = 0LL;
        if ( CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               &ppv) < 0
          || (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 0LL, &v18) < 0
          || (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v18 + 40LL))(v18, &pv) < 0 )
        {
          v8 = pv;
        }
        else
        {
          v7 = (unsigned __int16 *)pv;
          pv = 0LL;
          *a2 = v7;
          v6 = 1;
          if ( a3 )
            *a3 = 1;
          v8 = 0LL;
        }
        CoTaskMemFree(v8);
        pv = 0LL;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        if ( ppv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
      }
    }
    PropVariantClear(&pvar);
    PropVariantClear(&v14);
    v5 = v10[0];
  }
  else
  {
    v6 = 0;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
