/*
 * XREFs of ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C00581D4
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C0058574 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00459F4 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0052554 (WPP_RECORDER_SF_Sd.c)
 *     MyRegOpenKeyForRead @ 0x1C00586E4 (MyRegOpenKeyForRead.c)
 *     MyRegQueryString @ 0x1C005873C (MyRegQueryString.c)
 */

void __fastcall ReadUSBFnFeaturesFromCurrentConfiguration(_DWORD *a1)
{
  int v2; // eax
  int String; // eax
  int v4; // edx
  int v5; // r8d
  wchar_t *v6; // r14
  unsigned __int16 v7; // r9
  __int64 v8; // rax
  SIZE_T v9; // rsi
  wchar_t *PoolWithTag; // rax
  wchar_t *v11; // r12
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r8
  int v15; // eax
  wchar_t *v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // [rsp+28h] [rbp-18h]
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
      (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
      v2);
    goto LABEL_33;
  }
  String = MyRegQueryString(Handle);
  v6 = Src;
  if ( String >= 0 )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      v5,
      24,
      (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
      (__int64)Src);
    ZwClose(Handle);
    v8 = -1LL;
    Handle = 0LL;
    do
      ++v8;
    while ( v6[v8] );
    v9 = 2 * v8 + 146;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x55445246u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      wcscpy_s(PoolWithTag, v9, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Configurations\\");
      wcscat_s(v11, v9, v6);
      v13 = MyRegOpenKeyForRead(v12, v11, &Handle);
      if ( v13 >= 0 )
      {
        v15 = MyRegQueryString(Handle);
        v16 = (wchar_t *)P;
        if ( v15 >= 0 )
        {
          LODWORD(v17) = 0;
          if ( *(_WORD *)P )
          {
            do
            {
              if ( *a1 == 14 )
                break;
              if ( (*a1 & 2) != 0 || _wcsicmp(&v16[(unsigned int)v17], L"MTP") )
              {
                if ( (*(_BYTE *)a1 & 4) != 0 || _wcsicmp(&v16[(unsigned int)v17], L"IpOverUsb") )
                {
                  if ( (*(_BYTE *)a1 & 8) == 0 && !_wcsicmp(&v16[(unsigned int)v17], L"VidStream") )
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
              v18 = -1LL;
              do
                ++v18;
              while ( v16[(unsigned int)v17 + v18] );
              v17 = (unsigned int)(v18 + v17 + 1);
            }
            while ( v16[v17] );
          }
        }
        else
        {
          LODWORD(v19) = v15;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            1u,
            0x1Bu,
            (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
            v19);
        }
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
      }
      else
      {
        WPP_RECORDER_SF_Sd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          v14,
          0x1Au,
          (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
          v11,
          v13);
      }
      ExFreePoolWithTag(v11, 0);
      goto LABEL_31;
    }
    v7 = 25;
    LODWORD(v19) = -1073741670;
  }
  else
  {
    v7 = 23;
    LODWORD(v19) = String;
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    1u,
    v7,
    (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
    v19);
LABEL_31:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
LABEL_33:
  if ( Handle )
    ZwClose(Handle);
}
