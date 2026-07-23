/*
 * XREFs of VslpIumPhase0Initialize @ 0x1407CE270
 * Callers:
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1400A8750 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeIsTsxDisabled @ 0x1401D2754 (KeIsTsxDisabled.c)
 *     KeKvaShadowingActive @ 0x1401D8BE0 (KeKvaShadowingActive.c)
 *     xHalSetSystemInformation @ 0x140581DF0 (xHalSetSystemInformation.c)
 *     KeQueryKvaShadowInformation @ 0x140650010 (KeQueryKvaShadowInformation.c)
 */

__int64 __fastcall VslpIumPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  int v3; // ecx
  NTSTATUS v4; // eax
  __int64 v5; // [rsp+20h] [rbp-49h]
  int v6[2]; // [rsp+30h] [rbp-39h] BYREF
  int v7; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v8[8]; // [rsp+40h] [rbp-29h] BYREF
  int v9; // [rsp+48h] [rbp-21h]
  int v10; // [rsp+4Ch] [rbp-1Dh]
  PHYSICAL_ADDRESS PhysicalAddress; // [rsp+50h] [rbp-19h]

  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 116) & 0x200) != 0 )
  {
    if ( !HvlQueryVsmConnection(0LL) )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, v2 & v5);
    memset(v8, 0, (unsigned int)(v2 + 104));
    v9 = 167772162;
    PhysicalAddress = MmGetPhysicalAddress((PVOID)0xFFFFF78000000000LL);
    if ( (unsigned int)KeKvaShadowingActive() )
      v10 |= 1u;
    KeQueryKvaShadowInformation(v6, 4u, &v7);
    if ( (v6[0] & 0x10) != 0 && KiImplementedPhysicalBits > 0 )
      v10 |= 2u;
    if ( KeIsTsxDisabled() )
      v10 = v3 | 4;
    v4 = VslpEnterIumSecureMode(1, 208LL, 0LL, (__int64)v8);
    if ( v4 < 0 )
      KeBugCheckEx(0x6Fu, v4, 0LL, 1uLL, 0LL);
    if ( PhysicalAddress.LowPart != 167772162 )
      KeBugCheckEx(0x6Fu, 0xFFFFFFFFC0000059uLL, 0LL, 2uLL, 0LL);
    v6[1] = 0;
    VslpIumThreadSemaphore.Header.WaitListHead.Blink = &VslpIumThreadSemaphore.Header.WaitListHead;
    VslpIumThreadSemaphore.Header.WaitListHead.Flink = &VslpIumThreadSemaphore.Header.WaitListHead;
    VslpIumThreadSemaphore.Header.Type = 5;
    VslpIumThreadSemaphore.Header.Size = 8;
    VslpIumThreadSemaphore.Header.SignalState = PhysicalAddress.HighPart;
    VslpIumThreadSemaphore.Limit = PhysicalAddress.HighPart;
    VslVsmEnabled = 1;
    return off_1402F37F0();
  }
  return result;
}
