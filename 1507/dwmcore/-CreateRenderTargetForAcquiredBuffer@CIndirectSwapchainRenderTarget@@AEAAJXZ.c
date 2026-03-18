/*
 * XREFs of ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800EDF48
 * Callers:
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800EEBF8 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180132B30 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(struct _LUID *this)
{
  unsigned int v2; // ecx
  DWORD LowPart; // edx
  struct _LUID v4; // r8
  int v5; // eax
  unsigned int v6; // r14d
  int RenderTargetBitmapFromTexture; // eax
  int v8; // r9d
  struct _LUID *v9; // rcx
  __int64 v10; // rax
  DWORD v11; // edx
  int v12; // ebx
  __int64 v13; // rax
  unsigned int v14; // eax
  DWORD v15; // edx
  int v16; // eax
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-40h]
  __int128 v20; // [rsp+50h] [rbp-10h] BYREF
  __int64 v21; // [rsp+90h] [rbp+30h] BYREF
  __int64 v22; // [rsp+98h] [rbp+38h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+40h] BYREF
  int v24; // [rsp+A8h] [rbp+48h]
  int v25; // [rsp+ACh] [rbp+4Ch]

  v23 = 0LL;
  v21 = 0LL;
  v2 = 0;
  v22 = 0LL;
  v25 = 0;
  LowPart = this[47].LowPart;
  v24 = 1;
  if ( LowPart )
  {
    v4 = this[44];
    while ( *(_QWORD *)(*(_QWORD *)&v4 + 16LL * v2) != *(_QWORD *)&this[54] )
    {
      if ( ++v2 >= LowPart )
        goto LABEL_7;
    }
    v21 = *(_QWORD *)(*(_QWORD *)&v4 + 16LL * v2 + 8);
    if ( v21 )
      goto LABEL_16;
  }
LABEL_7:
  v5 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&this[54])(
         *(_QWORD *)&this[54],
         &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
         &v23);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x144u);
    goto LABEL_25;
  }
  RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                    (int)&qword_180195D88,
                                    v24,
                                    0,
                                    (int)this + 304,
                                    (struct _GUID *)(*(_QWORD *)&this[2] + 252LL),
                                    this[55],
                                    DisplayId::All,
                                    v23,
                                    (__int64)&v22);
  v6 = RenderTargetBitmapFromTexture;
  if ( RenderTargetBitmapFromTexture >= 0 )
  {
    v9 = this + 44;
    *(struct _LUID *)&v20 = this[54];
    *((_QWORD *)&v20 + 1) = v22;
    v10 = this[47].LowPart;
    v11 = v10 + 1;
    if ( (int)v10 + 1 < (unsigned int)v10 )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v6 = -2147024362;
LABEL_21:
      v19 = 340;
LABEL_34:
      v8 = v12;
      goto LABEL_35;
    }
    if ( v11 > this[46].HighPart )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v9, 0x10u, 1, &v20);
      v12 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
      v6 = v12;
      if ( v12 < 0 )
        goto LABEL_21;
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)v9 + 16 * v10) = v20;
      this[47].LowPart = v11;
    }
    v13 = v22;
    v22 = 0LL;
    v21 = v13;
LABEL_16:
    v14 = this[28].LowPart;
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v6 = -2147024362;
LABEL_33:
      v19 = 348;
      goto LABEL_34;
    }
    v6 = 0;
    if ( v15 > this[27].HighPart )
    {
      v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[25], 8u, 1, &v21);
      v12 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
      v6 = v12;
      if ( v12 < 0 )
        goto LABEL_33;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)&this[25] + 8LL * this[28].LowPart) = v21;
      this[28].LowPart = v15;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    goto LABEL_25;
  }
  v19 = 334;
  v8 = RenderTargetBitmapFromTexture;
LABEL_35:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v19);
LABEL_25:
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return v6;
}
