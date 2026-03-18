/*
 * XREFs of ?UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z @ 0x1C00EC074
 * Callers:
 *     CacheRotationInfo @ 0x1C00EBFA0 (CacheRotationInfo.c)
 *     AutoRotationUpdateRegistry @ 0x1C00EC030 (AutoRotationUpdateRegistry.c)
 *     xxxSetAutoRotationState @ 0x1C01CA438 (xxxSetAutoRotationState.c)
 *     xxxSetSensorPresence @ 0x1C01CA528 (xxxSetSensorPresence.c)
 *     xxxSetSlateAutoRotationState @ 0x1C01CA5F0 (xxxSetSlateAutoRotationState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateAutoRotationRegistrySetting(
        int a1,
        const unsigned __int16 *a2,
        ULONG a3,
        const unsigned __int16 *a4)
{
  NTSTATUS v6; // ebx
  void *KeyHandle; // [rsp+48h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-1h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+60h] [rbp+Fh] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+1Fh] BYREF
  int Data; // [rsp+B8h] [rbp+67h] BYREF

  Data = a1;
  RtlInitUnicodeString(&DestinationString, a4);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v6 = ZwCreateKey(&KeyHandle, 0x2000000u, &ObjectAttributes, 0, 0LL, a3, 0LL);
  if ( v6 >= 0 )
  {
    RtlInitUnicodeString(&ValueName, a2);
    v6 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v6;
}
