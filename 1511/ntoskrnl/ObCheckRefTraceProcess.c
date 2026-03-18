/*
 * XREFs of ObCheckRefTraceProcess @ 0x1403E3858
 * Callers:
 *     PspInsertProcess @ 0x1403E3600 (PspInsertProcess.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsGetProcessImageFileName @ 0x1400E7418 (PsGetProcessImageFileName.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x14043C2B0 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall ObCheckRefTraceProcess(__int64 a1)
{
  __int64 ProcessImageFileName; // rax
  unsigned __int8 *v4; // rsi
  __int64 v5; // rdi
  unsigned __int16 v6; // di
  wchar_t *Buffer; // rcx
  wchar_t v8; // ax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  signed __int8 v11; // cf
  __int64 v12; // rdi
  UNICODE_STRING String1; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&String1.MaximumLength = 0LL;
  String1.Length = 0;
  *(_DWORD *)((char *)&String1.Buffer + 2) = 0;
  HIWORD(String1.Buffer) = 0;
  if ( (ObpTraceFlags & 0x20) == 0 )
    return 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(a1);
  v4 = (unsigned __int8 *)ProcessImageFileName;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_BYTE *)(ProcessImageFileName + v5) );
  v6 = 2 * v5;
  if ( !v6 )
    return 0LL;
  String1.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v6 + 2LL, 0x7452624Fu);
  Buffer = String1.Buffer;
  if ( String1.Buffer )
  {
    String1.Length = v6;
    String1.MaximumLength = v6 + 2;
    do
    {
      v8 = *v4++;
      *Buffer++ = v8;
    }
    while ( v8 );
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v10 = KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0LL);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v10, (ULONG_PTR)&ObpStackTraceLock);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    if ( (ObpTraceFlags & 0x20) != 0 && RtlPrefixUnicodeString(&String1, ObpTraceProcessName, 1u) )
      _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x200u);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(String1.Buffer, 0x7452624Fu);
    return 0LL;
  }
  return 3221225495LL;
}
