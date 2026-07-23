/*
 * XREFs of TtmiGetTerminalById @ 0x140677AD0
 * Callers:
 *     TtmNotifyDeviceInput @ 0x140676EB8 (TtmNotifyDeviceInput.c)
 *     TtmpPushTerminalState @ 0x14067760C (TtmpPushTerminalState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TtmiGetTerminalById(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v3; // rdx
  unsigned int v4; // r9d
  _QWORD *v5; // r10
  _QWORD *v6; // rax

  v3 = (_QWORD *)(a2 + 40);
  v4 = 0;
  v5 = 0LL;
  v6 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 == v3 )
    goto LABEL_5;
  do
  {
    v5 = v6;
    if ( *((_DWORD *)v6 + 7) == a3 )
      break;
    v6 = (_QWORD *)*v6;
    v5 = 0LL;
  }
  while ( v6 != v3 );
  if ( !v5 )
LABEL_5:
    v4 = -1073741275;
  *a1 = v5;
  return v4;
}
