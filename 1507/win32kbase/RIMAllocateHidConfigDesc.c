/*
 * XREFs of RIMAllocateHidConfigDesc @ 0x1C0071604
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00775D0 (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     RIMFindInputDeviceForConfig @ 0x1C0071518 (RIMFindInputDeviceForConfig.c)
 *     RIMDeliverConfigRequest @ 0x1C007178C (RIMDeliverConfigRequest.c)
 *     RIMGetDeviceParent @ 0x1C00751F0 (RIMGetDeviceParent.c)
 *     RIMFreeHidDesc @ 0x1C0075858 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_S @ 0x1C00772A8 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0077A38 (WPP_RECORDER_SF_DD.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00CD4F0 (ApiSetGetPowerTransitionsState.c)
 *     RIMSendPTPLatencyMgtDeviceRequest @ 0x1C00D0E34 (RIMSendPTPLatencyMgtDeviceRequest.c)
 */

char *__fastcall RIMAllocateHidConfigDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v11; // edx
  char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // r15d
  int v17; // eax
  unsigned __int16 v19; // r9
  unsigned __int16 v20; // r9
  unsigned int v21; // r15d
  __int64 v22; // rcx
  __int64 v23; // [rsp+28h] [rbp-59h]
  int v24; // [rsp+40h] [rbp-41h] BYREF
  int v25; // [rsp+44h] [rbp-3Dh] BYREF
  __int64 v26; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v27[28]; // [rsp+50h] [rbp-31h] BYREF
  int v28; // [rsp+6Ch] [rbp-15h]
  int v29; // [rsp+70h] [rbp-11h]

  if ( a3 )
  {
    if ( *(_WORD *)(a4 + 8) )
    {
      v12 = (char *)Win32AllocPoolZInit(0x78uLL);
      if ( v12 )
      {
        v13 = Win32AllocPoolNonPaged();
        *((_QWORD *)v12 + 4) = v13;
        if ( v13 )
        {
          *(_OWORD *)(v12 + 40) = *(_OWORD *)a4;
          v25 = 0;
          *(_OWORD *)(v12 + 56) = *(_OWORD *)(a4 + 16);
          v24 = 0;
          *(_OWORD *)(v12 + 72) = *(_OWORD *)(a4 + 32);
          v26 = 0LL;
          *(_OWORD *)(v12 + 88) = *(_OWORD *)(a4 + 48);
          *((_QWORD *)v12 + 2) = a3;
          *((_QWORD *)v12 + 13) = *(_QWORD *)a5;
          *((_DWORD *)v12 + 28) = *(_DWORD *)(a5 + 8);
          if ( !(unsigned int)RIMGetDeviceParent(v14, a2) )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x24u,
              (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
          if ( !(unsigned int)RIMFindInputDeviceForConfig((int)v12, a1, a2, &v25, &v24, &v26) || !v25 )
            goto LABEL_14;
          v15 = *(_DWORD *)(a1 + 76);
          if ( v24 )
          {
            if ( (v15 & 0x10) != 0 )
            {
              *(_DWORD *)(a2 + 184) |= 0x200u;
              v16 = 2;
              goto LABEL_12;
            }
            v19 = 37;
          }
          else
          {
            if ( (v15 & 8) != 0 )
            {
              *(_DWORD *)(a2 + 184) |= 0x400u;
              v16 = 3;
LABEL_12:
              v17 = RIMDeliverConfigRequest(v12, a6, a7, v16);
              if ( v17 < 0 )
              {
                v20 = 39;
              }
              else
              {
                if ( v16 != 3 )
                  goto LABEL_14;
                v21 = 0;
                ApiSetGetPowerTransitionsState(v27);
                if ( v28 || v29 )
                  v21 = 1;
                v17 = RIMSendPTPLatencyMgtDeviceRequest(v22, v26, *(_QWORD *)(v26 + 400), v21);
                if ( v17 >= 0 )
                  goto LABEL_14;
                v20 = 40;
              }
              LODWORD(v23) = v17;
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                3u,
                v20,
                (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                v23);
LABEL_14:
              *(_BYTE *)(a2 + 48) = 3;
              return v12;
            }
            v19 = 38;
          }
        }
        else
        {
          v15 = *(unsigned __int16 *)(a4 + 8);
          v19 = 35;
        }
        LODWORD(v23) = v15;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          v19,
          (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
          v23);
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
          *(_QWORD *)(a2 + 216));
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
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x20u,
      (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
  }
  return 0LL;
}
