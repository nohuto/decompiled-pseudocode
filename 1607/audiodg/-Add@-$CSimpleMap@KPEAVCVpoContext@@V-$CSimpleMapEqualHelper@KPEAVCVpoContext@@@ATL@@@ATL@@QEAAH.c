/*
 * XREFs of ?Add@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHAEBKAEBQEAVCVpoContext@@@Z @ 0x140031CE8
 * Callers:
 *     ?Initialize@CVpoContext@@UEAAJPEAUIStreamGroup@@PEAUIAudioDeviceGraph@@@Z @ 0x140032060 (-Initialize@CVpoContext@@UEAAJPEAUIStreamGroup@@PEAUIAudioDeviceGraph@@@Z.c)
 * Callees:
 *     _recalloc @ 0x1400184E0 (_recalloc.c)
 */

__int64 __fastcall ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::Add(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void *v5; // rax
  __int64 result; // rax
  char *v7; // rax
  char *v8; // rcx
  __int64 v9; // rdx
  _DWORD *v10; // r8
  char *v11; // rdx

  v5 = _recalloc(CVpoContext::s_mapVpoContext, dword_140054F90 + 1, 4uLL);
  if ( !v5 )
    return 0LL;
  CVpoContext::s_mapVpoContext = v5;
  v7 = (char *)_recalloc(qword_140054F88, dword_140054F90 + 1, 8uLL);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  v9 = dword_140054F90;
  qword_140054F88 = v7;
  v10 = (char *)CVpoContext::s_mapVpoContext + 4 * dword_140054F90;
  if ( v10 )
  {
    *v10 = *a2;
    v8 = (char *)qword_140054F88;
  }
  v11 = &v8[8 * v9];
  if ( v11 )
    *(_QWORD *)v11 = *a3;
  result = 1LL;
  ++dword_140054F90;
  return result;
}
