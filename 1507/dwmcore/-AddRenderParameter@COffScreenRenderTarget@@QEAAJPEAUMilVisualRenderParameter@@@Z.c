/*
 * XREFs of ?AddRenderParameter@COffScreenRenderTarget@@QEAAJPEAUMilVisualRenderParameter@@@Z @ 0x1800EBED8
 * Callers:
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800E2B0C (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::AddRenderParameter(
        COffScreenRenderTarget *this,
        struct MilVisualRenderParameter *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // edi
  __int64 v4; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // r8d
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax

  v2 = *((_DWORD *)this + 48);
  v3 = 0;
  v4 = 0LL;
  if ( v2 )
  {
    while ( 1 )
    {
      v6 = *((_QWORD *)this + 21) + 24 * v4;
      if ( *(_DWORD *)v6 == *(_DWORD *)a2 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v2 )
        goto LABEL_4;
    }
    if ( v6 )
    {
      *(_OWORD *)v6 = *(_OWORD *)a2;
      *(_QWORD *)(v6 + 16) = *((_QWORD *)a2 + 2);
      return v3;
    }
  }
LABEL_4:
  v7 = *((unsigned int *)this + 48);
  v8 = v7 + 1;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v3 = -2147024362;
    goto LABEL_13;
  }
  if ( v8 <= *((_DWORD *)this + 47) )
  {
    v10 = 3 * v7;
    v11 = *((_QWORD *)this + 21);
    *(_OWORD *)(v11 + 8 * v10) = *(_OWORD *)a2;
    *(_QWORD *)(v11 + 8 * v10 + 16) = *((_QWORD *)a2 + 2);
    *((_DWORD *)this + 48) = v8;
    return v3;
  }
  v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 168, 0x18u, 1, a2);
  v9 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
  v3 = v9;
  if ( v9 < 0 )
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x248u);
  return v3;
}
