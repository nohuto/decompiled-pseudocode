/*
 * XREFs of ?GetMeteringData@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_METER_DATA@@I@Z @ 0x14002EE00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??_U@YAPEAX_K@Z @ 0x140018A08 (--_U@YAPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140018A14 (--_V@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::GetMeteringData(
        CSystemAudioDeviceOffloadGraph *this,
        struct AUDIO_METER_DATA *a2,
        unsigned int a3)
{
  __int64 v6; // rbp
  int *v7; // rsi
  int v8; // ebx
  int *v9; // rax
  int v10; // ecx

  v6 = a3;
  v7 = (int *)operator new[](saturated_mul(a3, 4uLL));
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 10) + 32LL))(
           *((_QWORD *)this + 10),
           a3,
           v7);
    if ( v8 >= 0 && a3 )
    {
      v9 = v7;
      do
      {
        v10 = *v9++;
        *(_DWORD *)a2 = v10;
        a2 = (struct AUDIO_METER_DATA *)((char *)a2 + 12);
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    v8 = -2147024882;
  }
  operator delete[](v7);
  if ( v8 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, (__int64)&WPP_0d6648d1aabe8b1385a8c93db05d5db0_Traceguids, v8);
  }
  return (unsigned int)v8;
}
