/*
 * XREFs of PsGetThreadTeb @ 0x140119774
 * Callers:
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1405315F4 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
