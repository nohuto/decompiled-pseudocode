/*
 * XREFs of DxgkSqmCommonGeneric @ 0x1C000CDF0
 * Callers:
 *     ?SqmDpiCommon@@YAXPEBU_DPI_INFORMATION@@UtagSIZE@@1@Z @ 0x1C00ABD3C (-SqmDpiCommon@@YAXPEBU_DPI_INFORMATION@@UtagSIZE@@1@Z.c)
 *     ?SqmAdapterInformation@DXGADAPTER@@QEAAXXZ @ 0x1C00BE7A0 (-SqmAdapterInformation@DXGADAPTER@@QEAAXXZ.c)
 *     ?SqmRenderInformation@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00C2294 (-SqmRenderInformation@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00C323C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall DxgkSqmCommonGeneric(ULONG Value, ULONG Type, PVOID Data, ULONG DataSize)
{
  NTSTATUS v8; // ebx
  void *KeyHandle; // [rsp+40h] [rbp-89h] BYREF
  struct _UNICODE_STRING String; // [rsp+48h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-71h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-61h] BYREF
  _WORD v14[32]; // [rsp+A0h] [rbp-29h] BYREF

  memset(v14, 0, sizeof(v14));
  KeyHandle = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows\\CommonDatapoints\\");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v8 >= 0 )
  {
    *(_DWORD *)&String.Length = 0x200000;
    String.Buffer = v14;
    v8 = RtlIntegerToUnicodeString(Value, 0xAu, &String);
    if ( v8 >= 0 )
      v8 = ZwSetValueKey(KeyHandle, &String, 0, Type, Data, DataSize);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v8;
}
