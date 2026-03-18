/*
 * XREFs of Callout @ 0x1404B9134
 * Callers:
 *     <none>
 * Callees:
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = sub_1404667A0(
                   *(unsigned int **)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (_QWORD *)Parameter + 2,
                   Parameter + 6);
}
