/*
 * XREFs of ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x180013B90
 * Callers:
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x180013914 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLayout@@@Z @ 0x180013E00 (-GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLay.c)
 *     ?HasSourceClip@CBitmapSource@@QEBA_NXZ @ 0x18001CBC8 (-HasSourceClip@CBitmapSource@@QEBA_NXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CDrawNineGridInstruction::Initialize(CDrawNineGridInstruction *this, struct CBitmapSource *a2)
{
  __int128 v2; // xmm0
  unsigned int v3; // r14d
  unsigned int v6; // esi
  __int64 v7; // rdx
  CResource **v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r13d
  int v12; // r12d
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // [rsp+38h] [rbp-D0h]
  int v18; // [rsp+3Ch] [rbp-CCh]
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+48h] [rbp-C0h]
  int v21; // [rsp+4Ch] [rbp-BCh]
  _QWORD v22[3]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v23[8]; // [rsp+68h] [rbp-A0h] BYREF
  int v24; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v25[4]; // [rsp+8Ch] [rbp-7Ch] BYREF
  double v26; // [rsp+90h] [rbp-78h]
  __int128 v27; // [rsp+98h] [rbp-70h]
  float v28; // [rsp+A8h] [rbp-60h]
  float v29; // [rsp+ACh] [rbp-5Ch]
  float v30; // [rsp+B0h] [rbp-58h]
  float v31; // [rsp+B4h] [rbp-54h]
  __int64 v32; // [rsp+CCh] [rbp-3Ch]
  __int64 v33; // [rsp+D4h] [rbp-34h]
  __int64 v34; // [rsp+E4h] [rbp-24h]
  int v35; // [rsp+ECh] [rbp-1Ch]
  int v36; // [rsp+F0h] [rbp-18h]
  int v37; // [rsp+F8h] [rbp-10h]

  v2 = *((_OWORD *)a2 + 2);
  v3 = 0;
  v19 = 0LL;
  *((_OWORD *)this + 1) = v2;
  v6 = 0;
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 3);
  v20 = *((_DWORD *)a2 + 6);
  v21 = *((_DWORD *)a2 + 7);
  if ( CBitmapSource::HasSourceClip(a2) )
    v19 = *(_QWORD *)(v7 + 80);
  *(_OWORD *)&v22[1] = v2;
  CDrawNineGridInstruction::GetNineGridLayout(
    (struct _MARGINS *)&v22[1],
    (const struct MilPointAndSizeL *)&v19,
    (struct NineGridLayout *)v23);
  v8 = (CResource **)((char *)this + 48);
  *((_DWORD *)this + 30) = 0;
  while ( 1 )
  {
    v9 = v3 / 3;
    v10 = v3 % 3;
    v11 = v23[(unsigned int)(v10 + 1)] - v23[v10];
    v17 = v23[v10];
    v12 = v23[(unsigned int)(v9 + 1) + 4] - v23[v9 + 4];
    v18 = v23[v9 + 4];
    if ( v11 <= 0 || v12 <= 0 )
    {
      *v8 = 0LL;
      goto LABEL_6;
    }
    ++*((_DWORD *)this + 30);
    v14 = CResource::Create(75LL, *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL));
    v6 = v14;
    if ( v14 < 0 )
      break;
    v24 = 257;
    memset_0(v25, 0, 0x70uLL);
    v27 = _xmm;
    v32 = 0LL;
    v33 = 1LL;
    v34 = 1LL;
    v35 = 1;
    v36 = 1;
    v28 = (float)v17;
    v29 = (float)v18;
    v15 = *((_QWORD *)a2 + 2);
    v31 = (float)(v18 + v12);
    v26 = DOUBLE_1_0;
    v30 = (float)(v11 + v17);
    v37 = *(_DWORD *)(v15 + 24);
    v16 = CResource::Send(*v8, &v24, 0x74u);
    v6 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x88u);
      return v6;
    }
LABEL_6:
    ++v3;
    ++v8;
    if ( v3 >= 9 )
      return v6;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x70u);
  return v6;
}
