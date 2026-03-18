/*
 * XREFs of PspIoRateEntryActivate @ 0x1404F1AB0
 * Callers:
 *     PspSetJobIoRateControl @ 0x1404F1E7C (PspSetJobIoRateControl.c)
 *     PspSetJobIoRateControlForVolume @ 0x140680918 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14001F3AC (IoDiskIoAttributionDereference.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     IoStopIoRateControl @ 0x1400B6288 (IoStopIoRateControl.c)
 *     IoStartIoRateControl @ 0x1400B6C74 (IoStartIoRateControl.c)
 *     IoStopDiskIoAttributionForContext @ 0x1400B71B8 (IoStopDiskIoAttributionForContext.c)
 *     IoStartDiskIoAttributionForContext @ 0x1400B720C (IoStartDiskIoAttributionForContext.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwCreateFile @ 0x14015A720 (ZwCreateFile.c)
 *     PspIoRateEntryDeactivate @ 0x1404F1A38 (PspIoRateEntryDeactivate.c)
 *     IoDiskIoAttributionAllocate @ 0x1404F2330 (IoDiskIoAttributionAllocate.c)
 */

__int64 __fastcall PspIoRateEntryActivate(struct _EX_RUNDOWN_REF *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  int v5; // edx
  struct _EX_RUNDOWN_REF *v6; // rbx
  __int64 v10; // r8
  int started; // esi
  __int64 v12; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int64 v19; // [rsp+100h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+108h] [rbp+7Fh] BYREF

  v19 = 0LL;
  v5 = 0;
  v6 = 0LL;
  Handle = 0LL;
  if ( a4 )
    *a4 = 0;
  if ( *(_QWORD *)(a3 + 24) )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a3 + 24));
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    started = ZwCreateFile(&Handle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
    if ( started < 0 )
      goto LABEL_13;
    v14 = IoDiskIoAttributionAllocate(a2, *(_QWORD *)(a2 + 1344));
    v6 = (struct _EX_RUNDOWN_REF *)v14;
    if ( !v14 )
    {
      started = -1073741670;
      goto LABEL_13;
    }
    IoStartDiskIoAttributionForContext(v14);
    v5 = (int)Handle;
    v10 = (__int64)v6;
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 1344);
  }
  started = IoStartIoRateControl(a3, v5, v10, (__int64)&v19, (__int64)&v15);
  if ( started < 0 )
  {
    v12 = v19;
  }
  else
  {
    if ( a1[5].Count )
    {
      PspIoRateEntryDeactivate(a1);
      *a4 = 1;
    }
    a1[5].Count = v19;
    a1[3].Count = v15;
    a1[6].Count = (unsigned __int64)v6;
    v6 = 0LL;
    _InterlockedExchange64((volatile __int64 *)&a1[4], 0LL);
    v12 = 0LL;
    started = 0;
  }
  if ( v6 )
  {
    IoStopDiskIoAttributionForContext(v6);
    IoDiskIoAttributionDereference((__int64)v6);
  }
  if ( v12 )
    IoStopIoRateControl(v12);
LABEL_13:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)started;
}
