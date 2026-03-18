/*
 * XREFs of GetImageName @ 0x1C00059B4
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0021640 (imp_WdfDriverCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     RtlUnicodeStringCopy @ 0x1C0005B88 (RtlUnicodeStringCopy.c)
 *     GetNameFromPath @ 0x1C0005C84 (GetNameFromPath.c)
 *     QueryAndAllocString @ 0x1C0005CF8 (QueryAndAllocString.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     WPP_IFR_SF_D @ 0x1C00659E0 (WPP_IFR_SF_D.c)
 */

__int64 __fastcall GetImageName(_FX_DRIVER_GLOBALS *DriverGlobals, _UNICODE_STRING *ImageName)
{
  FxDriver *Driver; // rax
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  _KEY_VALUE_PARTIAL_INFORMATION *v7; // r14
  unsigned __int16 v8; // bx
  unsigned __int16 *v9; // rax
  unsigned __int16 v11; // r9
  FxAutoRegKey hKey; // [rsp+30h] [rbp-59h] BYREF
  _UNICODE_STRING imagePath; // [rsp+38h] [rbp-51h] BYREF
  _UNICODE_STRING Name; // [rsp+48h] [rbp-41h] BYREF
  _KEY_VALUE_PARTIAL_INFORMATION *value; // [rsp+58h] [rbp-31h] BYREF
  _UNICODE_STRING valueName; // [rsp+60h] [rbp-29h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-19h] BYREF
  wchar_t valueName_buffer[10]; // [rsp+A0h] [rbp+17h] BYREF
  _LIST_ENTRY *Caller; // [rsp+E8h] [rbp+5Fh]

  wcscpy(&valueName_buffer[8], L"h");
  hKey.m_Key = 0LL;
  valueName.Buffer = valueName_buffer;
  *(_DWORD *)&valueName.Length = 1310738;
  *(_QWORD *)&ImageName->Length = 0LL;
  ImageName->Buffer = 0LL;
  *(_QWORD *)&imagePath.MaximumLength = 0LL;
  *(_DWORD *)((char *)&imagePath.Buffer + 2) = 0;
  HIWORD(imagePath.Buffer) = 0;
  *(_QWORD *)&Name.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Name.Buffer + 2) = 0;
  HIWORD(Name.Buffer) = 0;
  Driver = DriverGlobals->Driver;
  *(_OWORD *)valueName_buffer = *(_OWORD *)L"ImagePath";
  imagePath.Length = 0;
  ObjectAttributes.ObjectName = &Driver->m_RegistryPath;
  Name.Length = 0;
  value = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&hKey.m_Key, 0x20019u, &ObjectAttributes);
  v6 = v5;
  if ( v5 < 0 )
  {
    v11 = 21;
  }
  else
  {
    v5 = QueryAndAllocString(hKey.m_Key, DriverGlobals, &valueName, &value);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = value;
      imagePath.MaximumLength = value->DataLength;
      imagePath.Length = imagePath.MaximumLength - 2;
      imagePath.Buffer = (unsigned __int16 *)value->Data;
      imagePath.Buffer[(unsigned __int64)(unsigned __int16)(imagePath.MaximumLength - 2) >> 1] = 0;
      GetNameFromPath(&imagePath, &Name);
      if ( Name.Length )
      {
        v8 = Name.Length + 2;
        if ( (unsigned __int16)(Name.Length + 2) < Name.Length )
        {
          v6 = -1073741675;
          WPP_IFR_SF_D(
            DriverGlobals,
            (unsigned __int8)WPP_FxTelemetryKm_cpp_Traceguids,
            0x11u,
            0x18u,
            WPP_FxTelemetryKm_cpp_Traceguids,
            0xC0000095);
        }
        else
        {
          v9 = (unsigned __int16 *)FxPoolAllocator(
                                     DriverGlobals,
                                     (_LIST_ENTRY *)&DriverGlobals->FxPoolFrameworks,
                                     1u,
                                     v8,
                                     DriverGlobals->Tag,
                                     Caller);
          ImageName->Buffer = v9;
          if ( v9 )
          {
            memset(v9, 0, v8);
            ImageName->Length = 0;
            ImageName->MaximumLength = v8;
            v6 = RtlUnicodeStringCopy(ImageName, &Name);
          }
          else
          {
            v6 = -1073741670;
            WPP_IFR_SF_D(
              DriverGlobals,
              (unsigned __int8)WPP_FxTelemetryKm_cpp_Traceguids,
              0x11u,
              0x19u,
              WPP_FxTelemetryKm_cpp_Traceguids,
              0xC000009A);
          }
        }
      }
      else
      {
        v6 = -1073741811;
        WPP_IFR_SF_D(
          DriverGlobals,
          (unsigned __int8)WPP_FxTelemetryKm_cpp_Traceguids,
          0x11u,
          0x17u,
          WPP_FxTelemetryKm_cpp_Traceguids,
          0xC000000D);
      }
      FxPoolFree(v7);
      goto LABEL_8;
    }
    v11 = 22;
  }
  WPP_IFR_SF_d(DriverGlobals, 2u, 0x11u, v11, WPP_FxTelemetryKm_cpp_Traceguids, v5);
LABEL_8:
  if ( hKey.m_Key )
    ZwClose(hKey.m_Key);
  return v6;
}
