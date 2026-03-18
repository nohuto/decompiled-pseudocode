/*
 * XREFs of ?vCheckIsSetupRunning@@YAXXZ @ 0x1C0064488
 * Callers:
 *     InitializeGreCSRSS @ 0x1C00641EC (InitializeGreCSRSS.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 */

void vCheckIsSetupRunning(void)
{
  _DWORD *v0; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+80h] [rbp+10h] BYREF
  void *KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemSetupInProgress");
    Length = 20;
    v0 = PALLOCMEM2(0x14uLL, 1886221383LL, 1);
    if ( v0 )
    {
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v0, Length, &Length) >= 0 )
      {
        if ( v0[3] )
          gbGUISetup = 1;
      }
      Win32FreePool();
    }
    ZwClose(KeyHandle);
  }
}
