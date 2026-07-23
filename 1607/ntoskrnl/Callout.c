/*
 * XREFs of Callout @ 0x14051CEE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = sub_14051F200(
                   *(_QWORD *)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (int)Parameter + 16,
                   (__int64)(Parameter + 6));
}
