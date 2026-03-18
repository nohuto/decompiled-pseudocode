/*
 * XREFs of ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C02256F4
 * Callers:
 *     WritePointerDeviceSettings @ 0x1C0225C04 (WritePointerDeviceSettings.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C006ACEC (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?GetCustomFlickPath@@YAHAEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1C02255CC (-GetCustomFlickPath@@YAHAEBU_GUID@@PEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall SetCustomFlick(struct tagCUSTOM_FLICK *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  int v4; // edi
  __int64 v5; // r8
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+20h] BYREF

  *(_QWORD *)&Destination.MaximumLength = 0LL;
  Destination.Length = 0;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  KeyHandle = 0LL;
  if ( !GetCustomFlickPath((GUID *)a1, &Destination) )
    return 0;
  v2 = 1;
  Destination.Buffer[(unsigned __int64)Destination.Length >> 1] = 0;
  v4 = OpenDeviceCfgKey(Destination.MaximumLength, Destination.Buffer, 0x20006u, &KeyHandle, 1);
  if ( v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ModifierKeys");
    v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)a1 + 16, 4u);
    if ( v4 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"KeyCode");
      v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)a1 + 20, 4u);
      if ( v4 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"FriendlyName");
        v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, (char *)a1 + 28, *((_DWORD *)a1 + 6));
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  Win32FreePool(Destination.Buffer, v3, v5);
  if ( v4 < 0 )
    return 0;
  return v2;
}
