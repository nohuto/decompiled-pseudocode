/*
 * XREFs of RIMAllocateHidConfigDesc @ 0x1C0005A0C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C000F564 (RIMCreateHidDesc.c)
 * Callees:
 *     RIMFindInputDeviceForConfig @ 0x1C0005790 (RIMFindInputDeviceForConfig.c)
 *     RIMDeliverConfigRequest @ 0x1C0005B94 (RIMDeliverConfigRequest.c)
 *     RIMGetDeviceParent @ 0x1C0008CB4 (RIMGetDeviceParent.c)
 *     RIMFreeHidDesc @ 0x1C000EF6C (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000F9CC (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_S @ 0x1C000FCE4 (WPP_RECORDER_SF_S.c)
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00CE82C (ApiSetGetPowerTransitionsState.c)
 *     RIMSendPTPLatencyMgtDeviceRequest @ 0x1C00D28AC (RIMSendPTPLatencyMgtDeviceRequest.c)
 */

__int64 __fastcall RIMAllocateHidConfigDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // r14
  int v11; // edx
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // r15d
  int v19; // eax
  int v20; // edx
  int v22; // r9d
  int v23; // r9d
  unsigned int v24; // r15d
  __int64 v25; // rcx
  int v26; // [rsp+40h] [rbp-41h] BYREF
  int v27; // [rsp+44h] [rbp-3Dh] BYREF
  __int64 v28; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v29[28]; // [rsp+50h] [rbp-31h] BYREF
  int v30; // [rsp+6Ch] [rbp-15h]
  int v31; // [rsp+70h] [rbp-11h]

  v9 = a2;
  if ( a3 )
  {
    if ( *(_WORD *)(a4 + 8) )
    {
      v12 = Win32AllocPoolZInit(0x78uLL);
      if ( v12 )
      {
        v13 = Win32AllocPoolNonPaged(*(unsigned __int16 *)(a4 + 8), 1886417746LL);
        *(_QWORD *)(v12 + 32) = v13;
        if ( v13 )
        {
          *(_OWORD *)(v12 + 40) = *(_OWORD *)a4;
          v27 = 0;
          *(_OWORD *)(v12 + 56) = *(_OWORD *)(a4 + 16);
          v26 = 0;
          *(_OWORD *)(v12 + 72) = *(_OWORD *)(a4 + 32);
          v28 = 0LL;
          *(_OWORD *)(v12 + 88) = *(_OWORD *)(a4 + 48);
          *(_QWORD *)(v12 + 16) = a3;
          *(_QWORD *)(v12 + 104) = *(_QWORD *)a5;
          *(_DWORD *)(v12 + 112) = *(_DWORD *)(a5 + 8);
          if ( !(unsigned int)RIMGetDeviceParent(v15, v9) )
          {
            LOBYTE(v16) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v16,
              3,
              36,
              (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
          }
          if ( !(unsigned int)RIMFindInputDeviceForConfig(v12, a1, v9, &v27, &v26, &v28) || !v27 )
            goto LABEL_14;
          LODWORD(v17) = *(_DWORD *)(a1 + 76);
          if ( v26 )
          {
            if ( (v17 & 0x10) != 0 )
            {
              *(_DWORD *)(v9 + 176) |= 0x200u;
              v18 = 2;
              goto LABEL_12;
            }
            v22 = 37;
          }
          else
          {
            if ( (v17 & 8) != 0 )
            {
              *(_DWORD *)(v9 + 176) |= 0x400u;
              v18 = 3;
LABEL_12:
              v19 = RIMDeliverConfigRequest(v12, a6, a7, v18);
              if ( v19 < 0 )
              {
                v23 = 39;
              }
              else
              {
                if ( v18 != 3 )
                  goto LABEL_14;
                v24 = 0;
                ApiSetGetPowerTransitionsState(v29);
                if ( v30 || v31 )
                  v24 = 1;
                v19 = RIMSendPTPLatencyMgtDeviceRequest(v25, v28, *(_QWORD *)(v28 + 400), v24);
                if ( v19 >= 0 )
                  goto LABEL_14;
                v23 = 40;
              }
              LOBYTE(v20) = 3;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                v20,
                3,
                v23,
                (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                v19);
LABEL_14:
              *(_BYTE *)(v9 + 48) = 3;
              return v12;
            }
            v22 = 38;
          }
        }
        else
        {
          v17 = *(unsigned __int16 *)(a4 + 8);
          v22 = 35;
        }
        LOBYTE(v14) = 3;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          3,
          v22,
          (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
          v17);
        RIMFreeHidDesc(v12);
      }
      else
      {
        LOBYTE(v11) = 3;
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          3,
          34,
          (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
          *(_QWORD *)(v9 + 208));
      }
    }
    else
    {
      WPP_RECORDER_SF_DD(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        3,
        33,
        (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
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
      32,
      (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
  }
  return 0LL;
}
