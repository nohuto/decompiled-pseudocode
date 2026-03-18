/*
 * XREFs of ?Update@CCpuClippingData@@QEAAJPEAVCVisual@@PEBV1@W4Enum@CpuClippingMode@@@Z @ 0x180059B30
 * Callers:
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@@Z @ 0x180034E5C (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@@Z.c)
 * Callees:
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@@Z @ 0x180017A14 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@@Z.c)
 *     ?UpdateScopeTransforms@CCpuClippingData@@AEAAJPEAVCVisual@@PEBV1@@Z @ 0x1800599D8 (-UpdateScopeTransforms@CCpuClippingData@@AEAAJPEAVCVisual@@PEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCpuClippingData::Update(int *a1, struct CVisual *a2, __int64 a3, int a4)
{
  unsigned int v4; // r15d
  bool v8; // cl
  char v9; // di
  char v10; // r14
  int v11; // eax
  int updated; // eax
  bool v13; // dl
  int v14; // ecx
  unsigned __int64 v15; // r8
  int v16; // ecx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax

  v4 = 0;
  v8 = *a1 == 0;
  v9 = 0;
  if ( a3 )
  {
    if ( *(_DWORD *)a3 == 4 && a4 <= 2 )
      a4 = 2;
  }
  else if ( a4 <= 2 )
  {
    a4 = 2;
  }
  v10 = v8;
  if ( a4 > *a1 )
    v10 = 1;
  if ( !*((_QWORD *)a1 + 5) )
  {
    v10 = 1;
    v9 = 1;
    *((_QWORD *)a1 + 5) = *(_QWORD *)(*((_QWORD *)a2 + 2) + 352LL);
  }
  if ( !*((_QWORD *)a1 + 7) )
  {
    v10 = 1;
    v9 = 1;
    *((_QWORD *)a1 + 7) = *(_QWORD *)(*((_QWORD *)a2 + 2) + 352LL);
  }
  if ( !*((_QWORD *)a1 + 6) )
  {
    v10 = 1;
    v9 = 1;
    *((_QWORD *)a1 + 6) = *(_QWORD *)(*((_QWORD *)a2 + 2) + 352LL);
  }
  if ( v10 )
  {
    v11 = CCpuClippingData::CalcMode((__int64)a2, a4);
    if ( *a1 != v11 )
    {
      *a1 = v11;
      v9 = 1;
      *((_QWORD *)a1 + 1) = *(_QWORD *)(*((_QWORD *)a2 + 2) + 352LL);
    }
  }
  if ( !a3 || *(_DWORD *)a3 == 4 || *(_QWORD *)(a3 + 32) <= *((_QWORD *)a1 + 4) )
  {
LABEL_17:
    if ( !v9 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( *a1 != 1 )
  {
    if ( *a1 == 3 && *((_QWORD *)a2 + 46) )
      v9 = 1;
    goto LABEL_17;
  }
  v9 = 1;
LABEL_18:
  updated = CCpuClippingData::UpdateScopeTransforms((CCpuClippingData *)a1, a2, (const struct CCpuClippingData *)a3);
  v4 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x73u);
    return v4;
  }
LABEL_19:
  if ( v10 || v9 )
  {
    v13 = a3 && *(_DWORD *)(a3 + 72);
    a1[18] = 0;
    v14 = *a1;
    v15 = *((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 8) = v15;
    v16 = v14 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
        return v4;
    }
    else
    {
      v18 = *(_QWORD *)(a3 + 64);
      if ( v15 > v18 )
        v18 = v15;
      *((_QWORD *)a1 + 8) = v18;
      if ( v13 )
      {
        a1[18] = *(_DWORD *)(a3 + 72);
        v19 = *((_QWORD *)a1 + 5);
        if ( v18 > v19 )
          v19 = v18;
        *((_QWORD *)a1 + 8) = v19;
      }
    }
    v20 = *((_QWORD *)a1 + 6);
    if ( *((_QWORD *)a1 + 8) > v20 )
      v20 = *((_QWORD *)a1 + 8);
    *((_QWORD *)a1 + 8) = v20;
    if ( v13 || *((_QWORD *)a2 + 46) )
    {
      v21 = *((_QWORD *)a1 + 7);
      if ( v20 > v21 )
        v21 = v20;
      *((_QWORD *)a1 + 8) = v21;
      if ( *((_QWORD *)a2 + 46) )
        ++a1[18];
    }
  }
  return v4;
}
