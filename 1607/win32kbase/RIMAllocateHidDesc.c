/*
 * XREFs of RIMAllocateHidDesc @ 0x1C000B524
 * Callers:
 *     RIMCreateHidDesc @ 0x1C000B820 (RIMCreateHidDesc.c)
 * Callees:
 *     RIMFindSiblingMouseDevice @ 0x1C0005AD8 (RIMFindSiblingMouseDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 *     RIMFreeHidDesc @ 0x1C000A6BC (RIMFreeHidDesc.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C000B3F0 (RIMSendLatencyMgtDeviceRequest.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000BC70 (WPP_RECORDER_SF_DD.c)
 *     DbgPrintRIM @ 0x1C000BD38 (DbgPrintRIM.c)
 *     WPP_RECORDER_SF_S @ 0x1C000BED0 (WPP_RECORDER_SF_S.c)
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00101D4 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_q @ 0x1C0010310 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     RIMConfigurePointerDevice @ 0x1C007F890 (RIMConfigurePointerDevice.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C0081AE0 (ApiSetGetPowerTransitionsState.c)
 *     EtwTracePointerDeviceArrivalStop @ 0x1C00824E0 (EtwTracePointerDeviceArrivalStop.c)
 *     EtwTracePointerDeviceArrivalStart @ 0x1C0082500 (EtwTracePointerDeviceArrivalStart.c)
 *     RIMIsInteractiveCtrl @ 0x1C0082548 (RIMIsInteractiveCtrl.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C00DE8A0 (ApiSetSetUserPTPEnabledPreference.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C00DE924 (RIMCreateHidKeyboardDeviceInfo.c)
 */

__int64 __fastcall RIMAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct _DEVICE_OBJECT *a6,
        struct _FILE_OBJECT *a7)
{
  __int64 v9; // r14
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  int v16; // edx
  __int64 v17; // xmm0_8
  int v18; // eax
  __int64 v19; // rcx
  __int16 v20; // r12
  BOOL v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // edx
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  int v29; // r8d
  __int16 v30; // r8
  int v31; // eax
  int v32; // edx
  int v33; // edx
  __int64 v34; // [rsp+50h] [rbp-71h] BYREF
  int v35; // [rsp+58h] [rbp-69h]
  struct _DEVICE_OBJECT *v36; // [rsp+60h] [rbp-61h]
  _BYTE v37[64]; // [rsp+70h] [rbp-51h] BYREF

