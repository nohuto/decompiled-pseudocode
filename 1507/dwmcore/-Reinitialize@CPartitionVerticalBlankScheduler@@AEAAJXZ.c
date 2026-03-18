/*
 * XREFs of ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180067C24
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180065E90 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoRenderEngine@@PEAPEAV1@PEAPEAU_DWM_TIMING_INFO_EX@@@Z @ 0x180094480 (-Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoR.c)
 * Callees:
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x18005EBFC (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?Initialize@CRateInfo@@QEAAJ_K@Z @ 0x180061748 (-Initialize@CRateInfo@@QEAAJ_K@Z.c)
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180065230 (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Trace@CRateInfo@@QEAAXXZ @ 0x180094EEC (-Trace@CRateInfo@@QEAAXXZ.c)
 *     ?Initialize@CPartitionScheduler@@IEAAJXZ @ 0x180096F38 (-Initialize@CPartitionScheduler@@IEAAJXZ.c)
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

  *((_QWORD *)this + 3158) = 0LL;
  *((_QWORD *)this + 3159) = 0LL;
  *((_QWORD *)this + 2789) = 0LL;
  *(_WORD *)((char *)this + 22649) = 0;
  *((_BYTE *)this + 22648) = 0;
  if ( *((_BYTE *)this + 22652) || *((int *)this + 6250) < 0 )
  {
    v14 = CPartitionScheduler::Initialize(this);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x73u);
      return v12;
    }
    *(_QWORD *)(*((_QWORD *)this + 2788) + 1352LL) = *((_QWORD *)this + 3);
    *(_QWORD *)(*((_QWORD *)this + 2788) + 240LL) = *((_QWORD *)this + 3);
  }
  v2 = *((_QWORD *)this + 2788);
  *((_DWORD *)this + 6250) = 0;
  v3 = *(_QWORD *)(v2 + 1352);
  v4 = *(_QWORD *)(v2 + 240);
  v16 = *(_QWORD *)(v2 + 88);
  v17 = *(_QWORD *)(v2 + 1344);
  v5 = *((_QWORD *)this + 2787);
  v6 = *(_QWORD *)(v5 + 1344);
  v7 = *(_QWORD *)(v5 + 1352);
  if ( *((_BYTE *)this + 22652) )
  {
    v6 = 0LL;
    v7 = 0LL;
  }
  v8 = (char *)this + 1608;
  v15 = *(_BYTE *)(v2 + 1360);
  v9 = (CPartitionVerticalBlankScheduler *)((char *)this + 264);
  v10 = 16LL;
  do
  {
    CFrameInfo::Clear(v9);
    *(v8 - 8) = 0;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v8 + 1) = 0LL;
    v8[16] = 0;
    *((_DWORD *)v8 + 5) = 0;
    v9 = (CFrameInfo *)((char *)v9 + 1376);
    v8 += 1376;
    --v10;
  }
  while ( v10 );
  *(_QWORD *)(*((_QWORD *)this + 2788) + 1352LL) = v3;
  *(_QWORD *)(*((_QWORD *)this + 2788) + 240LL) = v4;
  *(_QWORD *)(*((_QWORD *)this + 2788) + 88LL) = v16;
  *(_QWORD *)(*((_QWORD *)this + 2788) + 1344LL) = v17;
  *(_BYTE *)(*((_QWORD *)this + 2788) + 1360LL) = v15;
  *(_QWORD *)(*((_QWORD *)this + 2787) + 1344LL) = v6;
  *(_QWORD *)(*((_QWORD *)this + 2787) + 1352LL) = v7;
  *(_BYTE *)(*((_QWORD *)this + 2788) + 512LL) = 1;
  v11 = CRateInfo::Initialize((CPartitionVerticalBlankScheduler *)((char *)this + 176), *((_QWORD *)this + 9));
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xA7u);
  }
  else
  {
    if ( *((_BYTE *)this + 22652) )
      *((_BYTE *)this + 22652) = 0;
    if ( *((_DWORD *)this + 52) != 1 )
    {
      *(_QWORD *)((char *)this + 212) = *((_QWORD *)this + 22);
      *((_QWORD *)this + 28) = *((_QWORD *)this + 23);
      *((_DWORD *)this + 52) = 1;
      CRateInfo::Trace((CPartitionVerticalBlankScheduler *)((char *)this + 176));
    }
    *((_WORD *)this + 12640) = 0;
    CPartitionVerticalBlankScheduler::GetDisplayInfo(this);
    *((_DWORD *)this + 5661) = -1;
    *((_QWORD *)this + 3742) = this;
  }
  return v12;
}
