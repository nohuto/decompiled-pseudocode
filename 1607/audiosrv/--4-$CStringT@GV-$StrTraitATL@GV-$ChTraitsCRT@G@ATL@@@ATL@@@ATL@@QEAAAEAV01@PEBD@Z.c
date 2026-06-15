/*
 * XREFs of ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z @ 0x1800127D0
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180014D80 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBDPEAUIAtlStringMgr@1@@Z @ 0x18005A318 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBDPEAUIAtlStringMgr@1@@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012BE0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012C68 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

LPWSTR *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
        LPWSTR *a1)
{
  int cchWideChar; // edi
  ATL::CStringData *v3; // rcx
  __int64 v4; // rdi
  __int64 v6; // rdx

  cchWideChar = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
  if ( cchWideChar > 0 )
  {
    if ( ((*((_DWORD *)*a1 - 3) - cchWideChar) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, (unsigned int)cchWideChar);
    MultiByteToWideChar(3u, 0, MultiByteStr, -1, *a1, cchWideChar);
    v6 = (unsigned int)cchWideChar;
LABEL_9:
    ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v6);
    return a1;
  }
  v3 = (ATL::CStringData *)(*a1 - 12);
  v4 = *(_QWORD *)v3;
  if ( *((_DWORD *)v3 + 2) )
  {
    if ( *((int *)v3 + 4) >= 0 )
    {
      ATL::CStringData::Release(v3);
      *a1 = (LPWSTR)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) + 24);
      return a1;
    }
    v6 = 0LL;
    goto LABEL_9;
  }
  return a1;
}
