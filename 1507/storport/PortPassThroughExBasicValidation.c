/*
 * XREFs of PortPassThroughExBasicValidation @ 0x1C003A17C
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C0054D60 (PortPassThroughExSendAsync.c)
 *     PortPassThroughGetAddress @ 0x1C0055238 (PortPassThroughGetAddress.c)
 *     PortPassThroughSetAddress @ 0x1C00554D0 (PortPassThroughSetAddress.c)
 * Callees:
 *     RtlULongAdd @ 0x1C003038C (RtlULongAdd.c)
 */

__int64 __fastcall PortPassThroughExBasicValidation(IRP *a1)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _IRP *MasterIrp; // rdi
  unsigned int v3; // r9d
  int v5; // edx
  ULONG v6; // ecx
  int v7; // r9d
  ULONG v8; // r10d
  int MdlAddress; // eax
  ULONG v10; // eax
  ULONG pulResult; // [rsp+30h] [rbp+8h] BYREF

  pulResult = 0;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a1->AssociatedIrp.MasterIrp;
  v3 = IoIs32bitProcess(a1) != 0 ? 52 : 64;
  if ( CurrentStackLocation->Parameters.Create.Options < v3 )
    return 3221225507LL;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v3 )
    return 3221225561LL;
  if ( RtlULongAdd(MasterIrp->AssociatedIrp.IrpCount, HIDWORD(MasterIrp->MdlAddress), &pulResult) >= 0 )
  {
    MdlAddress = (int)MasterIrp->MdlAddress;
    if ( MdlAddress )
    {
      if ( v5 )
      {
        v10 = v7 + MdlAddress - 1;
        if ( v6 >= v10 && v8 > v10 && v8 >= pulResult )
          return BYTE2(MasterIrp->Flags) > 3u ? 0xC000000D : 0;
      }
    }
  }
  return 3221225485LL;
}
