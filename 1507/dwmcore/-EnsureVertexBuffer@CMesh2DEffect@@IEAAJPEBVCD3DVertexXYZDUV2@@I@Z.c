/*
 * XREFs of ?EnsureVertexBuffer@CMesh2DEffect@@IEAAJPEBVCD3DVertexXYZDUV2@@I@Z @ 0x18015B004
 * Callers:
 *     ?SetVertices@CMesh2DEffect@@QEAAJPEBEI@Z @ 0x18015B78C (-SetVertices@CMesh2DEffect@@QEAAJPEBEI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CMesh2DEffect::EnsureVertexBuffer(
        CMesh2DEffect *this,
        const struct CD3DVertexXYZDUV2 *a2,
        unsigned int a3)
{
  _QWORD *v3; // r15
  __int64 v4; // rdi
  __int64 v6; // r14
  unsigned int v8; // r12d
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  int v14; // eax
  _DWORD v16[2]; // [rsp+30h] [rbp-40h] BYREF
  const struct CD3DVertexXYZDUV2 *v17; // [rsp+38h] [rbp-38h]
  int v18; // [rsp+40h] [rbp-30h]
  void *v19; // [rsp+48h] [rbp-28h] BYREF
  int v20; // [rsp+50h] [rbp-20h]
  char **v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+64h] [rbp-Ch]
  void *v24; // [rsp+B0h] [rbp+40h] BYREF
  int v25; // [rsp+C8h] [rbp+58h]
  unsigned int v26; // [rsp+CCh] [rbp+5Ch]

  v25 = 0;
  v3 = (_QWORD *)((char *)this + 176);
  v4 = *((_QWORD *)this + 22);
  v6 = a3;
  v26 = a3;
  if ( !v4 )
    goto LABEL_8;
  v8 = *((_DWORD *)this + 46);
  if ( v8 < a3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *v3 = 0LL;
LABEL_8:
    *((_DWORD *)this + 46) = 0;
    v19 = &unk_1801765A0;
    v20 = 2312;
    v21 = &off_180176160;
    v22 = 4;
    v23 = 32;
    if ( (unsigned __int64)(32 * v6) > 0xFFFFFFFF )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x22Eu);
      return v10;
    }
    v12 = *((_QWORD *)this + 17);
    v16[0] = 1;
    v16[1] = 1;
    v18 = 32 * v6;
    v17 = a2;
    v13 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, void **, _QWORD *))(*(_QWORD *)v12 + 136LL))(
            v12,
            v16,
            0LL,
            &v19,
            v3);
    v10 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x23Eu);
      return v10;
    }
    goto LABEL_12;
  }
  v24 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, &v24, 32 * v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x247u);
    return v10;
  }
  memcpy_0(v24, a2, 32 * v6);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 32LL))(*v3);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x24Fu);
    return v10;
  }
LABEL_12:
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 16) + 88LL))(
          *((_QWORD *)this + 16),
          *v3,
          4LL);
  v10 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x258u);
  return v10;
}
