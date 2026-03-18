/*
 * XREFs of _GetWindowIcon @ 0x1C01235D8
 * Callers:
 *     NtUserInternalGetWindowIcon @ 0x1C0123570 (NtUserInternalGetWindowIcon.c)
 *     xxxSendShutdownData @ 0x1C0215440 (xxxSendShutdownData.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     HMValidateHandleNoRip @ 0x1C007E714 (HMValidateHandleNoRip.c)
 *     _DuplicateCursor @ 0x1C012366C (_DuplicateCursor.c)
 */

__int64 __fastcall GetWindowIcon(__int64 a1, int a2)
{
  int v3; // edi
  unsigned __int16 v4; // ax
  __int64 Prop; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( a2 == 1 )
  {
    v3 = 1;
    v4 = *(_WORD *)(gpsi + 1358LL);
  }
  else
  {
    v3 = 0;
    v4 = *(_WORD *)(gpsi + 1356LL);
  }
  Prop = GetProp(a1, v4, 1LL);
  v6 = HMValidateHandleNoRip(Prop, 3);
  if ( (v6
     || ((v7 = *(_QWORD *)(a1 + 152), !v3) ? (v6 = *(_QWORD *)(v7 + 152)) : (v6 = *(_QWORD *)(v7 + 112)),
         v6 || (v6 = qword_1C031EA98) != 0))
    && (v8 = DuplicateCursor(v6)) != 0 )
  {
    return *(_QWORD *)v8;
  }
  else
  {
    return 0LL;
  }
}
