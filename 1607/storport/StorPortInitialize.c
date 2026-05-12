/*
 * XREFs of StorPortInitialize @ 0x1C000D300
 * Callers:
 *     StorPortInitializeVrfy @ 0x1C005FAD0 (StorPortInitializeVrfy.c)
 * Callees:
 *     RaidGetPortData @ 0x1C000D1F0 (RaidGetPortData.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     Template_qqqqqqqqxxxxx @ 0x1C002C5F8 (Template_qqqqqqqqxxxxx.c)
 *     WPP_SF_qqqq @ 0x1C002C73C (WPP_SF_qqqq.c)
 *     WppLoadTracingSupport @ 0x1C005778C (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C0057888 (WppInitKm.c)
 *     RaCreateDriver @ 0x1C0057A10 (RaCreateDriver.c)
 *     RaSaveDriverInitData @ 0x1C0057A54 (RaSaveDriverInitData.c)
 *     RaInitializeDriver @ 0x1C0057AE4 (RaInitializeDriver.c)
 *     RaDeleteDriver @ 0x1C005E900 (RaDeleteDriver.c)
 *     __security_init_cookie @ 0x1C0064000 (__security_init_cookie.c)
 */

__int64 __fastcall StorPortInitialize(PDRIVER_OBJECT DriverObject, __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // r14
  int v9; // eax
  char *PortData; // r15
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  NTSTATUS v14; // edi
  int v15; // r9d
  int inited; // eax
  void (__fastcall *v18)(PDRIVER_OBJECT, __int64); // rax
  void (__fastcall *v19)(PDRIVER_OBJECT); // rax
  __int64 v20; // [rsp+58h] [rbp-50h]
  __int64 v21; // [rsp+60h] [rbp-48h]
  __int64 v22; // [rsp+68h] [rbp-40h]
  __int64 v23; // [rsp+70h] [rbp-38h]
  __int64 v24; // [rsp+78h] [rbp-30h]
  PVOID DriverObjectExtension; // [rsp+B0h] [rbp+8h] BYREF

  v8 = 0;
  if ( !InitSecurityCookie )
  {
    _security_init_cookie();
    InitSecurityCookie = 1;
  }
  if ( _InterlockedIncrement(&WPPInitCount) == 1 && DriverObject && a2 )
  {
    *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
    WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_wppCtlGuid;
    WPP_MAIN_CB.NextDevice = 0LL;
    WPP_MAIN_CB.CurrentIrp = 0LL;
    WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
    WppLoadTracingSupport();
    WPP_MAIN_CB.CurrentIrp = 0LL;
    WppInitKm();
  }
  DriverObjectExtension = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqqq(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_fe46457bf8c336cde1a0e74a1ed461ba_Traceguids,
      DriverObject,
      a2,
      a3,
      a4);
  }
  if ( !DriverObject || !a2 || !a3 )
    return 3221225485LL;
  v9 = *(_DWORD *)a3;
  if ( (*(_DWORD *)a3 == 208 || v9 == 176 || v9 == 136)
    && *(_QWORD *)(a3 + 8)
    && *(_QWORD *)(a3 + 32)
    && *(_QWORD *)(a3 + 16)
    && *(_QWORD *)(a3 + 40) )
  {
    if ( v9 == 176 || v9 == 208 && (*(_DWORD *)(a3 + 184) & 1) != 0 )
    {
      v18 = *(void (__fastcall **)(PDRIVER_OBJECT, __int64))(a3 + 160);
      if ( v18 )
      {
        v18(DriverObject, a2);
        v8 = 1;
      }
    }
    PortData = RaidGetPortData();
    if ( PortData )
    {
      DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverEntry);
      if ( DriverObjectExtension
        || (v14 = IoAllocateDriverObjectExtension(DriverObject, DriverEntry, 0x70u, &DriverObjectExtension), v14 >= 0)
        && (RaCreateDriver(DriverObjectExtension),
            v14 = RaInitializeDriver(DriverObjectExtension, DriverObject, PortData, a2),
            v14 >= 0) )
      {
        v15 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 == 208 )
        {
          if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
            Template_qqqqqqqqxxxxx(
              v12,
              v11,
              v13,
              208,
              *(_DWORD *)(a3 + 4),
              *(_DWORD *)(a3 + 64),
              *(_DWORD *)(a3 + 68),
              *(_DWORD *)(a3 + 72),
              *(_DWORD *)(a3 + 184),
              *(_DWORD *)(a3 + 188),
              *(_DWORD *)(a3 + 192),
              *(_QWORD *)(a3 + 136),
              *(_QWORD *)(a3 + 144),
              *(_QWORD *)(a3 + 152),
              *(_QWORD *)(a3 + 160),
              *(_QWORD *)(a3 + 168));
        }
        else
        {
          if ( v15 == 176 )
          {
            if ( (Microsoft_Windows_StorPortEnableBits & 0x10) == 0 )
              goto LABEL_27;
            v15 = 176;
            v24 = *(_QWORD *)(a3 + 168);
            v23 = *(_QWORD *)(a3 + 160);
            v22 = *(_QWORD *)(a3 + 152);
            v21 = *(_QWORD *)(a3 + 144);
            v20 = *(_QWORD *)(a3 + 136);
          }
          else
          {
            if ( (Microsoft_Windows_StorPortEnableBits & 0x10) == 0 )
              goto LABEL_27;
            LOBYTE(v24) = 0;
            LOBYTE(v23) = 0;
            LOBYTE(v22) = 0;
            LOBYTE(v21) = 0;
            LOBYTE(v20) = 0;
          }
          Template_qqqqqqqqxxxxx(
            v12,
            v11,
            v13,
            v15,
            *(_DWORD *)(a3 + 4),
            *(_DWORD *)(a3 + 64),
            *(_DWORD *)(a3 + 68),
            *(_DWORD *)(a3 + 72),
            0,
            0,
            0,
            v20,
            v21,
            v22,
            v23,
            v24);
        }
LABEL_27:
        inited = RaSaveDriverInitData(DriverObjectExtension, a3);
        v14 = inited;
        if ( inited >= 0 )
          v8 = 0;
        *(_WORD *)(a3 + 104) |= 0x10u;
        if ( inited >= 0 )
          return (unsigned int)v14;
      }
    }
    else
    {
      v14 = -1073741801;
    }
    if ( DriverObjectExtension )
      RaDeleteDriver();
    DriverObjectExtension = 0LL;
    if ( v8 )
    {
      v19 = *(void (__fastcall **)(PDRIVER_OBJECT))(a3 + 168);
      if ( v19 )
        v19(DriverObject);
    }
    return (unsigned int)v14;
  }
  return 3221225561LL;
}
