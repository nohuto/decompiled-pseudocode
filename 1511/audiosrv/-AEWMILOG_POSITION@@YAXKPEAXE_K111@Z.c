/*
 * XREFs of ?AEWMILOG_POSITION@@YAXKPEAXE_K111@Z @ 0x1800AA008
 * Callers:
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180045B00 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18004609C (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x180047978 (memset_0.c)
 */

void __fastcall AEWMILOG_POSITION(
        __int64 a1,
        void *a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  _WORD v9[2]; // [rsp+20h] [rbp-60h] BYREF
  char v10; // [rsp+24h] [rbp-5Ch]
  __int128 v11; // [rsp+38h] [rbp-48h]
  int v12; // [rsp+4Ch] [rbp-34h]
  void *v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-20h]
  unsigned __int64 v16; // [rsp+68h] [rbp-18h]
  unsigned __int64 v17; // [rsp+70h] [rbp-10h]
  unsigned __int64 v18; // [rsp+78h] [rbp-8h]

  if ( g_u32AEWMILogLevel >= 2 )
  {
    memset_0(v9, 0, 0x40uLL);
    v14 = 0;
    v15 = 0LL;
    v9[0] = 96;
    v16 = a5;
    v17 = a6;
    v18 = a7;
    v12 = 0x20000;
    v11 = AEWMIGUID_POSITION;
    v10 = a3;
    v13 = a2;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v9);
  }
}
