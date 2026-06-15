/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x14001155C
 * Callers:
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x1400012E0 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x1400142C4 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     _recalloc @ 0x140019090 (_recalloc.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x140029F28 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  void *v4; // rax
  void *v5; // rax
  __int64 result; // rax
  errno_t v7; // eax
  errno_t v8; // eax

  v2 = a2;
  if ( a2 < 0 || a2 >= dword_140055C00 )
    return 0LL;
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)qword_140055BF0 + a2) - 24LL));
  v3 = dword_140055C00;
  if ( (_DWORD)v2 != dword_140055C00 - 1 )
  {
    v7 = memmove_s(
           (char *)qword_140055BF0 + 8 * v2,
           8LL * (dword_140055C00 - (int)v2),
           (char *)qword_140055BF0 + 8 * v2 + 8,
           8LL * (dword_140055C00 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v7);
    v8 = memmove_s(
           (char *)qword_140055BF8 + 8 * v2,
           8LL * (dword_140055C00 - (int)v2),
           (char *)qword_140055BF8 + 8 * v2 + 8,
           8LL * (dword_140055C00 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v8);
    v3 = dword_140055C00;
  }
  v4 = _recalloc(qword_140055BF0, v3 - 1, 8uLL);
  if ( v4 || dword_140055C00 == 1 )
    qword_140055BF0 = v4;
  v5 = _recalloc(qword_140055BF8, dword_140055C00 - 1, 8uLL);
  if ( v5 || dword_140055C00 == 1 )
    qword_140055BF8 = v5;
  result = 1LL;
  --dword_140055C00;
  return result;
}
