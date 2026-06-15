/*
 * XREFs of ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14000698C
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140007990 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioDeviceGraph::InitializePump(CAudioDeviceGraph *this, struct CPipeInstance *a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ebp
  unsigned int v9; // ebp
  __int128 v10; // xmm6
  unsigned int v11; // r15d
  __int128 v13; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v14; // [rsp+A8h] [rbp+10h]
  __int64 v15; // [rsp+B8h] [rbp+20h] BYREF

  v15 = 0LL;
  v6 = *((_QWORD *)a2 + 3);
  if ( !v6 )
    ATL::AtlThrowImpl(-2147467259);
  v7 = **(_QWORD **)(*(_QWORD *)(v6 + 16) + 32LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 14))(
         *((_QWORD *)this + 14),
         &GUID_8c03925f_1468_45a1_8278_5cc94bc4c6cc,
         &v15);
  if ( v8 < 0 )
    goto LABEL_21;
  v9 = *((_DWORD *)this + 24);
  v14 = v9;
  v10 = *(_OWORD *)((char *)a2 + 152);
  v11 = 4;
  if ( !*((_DWORD *)this + 27) )
    v11 = 8;
  if ( a3 == 1 )
    v11 |= 0x20u;
  v13 = *(_OWORD *)((char *)a2 + 152);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int64, __int64, __int64, __int64))(**((_QWORD **)this + 15) + 24LL))(
         *((_QWORD *)this + 15),
         v11 | 0x10,
         v9,
         &v13,
         v15,
         v7,
         v7,
         -2LL);
  if ( v8 < 0 )
  {
    if ( *((_DWORD *)this + 74) != 1 )
    {
      v13 = v10;
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int64, __int64))(**((_QWORD **)this + 15)
                                                                                           + 24LL))(
             *((_QWORD *)this + 15),
             v11,
             v14,
             &v13,
             v15,
             v7);
    }
    if ( v8 < 0 )
    {
LABEL_21:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          75LL,
          &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids,
          (unsigned int)v8);
      }
    }
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v8;
}
