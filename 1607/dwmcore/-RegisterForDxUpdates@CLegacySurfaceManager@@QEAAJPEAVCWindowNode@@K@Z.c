/*
 * XREFs of ?RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z @ 0x180120470
 * Callers:
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800BA8EC (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z @ 0x18012037C (-ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z.c)
 */

__int64 __fastcall CLegacySurfaceManager::RegisterForDxUpdates(
        CLegacySurfaceManager *this,
        CDxAccumulationContext **a2,
        int a3)
{
  int v3; // ebx
  int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+30h] [rbp-18h] BYREF
  CDxAccumulationContext **v11; // [rsp+38h] [rbp-10h]

  v3 = *((_DWORD *)this + 24);
  v10 = a3;
  v11 = a2;
  if ( v3 < 0 )
  {
    v9 = 567;
    goto LABEL_7;
  }
  if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 136), &v10, 0x10u, 0LL) )
  {
    v3 = -2147024882;
    v9 = 573;
LABEL_7:
    MilInstrumentationCheckHR(0x14u, &dword_1801C74B4, 1u, v3, v9);
    return (unsigned int)v3;
  }
  v7 = CLegacySurfaceManager::ProcessUnclaimedVistBltTokensForNode(this, a2, a3);
  v3 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801C74B4, 1u, v7, 0x241u);
  return (unsigned int)v3;
}
