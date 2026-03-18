/*
 * XREFs of ?EnsureParentWorldTransforms@CHitTestContext@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180007F10
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x180008B40 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 * Callees:
 *     ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@W4WalkReason@@@Z @ 0x18000937C (-EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@W4WalkReason@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004DB1C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHitTestContext::EnsureParentWorldTransforms(
        CHitTestContext *this,
        CVisual **a2,
        struct CVisual *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // r9d
  __int64 v6; // r14
  int v7; // ebx
  unsigned int v8; // ecx
  __int64 v9; // rax
  struct CTreeData *TreeData; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  int v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+44h] [rbp-Ch]
  CVisual *v20; // [rsp+70h] [rbp+20h] BYREF

  v20 = this;
  v3 = 0;
  if ( a3 != a2[3] )
  {
    v18 = 0;
    v5 = 0;
    v19 = 0LL;
    v17 = 0LL;
    v6 = 0LL;
    v7 = 0;
    v20 = a3;
    do
    {
      v8 = v7 + 1;
      v20 = (CVisual *)*((_QWORD *)a3 + 8);
      if ( v7 + 1 < (unsigned int)v7 )
      {
        v15 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v3 = -2147024362;
LABEL_18:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1F9u);
        goto LABEL_14;
      }
      v3 = 0;
      if ( v8 > v5 )
      {
        v14 = DynArrayImpl<0>::AddMultipleAndSet(&v17, 8LL, 1LL, &v20);
        v15 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
        v3 = v15;
        if ( v15 < 0 )
          goto LABEL_18;
        v7 = HIDWORD(v19);
        v5 = v19;
        v6 = v17;
      }
      else
      {
        v9 = (unsigned int)v7++;
        HIDWORD(v19) = v8;
        *(_QWORD *)(v6 + 8 * v9) = v20;
      }
      a3 = v20;
    }
    while ( v20 != a2[3] );
    while ( v7 > 0 )
    {
      v20 = *(CVisual **)(v6 + 8LL * (unsigned int)(v7 - 1));
      TreeData = CVisual::FindTreeData(v20, (const struct CVisualTree *)a2);
      v13 = CVisual::EnsureWorldTransform(v12, v11, TreeData);
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x207u);
        break;
      }
      --v7;
    }
LABEL_14:
    DynArrayImpl<1>::~DynArrayImpl<1>(&v17);
  }
  return v3;
}
