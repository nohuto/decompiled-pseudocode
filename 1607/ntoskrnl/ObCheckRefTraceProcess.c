/*
 * XREFs of ObCheckRefTraceProcess @ 0x14045F818
 * Callers:
 *     PspInsertProcess @ 0x14045F5C0 (PspInsertProcess.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     PsGetProcessImageFileName @ 0x1400A5364 (PsGetProcessImageFileName.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x1404FDFD0 (RtlPrefixUnicodeString.c)
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
  _BYTE *v10; // rax
  signed __int8 v11; // cf
  _BYTE *v12; // rdi
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
    v10 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v10, (ULONG_PTR)&ObpStackTraceLock);
    if ( v12 )
      v12[26] |= 1u;
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
