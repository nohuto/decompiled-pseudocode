/*
 * XREFs of ?GenerateGeometry@Mesh@@QEAAJHHPEAVCVertexXYAAColorDUV2@@PEAHGPEAG1@Z @ 0x180075EB4
 * Callers:
 *     ?AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z @ 0x180077E28 (-AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z.c)
 * Callees:
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x180009D48 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GenerateAntialiasBorder@Mesh@@AEBAXHPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH1@Z @ 0x180074674 (-GenerateAntialiasBorder@Mesh@@AEBAXHPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH1@Z.c)
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x180074BA8 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall Mesh::GenerateGeometry(
        Mesh *this,
        int a2,
        int a3,
        struct CVertexXYAAColorDUV2 *a4,
        int *a5,
        unsigned __int16 a6,
        unsigned __int16 *a7,
        int *a8)
{
  bool v9; // zf
  int v12; // r14d
  int v13; // esi
  unsigned __int16 *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int16 v17; // ax
  unsigned int v18; // ebx
  __int64 v20; // rcx
  int inited; // eax
  int v22; // edx
  unsigned int v23; // [rsp+20h] [rbp-58h]
  int v24; // [rsp+30h] [rbp-48h]
  int v25[4]; // [rsp+40h] [rbp-38h] BYREF
  int v26; // [rsp+80h] [rbp+8h] BYREF

  v9 = (*((_BYTE *)this + 104) & 1) == 0;
  v25[0] = 0;
  v12 = 0;
  v26 = 0;
  v13 = 0;
  if ( v9 )
  {
    v18 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x12BEu);
    return v18;
  }
  v14 = a7;
  if ( a2 )
  {
    v15 = *((_QWORD *)this + 3);
    if ( v15 && (*((_BYTE *)this + 104) & 0x10) == 0 && (*((_BYTE *)this + 104) & 8) == 0 )
    {
      v16 = *(int *)(v15 + 128);
      if ( (int)v16 > 0 )
      {
        memcpy_0(a7, *(const void **)(v15 + 112), 2 * v16);
        v13 = *(_DWORD *)(*((_QWORD *)this + 3) + 128LL);
        v26 = v13;
      }
      goto LABEL_8;
    }
    inited = Mesh::InitMeshGraph(this);
    v18 = inited;
    if ( inited < 0 )
    {
      v23 = 4837;
      goto LABEL_26;
    }
    v22 = *(_DWORD *)(*((_QWORD *)this + 2) + 100LL)
        + 2 * (*(_DWORD *)(*((_QWORD *)this + 2) + 92LL) - *(_DWORD *)(*((_QWORD *)this + 2) + 104LL));
    if ( v22 > 0 )
    {
      inited = Mesh::GenerateTriangles(this, v14, 3 * v22, &v26);
      v18 = inited;
      if ( inited >= 0 )
      {
        v13 = v26;
        goto LABEL_8;
      }
      v23 = 4845;
LABEL_26:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, v23);
      return v18;
    }
  }
LABEL_8:
  if ( *((int *)this + 3) > 0 )
  {
    memcpy_0(a4, *(const void **)this, (__int64)*((int *)this + 3) << 6);
    v12 = *((_DWORD *)this + 3);
    v25[0] = v12;
  }
  if ( (*((_BYTE *)this + 104) & 0x40) != 0 )
  {
    Mesh::GenerateAntialiasBorder(this, a3, a4, (__int64)a4, v25, v14, v24, &v26);
    v12 = v25[0];
    v13 = v26;
  }
  v17 = a6;
  if ( a6 && v13 > 0 )
  {
    v20 = (unsigned int)v13;
    do
    {
      *v14++ += v17;
      --v20;
    }
    while ( v20 );
  }
  v18 = 0;
  *a5 = v12;
  *a8 = v13;
  return v18;
}
