/*
 * XREFs of ObCheckRefTraceProcess @ 0x14046AC74
 * Callers:
 *     PspInsertProcess @ 0x14046A910 (PspInsertProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PsGetProcessImageFileName @ 0x140120260 (PsGetProcessImageFileName.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x1404369B0 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall ObCheckRefTraceProcess(__int64 a1)
{
  __int64 ProcessImageFileName; // rax
  unsigned __int8 *v4; // rsi
  __int64 v5; // rdi
  unsigned __int16 v6; // di
  __int64 v7; // r9
  wchar_t *Buffer; // rcx
  wchar_t v9; // ax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  signed __int8 v13; // cf
  __int64 v14; // rdi
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
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
      v9 = *v4++;
      *Buffer++ = v9;
    }
    while ( v9 );
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v11 = KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0LL, v7);
    v13 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
    v14 = v11;
    if ( v13 )
      ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v11, (ULONG_PTR)&ObpStackTraceLock, v12);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    if ( (ObpTraceFlags & 0x20) != 0 && RtlPrefixUnicodeString(&String1, ObpTraceProcessName, 1u) )
      _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x200u);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    v15 = KeGetCurrentThread();
    v16 = v15->SpecialApcDisable + 1;
    v15->SpecialApcDisable = v16;
    if ( !v16 && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
      KiCheckForKernelApcDelivery();
    ExFreePoolWithTag(String1.Buffer, 0x7452624Fu);
    return 0LL;
  }
  return 3221225495LL;
}
