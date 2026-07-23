/*
 * XREFs of ExCallCallBack @ 0x140427C90
 * Callers:
 *     NtFindAtom @ 0x140427B30 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 *     PsConvertToGuiThread @ 0x14045BF90 (PsConvertToGuiThread.c)
 *     NtQueryInformationAtom @ 0x1404B1934 (NtQueryInformationAtom.c)
 *     NtAddAtomEx @ 0x1404B2CE4 (NtAddAtomEx.c)
 *     KeUserModeCallback @ 0x1404F9110 (KeUserModeCallback.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     NtDeleteAtom @ 0x14051B920 (NtDeleteAtom.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140013AC0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140013B00 (ExReferenceCallBackBlock.c)
 */

__int64 __fastcall ExCallCallBack(signed __int64 *a1, __int64 a2, __int64 a3)
{
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rdi
  unsigned int v8; // ebx

  v6 = ExReferenceCallBackBlock(a1);
  v7 = v6;
  if ( v6 )
  {
    v8 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v6[1].Count)(v6[2].Count, a2, a3);
    ExDereferenceCallBackBlock(a1, v7);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
