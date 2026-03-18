/*
 * XREFs of ?UpdateHistoryWithTarget@@YAXPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagWND@@HPEBUtagPOINT@@HHH@Z @ 0x1C0230D64
 * Callers:
 *     ?SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPOINT@@HHHH@Z @ 0x1C02305B4 (-SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPO.c)
 * Callees:
 *     ?SetPointerInfoNodeTargetInt@@YAXPEAUtagPOINTERINFONODE@@PEAUtagWND@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0230698 (-SetPointerInfoNodeTargetInt@@YAXPEAUtagPOINTERINFONODE@@PEAUtagWND@@HPEBUtagPOINT@@HHHH@Z.c)
 */

void __fastcall UpdateHistoryWithTarget(
        struct _LIST_ENTRY **a1,
        const struct tagPOINTERINFONODE *a2,
        struct tagWND *a3,
        int a4,
        const struct tagPOINT *a5,
        int a6,
        int a7,
        int a8)
{
  unsigned int v8; // r11d
  unsigned int v11; // ecx
  struct _LIST_ENTRY *v13; // r10
  struct _LIST_ENTRY *v14; // rdx
  __int64 v15; // rcx
  int v16; // r11d

  v8 = *((_DWORD *)a2 + 31);
  v11 = *((_DWORD *)a2 + 52);
  v13 = *a1;
  while ( v13 != &gFrameListHead )
  {
    if ( v8 <= 1 )
      break;
    v14 = v13;
    v13 = v13->Flink;
    if ( v14[2].Blink == a1[5] )
    {
      SetPointerInfoNodeTargetInt(
        (struct tagPOINTERINFONODE *)((char *)v14[4].Blink + 216 * v11),
        a3,
        a4,
        a5,
        a6,
        0,
        a7,
        a8);
      v11 = *(_DWORD *)(v15 + 208);
      v8 = v16 - 1;
    }
  }
}
