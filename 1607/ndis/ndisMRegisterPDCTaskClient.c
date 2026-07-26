/*
 * XREFs of ndisMRegisterPDCTaskClient @ 0x1C00D479C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     PdcTaskClientRegister @ 0x1C00E4A40 (PdcTaskClientRegister.c)
 */

void __fastcall ndisMRegisterPDCTaskClient(__int64 a1)
{
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(0x95u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a1);
  if ( (int)PdcTaskClientRegister(a1, a1 + 5672) < 0 && (unsigned __int8)byte_1C00895D2 >= 2u )
    WPP_SF_q(0x96u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a1);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(0x97u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a1);
}
