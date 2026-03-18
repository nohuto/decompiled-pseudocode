/*
 * XREFs of ?ProcessBatches@CCrossThreadComposition@@IEAAJ_K@Z @ 0x180038B90
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z @ 0x18011A2E0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z.c)
 * Callees:
 *     ?DispatchBatches@CKernelTransport@@QEAAJPEAVCComposition@@_K@Z @ 0x180036E7C (-DispatchBatches@CKernelTransport@@QEAAJPEAVCComposition@@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 *     Template_xxx @ 0x18011BEC0 (Template_xxx.c)
 */

__int64 __fastcall CCrossThreadComposition::ProcessBatches(CKernelTransport **this, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebp
  __int64 i; // rbx
  _DWORD *v8; // rsi
  int v9; // eax
  int v10; // ebx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_x(this, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Start, this);
  v4 = CKernelTransport::DispatchBatches(this[63], (struct CComposition *)this, a2);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x20Fu);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 74); i = (unsigned int)(i + 1) )
  {
    v8 = (_DWORD *)*((_QWORD *)this[34] + i);
    if ( v8 && v8[18] )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
        Template_xxx(v5, (unsigned int)&CHANNELBATCHES_PROCESSED, v8[4], v8[5], v8[18]);
      v8[18] = 0;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_x(v5, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Stop, this);
  v9 = (*(__int64 (__fastcall **)(CKernelTransport *, __int64))(*(_QWORD *)this[159] + 24LL))(this[159], 3LL);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x21Cu);
  if ( v6 && (v6 < 0 || v10 >= 0) )
    return (unsigned int)v6;
  else
    return (unsigned int)v10;
}
