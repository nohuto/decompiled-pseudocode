/*
 * XREFs of ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180080444
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18003314C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18007B658 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18007B808 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x18007BC7C (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x18007C458 (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18007D5D0 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall CMonitor::IsCaptureMonitorEnabled(struct IMMDevice *a1, unsigned __int16 **a2, bool *a3)
{
  __int64 v6; // rcx
  char v7; // bl
  unsigned __int16 *v8; // rax
  void *v9; // rcx
  _QWORD v11[2]; // [rsp+30h] [rbp-40h] BYREF
  PROPVARIANT pvar; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 *v13; // [rsp+48h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp-20h]
  PROPVARIANT v15; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h]
  __int64 v17; // [rsp+68h] [rbp-8h]
  LPVOID pv; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+40h] BYREF
  LPVOID ppv; // [rsp+B8h] [rbp+48h] BYREF

  v11[1] = -2LL;
  v6 = 0LL;
  v11[0] = 0LL;
  v7 = 0;
  pvar = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( a2 && a1 )
  {
    if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, _QWORD *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, v11) >= 0
      && (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)v11[0] + 40LL))(
           v11[0],
           &PKEY_MonitorEnabled,
           &v15) >= 0
      && (_WORD)v15 == 11
      && (_WORD)v16 == 0xFFFF
      && (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)v11[0] + 40LL))(
           v11[0],
           &PKEY_MonitorOutput,
           &pvar) >= 0 )
    {
      if ( (_WORD)pvar == 31 )
      {
        *a2 = v13;
        LOWORD(pvar) = 0;
        v7 = 1;
      }
      else if ( !(_WORD)pvar )
      {
        ppv = 0LL;
        v19 = 0LL;
        pv = 0LL;
        if ( CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               &ppv) < 0
          || (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 0LL, &v19) < 0
          || (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v19 + 40LL))(v19, &pv) < 0 )
        {
          v9 = pv;
        }
        else
        {
          v8 = (unsigned __int16 *)pv;
          pv = 0LL;
          *a2 = v8;
          v7 = 1;
          if ( a3 )
            *a3 = 1;
          v9 = 0LL;
        }
        CoTaskMemFree(v9);
        pv = 0LL;
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        if ( ppv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
      }
    }
    PropVariantClear(&pvar);
    PropVariantClear(&v15);
    v6 = v11[0];
  }
  else
  {
    v7 = 0;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
