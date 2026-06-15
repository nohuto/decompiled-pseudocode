/*
 * XREFs of ?Initialize@CVpoContext@@UEAAJPEAUIStreamGroup@@PEAUIAudioDeviceGraph@@@Z @ 0x140032060
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHAEBKAEBQEAVCVpoContext@@@Z @ 0x140031CE8 (-Add@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAH.c)
 */

__int64 __fastcall CVpoContext::Initialize(CVpoContext *this, struct IStreamGroup *a2, struct IAudioDeviceGraph *a3)
{
  struct IAudioDeviceGraph *v3; // rsi
  struct IStreamGroup *v4; // r14
  CVpoContext *v5; // rbx
  unsigned int v6; // edi
  __int64 result; // rax
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // [rsp+28h] [rbp-30h] BYREF
  CVpoContext *v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = this;
  *((_DWORD *)this + 20) = _InterlockedIncrement((volatile signed __int32 *)&CVpoContext::s_VpoContextId);
  v6 = 0;
  try
  {
    v13 = this;
    ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::Add(
      (__int64)this,
      (_DWORD *)this + 20,
      &v13);
  }
  catch ( ATL::CAtlException *v9 )
  {
    v8 = v9;
    if ( *(_DWORD *)v9 == -1073741571 )
      _resetstkoflw();
    LODWORD(v13) = *(_DWORD *)v8;
    v6 = (unsigned int)v13;
    if ( (int)v13 >= 0 )
    {
      v5 = this;
      v3 = a3;
      v4 = a2;
      goto LABEL_4;
    }
LABEL_5:
    result = v6;
  }
LABEL_4:
  *((_QWORD *)v5 + 8) = v4;
  *((_QWORD *)v5 + 9) = v3;
  goto LABEL_5;
}
