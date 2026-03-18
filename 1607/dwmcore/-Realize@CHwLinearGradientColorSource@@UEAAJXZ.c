/*
 * XREFs of ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x180181CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradientWrapMode@@W43MilColorInterpolationMode@@@Z @ 0x180181B5C (-FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradie.c)
 *     ?IsSysMemSurfaceValid@CHwVidMemTextureManager@@QEAA_NXZ @ 0x180181CB4 (-IsSysMemSurfaceValid@CHwVidMemTextureManager@@QEAA_NXZ.c)
 *     ?Destroy@CHwVidMemTextureManager@@AEAAXXZ @ 0x180181E6C (-Destroy@CHwVidMemTextureManager@@AEAAXXZ.c)
 *     ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x180181EA0 (-PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ.c)
 */

__int64 __fastcall CHwLinearGradientColorSource::Realize(CHwLinearGradientColorSource *this)
{
  char *v1; // rsi
  unsigned int v3; // ebx
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rdi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-18h]

  v1 = (char *)this + 128;
  v3 = 0;
  if ( !*((_QWORD *)this + 16) )
    goto LABEL_5;
  if ( *((_DWORD *)this + 26) != *((_DWORD *)this + 27) )
  {
    CHwVidMemTextureManager::Destroy((CHwLinearGradientColorSource *)((char *)this + 128));
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
    *((_QWORD *)v1 + 2) = 0LL;
    memset_0(v1 + 40, 0, 0x2CuLL);
  }
  if ( !*(_QWORD *)v1 )
  {
LABEL_5:
    v4 = *((_DWORD *)this + 26);
    *(_QWORD *)&v13 = "DWM Linear Gradient";
    *(_QWORD *)v1 = *((_QWORD *)this + 2);
    *((_DWORD *)v1 + 11) = 1;
    *((_DWORD *)v1 + 12) = 1;
    *((_DWORD *)v1 + 13) = 1;
    *(_QWORD *)(v1 + 60) = 1LL;
    *((_DWORD *)v1 + 10) = v4;
    *((_DWORD *)v1 + 14) = 87;
    *((_DWORD *)v1 + 17) = 0;
    *((_QWORD *)v1 + 9) = 8LL;
    *((_DWORD *)v1 + 20) = 0;
    DWORD2(v13) = 19;
    *(_OWORD *)(v1 + 24) = v13;
    *((_DWORD *)this + 27) = *((_DWORD *)this + 26);
  }
  if ( *((_BYTE *)this + 224) || !CHwVidMemTextureManager::IsSysMemSurfaceValid((CHwVidMemTextureManager *)v1) )
  {
    v6 = *((_QWORD *)this + 27);
    v7 = *(_DWORD *)(v6 + 224);
    v8 = v6 + 160;
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v6 + 120) + 40LL))(v6 + 120);
    v10 = CHwLinearGradientColorSource::FillGradientTexture((__int64)this, v8, v7, v9);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x195u);
      return v3;
    }
    *((_BYTE *)this + 224) = 0;
    goto LABEL_15;
  }
  v5 = *((_QWORD *)v1 + 2);
  if ( !v5 || !*(_BYTE *)(v5 + 77) )
    v5 = 0LL;
  if ( !v5 )
  {
LABEL_15:
    v11 = CHwVidMemTextureManager::PushBitsToVidMemTexture((CHwVidMemTextureManager *)v1);
    v3 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1A7u);
  }
  return v3;
}
