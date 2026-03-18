/*
 * XREFs of ?OpenChannel@CComposition@@IEAAJI@Z @ 0x180068794
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18006C630 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddAndSet@?$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z @ 0x18005F5EC (-AddAndSet@-$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z.c)
 *     ?Create@CChannelContext@@SAJIPEAUIMilNotificationTransport@@PEAPEAV1@@Z @ 0x180062AD8 (-Create@CChannelContext@@SAJIPEAUIMilNotificationTransport@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::OpenChannel(CComposition *this, unsigned int a2)
{
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // eax
  struct CChannelContext *v7; // rcx
  int v9; // eax
  struct CChannelContext *v10; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = a2;
  if ( a2 >= 0x10000 || a2 < *((_DWORD *)this + 74) && *(_QWORD *)(*((_QWORD *)this + 34) + 8LL * a2) )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xC4Eu);
    return v5;
  }
  v4 = CChannelContext::Create(a2, *((struct IMilNotificationTransport **)this + 70), &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xC56u);
  }
  else
  {
    v6 = *((_DWORD *)this + 74);
    if ( (unsigned int)v3 < v6
      || (v11 = 0LL,
          v9 = DynArray<CChannelContext *,1>::AddAndSet((__int64)this + 272, (unsigned int)v3 - v6 + 1, &v11),
          v5 = v9,
          v9 >= 0) )
    {
      *(_QWORD *)(*((_QWORD *)this + 34) + 8 * v3) = v10;
      v7 = 0LL;
      goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC60u);
  }
  v7 = v10;
LABEL_7:
  if ( v7 )
    CMILRefCountBase::Release(v7);
  return v5;
}
