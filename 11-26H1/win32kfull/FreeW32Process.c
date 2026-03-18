/*
 * XREFs of FreeW32Process @ 0x1401F23E4
 * Callers:
 *     W32pProcessCallout @ 0x1401F2240 (W32pProcessCallout.c)
 *     GreSystemProcessCallout @ 0x14028CC90 (GreSystemProcessCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeW32Process(__int64 a1, unsigned int a2)
{
  vMarkFreeW32Process();
  return DereferenceW32ProcessEx(a1, a2);
}
