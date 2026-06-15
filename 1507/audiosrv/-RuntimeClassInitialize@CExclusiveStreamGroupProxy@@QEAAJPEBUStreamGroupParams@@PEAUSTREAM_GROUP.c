/*
 * XREFs of ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18008F9D0
 * Callers:
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18008E88C (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@.c)
 * Callees:
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x180026930 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ??4?$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z @ 0x1800681C0 (--4-$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z.c)
 *     WPP_SF_Sddd @ 0x18009033C (WPP_SF_Sddd.c)
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
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_Sddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      16,
      (unsigned int)&WPP_18cbaf40400d08387fc9801c804405c7_Traceguids,
      *(_QWORD *)a2,
      *(_DWORD *)(*((_QWORD *)a2 + 3) + 4LL),
      *(_WORD *)(*((_QWORD *)a2 + 3) + 2LL),
      *(_WORD *)(*((_QWORD *)a2 + 3) + 14LL));
  }
  pProxy[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_06b2132b_5b99_42a6_b8b6_a1709e191c70,
               0LL,
               0x17u,
               &GUID_74f013f0_90a1_4f32_8127_794b84274fde,
               pProxy);
  if ( Instance < 0
    || (Instance = CoSetProxyBlanket((IUnknown *)pProxy[0], 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u),
        Instance < 0)
    || (Instance = (*(__int64 (__fastcall **)(LPVOID, struct STREAM_GROUP_DESCRIPTOR *))(*(_QWORD *)pProxy[0] + 24LL))(
                     pProxy[0],
                     a3),
        Instance < 0)
    || (Microsoft::WRL::ComPtr<IStreamGroup>::operator=((__int64 *)this + 10, (__int64)pProxy[0]),
        Instance = CBaseStreamGroupProxy::RuntimeClassInitialize(
                     (CExclusiveStreamGroupProxy *)((char *)this + 8),
                     a2,
                     a4),
        Instance < 0) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x11u,
        (__int64)&WPP_18cbaf40400d08387fc9801c804405c7_Traceguids,
        Instance);
    }
  }
  else if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x12u,
      (__int64)&WPP_18cbaf40400d08387fc9801c804405c7_Traceguids,
      this);
  }
  if ( pProxy[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pProxy[0] + 16LL))(pProxy[0]);
  return (unsigned int)Instance;
}
