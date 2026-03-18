/*
 * XREFs of Callout @ 0x1404527D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = sub_140511D20(
                   *(_QWORD *)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (int)Parameter + 16,
                   (__int64)(Parameter + 6));
}
