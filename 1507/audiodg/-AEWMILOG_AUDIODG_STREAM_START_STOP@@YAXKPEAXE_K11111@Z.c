/*
 * XREFs of ?AEWMILOG_AUDIODG_STREAM_START_STOP@@YAXKPEAXE_K11111@Z @ 0x14002BD98
 * Callers:
 *     ?NotifyStreamSuspensionStateChanged@CSystemAudioDeviceShared@@UEAAJH@Z @ 0x14002CF20 (-NotifyStreamSuspensionStateChanged@CSystemAudioDeviceShared@@UEAAJH@Z.c)
 *     ?StartStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002D370 (-StartStream@CSystemAudioDeviceShared@@UEAAJ_K@Z.c)
 *     ?StopStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002D690 (-StopStream@CSystemAudioDeviceShared@@UEAAJ_K@Z.c)
 * Callees:
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 */

void __fastcall AEWMILOG_AUDIODG_STREAM_START_STOP(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9)
{
  _WORD v10[2]; // [rsp+20h] [rbp-41h] BYREF
  char v11; // [rsp+24h] [rbp-3Dh]
  __int128 v12; // [rsp+38h] [rbp-29h]
  int v13; // [rsp+4Ch] [rbp-15h]
  __int64 v14; // [rsp+50h] [rbp-11h]
  int v15; // [rsp+58h] [rbp-9h]
  __int64 v16; // [rsp+60h] [rbp-1h]
  unsigned __int64 v17; // [rsp+68h] [rbp+7h]
  unsigned __int64 v18; // [rsp+70h] [rbp+Fh]
  unsigned __int64 v19; // [rsp+78h] [rbp+17h]
  unsigned __int64 v20; // [rsp+80h] [rbp+1Fh]
  unsigned __int64 v21; // [rsp+88h] [rbp+27h]

  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(v10, 0, 0x40uLL);
    v14 = 0LL;
    v15 = 0;
    v10[0] = 112;
    v17 = a5;
    v18 = a6;
    v19 = a7;
    v20 = a8;
    v21 = a9;
    v13 = 0x20000;
    v12 = AEWMIGUID_AUDIODG;
    v11 = 1;
    v16 = a4;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v10);
  }
}
