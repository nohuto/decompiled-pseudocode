/*
 * XREFs of NtDeleteAtom @ 0x1404A3520
 * Callers:
 *     <none>
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x140013F00 (MmSessionGetWin32Callouts.c)
 *     ExCallCallBack @ 0x140428DC0 (ExCallCallBack.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1404A3568 (RtlDeleteAtomFromAtomTable.c)
 */

NTSTATUS __stdcall NtDeleteAtom(RTL_ATOM Atom)
{
  union _RTL_RUN_ONCE *Win32Callouts; // rax
  PRTL_ATOM_TABLE AtomTable; // [rsp+38h] [rbp+10h] BYREF

  AtomTable = 0LL;
  Win32Callouts = MmSessionGetWin32Callouts();
  ExCallCallBack((signed __int64 *)Win32Callouts, 2LL, (__int64)&AtomTable);
  if ( AtomTable )
    return RtlDeleteAtomFromAtomTable(AtomTable, Atom);
  else
    return -1073741790;
}
