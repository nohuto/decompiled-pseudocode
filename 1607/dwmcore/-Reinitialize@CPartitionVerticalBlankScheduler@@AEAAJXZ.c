/*
 * XREFs of ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180047008
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJH@Z @ 0x180046F5C (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJH@Z.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180111AC0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180043E68 (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800B3854 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?Initialize@CRateInfo@@QEAAJ_K@Z @ 0x1800B59C8 (-Initialize@CRateInfo@@QEAAJ_K@Z.c)
 *     ?Trace@CRateInfo@@QEAAXXZ @ 0x1800B5A70 (-Trace@CRateInfo@@QEAAXXZ.c)
 *     ?Initialize@CPartitionScheduler@@IEAAJXZ @ 0x1800B62BC (-Initialize@CPartitionScheduler@@IEAAJXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::Reinitialize(CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // rcx
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  char *v8; // rdi
  CFrameInfo *v9; // rsi
  __int64 v10; // rbp
  int v11; // eax
  unsigned int v12; // esi
  int v14; // eax
  char v15; // [rsp+70h] [rbp+8h]
  __int64 v16; // [rsp+78h] [rbp+10h]
  __int64 v17; // [rsp+80h] [rbp+18h]

  *((_QWORD *)this + 3195) = 0LL;
  *((_QWORD *)this + 3196) = 0LL;
  *((_QWORD *)this + 2743) = 0LL;
  *(_WORD *)((char *)this + 22281) = 0;
  *((_BYTE *)this + 22280) = 0;
  if ( *((_BYTE *)this + 22284) || *((int *)this + 6324) < 0 )
  {
    v14 = CPartitionScheduler::Initialize(this);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x75u);
      return v12;
    }
    *(_QWORD *)(*((_QWORD *)this + 2742) + 1328LL) = *((_QWORD *)this + 4);
    *(_QWORD *)(*((_QWORD *)this + 2742) + 240LL) = *((_QWORD *)this + 4);
  }
  v2 = *((_QWORD *)this + 2742);
  *((_DWORD *)this + 6324) = 0;
  v3 = *(_QWORD *)(v2 + 1328);
  v4 = *(_QWORD *)(v2 + 240);
  v16 = *(_QWORD *)(v2 + 88);
  v17 = *(_QWORD *)(v2 + 1320);
  v5 = *((_QWORD *)this + 2741);
  v6 = *(_QWORD *)(v5 + 1320);
  v7 = *(_QWORD *)(v5 + 1328);
  if ( *((_BYTE *)this + 22284) )
  {
    v6 = 0LL;
    v7 = 0LL;
  }
  v8 = (char *)this + 1600;
  v15 = *(_BYTE *)(v2 + 1336);
  v9 = (CPartitionVerticalBlankScheduler *)((char *)this + 280);
  v10 = 16LL;
  do
  {
    CFrameInfo::Clear(v9);
    *(v8 - 8) = 0;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v8 + 1) = 0LL;
    v8[16] = 0;
    *((_DWORD *)v8 + 5) = 0;
    v9 = (CFrameInfo *)((char *)v9 + 1352);
    v8 += 1352;
    --v10;
  }
  while ( v10 );
  *(_QWORD *)(*((_QWORD *)this + 2742) + 1328LL) = v3;
  *(_QWORD *)(*((_QWORD *)this + 2742) + 240LL) = v4;
  *(_QWORD *)(*((_QWORD *)this + 2742) + 88LL) = v16;
  *(_QWORD *)(*((_QWORD *)this + 2742) + 1320LL) = v17;
  *(_BYTE *)(*((_QWORD *)this + 2742) + 1336LL) = v15;
  *(_QWORD *)(*((_QWORD *)this + 2741) + 1320LL) = v6;
  *(_QWORD *)(*((_QWORD *)this + 2741) + 1328LL) = v7;
  *(_BYTE *)(*((_QWORD *)this + 2742) + 512LL) = 1;
  v11 = CRateInfo::Initialize((CPartitionVerticalBlankScheduler *)((char *)this + 192), *((_QWORD *)this + 10));
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xA9u);
  }
  else
  {
    if ( *((_BYTE *)this + 22284) )
      *((_BYTE *)this + 22284) = 0;
    if ( *((_DWORD *)this + 56) != 1 )
    {
      *(_QWORD *)((char *)this + 228) = *((_QWORD *)this + 24);
      *((_QWORD *)this + 30) = *((_QWORD *)this + 25);
      *((_DWORD *)this + 56) = 1;
      CRateInfo::Trace((CPartitionVerticalBlankScheduler *)((char *)this + 192));
    }
    *((_WORD *)this + 12788) = 0;
    CPartitionVerticalBlankScheduler::GetDisplayInfo(this);
    *((_DWORD *)this + 5569) = -1;
    *((_QWORD *)this + 3779) = this;
  }
  return v12;
}
