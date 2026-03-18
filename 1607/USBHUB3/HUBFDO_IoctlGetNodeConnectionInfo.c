/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000B4D0
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0067040 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     Template_pqq @ 0x1C000A36C (Template_pqq.c)
 *     HUBFDO_GetPortStatusForDebugging @ 0x1C000B284 (HUBFDO_GetPortStatusForDebugging.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0064850 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionInfo(__int64 a1, __int64 a2, size_t a3, int a4, char a5)
{
  __int64 v5; // r12
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 i; // rcx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rbx
  _WORD *v19; // rcx
  char v20; // cl
  KIRQL v21; // al
  int v22; // ecx
  KIRQL v23; // r8
  __int64 v24; // rcx
  char v25; // dl
  unsigned __int64 v26; // r15
  _QWORD *v27; // rax
  __int64 v28; // r9
  _QWORD *v29; // r10
  unsigned int v30; // r12d
  unsigned int j; // r11d
  _BYTE *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  int v39; // edx
  bool v40; // sf
  PKSPIN_LOCK *v41; // r8
  const EVENT_DESCRIPTOR *v42; // rdx
  int v43; // edx
  __int64 v45; // [rsp+20h] [rbp-58h]
  __int64 v46; // [rsp+28h] [rbp-50h]
  void *v47; // [rsp+30h] [rbp-48h] BYREF
  KIRQL v48; // [rsp+38h] [rbp-40h]
  unsigned int v49; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v50[2]; // [rsp+40h] [rbp-38h] BYREF
  PKSPIN_LOCK SpinLock[2]; // [rsp+50h] [rbp-28h] BYREF

  v5 = a2;
  v50[0] = a2;
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_1C00580C0);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          v5,
          a3,
          &v47,
          0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v10 + 2464),
      2u,
      3u,
      0x29u,
      (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids,
      v11);
    goto LABEL_39;
  }
  v12 = HUBFDO_IoctlValidateParameters(v10, 4, a4, (_DWORD)v47, 35LL, a3);
  if ( (v12 & 0x80000000) == 0 )
  {
    v8 = *(unsigned __int16 *)v47;
    memset(v47, 0, a3);
    v13 = v10 + 2304;
    v14 = 248LL;
    for ( i = *(_QWORD *)(v10 + 2304); ; i = *(_QWORD *)(v16 + 248) )
    {
      v16 = i - 248;
      if ( v13 == v16 + 248 )
        goto LABEL_8;
      if ( *(unsigned __int16 *)(v16 + 200) == v8 )
        break;
    }
    if ( !v16 )
    {
LABEL_8:
      *(_DWORD *)((char *)v47 + 31) = 3;
      goto LABEL_9;
    }
    *(_DWORD *)((char *)v47 + 31) = *(_DWORD *)(v16 + 1424);
LABEL_9:
    if ( *(_BYTE *)(v10 + 12) )
      HUBFDO_GetPortStatusForDebugging((_QWORD *)v10, v8);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1072))(
      WdfDriverGlobals,
      *(_QWORD *)(v10 + 16),
      v13,
      v14);
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
            WdfDriverGlobals,
            *(_QWORD *)(v10 + 16),
            0LL,
            1LL);
    if ( !v17 )
      goto LABEL_38;
    do
    {
      if ( *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v17,
                                   off_1C0058070)
                               + 48) == v8 )
        break;
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              *(_QWORD *)(v10 + 16),
              v17,
              1LL);
    }
    while ( v17 );
    if ( !v17 )
    {
LABEL_38:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
        WdfDriverGlobals,
        *(_QWORD *)(v10 + 16));
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
        WdfDriverGlobals,
        v5,
        35LL);
      v12 = 0;
      goto LABEL_39;
    }
    v18 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        v17,
                        off_1C0058070)
                    + 24);
    *(_DWORD *)v47 = v8;
    v19 = v47;
    *(_OWORD *)((char *)v47 + 4) = *(_OWORD *)(v18 + 1972);
    v19[10] = *(_WORD *)(v18 + 1988);
    *(_DWORD *)((char *)v47 + 27) = 0;
    if ( a5 )
    {
      if ( *(_DWORD *)(v18 + 156) == 3 )
      {
        *((_BYTE *)v47 + 23) = 2;
LABEL_23:
        *(_WORD *)((char *)v47 + 25) = *(_WORD *)(v18 + 1632);
        if ( (*(_DWORD *)(v18 + 1616) & 2) != 0 )
          *((_BYTE *)v47 + 24) = 1;
        SpinLock[0] = (PKSPIN_LOCK)(v18 + 40);
        v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v18 + 40));
        v22 = *(_DWORD *)(v18 + 1620);
        v23 = v21;
        v48 = v21;
        if ( (v22 & 0x10) != 0 && (v24 = *(_QWORD *)(v18 + 48)) != 0 )
        {
          v25 = *(_BYTE *)(v24 + 37);
          v26 = a3 - 35;
          v49 = 0;
          *((_BYTE *)v47 + 22) = v25;
          *(_DWORD *)((char *)v47 + 27) = *(_DWORD *)(*(_QWORD *)(v18 + 48) + 8LL);
          v27 = (_QWORD *)(*(_QWORD *)(v18 + 48) + 16LL);
          v28 = *v27 - 8LL;
          v29 = (_QWORD *)*v27;
          if ( v27 != (_QWORD *)*v27 )
          {
            v30 = v49;
            do
            {
              if ( v26 < 0xB )
                break;
              for ( j = 0; j < *(_DWORD *)(v28 + 24); *(_DWORD *)((char *)v47 + v34 + 42) = 0 )
              {
                if ( v26 < 0xB )
                  break;
                v32 = v47;
                v26 -= 11LL;
                v33 = v30++;
                v34 = 11 * v33;
                v35 = j++;
                v36 = *(_QWORD *)((v35 << 6) + v28 + 72);
                *(_DWORD *)((char *)v47 + v34 + 35) = *(_DWORD *)v36;
                *(_WORD *)&v32[v34 + 39] = *(_WORD *)(v36 + 4);
                v32[v34 + 41] = *(_BYTE *)(v36 + 6);
              }
              v28 = *v29 - 8LL;
              v29 = (_QWORD *)*v29;
            }
            while ( (_QWORD *)(*(_QWORD *)(v18 + 48) + 16LL) != v29 );
            v5 = v50[0];
            v23 = v48;
          }
          KeReleaseSpinLock(SpinLock[0], v23);
          v37 = a3 - v26;
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v18 + 40), v21);
          v37 = 35LL;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          v5,
          v37);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 16));
        goto LABEL_39;
      }
      v20 = *(_BYTE *)(v18 + 156);
    }
    else
    {
      v20 = *(_DWORD *)(v18 + 156) == 0;
    }
    *((_BYTE *)v47 + 23) = v20;
    goto LABEL_23;
  }
LABEL_39:
  if ( a5 == 1 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               v5,
               v12);
    v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, v5);
    v39 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        ? (*(__int64 (__fastcall **)(__int64, PKSPIN_LOCK *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v38, SpinLock)
        : -1073741275;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               v5,
               v12);
    v40 = v39 < 0;
    v41 = SpinLock;
    v42 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_EX_COMPLETE;
  }
  else
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               v5,
               v12);
    v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, v5);
    v43 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        ? (*(__int64 (__fastcall **)(__int64, _QWORD *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v38, v50)
        : -1073741275;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               v5,
               v12);
    v40 = v43 < 0;
    v41 = (PKSPIN_LOCK *)v50;
    v42 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_COMPLETE;
  }
  if ( v40 )
    v41 = 0LL;
  LODWORD(v46) = v12;
  LODWORD(v45) = v8;
  Template_pqq(v38, v42, (const GUID *)v41, *(_QWORD *)(v10 + 224), v45, v46);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v5,
           v12);
}
