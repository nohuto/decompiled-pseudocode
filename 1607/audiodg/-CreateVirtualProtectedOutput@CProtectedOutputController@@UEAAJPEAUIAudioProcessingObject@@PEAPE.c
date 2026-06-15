/*
 * XREFs of ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14002E990
 * Callers:
 *     <none>
 * Callees:
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ??_GCVirtualProtectedOutput@@QEAAPEAXI@Z @ 0x14002E824 (--_GCVirtualProtectedOutput@@QEAAPEAXI@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCVirtualProtectedOutput@@PEAV312@1@Z @ 0x14002EC5C (-NewNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@@.c)
 */

__int64 __fastcall CProtectedOutputController::CreateVirtualProtectedOutput(
        CProtectedOutputController *this,
        struct IAudioProcessingObject *a2,
        struct IAudioVirtualProtectedOutput **a3)
{
  int v5; // edi
  CVirtualProtectedOutput *v6; // rax
  CVirtualProtectedOutput *v7; // rbx
  __int64 v9; // rax
  __int64 *v10; // rcx
  struct IAudioVirtualProtectedOutput *v11; // [rsp+50h] [rbp+18h] BYREF
  CVirtualProtectedOutput *v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a2 )
    {
      v5 = -2147024809;
    }
    else
    {
      v6 = (CVirtualProtectedOutput *)operator new(0x18uLL);
      v7 = v6;
      if ( v6 )
      {
        *((_DWORD *)v6 + 4) = 0;
        *((_DWORD *)v6 + 5) = 0;
        *(_QWORD *)v6 = &CVirtualProtectedOutput::`vftable';
        *((_QWORD *)v6 + 1) = this;
      }
      else
      {
        v7 = 0LL;
      }
      v12 = v7;
      if ( v7 )
      {
        v5 = (**(__int64 (__fastcall ***)(CVirtualProtectedOutput *, GUID *, struct IAudioVirtualProtectedOutput **))v7)(
               v7,
               &GUID_562462dd_4f9a_4110_9d6a_c3ca0407ff76,
               &v11);
        if ( v5 >= 0 )
        {
          v9 = ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::NewNode(
                 (char *)this + 16,
                 &v12,
                 *((_QWORD *)this + 3));
          v10 = (__int64 *)*((_QWORD *)this + 3);
          if ( v10 )
            *v10 = v9;
          else
            *((_QWORD *)this + 2) = v9;
          *((_QWORD *)this + 3) = v9;
          *a3 = v11;
          return (unsigned int)v5;
        }
      }
      else
      {
        v5 = -2147024882;
      }
      if ( v11 )
      {
        (*(void (__fastcall **)(struct IAudioVirtualProtectedOutput *))(*(_QWORD *)v11 + 16LL))(v11);
        v11 = 0LL;
      }
      if ( v7 )
        CVirtualProtectedOutput::`scalar deleting destructor'(v7);
    }
  }
  else
  {
    v5 = -2147467261;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_e09cbeeacf3d335096edd029b90af36d_Traceguids, v5);
  }
  AudDGTraceLoggingErrorHelper("CProtectedOutputController::CreateVirtualProtectedOutput", 86, v5);
  return (unsigned int)v5;
}
