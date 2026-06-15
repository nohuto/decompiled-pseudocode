/*
 * XREFs of ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140009820
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x1400061C0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140013DA0 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConnectionInstance::AddRenderConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  int v6; // edi
  void *v7; // rbx
  __int64 v8; // rax
  int v9; // ecx
  void *v10; // r14
  __int64 v11; // rax
  int v12; // ecx
  void *v13; // r14
  __int64 (__fastcall *v14)(void *); // rsi
  void *v16; // [rsp+80h] [rbp+8h] BYREF
  void *v17; // [rsp+98h] [rbp+20h]

  v6 = -2005139396;
  v7 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v8 = *((_QWORD *)this + 4);
  if ( !v8 )
    goto LABEL_9;
  v9 = *(_DWORD *)(v8 + 40);
  if ( v9 == 2 )
  {
    v7 = *(void **)(*(_QWORD *)(v8 + 32) + 40LL);
    v17 = v7;
    if ( v7 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 8LL))(v7);
    v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, void *, _QWORD, _QWORD))(*(_QWORD *)a2 + 72LL))(
           a2,
           a3,
           v7,
           *((_QWORD *)this + 1),
           0LL);
    if ( v6 < 0 )
      goto LABEL_38;
    v10 = v7;
    if ( !v7 )
      goto LABEL_9;
    v7 = 0LL;
    v17 = 0LL;
    goto LABEL_8;
  }
  if ( v9 == 1 || v9 == 3 )
  {
    v6 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, void **))(v8 + 32))(
           **(_QWORD **)(v8 + 32),
           &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
           &v16);
    if ( v6 < 0 )
      goto LABEL_38;
    v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, void *))(*(_QWORD *)a2 + 128LL))(
           a2,
           a3,
           *((_QWORD *)this + 1),
           v16);
    if ( v6 < 0 )
      goto LABEL_38;
    v10 = v16;
    if ( v16 )
    {
      v16 = 0LL;
LABEL_8:
      (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
LABEL_9:
  v11 = *((_QWORD *)this + 3);
  if ( !v11 )
    goto LABEL_17;
  v12 = *(_DWORD *)(v11 + 40);
  if ( v12 != 2 )
  {
    if ( v12 == 3 || v12 == 1 )
    {
      v6 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, void **))(v11 + 32))(
             **(_QWORD **)(v11 + 32),
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v16);
      if ( v6 < 0 )
        goto LABEL_38;
      v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, void *))(*(_QWORD *)a2 + 120LL))(
             a2,
             a3,
             *((_QWORD *)this + 1),
             v16);
      if ( v6 < 0 )
        goto LABEL_38;
      v13 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        v14 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL);
        if ( v14 != ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
        {
LABEL_16:
          v14(v13);
          goto LABEL_17;
        }
        ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(v13);
      }
    }
LABEL_17:
    if ( v6 >= 0 )
      goto LABEL_18;
    goto LABEL_38;
  }
  v7 = *(void **)(*(_QWORD *)(v11 + 32) + 40LL);
  v17 = v7;
  if ( v7 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 8LL))(v7);
  v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, void *, _QWORD, _QWORD))(*(_QWORD *)a2 + 96LL))(
         a2,
         a3,
         v7,
         *((_QWORD *)this + 1),
         0LL);
  if ( v6 >= 0 )
  {
    v13 = v7;
    if ( !v7 )
      goto LABEL_17;
    v7 = 0LL;
    v17 = 0LL;
    v14 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL);
    goto LABEL_16;
  }
LABEL_38:
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      13LL,
      &WPP_5d27bd7bd7bfafaac91857425b42f44a_Traceguids,
      (unsigned int)v6);
  }
LABEL_18:
  if ( v16 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v7 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
