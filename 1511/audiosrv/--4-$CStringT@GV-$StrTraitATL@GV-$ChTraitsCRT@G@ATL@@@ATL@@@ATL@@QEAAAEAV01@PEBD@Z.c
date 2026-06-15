/*
 * XREFs of ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z @ 0x18001914C
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x1800279F0 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBDPEAUIAtlStringMgr@1@@Z @ 0x18007173C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBDPEAUIAtlStringMgr@1@@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800186F0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018814 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
        __int64 *a1)
{
  int cchWideChar; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  ATL::CStringData *v5; // rcx
  __int64 v6; // rsi
  int v8; // edx

  cchWideChar = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
  if ( cchWideChar > 0 )
  {
    if ( ((*(_DWORD *)(*a1 - 12) - cchWideChar) | (1 - *(_DWORD *)(*a1 - 8))) < 0 )
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, cchWideChar, v3, v4);
    MultiByteToWideChar(3u, 0, MultiByteStr, -1, (LPWSTR)*a1, cchWideChar);
    v8 = cchWideChar;
LABEL_9:
    ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v8);
    return a1;
  }
  v5 = (ATL::CStringData *)(*a1 - 24);
  v6 = *(_QWORD *)v5;
  if ( *((_DWORD *)v5 + 2) )
  {
    if ( *((int *)v5 + 4) >= 0 )
    {
      ATL::CStringData::Release(v5);
      *a1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6) + 24;
      return a1;
    }
    v8 = 0;
    goto LABEL_9;
  }
  return a1;
}
