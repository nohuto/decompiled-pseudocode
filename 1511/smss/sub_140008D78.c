/*
 * XREFs of sub_140008D78 @ 0x140008D78
 * Callers:
 *     sub_140005E5C @ 0x140005E5C (sub_140005E5C.c)
 *     sub_1400066B0 @ 0x1400066B0 (sub_1400066B0.c)
 *     sub_140006D94 @ 0x140006D94 (sub_140006D94.c)
 *     sub_140007470 @ 0x140007470 (sub_140007470.c)
 *     sub_1400089B0 @ 0x1400089B0 (sub_1400089B0.c)
 *     sub_140008BD0 @ 0x140008BD0 (sub_140008BD0.c)
 *     sub_140008E98 @ 0x140008E98 (sub_140008E98.c)
 *     sub_1400092A8 @ 0x1400092A8 (sub_1400092A8.c)
 *     sub_140009540 @ 0x140009540 (sub_140009540.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140008D78(_QWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax

  v1 = *a1;
  v2 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v2 != a1 )
    __fastfail(3u);
  *v2 = v1;
  *(_QWORD *)(v1 + 8) = v2;
  return sub_140008DA4(a1);
}
