/*
 * XREFs of PipUnloadEarlyLaunchDrivers @ 0x1407BC3E0
 * Callers:
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwUnloadKey2 @ 0x14015D870 (ZwUnloadKey2.c)
 *     IopUnloadDriver @ 0x140545368 (IopUnloadDriver.c)
 */

NTSTATUS __fastcall PipUnloadEarlyLaunchDrivers(__int64 a1)
{
  unsigned __int16 **v1; // rbx
  unsigned __int16 *v2; // rdi
  unsigned __int16 *v3; // rcx
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+30h] [rbp-38h] BYREF

  v1 = (unsigned __int16 **)(a1 + 64);
  if ( *v1 != (unsigned __int16 *)v1 )
  {
    v2 = *v1;
    while ( v2 != (unsigned __int16 *)v1 )
    {
      v3 = v2;
      v2 = *(unsigned __int16 **)v2;
      if ( *((int *)v3 + 14) >= 0 )
        IopUnloadDriver(v3 + 16, 1);
    }
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\ELAM");
    TargetKey.RootDirectory = 0LL;
    TargetKey.ObjectName = &DestinationString;
    TargetKey.Length = 48;
    TargetKey.Attributes = 576;
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    return ZwUnloadKey2(&TargetKey, 1u);
  }
  return result;
}
