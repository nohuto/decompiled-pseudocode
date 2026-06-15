/*
 * XREFs of ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140016E60
 * Callers:
 *     ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140003178 (-GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtecte.c)
 * Callees:
 *     ?QueryInterface@CVirtualProtectedOutput@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140016900 (-QueryInterface@CVirtualProtectedOutput@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??_GCVirtualProtectedOutput@@QEAAPEAXI@Z @ 0x140016B64 (--_GCVirtualProtectedOutput@@QEAAPEAXI@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCVirtualProtectedOutput@@PEAV312@1@Z @ 0x140016F74 (-NewNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@@.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CProtectedOutputController::CreateVirtualProtectedOutput(
        CProtectedOutputController *this,
        struct IAudioProcessingObject *a2,
        struct IAudioVirtualProtectedOutput **a3)
{
  CVirtualProtectedOutput *v5; // rax
  CVirtualProtectedOutput *v6; // rdi
  __int64 (__fastcall *v7)(CVirtualProtectedOutput *, const struct _GUID *, void **); // rbx
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 *v11; // rcx
  void *v13; // [rsp+50h] [rbp+18h] BYREF
  CVirtualProtectedOutput *v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  if ( !a3 )
  {
    v9 = -2147467261;
LABEL_23:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_6577effb2eb0b4bf7989f7c48aedbf30_Traceguids, v9);
    }
    return v9;
  }
  *a3 = 0LL;
  if ( a2 )
  {
    v9 = -2147024809;
    goto LABEL_23;
  }
  v5 = (CVirtualProtectedOutput *)operator new(0x18uLL);
  v6 = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 4) = 0;
    *((_DWORD *)v5 + 5) = 0;
    *(_QWORD *)v5 = &CVirtualProtectedOutput::`vftable';
    *((_QWORD *)v5 + 1) = this;
  }
  else
  {
    v6 = 0LL;
  }
  v14 = v6;
  if ( v6 )
  {
    v7 = **(__int64 (__fastcall ***)(CVirtualProtectedOutput *, const struct _GUID *, void **))v6;
    if ( v7 == CVirtualProtectedOutput::QueryInterface )
      v8 = CVirtualProtectedOutput::QueryInterface(v6, &GUID_562462dd_4f9a_4110_9d6a_c3ca0407ff76, &v13);
    else
      v8 = v7(v6, &GUID_562462dd_4f9a_4110_9d6a_c3ca0407ff76, &v13);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::NewNode(
              (char *)this + 16,
              &v14,
              *((_QWORD *)this + 3));
      v11 = (__int64 *)*((_QWORD *)this + 3);
      if ( v11 )
        *v11 = v10;
      else
        *((_QWORD *)this + 2) = v10;
      *((_QWORD *)this + 3) = v10;
      *a3 = (struct IAudioVirtualProtectedOutput *)v13;
      return v9;
    }
  }
  else
  {
    v9 = -2147024882;
  }
  if ( v13 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
    v13 = 0LL;
  }
  if ( v6 )
    CVirtualProtectedOutput::`scalar deleting destructor'(v6);
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_23;
  return v9;
}
