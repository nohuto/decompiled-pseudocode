/*
 * XREFs of ?OpenChannel@CComposition@@IEAAJI@Z @ 0x180095134
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18009E2C0 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CChannelContext@@SAJIPEAUIMilNotificationTransport@@PEAPEAV1@@Z @ 0x1800A4700 (-Create@CChannelContext@@SAJIPEAUIMilNotificationTransport@@PEAPEAV1@@Z.c)
 *     ?AddAndSet@?$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z @ 0x1800B1728 (-AddAndSet@-$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CComposition::OpenChannel(CComposition *this, unsigned int a2)
{
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // eax
  int v7; // eax
  struct CChannelContext *v8; // rcx
  struct CChannelContext *v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = a2;
  if ( a2 >= 0x10000 || a2 < *((_DWORD *)this + 74) && *(_QWORD *)(*((_QWORD *)this + 34) + 8LL * a2) )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xCA5u);
    return v5;
  }
  v4 = CChannelContext::Create(a2, *((struct IMilNotificationTransport **)this + 70), &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xCADu);
  }
  else
  {
    v6 = *((_DWORD *)this + 74);
    if ( (unsigned int)v3 < v6
      || (v11 = 0LL,
          v7 = DynArray<CChannelContext *,1>::AddAndSet((char *)this + 272, (unsigned int)v3 - v6 + 1, &v11),
          v5 = v7,
          v7 >= 0) )
    {
      *(_QWORD *)(*((_QWORD *)this + 34) + 8 * v3) = v10;
      v8 = 0LL;
      goto LABEL_8;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xCB7u);
  }
  v8 = v10;
LABEL_8:
  if ( v8 )
    CMILRefCountBase::Release(v8);
  return v5;
}
