/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x1400163E8
 * Callers:
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x14001614C (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x140016230 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     _recalloc @ 0x1400184E0 (_recalloc.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14002928C (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
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
  if ( a2 < 0 || a2 >= dword_140054CD0 )
    return 0LL;
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)Block + a2) - 24LL));
  v3 = dword_140054CD0;
  if ( (_DWORD)v2 != dword_140054CD0 - 1 )
  {
    v7 = memmove_s(
           (char *)Block + 8 * v2,
           8LL * (dword_140054CD0 - (int)v2),
           (char *)Block + 8 * v2 + 8,
           8LL * (dword_140054CD0 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v7);
    v8 = memmove_s(
           (char *)qword_140054CC8 + 8 * v2,
           8LL * (dword_140054CD0 - (int)v2),
           (char *)qword_140054CC8 + 8 * v2 + 8,
           8LL * (dword_140054CD0 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v8);
    v3 = dword_140054CD0;
  }
  v4 = _recalloc(Block, v3 - 1, 8uLL);
  if ( v4 || dword_140054CD0 == 1 )
    Block = v4;
  v5 = _recalloc(qword_140054CC8, dword_140054CD0 - 1, 8uLL);
  if ( v5 || dword_140054CD0 == 1 )
    qword_140054CC8 = v5;
  result = 1LL;
  --dword_140054CD0;
  return result;
}
