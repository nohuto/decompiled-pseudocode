/*
 * XREFs of PortPassThroughSetAddress @ 0x1C0060B34
 * Callers:
 *     RaUnitScsiPassThroughIoctl @ 0x1C005F0DC (RaUnitScsiPassThroughIoctl.c)
 * Callees:
 *     PortPassThroughBasicValidation @ 0x1C004394C (PortPassThroughBasicValidation.c)
 *     PortPassThroughExBasicValidation @ 0x1C0043C98 (PortPassThroughExBasicValidation.c)
 */

__int64 __fastcall PortPassThroughSetAddress(IRP *a1, char a2, char a3, char a4)
{
  char v8; // di
  __int64 result; // rax
  _IRP *v10; // rax
  _IRP *MasterIrp; // rcx
  char *v12; // rax

  if ( ((a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 315460) & 0xFFFFFFFB) != 0 )
  {
    v8 = 0;
    result = PortPassThroughBasicValidation(a1);
  }
  else
  {
    v8 = 1;
    result = PortPassThroughExBasicValidation(a1);
  }
  if ( (int)result >= 0 )
  {
    if ( v8 )
    {
      MasterIrp = a1->AssociatedIrp.MasterIrp;
      v12 = (char *)MasterIrp + (unsigned int)MasterIrp->AssociatedIrp.IrpCount;
      if ( *(_WORD *)v12 >= 2u || HIDWORD(MasterIrp->MdlAddress) < 0xC )
        return 3221225485LL;
      *(_DWORD *)v12 = 1;
      *((_DWORD *)v12 + 1) = 4;
      v12[8] = a2;
      v12[9] = a3;
      v12[10] = a4;
      v12[11] = 0;
    }
    else
    {
      v10 = a1->AssociatedIrp.MasterIrp;
      HIBYTE(v10->Size) = a2;
      *((_BYTE *)&v10->Size + 2) = a3;
      *((_BYTE *)&v10->Size + 3) = a4;
    }
    return 0LL;
  }
  return result;
}
