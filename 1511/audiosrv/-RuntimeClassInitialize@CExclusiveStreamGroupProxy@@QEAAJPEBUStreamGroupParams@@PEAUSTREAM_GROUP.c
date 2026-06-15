/*
 * XREFs of ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18008D298
 * Callers:
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18008B3FC (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@.c)
 * Callees:
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x18000C0C0 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ??4?$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z @ 0x18006679C (--4-$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z.c)
 *     WPP_SF_Sddd @ 0x18008DBC4 (WPP_SF_Sddd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CExclusiveStreamGroupProxy::RuntimeClassInitialize(
        CExclusiveStreamGroupProxy *this,
        const struct StreamGroupParams *a2,
        struct STREAM_GROUP_DESCRIPTOR *a3,
        int a4)
{
  int Instance; // esi
  LPVOID pProxy[2]; // [rsp+40h] [rbp-28h] BYREF

  pProxy[1] = (LPVOID)-2LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      20,
      (unsigned int)&WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids,
      *(_QWORD *)a2,
      *(_DWORD *)(*((_QWORD *)a2 + 2) + 4LL),
      *(_WORD *)(*((_QWORD *)a2 + 2) + 2LL),
      *(_WORD *)(*((_QWORD *)a2 + 2) + 14LL));
  }
  pProxy[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_06b2132b_5b99_42a6_b8b6_a1709e191c70,
               0LL,
               0x17u,
               &GUID_08de05e1_94b8_4a17_a27c_004771a6d3a4,
               pProxy);
  if ( Instance < 0
    || (Instance = CoSetProxyBlanket((IUnknown *)pProxy[0], 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u),
        Instance < 0)
    || (Instance = (*(__int64 (__fastcall **)(LPVOID, struct STREAM_GROUP_DESCRIPTOR *))(*(_QWORD *)pProxy[0] + 24LL))(
                     pProxy[0],
                     a3),
        Instance < 0)
    || (Microsoft::WRL::ComPtr<IStreamGroup>::operator=((__int64 *)this + 9, (__int64)pProxy[0]),
        Instance = CBaseStreamGroupProxy::RuntimeClassInitialize(
                     (CExclusiveStreamGroupProxy *)((char *)this + 8),
                     a2,
                     a4),
        Instance < 0) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x15u,
        (__int64)&WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids,
        Instance);
    }
  }
  else if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x16u,
      (__int64)&WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids,
      (__int64)this);
  }
  if ( pProxy[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pProxy[0] + 16LL))(pProxy[0]);
  return (unsigned int)Instance;
}
