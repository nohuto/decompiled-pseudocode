/*
 * XREFs of Callout @ 0x1404A4AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = sub_1404A6E00(
                   *(_QWORD *)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (int)Parameter + 16,
                   (__int64)(Parameter + 6));
}
