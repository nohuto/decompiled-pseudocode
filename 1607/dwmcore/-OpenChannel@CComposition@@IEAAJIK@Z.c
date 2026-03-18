/*
 * XREFs of ?OpenChannel@CComposition@@IEAAJIK@Z @ 0x18003BA24
 * Callers:
 *     ?DispatchBatches@CKernelTransport@@QEAAJPEAVCComposition@@_K@Z @ 0x180036E7C (-DispatchBatches@CKernelTransport@@QEAAJPEAVCComposition@@_K@Z.c)
 * Callees:
 *     ?AddAndSet@?$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z @ 0x1800393BC (-AddAndSet@-$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Create@CChannelContext@@SAJIKPEAVCConnection@@PEAPEAV1@@Z @ 0x1800B45E4 (-Create@CChannelContext@@SAJIKPEAVCConnection@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CComposition::OpenChannel(struct CConnection **this, unsigned int a2, unsigned int a3)
{
  struct CChannelContext *v3; // rsi
  __int64 v4; // rbx
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  unsigned __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF
  struct CChannelContext *v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a2;
  v12 = 0LL;
  if ( a2 >= 0x10000 || a2 < *((_DWORD *)this + 74) && *((_QWORD *)this[34] + a2) )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xB70u);
  }
  else
  {
    v6 = CChannelContext::Create(a2, a3, this[71], &v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB79u);
    }
    else
    {
      v8 = *((_DWORD *)this + 74);
      if ( (unsigned int)v4 < v8
        || (v11[0] = 0LL,
            v9 = DynArray<CChannelContext *,1>::AddAndSet((__int64)(this + 34), (unsigned int)v4 - v8 + 1, v11),
            v7 = v9,
            v9 >= 0) )
      {
        *((_QWORD *)this[34] + v4) = v12;
        return v7;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB83u);
    }
    v3 = v12;
  }
  if ( v3 )
    CMILRefCountBase::Release(v3);
  return v7;
}
