/*
 * XREFs of ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007DDC0
 * Callers:
 *     ?OnDeviceAttach@PTPDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800735C0 (-OnDeviceAttach@PTPDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@TouchDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180073DD0 (-OnDeviceAttach@TouchDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074B60 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800787C0 (-OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007BF60 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007CD00 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007D860 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180072CE4 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HIDDeviceCollection::OnDeviceAttach(
        HIDDeviceCollection *this,
        int a2,
        struct DeviceInfo **a3,
        unsigned int *a4)
{
  struct _HIDP_PREPARSED_DATA *v4; // r14
  struct DeviceInfo *v8; // rsi
  __int64 v9; // rcx
  char v10; // al
  int v11; // ebx
  int v12; // r9d
  int DeviceId; // eax
  __int64 v14; // rcx
  struct RIMDevice *v15; // r13
  __int64 v16; // r15
  __int64 v17; // rcx
  int v18; // ebx
  struct _HIDP_PREPARSED_DATA *v19; // rax
  __int64 v20; // rcx
  int v21; // ebx
  int v22; // edi
  __int64 v23; // rcx
  NTSTATUS Caps; // ebx
  int v25; // eax
  unsigned int Size; // [rsp+30h] [rbp-39h] BYREF
  int Size_4; // [rsp+34h] [rbp-35h]
  struct RIMDevice *v29; // [rsp+38h] [rbp-31h] BYREF
  _HIDP_CAPS Capabilities; // [rsp+40h] [rbp-29h] BYREF

  v4 = 0LL;
  Size_4 = a2;
  Size = 0;
  if ( !a3 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 209, 255);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v8 = *a3;
  if ( *a3 || (v8 = (struct DeviceInfo *)operator new(0x38uLL), memset(v8, 0, 0x38uLL), v8) )
  {
    v29 = 0LL;
    DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v29, a4);
    v11 = DeviceId;
    if ( DeviceId < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v14, &MinInput_Warning_CheckResult, 0, 239, DeviceId);
      goto LABEL_64;
    }
    v15 = v29;
    if ( !(*(unsigned __int8 (__fastcall **)(HIDDeviceCollection *, struct RIMDevice *))(*(_QWORD *)this + 88LL))(
            this,
            v29) )
    {
      v10 = -1;
      v11 = -2147418113;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v11;
      v12 = 243;
      goto LABEL_11;
    }
    v16 = *((_QWORD *)v15 + 2);
    v18 = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v16, 0LL, &Size);
    if ( v18 < 0 )
    {
      v11 = v18 | 0x10000000;
      if ( v11 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v17, &MinInput_Warning_CheckResult, 0, 258, v11);
        goto LABEL_64;
      }
    }
    v19 = (struct _HIDP_PREPARSED_DATA *)operator new[](Size);
    v4 = v19;
    if ( !v19 )
    {
      v10 = 14;
      v11 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v11;
      v12 = 263;
      goto LABEL_11;
    }
    memset(v19, 0, Size);
    v21 = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v16, v4, &Size);
    if ( v21 < 0 )
    {
      v11 = v21 | 0x10000000;
      if ( v11 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v20, &MinInput_Warning_CheckResult, 0, 271, v11);
        goto LABEL_64;
      }
    }
    v22 = 64;
    memset(&Capabilities, 0, sizeof(Capabilities));
    Caps = HidP_GetCaps(v4, &Capabilities);
    if ( Caps < 0 )
    {
      v11 = Caps | 0x10000000;
      if ( v11 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v23, &MinInput_Warning_CheckResult, 0, 277, v11);
        goto LABEL_64;
      }
    }
    switch ( Capabilities.Usage )
    {
      case 4u:
        if ( Capabilities.UsagePage == 13 )
        {
          v22 = 8;
LABEL_63:
          v11 = 0;
          *((_DWORD *)v15 + 14) = Size;
          v25 = Size_4;
          *((_QWORD *)v15 + 6) = v4;
          *(_DWORD *)v8 = v25;
          *((_DWORD *)v8 + 1) = v22;
          *a3 = v8;
LABEL_64:
          if ( v11 < 0 && v4 )
            operator delete(v4);
          return (unsigned int)v11;
        }
        goto LABEL_62;
      case 5u:
        if ( Capabilities.UsagePage == 13 )
        {
          v22 = 32;
          goto LABEL_63;
        }
        if ( Capabilities.UsagePage == 1 )
          goto LABEL_63;
        goto LABEL_62;
      case 0xEEu:
        if ( Capabilities.UsagePage != 1 )
          goto LABEL_62;
LABEL_46:
        v22 = 128;
        goto LABEL_63;
      case 1u:
        if ( Capabilities.UsagePage == 12 )
          goto LABEL_46;
        break;
      case 2u:
        break;
      default:
        goto LABEL_50;
    }
    if ( Capabilities.UsagePage == 13 )
    {
      v22 = 16;
      goto LABEL_63;
    }
LABEL_50:
    if ( Capabilities.Usage == 0xFFAA )
    {
      if ( Capabilities.UsagePage == 1 )
      {
        v22 = 1024;
        goto LABEL_63;
      }
    }
    else
    {
      if ( Capabilities.Usage == 1 && Capabilities.UsagePage == 17
        || Capabilities.Usage == 15 && Capabilities.UsagePage == 1 )
      {
        goto LABEL_59;
      }
      if ( Capabilities.Usage != 1 )
      {
        if ( Capabilities.Usage == 15 )
        {
          v22 = 2048;
          if ( Capabilities.UsagePage == 13 )
            goto LABEL_63;
        }
        goto LABEL_62;
      }
      if ( Capabilities.UsagePage == 0xFF0A )
      {
LABEL_59:
        v22 = 0x2000;
        goto LABEL_63;
      }
    }
LABEL_62:
    v22 = 256;
    goto LABEL_63;
  }
  v10 = 14;
  v11 = -2147024882;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v12 = 234;
LABEL_11:
    Template_qqq(v9, &MinInput_Warning_CheckResult, 0, v12, v10);
  }
  return (unsigned int)v11;
}
