/*
 * XREFs of ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140030D80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ??_GCVirtualProtectedOutput@@QEAAPEAXI@Z @ 0x140030BE0 (--_GCVirtualProtectedOutput@@QEAAPEAXI@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCVirtualProtectedOutput@@PEAV312@1@Z @ 0x140031058 (-NewNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@@.c)
 */

__int64 __fastcall CProtectedOutputController::CreateVirtualProtectedOutput(
        CProtectedOutputController *this,
        struct IAudioProcessingObject *a2,
        struct IAudioVirtualProtectedOutput **a3)
{
  int v5; // esi
  CVirtualProtectedOutput *v6; // rax
  CVirtualProtectedOutput *v7; // rdi
  __int64 v9; // rax
  __int64 *v10; // rcx
  struct IAudioVirtualProtectedOutput *v11; // [rsp+50h] [rbp+18h] BYREF
  CVirtualProtectedOutput *v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( !a3 )
  {
    v5 = -2147467261;
LABEL_14:
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0xAu,
        (__int64)&WPP_6577effb2eb0b4bf7989f7c48aedbf30_Traceguids,
        v5);
    }
    return (unsigned int)v5;
  }
  *a3 = 0LL;
  if ( a2 )
  {
    v5 = -2147024809;
    goto LABEL_14;
  }
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
  if ( !v7 )
  {
    v5 = -2147024882;
LABEL_10:
    if ( v11 )
    {
      (*(void (__fastcall **)(struct IAudioVirtualProtectedOutput *))(*(_QWORD *)v11 + 16LL))(v11);
      v11 = 0LL;
    }
    if ( v7 )
      CVirtualProtectedOutput::`scalar deleting destructor'(v7);
    goto LABEL_14;
  }
  v5 = (**(__int64 (__fastcall ***)(CVirtualProtectedOutput *, GUID *, struct IAudioVirtualProtectedOutput **))v7)(
         v7,
         &GUID_562462dd_4f9a_4110_9d6a_c3ca0407ff76,
         &v11);
  if ( v5 < 0 )
    goto LABEL_10;
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
