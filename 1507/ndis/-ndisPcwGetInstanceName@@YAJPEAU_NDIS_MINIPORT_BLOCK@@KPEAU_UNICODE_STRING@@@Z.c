/*
 * XREFs of ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00D88C8
 * Callers:
 *     ?ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00D8828 (-ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8960 (-ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z @ 0x1C00D8B70 (-ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C00110D4 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0064798 (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0064824 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00648A8 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8B5C (-ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

int __fastcall ndisPcwGetInstanceName(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3)
{
  int result; // eax
  const struct _UNICODE_STRING *MiniportName; // rax

  if ( (_DWORD)a2 == -2 )
    return RtlUnicodeStringCopy(a3, a2);
  if ( (_DWORD)a2 == 4095 )
    result = RtlUnicodeStringCopyString(a3, &a2->Length);
  else
    result = RtlUnicodeStringPrintf(a3, L"%u, ", (unsigned int)a2);
  if ( result >= 0 )
  {
    MiniportName = ndisPcwGetMiniportName(a1);
    return RtlUnicodeStringCat(a3, MiniportName);
  }
  return result;
}
