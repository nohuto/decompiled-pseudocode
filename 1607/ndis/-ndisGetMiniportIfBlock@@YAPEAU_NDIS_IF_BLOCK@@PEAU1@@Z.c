/*
 * XREFs of ?ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z @ 0x1C009A5C0
 * Callers:
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0099450 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0099D60 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_IF_BLOCK *__fastcall ndisGetMiniportIfBlock(struct _NDIS_IF_BLOCK *a1)
{
  if ( a1->IsNdisFilter )
    return *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)&a1->Miniport->Reserved4.Length + 4096LL);
  else
    return a1;
}
