/*
 * XREFs of ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800A8D84
 * Callers:
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800A8CFC (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180112BF0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(struct _LUID *this)
{
  unsigned int v2; // ecx
  DWORD LowPart; // edx
  int RenderTargetBitmapFromTexture; // eax
  int v5; // ebx
  struct _LUID *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // edx
  struct _LUID v12; // r8
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-40h]
  __int128 v18; // [rsp+50h] [rbp-10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+20h] BYREF
  __int64 v20; // [rsp+88h] [rbp+28h] BYREF
  __int64 v21; // [rsp+90h] [rbp+30h] BYREF
  int v22; // [rsp+98h] [rbp+38h]
  int v23; // [rsp+9Ch] [rbp+3Ch]

  v21 = 0LL;
  v19 = 0LL;
  v2 = 0;
  v20 = 0LL;
  v23 = 0;
  LowPart = this[53].LowPart;
  v22 = 1;
  if ( LowPart )
  {
    v12 = this[50];
    while ( *(_QWORD *)(*(_QWORD *)&v12 + 16LL * v2) != *(_QWORD *)&this[66] )
    {
      if ( ++v2 >= LowPart )
        goto LABEL_2;
    }
    v19 = *(_QWORD *)(*(_QWORD *)&v12 + 16LL * v2 + 8);
    if ( v19 )
      goto LABEL_8;
  }
LABEL_2:
  RenderTargetBitmapFromTexture = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&this[66])(
                                    *(_QWORD *)&this[66],
                                    &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                                    &v21);
  v5 = RenderTargetBitmapFromTexture;
  if ( RenderTargetBitmapFromTexture < 0 )
  {
    v17 = 331;
    goto LABEL_36;
  }
  RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                    (int)&qword_1801F0018,
                                    v22,
                                    0,
                                    (int)this + 352,
                                    (struct _GUID *)(*(_QWORD *)&this[2] + 252LL),
                                    this[67],
                                    DisplayId::All,
                                    v21,
                                    (__int64)&v20);
  v5 = RenderTargetBitmapFromTexture;
  if ( RenderTargetBitmapFromTexture < 0 )
  {
    v17 = 341;
LABEL_36:
    v16 = RenderTargetBitmapFromTexture;
    goto LABEL_37;
  }
  v6 = this + 50;
  *(struct _LUID *)&v18 = this[66];
  *((_QWORD *)&v18 + 1) = v20;
  v7 = this[53].LowPart;
  v8 = v7 + 1;
  if ( (int)v7 + 1 >= (unsigned int)v7 )
  {
    if ( v8 <= this[52].HighPart )
    {
      *(_OWORD *)(*(_QWORD *)v6 + 16 * v7) = v18;
      this[53].LowPart = v8;
LABEL_23:
      v13 = v20;
      v20 = 0LL;
      v19 = v13;
LABEL_8:
      v9 = this[34].LowPart;
      v10 = v9 + 1;
      if ( v9 + 1 >= v9 )
      {
        v5 = 0;
        if ( v10 <= this[33].HighPart )
        {
          *(_QWORD *)(*(_QWORD *)&this[31] + 8LL * this[34].LowPart) = v19;
          this[34].LowPart = v10;
          goto LABEL_11;
        }
        v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[31], 8u, 1, &v19);
        v5 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
      }
      else
      {
        v5 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v5 >= 0 )
      {
LABEL_11:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        goto LABEL_12;
      }
      v17 = 355;
      goto LABEL_33;
    }
    v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v6, 0x10u, 1, &v18);
    v5 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
  }
  else
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  if ( v5 >= 0 )
    goto LABEL_23;
  v17 = 347;
LABEL_33:
  v16 = v5;
LABEL_37:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v17);
LABEL_12:
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return (unsigned int)v5;
}
