/*
 * XREFs of IopDeviceRemovalForResetComplete @ 0x14062C74C
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     RtlUnicodeStringCopyString @ 0x1401CD280 (RtlUnicodeStringCopyString.c)
 *     Template_hzr0qqhzr4 @ 0x1401CD3F8 (Template_hzr0qqhzr4.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopFreeResetRemovalContext @ 0x14062C880 (IopFreeResetRemovalContext.c)
 *     PnpTraceDeviceRemovalForResetComplete @ 0x140648F5C (PnpTraceDeviceRemovalForResetComplete.c)
 */

__int64 __fastcall IopDeviceRemovalForResetComplete(__int64 a1, const wchar_t *a2)
{
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // rax

  if ( !a1 )
    __fastfail(5u);
  v3 = *(_DWORD *)(a1 + 164);
  if ( v3 >= 0 || !*(_DWORD *)(a1 + 160) )
  {
    v4 = *(_QWORD *)(a1 + 184);
    v5 = v4 ? *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) : 0LL;
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 168);
      Template_hzr0qqhzr4(
        *(_QWORD *)(v6 + 56),
        *(_QWORD *)(v6 + 48),
        **(_WORD **)(v6 + 56) >> 1,
        *(_WORD *)(v5 + 40) >> 1,
        *(_QWORD *)(v5 + 48),
        v3,
        **(_DWORD **)(v6 + 48),
        **(_WORD **)(v6 + 56) >> 1,
        *(_QWORD *)(*(_QWORD *)(v6 + 56) + 8LL));
    }
  }
  if ( v3 >= 0 || *(_DWORD *)(a1 + 176) >= (unsigned int)PnpResetMaximumRetryAttempts )
  {
    PnpTraceDeviceRemovalForResetComplete(a1);
    return IopFreeResetRemovalContext(a1);
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 168) + 64LL), 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 168), 0x4B706E50u);
    *(_QWORD *)(a1 + 168) = 0LL;
    *(_DWORD *)(a1 + 192) = 0;
    *(_DWORD *)(a1 + 160) = v3;
    RtlUnicodeStringCopyString((PUNICODE_STRING)(a1 + 200), a2);
    ++*(_DWORD *)(a1 + 176);
    return KiSetTimerEx(a1, PnpResetRetryInterval, 0, 0, a1 + 64);
  }
}
