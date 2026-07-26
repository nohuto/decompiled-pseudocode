/*
 * XREFs of ndisCompleteLegacyRequest @ 0x1C0044D34
 * Callers:
 *     ndisMAbortRequests @ 0x1C001BE34 (ndisMAbortRequests.c)
 *     NdisMQueryInformationComplete @ 0x1C0025F80 (NdisMQueryInformationComplete.c)
 *     NdisMSetInformationComplete @ 0x1C0044230 (NdisMSetInformationComplete.c)
 * Callees:
 *     ndisMOidRequestCompleteInternal @ 0x1C0025D70 (ndisMOidRequestCompleteInternal.c)
 *     WPP_SF_qqqL @ 0x1C00446D4 (WPP_SF_qqqL.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

void __fastcall ndisCompleteLegacyRequest(__int64 a1, int a2, __int64 a3)
{
  KIRQL v6; // al
  _DWORD *v7; // rbx
  __int64 v8; // rdi
  int v9; // ecx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2298797;
  if ( a3 )
  {
    v8 = *(_QWORD *)(a3 + 8);
    v7 = (_DWORD *)a3;
  }
  else
  {
    v7 = *(_DWORD **)(a1 + 576);
    *(_QWORD *)(a1 + 576) = 0LL;
    v8 = *(_QWORD *)(a1 + 2216);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqqL(0x49u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, v8, v7, a2);
  if ( v7 )
  {
    v9 = v7[8];
    if ( !v9 || (unsigned int)(v9 - 1) <= 1 )
    {
      *(_DWORD *)(v8 + 52) = v7[15];
      *(_DWORD *)(v8 + 56) = v7[16];
    }
    ExFreePoolWithTag(v7, 0);
    ndisMOidRequestCompleteInternal(a1, v8, a2, v8 & -(__int64)(a3 != 0));
    if ( (unsigned __int8)byte_1C00895D2 >= 4u )
      WPP_SF_qqd(74LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, v8, a2);
  }
}
