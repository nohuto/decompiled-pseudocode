/*
 * XREFs of ExCallCallBack @ 0x1403F6504
 * Callers:
 *     KeUserModeCallback @ 0x1403F17A0 (KeUserModeCallback.c)
 *     NtFindAtom @ 0x1403F63B0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 *     NtQueryInformationAtom @ 0x14045FBEC (NtQueryInformationAtom.c)
 *     NtAddAtomEx @ 0x14045FD74 (NtAddAtomEx.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400384D0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140038510 (ExReferenceCallBackBlock.c)
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
