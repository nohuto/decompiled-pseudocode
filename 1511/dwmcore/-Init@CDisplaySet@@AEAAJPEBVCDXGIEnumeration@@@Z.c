/*
 * XREFs of ?Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x1800702C4
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18006EE64 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CheckForDriverUpdating@CDisplaySet@@AEAAJXZ @ 0x18006FA84 (-CheckForDriverUpdating@CDisplaySet@@AEAAJXZ.c)
 *     ?ComputeDisplayBounds@CDisplaySet@@AEAAXXZ @ 0x18006FB8C (-ComputeDisplayBounds@CDisplaySet@@AEAAXXZ.c)
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x18006FBEC (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x180070180 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::Init(CDisplaySet *this, const struct CDXGIEnumeration *a2)
{
  int v3; // eax
  unsigned int v4; // esi
  int v5; // eax
  int v6; // eax

  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(const struct CDXGIEnumeration *))a2)(a2);
  v3 = CDisplaySet::EnumerateOutputs(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801745A8, 1u, v3, 0xB8u);
  }
  else
  {
    v5 = CDisplaySet::ArrangeCloneDisplays(this);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801745A8, 1u, v5, 0xBAu);
    }
    else
    {
      CDisplaySet::ComputeDisplayBounds(this);
      v6 = CDisplaySet::CheckForDriverUpdating(this);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801745A8, 1u, v6, 0xBEu);
      else
        *((_BYTE *)this + 544) = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 48LL)
                                                                        + 24LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 48LL)) != 0;
    }
  }
  return v4;
}
