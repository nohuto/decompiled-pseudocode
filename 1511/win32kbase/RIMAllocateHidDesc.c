/*
 * XREFs of RIMAllocateHidDesc @ 0x1C000F32C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C000F564 (RIMCreateHidDesc.c)
 * Callees:
 *     RIMFindSiblingMouseDevice @ 0x1C000587C (RIMFindSiblingMouseDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0007C58 (RIMCreatePointerDeviceInfo.c)
 *     RIMFreeHidDesc @ 0x1C000EF6C (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000F9CC (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000FA94 (WPP_RECORDER_SF_q.c)
 *     DbgPrintRIM @ 0x1C000FB48 (DbgPrintRIM.c)
 *     WPP_RECORDER_SF_S @ 0x1C000FCE4 (WPP_RECORDER_SF_S.c)
 *     RimDeviceTypeToRimInputType @ 0x1C001152C (RimDeviceTypeToRimInputType.c)
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     RIMConfigurePointerDevice @ 0x1C007BDB4 (RIMConfigurePointerDevice.c)
 *     EtwTracePointerDeviceArrivalStop @ 0x1C007E9A0 (EtwTracePointerDeviceArrivalStop.c)
 *     EtwTracePointerDeviceArrivalStart @ 0x1C007E9C0 (EtwTracePointerDeviceArrivalStart.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C00CE8D0 (ApiSetSetUserPTPEnabledPreference.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C00D0120 (RIMCreateHidKeyboardDeviceInfo.c)
 */

__int64 __fastcall RIMAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // rbp
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  int v16; // edx
  __int64 v17; // xmm0_8
  __int64 v18; // xmm0_8
  int v19; // eax
  __int64 v20; // rcx
  int v21; // edx
  int v23; // r8d
  __int16 v24; // r8
  int v25; // edx
  int v26; // edx
  __int64 v27; // [rsp+40h] [rbp-38h] BYREF
  int v28; // [rsp+48h] [rbp-30h]

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
          (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
          v14);
        if ( *(_QWORD *)(v13 + 24) )
        {
          *(_QWORD *)(v13 + 16) = a3;
          v17 = *a5;
          *(_QWORD *)(v13 + 104) = *a5;
          *(_DWORD *)(v13 + 112) = *((_DWORD *)a5 + 2);
          if ( *(_WORD *)(a4 + 2) == 13
            && ((unsigned __int16)(*(_WORD *)a4 - 4) <= 1u || (unsigned __int16)(*(_WORD *)a4 - 1) <= 1u) )
          {
            EtwTracePointerDeviceArrivalStart();
            v18 = *(_QWORD *)(v13 + 104);
            v28 = *(_DWORD *)(v13 + 112);
            v27 = v18;
            v19 = RIMCreatePointerDeviceInfo(a1, v9, a3, (__int16 *)a4, a6, a7, (__int64)&v27);
            if ( v19 < 0 )
            {
              if ( *(_WORD *)a4 != 5 || v19 == -1073741808 )
              {
LABEL_32:
                DbgPrintRIM("Ignore (Usage: %x, UsagePage: %x)\n");
                WPP_RECORDER_SF_DD(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v25,
                  4,
                  47,
                  (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                  *(_WORD *)(a4 + 2),
                  *(_WORD *)a4);
                *(_QWORD *)(v13 + 16) = 0LL;
                *(_QWORD *)(v9 + 400) = 0LL;
                RIMFreeHidDesc(v13);
                LOBYTE(v26) = 3;
                WPP_RECORDER_SF_q(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v26,
                  4,
                  48,
                  (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                  0);
                return 0LL;
              }
            }
            else if ( (unsigned __int16)(*(_WORD *)a4 - 4) <= 1u )
            {
              RIMConfigurePointerDevice(a1, v9, v13);
              if ( *(_WORD *)a4 == 5 )
                ApiSetSetUserPTPEnabledPreference(v9, v13, a1);
            }
            if ( *(_WORD *)a4 != 1 )
              RIMFindSiblingMouseDevice(v20, v13, *(_WORD *)a4, v9);
            EtwTracePointerDeviceArrivalStop();
          }
          else
          {
            v23 = *(_DWORD *)(v9 + 176);
            if ( (v23 & 0x1000) != 0 )
            {
              if ( (v23 & 0x2000) == 0 )
                goto LABEL_32;
              v28 = *(_DWORD *)(v13 + 112);
              v27 = v17;
              if ( (int)RIMCreateHidKeyboardDeviceInfo(a1, v9, a3, a4) < 0 )
                goto LABEL_32;
            }
            else if ( ((unsigned int)RimDeviceTypeToRimInputType(v9, *(unsigned __int8 *)(v9 + 48)) & *(_DWORD *)(a1 + 76)) == 0
                   || *(_DWORD *)(a1 + 80) && (v24 & 0x2000) == 0 )
            {
              goto LABEL_32;
            }
          }
          LOBYTE(v21) = 3;
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            v21,
            4,
            46,
            (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
            v13);
          return v13;
        }
        LOBYTE(v16) = 3;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          3,
          45,
          (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
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
        42,
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
      41,
      (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
  }
  return 0LL;
}
