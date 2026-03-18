/*
 * XREFs of ?Initialize@CRateInfo@@QEAAJ_K@Z @ 0x1800B1E74
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180090CF0 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z @ 0x1800B1F38 (-GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z.c)
 */

__int64 __fastcall CRateInfo::Initialize(CRateInfo *this, __int64 a2)
{
  int PrimaryVBlankRateAndPeriod; // eax
  unsigned int v5; // edi
  unsigned __int64 v6; // r9

  PrimaryVBlankRateAndPeriod = GetPrimaryVBlankRateAndPeriod(
                                 (struct _UNSIGNED_RATIO *)this,
                                 (unsigned __int64 *)this + 2);
  v5 = PrimaryVBlankRateAndPeriod;
  if ( PrimaryVBlankRateAndPeriod < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PrimaryVBlankRateAndPeriod, 0x30u);
  }
  else
  {
    v6 = *((_QWORD *)this + 2);
    *(_QWORD *)((char *)this + 36) = *(_QWORD *)this;
    *((_QWORD *)this + 1) = v6;
    *((_QWORD *)this + 7) = v6;
    *((_QWORD *)this + 6) = v6;
    *((_DWORD *)this + 8) = 1;
    *((_QWORD *)this + 8) = a2;
    *((_QWORD *)this + 3) = a2 * (v6 / 0x989680) + a2 * (v6 % 0x989680) / 0x989680;
  }
  return v5;
}
