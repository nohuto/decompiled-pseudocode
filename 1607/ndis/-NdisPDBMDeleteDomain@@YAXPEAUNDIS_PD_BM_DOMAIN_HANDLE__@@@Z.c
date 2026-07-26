/*
 * XREFs of ?NdisPDBMDeleteDomain@@YAXPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@@Z @ 0x1C00E2050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisPDBMDeleteDomain(struct NDIS_PD_BM_DOMAIN_HANDLE__ *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x6D41444Eu);
}
