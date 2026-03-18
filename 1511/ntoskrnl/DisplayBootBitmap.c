/*
 * XREFs of DisplayBootBitmap @ 0x1401344C8
 * Callers:
 *     DisplayFilter @ 0x1401A855C (DisplayFilter.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     InbvReleaseResources @ 0x14013451C (InbvReleaseResources.c)
 *     InbvIsBootDriverInstalled @ 0x1401345A8 (InbvIsBootDriverInstalled.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     InbvAcquireLock @ 0x1401B5B38 (InbvAcquireLock.c)
 *     InbvBitBlt @ 0x1401B5B5C (InbvBitBlt.c)
 *     InbvGetResourceAddress @ 0x1401B5BEC (InbvGetResourceAddress.c)
 *     InbvReleaseLock @ 0x1401B5C34 (InbvReleaseLock.c)
 *     InbvSetScrollRegion @ 0x1401B5C74 (InbvSetScrollRegion.c)
 *     InbvSetTextColor @ 0x1401B5C94 (InbvSetTextColor.c)
 *     InbvSolidColorFill @ 0x1401B5CB0 (InbvSolidColorFill.c)
 *     RotBarInit @ 0x1401B5DD4 (RotBarInit.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 */

NTSTATUS __fastcall DisplayBootBitmap(char a1)
{
  int v1; // ebx
  NTSTATUS result; // eax
  __int64 ResourceAddress; // rdi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdi
  HANDLE ThreadHandle; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  if ( byte_14031CC2C )
  {
    InbvAcquireLock();
    RotBarSelection = 0;
    InbvReleaseLock();
  }
  ShowProgressBar = 0;
  if ( a1 )
  {
    InbvSetTextColor(15LL);
    InbvSolidColorFill(0, 0, 639, 479, 0);
    InbvSolidColorFill(0, 421, 639, 479, 0);
    ResourceAddress = InbvGetResourceAddress(6LL);
    v1 = 0;
    v5 = InbvGetResourceAddress(7LL);
    result = InbvSetScrollRegion(32LL, 80LL, 631LL, 400LL);
    if ( v5 )
      result = InbvBitBlt(v5, 0LL, 419LL);
    if ( ResourceAddress )
      result = InbvBitBlt(ResourceAddress, 0LL, 0LL);
LABEL_18:
    if ( !byte_14031CC2C )
      return result;
    goto LABEL_19;
  }
  if ( !(unsigned __int8)InbvIsBootDriverInstalled() )
    return InbvReleaseResources();
  qword_1402FDE28 = (__int64)DisplayFilter;
  v6 = InbvGetResourceAddress(1LL);
  v7 = InbvGetResourceAddress(4LL);
  if ( v6 )
  {
    v1 = 1;
    InbvBitBlt(v6, 0LL, 0LL);
  }
  if ( v7 )
    InbvBitBlt(v7, 0LL, 0LL);
  if ( !byte_14031CC2C )
  {
    result = PsCreateSystemThread(&ThreadHandle, 0, 0LL, 0LL, 0LL, InbvRotateGuiBootDisplay, 0LL);
    if ( result >= 0 )
    {
      result = ZwClose(ThreadHandle);
      byte_14031CC2C = 1;
    }
    goto LABEL_18;
  }
LABEL_19:
  InbvAcquireLock();
  RotBarSelection = v1;
  if ( v1 == 1 )
    RotBarInit();
  return InbvReleaseLock();
}
