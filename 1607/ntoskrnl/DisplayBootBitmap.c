/*
 * XREFs of DisplayBootBitmap @ 0x14013C65C
 * Callers:
 *     DisplayFilter @ 0x1401B0E7C (DisplayFilter.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     InbvReleaseResources @ 0x14013C6B0 (InbvReleaseResources.c)
 *     InbvIsBootDriverInstalled @ 0x14013C73C (InbvIsBootDriverInstalled.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     InbvAcquireLock @ 0x1401C3620 (InbvAcquireLock.c)
 *     InbvBitBlt @ 0x1401C3644 (InbvBitBlt.c)
 *     InbvGetResourceAddress @ 0x1401C36D4 (InbvGetResourceAddress.c)
 *     InbvReleaseLock @ 0x1401C371C (InbvReleaseLock.c)
 *     InbvSetScrollRegion @ 0x1401C375C (InbvSetScrollRegion.c)
 *     InbvSetTextColor @ 0x1401C377C (InbvSetTextColor.c)
 *     InbvSolidColorFill @ 0x1401C3798 (InbvSolidColorFill.c)
 *     RotBarInit @ 0x1401C38BC (RotBarInit.c)
 *     PsCreateSystemThread @ 0x1403E4710 (PsCreateSystemThread.c)
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
  if ( byte_140341C68 )
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
    if ( !byte_140341C68 )
      return result;
    goto LABEL_19;
  }
  if ( !(unsigned __int8)InbvIsBootDriverInstalled() )
    return InbvReleaseResources();
  qword_140323440 = (__int64 (__fastcall *)(_QWORD))DisplayFilter;
  v6 = InbvGetResourceAddress(1LL);
  v7 = InbvGetResourceAddress(4LL);
  if ( v6 )
  {
    v1 = 1;
    InbvBitBlt(v6, 0LL, 0LL);
  }
  if ( v7 )
    InbvBitBlt(v7, 0LL, 0LL);
  if ( !byte_140341C68 )
  {
    result = PsCreateSystemThread(&ThreadHandle, 0, 0LL, 0LL, 0LL, InbvRotateGuiBootDisplay, 0LL);
    if ( result >= 0 )
    {
      result = ZwClose(ThreadHandle);
      byte_140341C68 = 1;
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
