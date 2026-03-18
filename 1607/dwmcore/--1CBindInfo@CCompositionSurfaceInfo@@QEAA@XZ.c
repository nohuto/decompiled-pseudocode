/*
 * XREFs of ??1CBindInfo@CCompositionSurfaceInfo@@QEAA@XZ @ 0x1800994D4
 * Callers:
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x1800993EC (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x18001E8B4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180099BD0 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180117900 (_TlgCreateWsz.c)
 */

void __fastcall CCompositionSurfaceInfo::CBindInfo::~CBindInfo(LPCWSTR *this)
{
  __int64 v2; // r8
  LPCWSTR v3; // rdx
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-9h] BYREF
  char *v8; // [rsp+60h] [rbp+7h]
  int v9; // [rsp+68h] [rbp+Fh]
  int v10; // [rsp+6Ch] [rbp+13h]
  char *v11; // [rsp+70h] [rbp+17h]
  int v12; // [rsp+78h] [rbp+1Fh]
  int v13; // [rsp+7Ch] [rbp+23h]
  char *v14; // [rsp+80h] [rbp+27h]
  int v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+8Ch] [rbp+33h]
  char *v17; // [rsp+90h] [rbp+37h]
  int v18; // [rsp+98h] [rbp+3Fh]
  int v19; // [rsp+9Ch] [rbp+43h]

  CCompositionSurfaceInfo::CBindInfo::Reset((CCompositionSurfaceInfo::CBindInfo *)this);
  if ( this[32] )
  {
    CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat(this, 0, 0);
    if ( hProvider > 5u
      && (qword_1801EA750 & 0x400000000000LL) != 0
      && (qword_1801EA758 & 0x400000000000LL) == qword_1801EA758 )
    {
      TlgCreateWsz(&pDesc, this[32]);
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v11 = (char *)(this + 27);
      v14 = (char *)(this + 29);
      v8 = (char *)(this + 25);
      v17 = (char *)(this + 31);
      v9 = 8;
      v12 = 8;
      v15 = 8;
      v18 = 8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801C4A75, v4, v5, 7u, &pData);
    }
  }
  v3 = this[32];
  if ( v3 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 4, v3, v2);
}