  v36 = a6;
  v9 = a2;
  if ( a3 )
  {
    if ( *(_WORD *)(a4 + 4) )
    {
      v11 = Win32AllocPoolZInit(0x78uLL);
      v13 = v11;
      if ( v11 )
      {
        *(_OWORD *)(v11 + 40) = *(_OWORD *)a4;
        *(_OWORD *)(v11 + 56) = *(_OWORD *)(a4 + 16);
        *(_OWORD *)(v11 + 72) = *(_OWORD *)(a4 + 32);
        *(_OWORD *)(v11 + 88) = *(_OWORD *)(a4 + 48);
        v14 = Win32AllocPoolNonPaged(10 * *(unsigned __int16 *)(v11 + 44), 1886417746LL);
        *(_QWORD *)(v13 + 24) = v14;
        LOBYTE(v15) = 3;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          4,
          44,
          (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
          v14);
        if ( *(_QWORD *)(v13 + 24) )
        {
          *(_QWORD *)(v13 + 16) = a3;
          *(_QWORD *)(v13 + 104) = *(_QWORD *)a5;
          *(_DWORD *)(v13 + 112) = *(_DWORD *)(a5 + 8);
          if ( *(_WORD *)(a4 + 2) == 13
            && ((unsigned __int16)(*(_WORD *)a4 - 4) <= 1u || (unsigned __int16)(*(_WORD *)a4 - 1) <= 1u) )
          {
            EtwTracePointerDeviceArrivalStart();
            v17 = *(_QWORD *)(v13 + 104);
            v35 = *(_DWORD *)(v13 + 112);
            v34 = v17;
            v18 = RIMCreatePointerDeviceInfo(a1, v9, a3, (__int16 *)a4, v36, a7, (__int64)&v34);
            if ( v18 < 0 )
            {
              if ( *(_WORD *)a4 != 5 || v18 == -1073741808 )
              {
LABEL_42:
                DbgPrintRIM("Ignore (Usage: %x, UsagePage: %x)\n");
                WPP_RECORDER_SF_DD(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v32,
                  4,
                  48,
                  (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
                  *(_WORD *)(a4 + 2),
                  *(_WORD *)a4);
                *(_QWORD *)(v13 + 16) = 0LL;
                *(_QWORD *)(v9 + 464) = 0LL;
                RIMFreeHidDesc(v13);
                LOBYTE(v33) = 3;
                WPP_RECORDER_SF_q(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v33,
                  4,
                  49,
                  (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
                  0);
                return 0LL;
              }
            }
            else
            {
              v20 = *(_WORD *)a4;
              v19 = 65532LL;
              if ( ((*(_WORD *)a4 - 2) & 0xFFFC) == 0 && v20 != 3 )
              {
                memset(v37, 0, 0x38uLL);
                if ( (unsigned __int16)(v20 - 4) <= 1u )
                {
                  RIMConfigurePointerDevice(a1, v9, v13);
                  if ( *(_WORD *)a4 == 5 )
                    ApiSetSetUserPTPEnabledPreference(v9, v13, a1);
                }
                ApiSetGetPowerTransitionsState(v37);
                v21 = *(_DWORD *)&v37[28] || *(_DWORD *)&v37[32];
                v22 = RIMSendLatencyMgtDeviceRequest((struct _UNICODE_STRING *)v9, v13, v21);
                if ( v22 < 0 )
                {
                  LOBYTE(v23) = 3;
                  WPP_RECORDER_SF_D(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v23,
                    3,
                    46,
                    (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
                    v22);
                }
              }
            }
            if ( *(_WORD *)a4 != 1 )
              RIMFindSiblingMouseDevice(v19, v13, *(_WORD *)a4, v9);
            EtwTracePointerDeviceArrivalStop();
          }
          else
          {
            v26 = *(_OWORD *)(a4 + 16);
            *(_OWORD *)v37 = *(_OWORD *)a4;
            v27 = *(_OWORD *)(a4 + 32);
            *(_OWORD *)&v37[16] = v26;
            v28 = *(_OWORD *)(a4 + 48);
            *(_OWORD *)&v37[32] = v27;
            *(_OWORD *)&v37[48] = v28;
            if ( (unsigned int)RIMIsInteractiveCtrl(v37, 1LL) )
            {
              *(_DWORD *)(v9 + 320) = v24;
            }
            else
            {
              v29 = *(_DWORD *)(v9 + 184);
              if ( (v29 & 0x1000) != 0 )
              {
                if ( (v29 & 0x2000) == 0 )
                  goto LABEL_42;
                v31 = *(_DWORD *)(v13 + 112);
                v34 = *(_QWORD *)(v13 + 104);
                v35 = v31;
                if ( (int)RIMCreateHidKeyboardDeviceInfo(a1, v9, a3, a4) < 0 )
                  goto LABEL_42;
              }
              else if ( ((unsigned int)RimDeviceTypeToRimInputType(v9, *(unsigned __int8 *)(v9 + 48)) & *(_DWORD *)(a1 + 76)) == 0
                     || *(_DWORD *)(a1 + 80) && (v30 & 0x2000) == 0 )
              {
                goto LABEL_42;
              }
            }
          }
          LOBYTE(v24) = 3;
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            v24,
            4,
            47,
            (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
            v13);
          return v13;
        }
        LOBYTE(v16) = 3;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          3,
          45,
          (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
          *(_WORD *)(v13 + 44));
        RIMFreeHidDesc(v13);
      }
      else
      {
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          3,
          43,
          (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
          *(_QWORD *)(v9 + 216));
      }
    }
    else
    {
      WPP_RECORDER_SF_DD(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        3,
        42,
        (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
        *(_WORD *)(a4 + 2),
        *(_WORD *)a4);
    }
  }
  else
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      3,
      41,
      (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids);
  }
  return 0LL;
}
