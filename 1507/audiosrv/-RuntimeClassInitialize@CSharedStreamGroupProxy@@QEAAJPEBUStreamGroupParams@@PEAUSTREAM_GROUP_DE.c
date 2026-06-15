/*
 * XREFs of ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x180029CE8
 * Callers:
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18002AD04 (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEA.c)
 * Callees:
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x180026930 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_Sddd @ 0x18009033C (WPP_SF_Sddd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSharedStreamGroupProxy::RuntimeClassInitialize(
        CSharedStreamGroupProxy *this,
        const struct StreamGroupParams *a2,
        struct STREAM_GROUP_DESCRIPTOR *a3,
        int a4)
{
  int Instance; // esi
  IUnknown *v9; // rdi
  __int64 v10; // rbx
  LPVOID pProxy[2]; // [rsp+40h] [rbp-28h] BYREF

  pProxy[1] = (LPVOID)-2LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_Sddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      10,
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
  if ( *((LPVOID *)this + 10) != pProxy[0] )
  {
    if ( pProxy[0] )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pProxy[0] + 8LL))(pProxy[0]);
    v10 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v9;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  Instance = CBaseStreamGroupProxy::RuntimeClassInitialize((CSharedStreamGroupProxy *)((char *)this + 8), a2, a4);
  if ( Instance < 0 )
  {
LABEL_23:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        11LL,
        &WPP_18cbaf40400d08387fc9801c804405c7_Traceguids,
        (unsigned int)Instance);
    }
  }
  else if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      12LL,
      &WPP_18cbaf40400d08387fc9801c804405c7_Traceguids,
      this);
  }
  if ( pProxy[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pProxy[0] + 16LL))(pProxy[0]);
  return (unsigned int)Instance;
}
