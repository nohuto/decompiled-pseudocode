/*
 * XREFs of ?RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z @ 0x180109D70
 * Callers:
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800B68C8 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z @ 0x180109C64 (-ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z.c)
 */

__int64 __fastcall CLegacySurfaceManager::RegisterForDxUpdates(
        CLegacySurfaceManager *this,
        struct CWindowNode *a2,
        int a3)
{
  int v3; // ebx
  int v7; // r9d
  int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-28h]
  int Buffer; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowNode *v12; // [rsp+38h] [rbp-10h]

  v3 = *((_DWORD *)this + 24);
  Buffer = a3;
  v12 = a2;
  if ( v3 < 0 )
  {
    v10 = 567;
LABEL_3:
    v7 = v3;
LABEL_8:
    MilInstrumentationCheckHR(0x14u, &dword_180183AAC, 1u, v7, v10);
    return (unsigned int)v3;
  }
  if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 136), &Buffer, 0x10u, 0LL) )
  {
    v3 = -2147024882;
    v10 = 573;
    goto LABEL_3;
  }
  v8 = CLegacySurfaceManager::ProcessUnclaimedVistBltTokensForNode(this, a2, a3);
  v3 = v8;
  if ( v8 < 0 )
  {
    v10 = 577;
    v7 = v8;
    goto LABEL_8;
  }
  return (unsigned int)v3;
}
