/*
 * XREFs of ExCallCallBack @ 0x140428DC0
 * Callers:
 *     NtFindAtom @ 0x140428C60 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x140429010 (PsInvokeWin32Callout.c)
 *     PsConvertToGuiThread @ 0x14045D0C0 (PsConvertToGuiThread.c)
 *     NtDeleteAtom @ 0x1404A3520 (NtDeleteAtom.c)
 *     NtQueryInformationAtom @ 0x1404CBF08 (NtQueryInformationAtom.c)
 *     NtAddAtomEx @ 0x1404CD2B8 (NtAddAtomEx.c)
 *     KeUserModeCallback @ 0x140515D20 (KeUserModeCallback.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140013F40 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140013F80 (ExReferenceCallBackBlock.c)
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
