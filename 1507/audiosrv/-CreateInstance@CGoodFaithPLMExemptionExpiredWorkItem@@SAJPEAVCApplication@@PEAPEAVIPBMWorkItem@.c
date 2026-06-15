/*
 * XREFs of ?CreateInstance@CGoodFaithPLMExemptionExpiredWorkItem@@SAJPEAVCApplication@@PEAPEAVIPBMWorkItem@@@Z @ 0x1800A6B98
 * Callers:
 *     ?GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800A3170 (-GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CGoodFaithPLMExemptionExpiredWorkItem::CreateInstance(
        struct CApplication *a1,
        struct IPBMWorkItem **a2)
{
  unsigned int v3; // ebx
  struct IPBMWorkItem *v5; // rax

  v3 = 0;
  v5 = (struct IPBMWorkItem *)operator new(0x10uLL);
  if ( v5 )
  {
    *((_QWORD *)v5 + 1) = a1;
    *(_QWORD *)v5 = &CGoodFaithPLMExemptionExpiredWorkItem::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    *a2 = v5;
  }
  else
  {
    v3 = -2147024882;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x1Bu,
        (__int64)&WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
        -2147024882);
    }
  }
  return v3;
}
