/*
 * XREFs of sub_14017D0A4 @ 0x14017D0A4
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x1401076B0 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x1401091F0 (KeReleaseSpinLockFromDpcLevel.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 (__fastcall *__fastcall sub_14017D0A4(__int64 a1))(__int64, _QWORD, _QWORD, _QWORD)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 (__fastcall *result)(__int64, _QWORD, _QWORD, _QWORD); // rax

  KeAcquireSpinLockAtDpcLevel(&KiHardwareTriggerLock);
  KeReleaseSpinLockFromDpcLevel(&KiHardwareTriggerLock);
  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)v2 )
  {
    v3 = *(_DWORD *)v2 - 1;
    *(_DWORD *)v2 = v3;
    if ( !v3 )
    {
      memset((void *)(v2 + 8), 0, 0x40uLL);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v2 + 72) + 24LL))(
        *(_QWORD *)(v2 + 72),
        *(_QWORD *)(*(_QWORD *)(v2 + 72) + 32LL),
        *(_QWORD *)(*(_QWORD *)(v2 + 72) + 40LL),
        *(_QWORD *)(*(_QWORD *)(v2 + 72) + 48LL));
    }
  }
  result = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v2 + 32);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))result(
                                                                      v2 + 8,
                                                                      *(_QWORD *)(v2 + 40),
                                                                      *(_QWORD *)(v2 + 48),
                                                                      *(_QWORD *)(v2 + 56));
  return result;
}
