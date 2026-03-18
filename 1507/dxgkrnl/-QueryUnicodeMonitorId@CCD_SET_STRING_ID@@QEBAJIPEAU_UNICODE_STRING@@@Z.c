/*
 * XREFs of ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x1C006722C
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C009D610 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C0066F34 (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::QueryUnicodeMonitorId(
        CCD_SET_STRING_ID *this,
        __int64 a2,
        struct _UNICODE_STRING *a3,
        __int64 a4)
{
  __int64 v4; // rsi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  NTSTATUS v10; // eax
  _QWORD *v12; // rax
  _STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned int)a2;
  *(_QWORD *)&SourceString.MaximumLength = 0LL;
  SourceString.Length = 0;
  *(_DWORD *)((char *)&SourceString.Buffer + 2) = 0;
  HIWORD(SourceString.Buffer) = 0;
  v7 = CCD_SET_STRING_ID::QueryMonitorId(this, a2, &SourceString, a4);
  v9 = v7;
  if ( v7 < 0 || (v10 = RtlAnsiStringToUnicodeString(a3, &SourceString, 1u), v9 = v10, v10 < 0) )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v12[3] = v9;
    v12[4] = v4;
    v12[5] = a3;
    v12[6] = this;
    WdLogEvent5_WdError(v12);
  }
  return (unsigned int)v9;
}
