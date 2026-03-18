/*
 * XREFs of _GetWindowIcon @ 0x1C0153630
 * Callers:
 *     NtUserInternalGetWindowIcon @ 0x1C0152C40 (NtUserInternalGetWindowIcon.c)
 *     xxxSendShutdownData @ 0x1C01546B0 (xxxSendShutdownData.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     _DuplicateCursor @ 0x1C01536CC (_DuplicateCursor.c)
 */

__int64 __fastcall GetWindowIcon(__int64 a1, int a2)
{
  int v3; // edi
  unsigned __int16 v4; // ax
  __int64 Prop; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

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
  LOBYTE(v6) = 3;
  v9 = HMValidateHandleNoRip(Prop, v6, v7, v8);
  if ( (v9
     || ((v10 = *(_QWORD *)(a1 + 152), !v3) ? (v9 = *(_QWORD *)(v10 + 152)) : (v9 = *(_QWORD *)(v10 + 112)),
         v9 || (v9 = qword_1C0321A08) != 0))
    && (v11 = DuplicateCursor(v9)) != 0 )
  {
    return *(_QWORD *)v11;
  }
  else
  {
    return 0LL;
  }
}
