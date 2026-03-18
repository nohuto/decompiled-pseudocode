/*
 * XREFs of PsGetThreadTeb @ 0x1400F6828
 * Callers:
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1405188AC (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
