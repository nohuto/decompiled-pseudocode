/*
 * XREFs of PortPassThroughGetAddress @ 0x1C0059104
 * Callers:
 *     RaidAdapterPassThrough @ 0x1C0056D68 (RaidAdapterPassThrough.c)
 * Callees:
 *     PortPassThroughBasicValidation @ 0x1C003CB0C (PortPassThroughBasicValidation.c)
 *     PortPassThroughExBasicValidation @ 0x1C003CBAC (PortPassThroughExBasicValidation.c)
 */

__int64 __fastcall PortPassThroughGetAddress(IRP *a1, _BYTE *a2, _BYTE *a3, char *a4)
{
  char v8; // di
  __int64 result; // rax
  _IRP *MasterIrp; // rcx
  char v11; // al
  char *v12; // rcx

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
    if ( !v8 )
    {
      MasterIrp = a1->AssociatedIrp.MasterIrp;
      *a2 = HIBYTE(MasterIrp->Size);
      *a3 = *((_BYTE *)&MasterIrp->Size + 2);
      v11 = *((_BYTE *)&MasterIrp->Size + 3);
LABEL_7:
      *a4 = v11;
      return 0LL;
    }
    v12 = (char *)a1->AssociatedIrp.MasterIrp + (unsigned int)a1->AssociatedIrp.MasterIrp->AssociatedIrp.IrpCount;
    if ( *(_WORD *)v12 == 1 && *((_DWORD *)v12 + 1) >= 4u )
    {
      *a2 = v12[8];
      *a3 = v12[9];
      v11 = v12[10];
      goto LABEL_7;
    }
    return 3221225485LL;
  }
  return result;
}
