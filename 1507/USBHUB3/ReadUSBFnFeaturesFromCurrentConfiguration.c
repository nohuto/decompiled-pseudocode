/*
 * XREFs of ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C0031F20
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C00321C8 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0031A00 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0031B54 (WPP_RECORDER_SF_Sd.c)
 *     MyRegOpenKeyForRead @ 0x1C00323F0 (MyRegOpenKeyForRead.c)
 *     MyRegQueryString @ 0x1C0032448 (MyRegQueryString.c)
 */

void __fastcall ReadUSBFnFeaturesFromCurrentConfiguration(_DWORD *a1)
{
  int v2; // eax
  int String; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  wchar_t *v7; // rsi
  unsigned __int16 v8; // r9
  __int64 v9; // rax
  SIZE_T v10; // rdi
  wchar_t *PoolWithTag; // rax
  wchar_t *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  wchar_t *v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-20h]
  int v22; // [rsp+20h] [rbp-20h]
  __int64 v23; // [rsp+28h] [rbp-18h]
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
  v7 = Src;
  if ( String >= 0 )
  {
    WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6, v21, Src);
    ZwClose(Handle);
    v9 = -1LL;
    Handle = 0LL;
    do
      ++v9;
    while ( v7[v9] );
    v10 = 2 * v9 + 146;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x55445246u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      wcscpy_s(PoolWithTag, v10, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Configurations\\");
      wcscat_s(v12, v10, v7);
      if ( (int)MyRegOpenKeyForRead(v13, v12, &Handle) >= 0 )
      {
        v17 = MyRegQueryString(Handle);
        v18 = (wchar_t *)P;
        if ( v17 >= 0 )
        {
          LODWORD(v19) = 0;
          if ( *(_WORD *)P )
          {
            do
            {
              if ( *a1 == 14 )
                break;
              if ( (*a1 & 2) != 0 || _wcsicmp(&v18[(unsigned int)v19], L"MTP") )
              {
                if ( (*(_BYTE *)a1 & 4) != 0 || _wcsicmp(&v18[(unsigned int)v19], L"IpOverUsb") )
                {
                  if ( (*(_BYTE *)a1 & 8) == 0 && !_wcsicmp(&v18[(unsigned int)v19], L"VidStream") )
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
              v20 = -1LL;
              do
                ++v20;
              while ( v18[(unsigned int)v19 + v20] );
              v19 = (unsigned int)(v20 + v19 + 1);
            }
            while ( v18[v19] );
          }
        }
        else
        {
          LODWORD(v23) = v17;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            1u,
            0x1Bu,
            (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
            v23);
        }
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
      }
      else
      {
        WPP_RECORDER_SF_Sd((__int64)WPP_GLOBAL_Control->DeviceExtension, v14, v15, v16, v22, v12);
      }
      ExFreePoolWithTag(v12, 0);
      goto LABEL_31;
    }
    v8 = 25;
    LODWORD(v23) = -1073741670;
  }
  else
  {
    v8 = 23;
    LODWORD(v23) = String;
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    1u,
    v8,
    (__int64)&WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
    v23);
LABEL_31:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
LABEL_33:
  if ( Handle )
    ZwClose(Handle);
}
