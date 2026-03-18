/*
 * XREFs of ?RedirectMouseWheelToHwnd@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAUHWND__@@_N@Z @ 0x1C0004E10
 * Callers:
 *     <none>
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001AFD8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C004BCA8 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEA.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C004EB30 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C00E0650 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RedirectMouseWheelToHwnd(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        HWND a3,
        char a4)
{
  struct DirectComposition::CResourceMarshaler *v4; // rax
  HWND v5; // r10
  int v6; // ebx
  int v11; // ecx
  unsigned int v12; // ecx
  __int64 v14; // rcx
  int WindowForInputType; // eax
  __int64 v16; // rax
  struct DirectComposition::CResourceMarshaler *v17; // [rsp+38h] [rbp-D0h] BYREF
  HWND v18; // [rsp+40h] [rbp-C8h] BYREF
  void *v19; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v20[32]; // [rsp+58h] [rbp-B0h] BYREF
  bool v21; // [rsp+178h] [rbp+70h] BYREF

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 21);
  v5 = 0LL;
  v6 = 0;
  v18 = 0LL;
  v17 = v4;
  if ( !v4 )
    goto LABEL_2;
  v18 = 0LL;
  v14 = *((_QWORD *)v4 + 23);
  if ( v14 )
  {
    WindowForInputType = CompositionInputObject::GetWindowForInputType(v14, 1LL, &v18);
    v5 = v18;
    v6 = WindowForInputType;
    v4 = v17;
  }
  if ( v6 >= 0 )
  {
LABEL_2:
    if ( a3 == v5 )
      goto LABEL_9;
    v19 = 0LL;
    if ( *((_QWORD *)this + 21) )
    {
      v16 = *(_QWORD *)this;
      v21 = 0;
      v6 = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64))(v16 + 160))(
             this,
             a2,
             20LL);
    }
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, _QWORD, struct DirectComposition::CResourceMarshaler **))(*(_QWORD *)this + 256LL))(
             this,
             a2,
             0LL,
             &v17);
      if ( v6 >= 0 )
      {
        memset(v20, 0, 0xF8uLL);
        LODWORD(v20[7]) = 0;
        LODWORD(v20[13]) = 0;
        LODWORD(v20[19]) = 0;
        LODWORD(v20[0]) = 200;
        LODWORD(v20[1]) = 2;
        v20[2] = a3;
        v6 = CompositionInputObject::KernelCreateCompositionInputSink(
               (const struct COMPOSITION_INPUT_SINK_V2 *)v20,
               0,
               &v19);
        if ( v6 >= 0 )
        {
          v6 = DirectComposition::CInteractionMarshaler::SetInputSinkHelper(v17, v19, &v21);
          v4 = v17;
LABEL_9:
          if ( v6 >= 0 )
          {
            v11 = *((_DWORD *)v4 + 26);
            if ( a4 )
              v12 = v11 | 1;
            else
              v12 = v11 & 0xFFFFFFFE;
            if ( v12 != *((_DWORD *)v4 + 26) )
            {
              *((_DWORD *)v4 + 13) |= 1u;
              *((_DWORD *)v4 + 26) = v12;
              DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, v17);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
