/*
 * XREFs of GetMenuStateWindow @ 0x1C021643C
 * Callers:
 *     NtUserEndMenu @ 0x1C0113C70 (NtUserEndMenu.c)
 *     xxxHandleMenuMessages @ 0x1C0137D0C (xxxHandleMenuMessages.c)
 *     xxxMNDragOver @ 0x1C023B7B8 (xxxMNDragOver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMenuStateWindow(_QWORD *a1)
{
  _QWORD *v2; // rax

  if ( !a1 )
    return 0LL;
  v2 = (_QWORD *)*a1;
  if ( (*(_DWORD *)*a1 & 8) != 0 )
    return v2[2];
  if ( v2[3] )
    return v2[3];
  return v2[7];
}
