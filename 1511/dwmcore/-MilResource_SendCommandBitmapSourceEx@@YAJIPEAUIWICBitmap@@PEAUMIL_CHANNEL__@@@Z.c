/*
 * XREFs of ?MilResource_SendCommandBitmapSourceEx@@YAJIPEAUIWICBitmap@@PEAUMIL_CHANNEL__@@@Z @ 0x1800A3740
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800A0600 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall MilResource_SendCommandBitmapSourceEx(int a1, struct IWICBitmap *a2, struct MIL_CHANNEL__ *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+34h] [rbp-14h]
  struct IWICBitmap *v11; // [rsp+38h] [rbp-10h]

  v10 = 0;
  v11 = 0LL;
  v9 = 28;
  if ( a2 )
  {
    if ( a3 )
    {
      ((void (__fastcall *)(struct IWICBitmap *))a2->lpVtbl->AddRef)(a2);
      v10 = a1;
      v11 = a2;
      v6 = CChannel::SendCommand(a3, &v9, 0x10u);
      v7 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1F6u);
    }
    else
    {
      v7 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1EAu);
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1E9u);
  }
  return v7;
}
