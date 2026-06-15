/*
 * XREFs of ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x14000C5D0
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x140009510 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140011470 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConnectionInstance::AddRenderConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rcx
  void (*v11)(void); // rax
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rcx
  void (*v15)(void); // rax
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h]

  v6 = -2005139396;
  v7 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 40);
    if ( v9 == 2 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 40LL);
      v20 = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 72LL))(
             a2,
             a3,
             v7,
             *((_QWORD *)this + 1),
             0LL);
      if ( v6 < 0 )
        goto LABEL_38;
      v10 = v7;
      if ( v7 )
      {
        v7 = 0LL;
        v20 = 0LL;
        v11 = *(void (**)(void))(*(_QWORD *)v10 + 16LL);
LABEL_8:
        v11();
      }
    }
    else if ( v9 == 1 || v9 == 3 )
    {
      v6 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, void **))(v8 + 32))(
             **(_QWORD **)(v8 + 32),
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v19);
      if ( v6 < 0 )
        goto LABEL_38;
      v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, void *))(*(_QWORD *)a2 + 128LL))(
             a2,
             a3,
             *((_QWORD *)this + 1),
             v19);
      if ( v6 < 0 )
        goto LABEL_38;
      v17 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        v11 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
        goto LABEL_8;
      }
    }
  }
  v12 = *((_QWORD *)this + 3);
  if ( !v12 )
    goto LABEL_17;
  v13 = *(_DWORD *)(v12 + 40);
  if ( v13 != 2 )
  {
    if ( v13 == 3 || v13 == 1 )
    {
      v6 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, void **))(v12 + 32))(
             **(_QWORD **)(v12 + 32),
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v19);
      if ( v6 < 0 )
        goto LABEL_38;
      v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, void *))(*(_QWORD *)a2 + 120LL))(
             a2,
             a3,
             *((_QWORD *)this + 1),
             v19);
      if ( v6 < 0 )
        goto LABEL_38;
      v18 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        v15 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
        if ( (char *)v15 != (char *)ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
        {
LABEL_16:
          v15();
          goto LABEL_17;
        }
        ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(v18);
      }
    }
LABEL_17:
    if ( v6 >= 0 )
      goto LABEL_18;
    goto LABEL_38;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(v12 + 32) + 40LL);
  v20 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v6 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 96LL))(
         a2,
         a3,
         v7,
         *((_QWORD *)this + 1),
         0LL);
  if ( v6 >= 0 )
  {
    v14 = v7;
    if ( !v7 )
      goto LABEL_17;
    v7 = 0LL;
    v20 = 0LL;
    v15 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
    goto LABEL_16;
  }
LABEL_38:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_1ca138749e453a9e5342dd7aa161b4a4_Traceguids,
      (unsigned int)v6);
  }
  AudDGTraceLoggingErrorHelper("CConnectionInstance::AddRenderConnection", 0x1BDu, v6);
LABEL_18:
  if ( v19 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
