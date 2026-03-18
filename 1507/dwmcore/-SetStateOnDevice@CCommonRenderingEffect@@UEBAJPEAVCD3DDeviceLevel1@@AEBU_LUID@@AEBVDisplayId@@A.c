/*
 * XREFs of ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x18003F550
 * Callers:
 *     <none>
 * Callees:
 *     ?IsStereoContent@CBitmapRealization@@UEBA_NXZ @ 0x180003550 (-IsStereoContent@CBitmapRealization@@UEBA_NXZ.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180007664 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18001E810 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoC.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCommonRenderingEffect::SetStateOnDevice(
        CCommonRenderingEffect *this,
        struct CD3DDeviceLevel1 *a2,
        const struct _LUID *a3,
        const struct DisplayId *a4,
        const enum StereoContext *a5)
{
  __int64 v6; // rdi
  char *v7; // rbp
  unsigned int v8; // r15d
  signed __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // r14d
  __int64 v12; // r13
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  struct _LUID v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 (__fastcall *v19)(__int64, struct _LUID, int, __int64, struct ID3D11ShaderResourceView **); // r13
  int BitmapShaderResourceViewNoRef; // eax
  __int64 v21; // r14
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  CCompositionSurfaceInfo *v23; // rcx
  struct CBitmapRealization *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rax
  char *v27; // [rsp+30h] [rbp-88h]
  signed __int64 v28; // [rsp+38h] [rbp-80h]
  __int64 v29; // [rsp+40h] [rbp-78h]
  __int128 v30; // [rsp+48h] [rbp-70h] BYREF
  _OWORD v31[6]; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v32; // [rsp+C0h] [rbp+8h]

  v29 = *((_QWORD *)a2 + 69);
  v6 = *((_QWORD *)a2 + *((unsigned int *)this + 8) + 137);
  v30 = 0LL;
  v31[0] = 0LL;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v29 + 88LL))(
    v29,
    *((_QWORD *)a2 + 136),
    0LL,
    0LL);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v29 + 72LL))(v29, v6, 0LL, 0LL);
  v7 = (char *)this + 24;
  v8 = 0;
  v27 = (char *)this + 24;
  v9 = this - (CCommonRenderingEffect *)&v30 + 8;
  v10 = 0LL;
  v11 = 0;
  v28 = v9;
  while ( 1 )
  {
    v12 = *(_QWORD *)((char *)&v31[-1] + v10 + v9);
    if ( v12 )
      break;
LABEL_3:
    v7 += 4;
    ++v8;
    v10 += 8LL;
    v27 = v7;
    if ( v8 >= 2 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v29 + 64LL))(v29, 0LL, 2LL, &v30);
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _OWORD *))(*(_QWORD *)v29 + 80LL))(v29, 0LL, 2LL, v31);
      return (unsigned int)v11;
    }
  }
  *(_QWORD *)((char *)&v31[-1] + v10) = 0LL;
  v14 = *(_DWORD *)a5;
  v32 = *(_DWORD *)a5;
  v15 = *(_DWORD *)a4;
  v16 = *a3;
  if ( !*(_QWORD *)(v12 + 440) )
  {
    if ( *(_BYTE *)(v12 + 448) )
    {
      --*(_DWORD *)(*(_QWORD *)(v12 + 16) + 212LL);
      *(_BYTE *)(v12 + 448) = 0;
    }
    if ( *(_BYTE *)(v12 + 449) )
    {
      --*(_DWORD *)(*(_QWORD *)(v12 + 16) + 208LL);
      *(_BYTE *)(v12 + 449) = 0;
    }
    v21 = *(_QWORD *)(v12 + 440);
    if ( *(_QWORD *)(v12 + 432) )
    {
      if ( v21 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(__int64, struct _LUID, int, __int64, struct ID3D11ShaderResourceView **)))(*(_QWORD *)v21 + 16LL))(
          *(_QWORD *)(v12 + 440),
          CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef);
        v7 = v27;
      }
      RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*(CCompositionSurfaceInfo **)(v12 + 432));
      v23 = *(CCompositionSurfaceInfo **)(v12 + 432);
      *(_QWORD *)(v12 + 440) = RenderingRealizationNoRef;
      if ( !CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v23) )
        goto LABEL_24;
      v24 = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*(CCompositionSurfaceInfo **)(v12 + 432));
      (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v24 + 8LL))(v24);
    }
    else
    {
      if ( !v21 )
        goto LABEL_25;
      (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(__int64, struct _LUID, int, __int64, struct ID3D11ShaderResourceView **)))(*(_QWORD *)v21 + 16LL))(
        *(_QWORD *)(v12 + 440),
        CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef);
      *(_QWORD *)(v12 + 440) = 0LL;
    }
    v7 = v27;
LABEL_24:
    v14 = v32;
LABEL_25:
    v25 = *(_QWORD *)(v12 + 440);
    if ( v25 )
    {
      if ( CBitmapRealization::IsStereoContent((CBitmapRealization *)(v25 + 112)) )
      {
        ++*(_DWORD *)(*(_QWORD *)(v12 + 16) + 212LL);
        *(_BYTE *)(v12 + 448) = 1;
      }
      v26 = *(_QWORD *)(v12 + 440);
      if ( *(_DWORD *)(v26 + 168) || *(_DWORD *)(v26 + 144) && *(_QWORD *)(v26 + 136) )
      {
        ++*(_DWORD *)(*(_QWORD *)(v12 + 16) + 208LL);
        *(_BYTE *)(v12 + 449) = 1;
      }
      v14 = v32;
    }
  }
  v17 = *(_QWORD *)(v12 + 440);
  if ( v17 )
  {
    v18 = v17 + 112;
    v19 = *(__int64 (__fastcall **)(__int64, struct _LUID, int, __int64, struct ID3D11ShaderResourceView **))(*(_QWORD *)(v17 + 112) + 104LL);
    if ( v19 == CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef )
      BitmapShaderResourceViewNoRef = CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef(
                                        v18,
                                        v16,
                                        v15,
                                        v14,
                                        (struct ID3D11ShaderResourceView **)((char *)&v31[-1] + v10));
    else
      BitmapShaderResourceViewNoRef = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v19)(
                                        v18,
                                        v16,
                                        v15,
                                        v32,
                                        (struct ID3D11ShaderResourceView **)((char *)&v31[-1] + v10));
    v11 = BitmapShaderResourceViewNoRef;
    if ( BitmapShaderResourceViewNoRef >= 0 )
      goto LABEL_11;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapShaderResourceViewNoRef, 0x75u);
  }
  else
  {
    v11 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x79u);
  }
  if ( v11 >= 0 )
  {
LABEL_11:
    v9 = v28;
    *(_QWORD *)((char *)v31 + v10) = *((_QWORD *)a2 + *(int *)v7 + 174);
    goto LABEL_3;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xCBu);
  return (unsigned int)v11;
}
