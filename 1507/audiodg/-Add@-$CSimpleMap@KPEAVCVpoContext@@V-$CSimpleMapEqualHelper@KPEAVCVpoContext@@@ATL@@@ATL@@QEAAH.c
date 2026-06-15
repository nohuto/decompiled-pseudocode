/*
 * XREFs of ?Add@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHAEBKAEBQEAVCVpoContext@@@Z @ 0x140002170
 * Callers:
 *     ?Initialize@CVpoContext@@UEAAJPEAUIStreamGroup@@PEAUIAudioDeviceGraph@@@Z @ 0x140001620 (-Initialize@CVpoContext@@UEAAJPEAUIStreamGroup@@PEAUIAudioDeviceGraph@@@Z.c)
 * Callees:
 *     _recalloc @ 0x140019090 (_recalloc.c)
 */

__int64 __fastcall ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::Add(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void *v5; // rax
  char *v6; // rax
  char *v7; // rcx
  __int64 v8; // rdx
  _DWORD *v9; // r8
  char *v10; // rdx
  __int64 result; // rax

  v5 = _recalloc(CVpoContext::s_mapVpoContext, dword_140055E20 + 1, 4uLL);
  if ( !v5 )
    return 0LL;
  CVpoContext::s_mapVpoContext = v5;
  v6 = (char *)_recalloc(Block, dword_140055E20 + 1, 8uLL);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v8 = dword_140055E20;
  Block = v6;
  v9 = (char *)CVpoContext::s_mapVpoContext + 4 * dword_140055E20;
  if ( v9 )
  {
    *v9 = *a2;
    v7 = (char *)Block;
  }
  v10 = &v7[8 * v8];
  if ( v10 )
    *(_QWORD *)v10 = *a3;
  result = 1LL;
  ++dword_140055E20;
  return result;
}
