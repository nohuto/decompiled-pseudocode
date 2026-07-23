/*
 * XREFs of RtlpNotOwnerCriticalSection @ 0x1800D3BC0
 * Callers:
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 * Callees:
 *     RtlDecodePointer @ 0x180051BD0 (RtlDecodePointer.c)
 *     DbgPrintEx @ 0x18005BFB0 (DbgPrintEx.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

struct _PEB *__fastcall RtlpNotOwnerCriticalSection(_RTL_CRITICAL_SECTION *a1)
{
  struct _PEB *result; // rax
  _PEB_LDR_DATA *Ldr; // r8
  struct _TEB *v4; // rcx
  __int64 WowTebOffset; // rax

  result = NtCurrentPeb();
  Ldr = result->Ldr;
  if ( !Ldr->ShutdownInProgress
    || a1 == &LdrpLoaderLock && (result = (struct _PEB *)NtCurrentTeb(), Ldr->ShutdownThreadId != result->IFEOKey) )
  {
    if ( !UseWOW64 )
      goto LABEL_16;
    v4 = NtCurrentTeb();
    WowTebOffset = v4->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v4 = (struct _TEB *)((char *)v4 + WowTebOffset);
    }
    else
    {
      v4 = 0LL;
    }
    result = (struct _PEB *)LODWORD(v4->NtTib.Self);
    if ( !HIDWORD(result->Mutant) || !*(_BYTE *)(HIDWORD(result->Mutant) + 0x28LL) )
    {
LABEL_16:
      if ( NtCurrentPeb()->BeingDebugged )
      {
        DbgPrintEx(
          0x65u,
          0,
          "NTDLL: Calling thread (%X) not owner of CritSect: %p  Owner ThreadId: %p\n",
          NtCurrentTeb()->ClientId.UniqueThread,
          a1,
          a1->OwningThread);
        __debugbreak();
      }
      RtlDecodePointer(RtlpUnhandledExceptionFilter);
      RtlRaiseStatus(-1073741212);
    }
  }
  return result;
}
