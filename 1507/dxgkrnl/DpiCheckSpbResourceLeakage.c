/*
 * XREFs of DpiCheckSpbResourceLeakage @ 0x1C0028C10
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C0167A10 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DpiDeleteSpbResourceRecord @ 0x1C016F428 (DpiDeleteSpbResourceRecord.c)
 */

void __fastcall DpiCheckSpbResourceLeakage(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rax

  v1 = a1 + 1448;
  if ( *(_QWORD *)v1 != v1 )
  {
    v2 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v2[3] = DpiCheckSpbResourceLeakage;
    v2[4] = *(_QWORD *)v1;
    v2[5] = -1073741823LL;
    WdLogEvent5_WdError(v2);
    while ( *(_QWORD *)v1 != v1 )
    {
      *(_DWORD *)(*(_QWORD *)v1 + 48LL) = 0;
      DpiDeleteSpbResourceRecord();
    }
  }
}
