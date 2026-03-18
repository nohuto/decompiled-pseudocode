/*
 * XREFs of ?EnsureParentWorldTransforms@CHitTestContext@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000A934
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x18000AF70 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PE.c)
 * Callees:
 *     ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18000C56C (-EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CHitTestContext::EnsureParentWorldTransforms(
        CHitTestContext *this,
        struct CVisual **a2,
        struct CVisual *a3)
{
  int v3; // ebx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  CVisual *v8; // rbx
  struct CTreeData *TreeData; // rax
  int v10; // eax
  int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF
  int v14; // [rsp+40h] [rbp-10h]
  unsigned int v15; // [rsp+44h] [rbp-Ch]
  int v16; // [rsp+48h] [rbp-8h]
  CVisual *v17; // [rsp+60h] [rbp+10h] BYREF

  v17 = this;
  v3 = 0;
  if ( a3 == a2[3] )
    return (unsigned int)v3;
  v14 = 0;
  v15 = 0;
  v5 = 0;
  v17 = a3;
  v16 = 0;
  v13 = 0LL;
  do
  {
    v6 = (unsigned int)(v5 + 1);
    v17 = (CVisual *)*((_QWORD *)a3 + 18);
    if ( (unsigned int)v6 < v5 )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v3 = 0;
      if ( (unsigned int)v6 <= v15 )
      {
        v7 = (unsigned int)v5++;
        v16 = v6;
        *(_QWORD *)(v13 + 8 * v7) = v17;
        goto LABEL_6;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet(&v13, 8LL, 1LL, &v17);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
      v5 = v16;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x209u);
      goto LABEL_15;
    }
LABEL_6:
    a3 = v17;
  }
  while ( v17 != a2[3] );
  while ( v5 > 0 )
  {
    v17 = *(CVisual **)(v13 + 8LL * (unsigned int)(v5 - 1));
    v8 = v17;
    TreeData = CVisual::FindTreeData(v17, (const struct CVisualTree *)a2);
    v10 = CVisual::EnsureWorldTransform(v8, (const struct CVisualTree *)a2, TreeData);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x216u);
      break;
    }
    --v5;
  }
LABEL_15:
  DynArrayImpl<1>::~DynArrayImpl<1>(&v13, v6, a3);
  return (unsigned int)v3;
}
