/*
 * XREFs of ?GetMeteringData@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_METER_DATA@@I@Z @ 0x14002C5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ??_V@YAXPEAX@Z @ 0x140017F40 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x140017F8C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::GetMeteringData(
        CSystemAudioDeviceOffload *this,
        struct AUDIO_METER_DATA *a2,
        unsigned int a3)
{
  __int64 v6; // rbp
  int *v7; // rax
  int *v8; // rdi
  int v9; // ebx
  int *v10; // rax
  int v11; // ecx

  v6 = a3;
  v7 = (int *)operator new[](saturated_mul(a3, 4uLL));
  v8 = v7;
  if ( v7 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 14) + 32LL))(
           *((_QWORD *)this + 14),
           a3,
           v7);
    if ( v9 >= 0 && a3 )
    {
      v10 = v8;
      do
      {
        v11 = *v10++;
        *(_DWORD *)a2 = v11;
        a2 = (struct AUDIO_METER_DATA *)((char *)a2 + 12);
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    v9 = -2147024882;
  }
  operator delete[](v8);
  if ( v9 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x14u,
        (__int64)&WPP_e6e3cf044f7b3ed66ff982009b51436b_Traceguids,
        v9);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffload::GetMeteringData", 816, v9);
  }
  return (unsigned int)v9;
}
