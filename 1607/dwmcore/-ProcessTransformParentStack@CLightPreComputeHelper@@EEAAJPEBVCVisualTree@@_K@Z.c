/*
 * XREFs of ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z @ 0x18018DA50
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000C434 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004EB80 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004F938 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z @ 0x1800AEE6C (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z.c)
 *     ?UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z @ 0x180113538 (-UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CLightPreComputeHelper::ProcessTransformParentStack(
        CLightPreComputeHelper *this,
        const struct CVisualTree *a2,
        __int64 a3)
{
  int *v3; // r13
  struct _LIST_ENTRY *TreeData; // r14
  unsigned __int64 Blink; // r15
  CVisual *v7; // rbx
  CVisual *v8; // rcx
  char v9; // bp
  int v10; // eax
  unsigned int v11; // edi
  CPreComputeHelper *v12; // rcx
  struct CTreeData *v13; // rsi
  int updated; // eax
  CVisual *v16; // [rsp+80h] [rbp+8h] BYREF
  struct CTreeData *v17; // [rsp+88h] [rbp+10h] BYREF
  __int64 v18; // [rsp+90h] [rbp+18h]

  v18 = a3;
  v16 = 0LL;
  v3 = (int *)((char *)this + 8);
  TreeData = 0LL;
  Blink = 1LL;
  CWatermarkStack<CVisual *,64,2,10>::Pop((int *)this + 2, &v16);
  v7 = v16;
  if ( v16 != *((CVisual **)a2 + 3) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v16 + 34) + 4LL) & 0x10000000) != 0 )
      v8 = **(CVisual ***)CVisual::GetTransformParentDataInternal(v16);
    else
      v8 = (CVisual *)*((_QWORD *)v16 + 18);
    TreeData = CVisual::FindTreeData(v8, a2);
    Blink = (unsigned __int64)TreeData[7].Blink;
  }
  while ( 1 )
  {
    v17 = 0LL;
    v9 = 0;
    v10 = CVisual::EnsureTreeData(v7, a2, &v17);
    v11 = v10;
    if ( v10 < 0 )
      break;
    v12 = (CPreComputeHelper *)*((_QWORD *)v7 + 34);
    v13 = v17;
    if ( (*((_DWORD *)v12 + 1) & 0x10000000) != 0 && ((*((_BYTE *)v17 + 16) & 4) == 0 || *((_QWORD *)v17 + 27) != v18) )
      v9 = 1;
    CPreComputeHelper::UpdateRelativeLayout(v12, v7);
    if ( *((_QWORD *)v13 + 15) < Blink )
    {
      updated = CVisual::UpdateWorldTransform(v7, (CVisual **)a2, v13, v9, (const struct CTreeData *)TreeData);
      v11 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x2D7u);
        return v11;
      }
      CVisual::PropagateFlags(v7, 1, 1, 0, 0, 0, 0);
      *((_QWORD *)v13 + 22) = 0LL;
    }
    Blink = *((_QWORD *)v13 + 15);
    TreeData = (struct _LIST_ENTRY *)v13;
    if ( !(unsigned int)CWatermarkStack<CVisual *,64,2,10>::Pop(v3, &v16) )
      return v11;
    v7 = v16;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2C3u);
  return v11;
}
