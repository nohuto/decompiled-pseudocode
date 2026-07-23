/*
 * XREFs of RtlpNotOwnerCriticalSection @ 0x1800C2120
 * Callers:
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 * Callees:
 *     DbgPrintEx @ 0x18000F9B0 (DbgPrintEx.c)
 *     RtlDecodePointer @ 0x180066340 (RtlDecodePointer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
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
