/*
 * XREFs of ?ndisValidateOffsetAndLength@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAPEAX@Z @ 0x1C00CD1B0
 * Callers:
 *     ?ndisValidateUnicodeStringFromOffsetAndLength@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNICODE_STRING@@@Z @ 0x1C00CD20C (-ndisValidateUnicodeStringFromOffsetAndLength@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_U.c)
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidateOffsetAndLength(
        struct _IRP *a1,
        const struct _NDIS_OFFSET_AND_LENGTH *a2,
        const struct _NDIS_OFFSET_AND_LENGTH **a3)
{
  _IRP::<unnamed_type_AssociatedIrp> v3; // r11
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char *v5; // r10
  const struct _NDIS_OFFSET_AND_LENGTH *v6; // r9
  const struct _NDIS_OFFSET_AND_LENGTH *v7; // rax
  unsigned __int64 v8; // rcx

  v3.MasterIrp = (_IRP *)a1->AssociatedIrp;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  *a3 = 0LL;
  v5 = (char *)v3.MasterIrp + CurrentStackLocation->Parameters.Create.Options;
  if ( (_IRP *)a2 < v3.MasterIrp )
    return 0;
  v6 = (const struct _NDIS_OFFSET_AND_LENGTH *)((char *)a2 + 8);
  if ( (char *)a2 + 8 > v5 )
    return 0;
  v7 = (const struct _NDIS_OFFSET_AND_LENGTH *)((char *)v3.MasterIrp + *(unsigned int *)a2);
  v8 = (unsigned __int64)v7 + *((unsigned int *)a2 + 1);
  if ( (_IRP *)v7 < v3.MasterIrp
    || v8 < (unsigned __int64)v7
    || v8 > (unsigned __int64)v5
    || v7 <= a2 && v8 > (unsigned __int64)a2 )
  {
    return 0;
  }
  if ( v7 <= v6 && v8 > (unsigned __int64)v6 )
    return 0;
  *a3 = v7;
  return 1;
}
