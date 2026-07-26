/*
 * XREFs of ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1C003C6DC
 * Callers:
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C00206B4 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C001B3C4 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 */

__int64 __fastcall ndisIfFindAvailableCompartmentId(const struct _GUID *a1)
{
  _LIST_ENTRY *Flink; // rdi
  unsigned int v2; // esi
  unsigned int v4; // ebx
  unsigned int v5; // eax
  bool v6; // cf

  Flink = ndisIfCompartmentList.Flink;
  v2 = 1;
  v4 = 1;
  if ( ndisIfCompartmentList.Flink == &ndisIfCompartmentList )
    goto LABEL_12;
  while ( 1 )
  {
    if ( v4 == 1 )
    {
      v5 = (unsigned int)Flink[1].Flink;
      v6 = v2 < v5;
      if ( v2 == v5 )
        v6 = ++v2 < v5;
      if ( v6 )
        v4 = v2;
    }
    if ( !(unsigned int)ndisCompareGuid((const struct _GUID *)&Flink[71].Blink, a1) )
      break;
    Flink = Flink->Flink;
    if ( Flink == &ndisIfCompartmentList )
      goto LABEL_11;
  }
  v4 = 0;
LABEL_11:
  if ( Flink == &ndisIfCompartmentList )
LABEL_12:
    v4 = v2;
  if ( v4 == -1 )
    return 0;
  return v4;
}
