/*
 * XREFs of ??0CDuckingNotification@@QEAA@XZ @ 0x1800328A0
 * Callers:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18002B6F0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18002B7C0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180018850 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 */

CDuckingNotification *__fastcall CDuckingNotification::CDuckingNotification(CDuckingNotification *this)
{
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    (_QWORD *)this + 2,
    (volatile signed __int32 *)&ATL::g_strmgr);
  *((_QWORD *)this + 3) = 0LL;
  return this;
}
