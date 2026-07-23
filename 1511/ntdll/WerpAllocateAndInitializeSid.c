/*
 * XREFs of WerpAllocateAndInitializeSid @ 0x180002EE8
 * Callers:
 *     SendMessageToWERService @ 0x180002C98 (SendMessageToWERService.c)
 * Callees:
 *     WerpFreeSid @ 0x180002E94 (WerpFreeSid.c)
 *     RtlInitializeSid @ 0x180062030 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x180062ED0 (RtlLengthRequiredSid.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall WerpAllocateAndInitializeSid(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        PVOID *a11)
{
  NTSTATUS v12; // ebx
  PVOID BaseAddress; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+40h] [rbp-18h] BYREF

  RegionSize[0] = RtlLengthRequiredSid(1u);
  BaseAddress = 0LL;
  if ( !a11 )
    return 3221225485LL;
  v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u);
  if ( v12 < 0 )
    goto LABEL_9;
  if ( BaseAddress )
  {
    memset(BaseAddress, 0, RegionSize[0]);
    v12 = RtlInitializeSid(BaseAddress, IdentifierAuthority, 1u);
    if ( v12 >= 0 )
    {
      *((_DWORD *)BaseAddress + 2) = 18;
      *a11 = BaseAddress;
      v12 = 0;
    }
  }
  if ( v12 < 0 )
  {
LABEL_9:
    if ( BaseAddress )
      WerpFreeSid(BaseAddress);
  }
  return (unsigned int)v12;
}
