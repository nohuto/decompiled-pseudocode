/*
 * XREFs of RIMAllocateHidDesc @ 0x1C0077398
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00775D0 (RIMCreateHidDesc.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C001A844 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 *     RIMFreeHidDesc @ 0x1C0075858 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_S @ 0x1C00772A8 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0077A38 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C0077B00 (WPP_RECORDER_SF_q.c)
 *     DbgPrintRIM @ 0x1C0077BB4 (DbgPrintRIM.c)
 *     RIMFindSiblingMouseDevice @ 0x1C0078104 (RIMFindSiblingMouseDevice.c)
 *     RIMConfigurePointerDevice @ 0x1C00817D0 (RIMConfigurePointerDevice.c)
 *     EtwTracePointerDeviceArrivalStop @ 0x1C0084130 (EtwTracePointerDeviceArrivalStop.c)
 *     EtwTracePointerDeviceArrivalStart @ 0x1C0084150 (EtwTracePointerDeviceArrivalStart.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C00CD594 (ApiSetSetUserPTPEnabledPreference.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C00CED4C (RIMCreateHidKeyboardDeviceInfo.c)
 */

__int64 __fastcall RIMAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 *a5,
        struct _DEVICE_OBJECT *a6,
        struct _FILE_OBJECT *a7)
{
  char *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // xmm0_8
  __int64 v16; // xmm0_8
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // edx
  int v22; // r8d
  __int16 v23; // r8
  int v24; // edx
  int v25; // edx
  __int64 v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-38h] BYREF
  int v28; // [rsp+48h] [rbp-30h]

  if ( a3 )
  {
    if ( a4[2] )
    {
      v11 = (char *)Win32AllocPoolZInit(0x78uLL);
      v12 = (__int64)v11;
      if ( v11 )
      {
        *(_OWORD *)(v11 + 40) = *(_OWORD *)a4;
        *(_OWORD *)(v11 + 56) = *((_OWORD *)a4 + 1);
        *(_OWORD *)(v11 + 72) = *((_OWORD *)a4 + 2);
        *(_OWORD *)(v11 + 88) = *((_OWORD *)a4 + 3);
        v13 = Win32AllocPoolNonPaged();
        *(_QWORD *)(v12 + 24) = v13;
        LOBYTE(v14) = 3;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          4,
          44,
          (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
          v13);
        if ( *(_QWORD *)(v12 + 24) )
        {
          *(_QWORD *)(v12 + 16) = a3;
          v15 = *a5;
          *(_QWORD *)(v12 + 104) = *a5;
          *(_DWORD *)(v12 + 112) = *((_DWORD *)a5 + 2);
          if ( a4[1] == 13 && ((unsigned __int16)(*a4 - 4) <= 1u || (unsigned __int16)(*a4 - 1) <= 1u) )
          {
            EtwTracePointerDeviceArrivalStart();
            v16 = *(_QWORD *)(v12 + 104);
            v28 = *(_DWORD *)(v12 + 112);
            v27 = v16;
            v17 = RIMCreatePointerDeviceInfo(a1, a2, a3, (__int16 *)a4, a6, a7, (__int64)&v27);
            if ( v17 < 0 )
            {
              if ( *a4 != 5 || v17 == -1073741808 )
              {
LABEL_32:
                DbgPrintRIM("Ignore (Usage: %x, UsagePage: %x)\n");
                WPP_RECORDER_SF_DD(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v24,
                  4,
                  47,
                  (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                  a4[1],
                  *a4);
                *(_QWORD *)(v12 + 16) = 0LL;
                *(_QWORD *)(a2 + 400) = 0LL;
                RIMFreeHidDesc(v12);
                LOBYTE(v25) = 3;
                WPP_RECORDER_SF_q(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v25,
                  4,
                  48,
                  (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                  0);
                return 0LL;
              }
            }
            else if ( (unsigned __int16)(*a4 - 4) <= 1u )
            {
              RIMConfigurePointerDevice(a1, a2, v12);
              if ( *a4 == 5 )
                ApiSetSetUserPTPEnabledPreference(a2, v12, a1);
            }
            v19 = *a4;
            if ( (_WORD)v19 != 1 )
              RIMFindSiblingMouseDevice(v18, v12, v19, a2);
            EtwTracePointerDeviceArrivalStop();
          }
          else
          {
            v22 = *(_DWORD *)(a2 + 184);
            if ( (v22 & 0x1000) != 0 )
            {
              if ( (v22 & 0x2000) == 0 )
                goto LABEL_32;
              v28 = *(_DWORD *)(v12 + 112);
              v27 = v15;
              if ( (int)RIMCreateHidKeyboardDeviceInfo(a1, a2, a3, a4) < 0 )
                goto LABEL_32;
            }
            else if ( ((unsigned int)RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48)) & *(_DWORD *)(a1 + 76)) == 0
                   || *(_DWORD *)(a1 + 80) && (v23 & 0x2000) == 0 )
            {
              goto LABEL_32;
            }
          }
          LOBYTE(v20) = 3;
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            4,
            46,
            (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
            v12);
          return v12;
        }
        LODWORD(v26) = *(unsigned __int16 *)(v12 + 44);
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Du,
          (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
          v26);
        RIMFreeHidDesc(v12);
      }
      else
      {
        WPP_RECORDER_SF_S(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3LL,
          0x2Bu,
          (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
          *(const wchar_t **)(a2 + 216));
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
        a4[1],
        *a4);
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x29u,
      (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
  }
  return 0LL;
}
