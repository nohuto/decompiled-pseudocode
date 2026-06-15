/*
 * XREFs of ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14000EF50
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FD30 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioDeviceGraph::InitializePump(CAudioDeviceGraph *this, struct CPipeInstance *a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ebp
  __int128 v9; // xmm6
  unsigned int v10; // r12d
  __int128 v12; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v13; // [rsp+A8h] [rbp+10h]
  __int64 v14; // [rsp+B8h] [rbp+20h] BYREF

  v14 = 0LL;
  v6 = *((_QWORD *)a2 + 3);
  if ( !v6 )
    ATL::AtlThrowImpl(-2147467259);
  v7 = **(_QWORD **)(*(_QWORD *)(v6 + 16) + 32LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 14))(
         *((_QWORD *)this + 14),
         &GUID_8c03925f_1468_45a1_8278_5cc94bc4c6cc,
         &v14);
  if ( v8 < 0 )
    goto LABEL_19;
  v13 = *((_DWORD *)this + 24);
  v9 = *(_OWORD *)((char *)a2 + 152);
  v10 = 4;
  if ( !*((_DWORD *)this + 27) )
    v10 = 8;
  if ( a3 == 1 )
    v10 |= 0x20u;
  v12 = *(_OWORD *)((char *)a2 + 152);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int64, __int64, __int64, __int64))(**((_QWORD **)this + 15) + 24LL))(
         *((_QWORD *)this + 15),
         v10 | 0x10,
         v13,
         &v12,
         v14,
         v7,
         v7,
         -2LL);
  if ( v8 < 0 )
  {
    v12 = v9;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int64, __int64))(**((_QWORD **)this + 15)
                                                                                         + 24LL))(
           *((_QWORD *)this + 15),
           v10,
           v13,
           &v12,
           v14,
           v7);
    if ( v8 < 0 )
    {
LABEL_19:
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          59LL,
          &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
          (unsigned int)v8);
      }
    }
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v8;
}
