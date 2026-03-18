/*
 * XREFs of RIMAllocateHidConfigDesc @ 0x1C000560C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C000B820 (RIMCreateHidDesc.c)
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1C0005780 (RIMDeliverConfigRequest.c)
 *     RIMFindInputDeviceForConfig @ 0x1C00059EC (RIMFindInputDeviceForConfig.c)
 *     RIMGetDeviceParent @ 0x1C0007BC8 (RIMGetDeviceParent.c)
 *     RIMFreeHidDesc @ 0x1C000A6BC (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000BC70 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_S @ 0x1C000BED0 (WPP_RECORDER_SF_S.c)
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
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
  __int64 v9; // rbp
  int v11; // edx
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // eax
  int v21; // edx
  int v23; // r9d
  int v24; // [rsp+40h] [rbp-28h] BYREF
  __int64 v25; // [rsp+48h] [rbp-20h] BYREF
  int v26; // [rsp+80h] [rbp+18h] BYREF

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
          v16 = a5;
          *(_OWORD *)(v12 + 40) = *(_OWORD *)a4;
          v26 = 0;
          *(_OWORD *)(v12 + 56) = *(_OWORD *)(a4 + 16);
          v24 = 0;
          *(_OWORD *)(v12 + 72) = *(_OWORD *)(a4 + 32);
          v25 = 0LL;
          *(_OWORD *)(v12 + 88) = *(_OWORD *)(a4 + 48);
          *(_QWORD *)(v12 + 16) = a3;
          *(_QWORD *)(v12 + 104) = *(_QWORD *)v16;
          *(_DWORD *)(v12 + 112) = *(_DWORD *)(v16 + 8);
          if ( !(unsigned int)RIMGetDeviceParent(v15, v9) )
          {
            LOBYTE(v17) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v17,
              3,
              37,
              (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids);
          }
          if ( !(unsigned int)RIMFindInputDeviceForConfig(v12, a1, v9, (unsigned int)&v26, (__int64)&v24, (__int64)&v25)
            || !v26 )
          {
            goto LABEL_14;
          }
          LODWORD(v18) = *(_DWORD *)(a1 + 76);
          if ( v24 )
          {
            if ( (v18 & 0x10) != 0 )
            {
              *(_DWORD *)(v9 + 184) |= 0x200u;
              v19 = 2LL;
              goto LABEL_12;
            }
            v23 = 38;
          }
          else
          {
            if ( (v18 & 8) != 0 )
            {
              *(_DWORD *)(v9 + 184) |= 0x400u;
              v19 = 3LL;
LABEL_12:
              v20 = RIMDeliverConfigRequest(v12, a6, a7, v19);
              if ( v20 < 0 )
              {
                LOBYTE(v21) = 3;
                WPP_RECORDER_SF_D(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v21,
                  3,
                  40,
                  (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
                  v20);
              }
LABEL_14:
              *(_BYTE *)(v9 + 48) = 3;
              return v12;
            }
            v23 = 39;
          }
        }
        else
        {
          v18 = *(unsigned __int16 *)(a4 + 8);
          v23 = 36;
        }
        LOBYTE(v14) = 3;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          3,
          v23,
          (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
          v18);
        RIMFreeHidDesc(v12);
      }
      else
      {
        LOBYTE(v11) = 3;
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          3,
          35,
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
        34,
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
      33,
      (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids);
  }
  return 0LL;
}
