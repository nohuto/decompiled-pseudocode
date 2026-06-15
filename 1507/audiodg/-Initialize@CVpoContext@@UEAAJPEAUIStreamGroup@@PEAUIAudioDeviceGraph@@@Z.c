/*
 * XREFs of ?Initialize@CVpoContext@@UEAAJPEAUIStreamGroup@@PEAUIAudioDeviceGraph@@@Z @ 0x140001620
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHAEBKAEBQEAVCVpoContext@@@Z @ 0x140002170 (-Add@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAH.c)
 */

// Absent C++ exception handlers: #catch=1
__int64 __fastcall CVpoContext::Initialize(CVpoContext *this, struct IStreamGroup *a2, struct IAudioDeviceGraph *a3)
{
  struct IAudioDeviceGraph *v3; // rsi
  struct IStreamGroup *v4; // r14
  CVpoContext *v5; // rbx
  unsigned int v6; // edi
  ATL::CAtlException *v8; // [rsp+28h] [rbp-30h] BYREF
  CVpoContext *v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = this;
  *((_DWORD *)this + 20) = _InterlockedIncrement((volatile signed __int32 *)&CVpoContext::s_VpoContextId);
  v6 = 0;
  try
  {
    v12 = this;
    ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::Add(
      this,
      (char *)this + 80,
      &v12);
  }
  catch ( ATL::CAtlException *v8 )
  {
    __eh34_catch_handler_absent(0, 0, CVpoContext::Initialize_::_1_::catch_0);
    v6 = (unsigned int)v12;
    if ( (int)v12 < 0 )
      return v6;
    v5 = this;
    v3 = a3;
    v4 = a2;
  }
  *((_QWORD *)v5 + 8) = v4;
  *((_QWORD *)v5 + 9) = v3;
  return v6;
}
