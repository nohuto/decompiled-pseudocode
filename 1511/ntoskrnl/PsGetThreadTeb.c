/*
 * XREFs of PsGetThreadTeb @ 0x1400E1364
 * Callers:
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1404A53C8 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
