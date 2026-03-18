/*
 * XREFs of ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C0057C14
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C0057FB4 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00456B4 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0051EB4 (WPP_RECORDER_SF_Sd.c)
 *     MyRegOpenKeyForRead @ 0x1C0058124 (MyRegOpenKeyForRead.c)
 *     MyRegQueryString @ 0x1C005817C (MyRegQueryString.c)
 */

void __fastcall ReadUSBFnFeaturesFromCurrentConfiguration(_DWORD *a1)
{
  int v2; // eax
  int String; // eax
  __int64 v4; // r8
  wchar_t *v5; // r14
  unsigned __int16 v6; // r9
  __int64 v7; // rax
  SIZE_T v8; // rsi
  wchar_t *PoolWithTag; // rax
  wchar_t *v10; // r12
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  wchar_t *v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // [rsp+28h] [rbp-18h]
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  wchar_t *Src; // [rsp+88h] [rbp+48h]
  PVOID P; // [rsp+90h] [rbp+50h]

  *a1 &= 0xFFFFFFF1;
  Handle = 0LL;
  Src = 0LL;
  P = 0LL;
  v2 = MyRegOpenKeyForRead(a1, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Default", &Handle);
  if ( v2 < 0 )
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x16u,
      (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
      v2);
    goto LABEL_33;
  }
  String = MyRegQueryString(Handle);
  v5 = Src;
  if ( String >= 0 )
  {
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      v4,
      0x18u,
      (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
      Src);
    ZwClose(Handle);
    v7 = -1LL;
    Handle = 0LL;
    do
      ++v7;
    while ( v5[v7] );
    v8 = 2 * v7 + 146;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x55445246u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      wcscpy_s(PoolWithTag, v8, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Configurations\\");
      wcscat_s(v10, v8, v5);
      v12 = MyRegOpenKeyForRead(v11, v10, &Handle);
      if ( v12 >= 0 )
      {
        v14 = MyRegQueryString(Handle);
        v15 = (wchar_t *)P;
        if ( v14 >= 0 )
        {
          LODWORD(v16) = 0;
          if ( *(_WORD *)P )
          {
            do
            {
              if ( *a1 == 14 )
                break;
              if ( (*a1 & 2) != 0 || _wcsicmp(&v15[(unsigned int)v16], L"MTP") )
              {
                if ( (*(_BYTE *)a1 & 4) != 0 || _wcsicmp(&v15[(unsigned int)v16], L"IpOverUsb") )
                {
                  if ( (*(_BYTE *)a1 & 8) == 0 && !_wcsicmp(&v15[(unsigned int)v16], L"VidStream") )
                    *a1 |= 8u;
                }
                else
                {
                  *a1 |= 4u;
                }
              }
              else
              {
                *a1 |= 2u;
              }
              v17 = -1LL;
              do
                ++v17;
              while ( v15[(unsigned int)v16 + v17] );
              v16 = (unsigned int)(v17 + v16 + 1);
            }
            while ( v15[v16] );
          }
        }
        else
        {
          LODWORD(v18) = v14;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            1u,
            0x1Bu,
            (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
            v18);
        }
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
      }
      else
      {
        WPP_RECORDER_SF_Sd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          v13,
          0x1Au,
          (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
          v10,
          v12);
      }
      ExFreePoolWithTag(v10, 0);
      goto LABEL_31;
    }
    v6 = 25;
    LODWORD(v18) = -1073741670;
  }
  else
  {
    v6 = 23;
    LODWORD(v18) = String;
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    1u,
    v6,
    (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
    v18);
LABEL_31:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
LABEL_33:
  if ( Handle )
    ZwClose(Handle);
}
