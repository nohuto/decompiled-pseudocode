/*
 * XREFs of ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x1800075E8
 * Callers:
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18000E410 (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEA.c)
 * Callees:
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x18000C0C0 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_Sddd @ 0x18008DBC4 (WPP_SF_Sddd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSharedStreamGroupProxy::RuntimeClassInitialize(
        CSharedStreamGroupProxy *this,
        const struct StreamGroupParams *a2,
        struct STREAM_GROUP_DESCRIPTOR *a3,
        unsigned int a4)
{
  HRESULT Instance; // esi
  IUnknown *v9; // rdi
  __int64 v10; // rbx
  LPVOID pProxy[2]; // [rsp+40h] [rbp-28h] BYREF

  pProxy[1] = (LPVOID)-2LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14,
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
  if ( Instance < 0 )
    goto LABEL_23;
  Instance = CoSetProxyBlanket((IUnknown *)pProxy[0], 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  if ( Instance < 0 )
    goto LABEL_23;
  Instance = (*(__int64 (__fastcall **)(LPVOID, struct STREAM_GROUP_DESCRIPTOR *))(*(_QWORD *)pProxy[0] + 24LL))(
               pProxy[0],
               a3);
  if ( Instance < 0 )
    goto LABEL_23;
  v9 = (IUnknown *)pProxy[0];
  if ( *((LPVOID *)this + 9) != pProxy[0] )
  {
    if ( pProxy[0] )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pProxy[0] + 8LL))(pProxy[0]);
    v10 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v9;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  Instance = CBaseStreamGroupProxy::RuntimeClassInitialize((CSharedStreamGroupProxy *)((char *)this + 8), a2, a4);
  if ( Instance < 0 )
  {
LABEL_23:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids,
        (unsigned int)Instance);
    }
  }
  else if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids, this);
  }
  if ( pProxy[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pProxy[0] + 16LL))(pProxy[0]);
  return (unsigned int)Instance;
}
