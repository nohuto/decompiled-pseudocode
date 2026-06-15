/*
 * XREFs of ?AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z @ 0x1800AC080
 * Callers:
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18009B1CC (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18009B688 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x180043A34 (memset_0.c)
 */

void __fastcall AEWMILOG_GLITCH(__int64 a1, void *a2, char a3, __int64 a4, unsigned __int64 a5)
{
  _WORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  char v9; // [rsp+24h] [rbp-5Ch]
  __int128 v10; // [rsp+38h] [rbp-48h]
  int v11; // [rsp+4Ch] [rbp-34h]
  void *v12; // [rsp+50h] [rbp-30h]
  int v13; // [rsp+58h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-20h]
  unsigned __int64 v15; // [rsp+68h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp-10h]
  __int64 v17; // [rsp+78h] [rbp-8h]

  if ( g_u32AEWMILogLevel )
  {
    memset_0(v8, 0, 0x40uLL);
    v11 = 0x20000;
    v13 = 0;
    v8[0] = 96;
    v16 = 0LL;
    v17 = 0LL;
    v15 = a5;
    v10 = AEWMIGUID_GLITCH;
    v9 = a3;
    v12 = a2;
    v14 = a4;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v8);
  }
}
