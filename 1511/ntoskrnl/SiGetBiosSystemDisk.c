/*
 * XREFs of SiGetBiosSystemDisk @ 0x14069230C
 * Callers:
 *     SiGetSystemDisk @ 0x140518884 (SiGetSystemDisk.c)
 *     SiGetBiosSystemPartition @ 0x140692430 (SiGetBiosSystemPartition.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQuerySymbolicLinkObject @ 0x140152F00 (ZwQuerySymbolicLinkObject.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140692568 (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     SiOpenArcNameObject @ 0x140692680 (SiOpenArcNameObject.c)
 */

__int64 __fastcall SiGetBiosSystemDisk(wchar_t **a1)
{
  wchar_t *v2; // rdi
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  wchar_t *PoolWithTag; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  ULONG ReturnedLength; // [rsp+58h] [rbp+28h] BYREF
  HANDLE LinkHandle; // [rsp+60h] [rbp+30h]

  LinkHandle = 0LL;
  v2 = 0LL;
  if ( !(unsigned __int8)SiIsWinPeHardDiskZeroUfdBoot()
    || (v3 = SiOpenArcNameObject(L"\\ArcName\\multi(0)disk(0)rdisk(1)"), v3 == -1073740718) )
  {
    v3 = SiOpenArcNameObject(L"\\ArcName\\multi(0)disk(0)rdisk(0)");
  }
  if ( v3 >= 0 )
  {
    ReturnedLength = 0;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v4 = ZwQuerySymbolicLinkObject(LinkHandle, &DestinationString, &ReturnedLength);
    v3 = v4;
    if ( v4 == -1073741789 )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, ReturnedLength + 2LL, 0x4B505953u);
      v2 = PoolWithTag;
      if ( PoolWithTag )
      {
        DestinationString.Buffer = PoolWithTag;
        DestinationString.MaximumLength = ReturnedLength;
        v3 = ZwQuerySymbolicLinkObject(LinkHandle, &DestinationString, 0LL);
        if ( v3 >= 0 )
        {
          v2[(unsigned __int64)DestinationString.Length >> 1] = 0;
          *a1 = v2;
        }
      }
      else
      {
        v3 = -1073741670;
      }
    }
    else if ( v4 >= 0 )
    {
      v3 = -1073741823;
    }
  }
  if ( LinkHandle )
    ZwClose(LinkHandle);
  if ( v3 < 0 && v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v3;
}
