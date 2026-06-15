/*
 * XREFs of ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180012C20
 * Callers:
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x18000CAF4 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18000CC3C (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x18000FA94 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001269C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x180014FD0 (--0CAudioSession@@IEAA@XZ.c)
 *     ?Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z @ 0x18002BC3C (-Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18005021C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBDPEAUIAtlStringMgr@1@@Z @ 0x18005A318 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBDPEAUIAtlStringMgr@1@@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18005F618 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
        _QWORD *a1,
        volatile signed __int32 *a2)
{
  struct ATL::CStringData *(__fastcall *v3)(ATL::CAtlStringMgr *); // rax
  __int64 v4; // rax

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v3 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(*(_QWORD *)a2 + 24LL);
  if ( v3 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(a2 + 8);
    v4 = (__int64)(a2 + 4);
  }
  else
  {
    v4 = (__int64)v3((ATL::CAtlStringMgr *)a2);
  }
  *a1 = v4 + 24;
  return a1;
}
