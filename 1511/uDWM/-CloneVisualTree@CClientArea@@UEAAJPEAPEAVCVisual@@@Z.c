/*
 * XREFs of ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@@Z @ 0x18003D2C0
 * Callers:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x1800228F0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x1800228F0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 *     ?Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18003D184 (-Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CClientArea::CloneVisualTree(CClientArea *this, struct CVisual **a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  struct CClientArea *v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 33);
  v3 = 0;
  v12 = 0;
  if ( v2 )
  {
    v6 = *(_QWORD *)(v2 + 24);
    if ( v6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v6 + 296LL))(
             v6,
             *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
             &v12);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x82u);
      }
      else
      {
        v8 = *((_QWORD *)this + 2);
        v13 = 0LL;
        v9 = CClientArea::Create(*(struct MIL_CHANNEL__ *const *)(v8 + 16), v12, &v13);
        v3 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x86u);
        }
        else
        {
          *a2 = v13;
          v10 = CVisual::CloneVisualTree(this, a2);
          v3 = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x8Du);
        }
      }
    }
  }
  MilResource_ReleaseOnChannel(*(struct MIL_CHANNEL__ **)(*((_QWORD *)this + 2) + 16LL), v12, 0LL);
  return v3;
}
