/*
 * XREFs of ExCallCallBack @ 0x14042251C
 * Callers:
 *     NtFindAtom @ 0x1404223CC (NtFindAtom.c)
 *     KeUserModeCallback @ 0x140452450 (KeUserModeCallback.c)
 *     NtQueryInformationAtom @ 0x140504728 (NtQueryInformationAtom.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 */

__int64 __fastcall ExCallCallBack(__int64 a1, __int64 a2, __int64 a3)
{
  struct _EX_RUNDOWN_REF *v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rdi
  unsigned int v7; // ebx

  v5 = ExReferenceCallBackBlock((signed __int64 *)&PsWin32CallBack);
  v6 = v5;
  if ( v5 )
  {
    v7 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v5[1].Count)(v5[2].Count, a2, a3);
    ExDereferenceCallBackBlock((signed __int64 *)&PsWin32CallBack, v6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
