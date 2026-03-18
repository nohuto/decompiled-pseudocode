/*
 * XREFs of ?BuildTransformParentStack@CLightPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18018D8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800AED0C (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Top@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z @ 0x18011350C (-Top@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z.c)
 */

__int64 __fastcall CLightPreComputeHelper::BuildTransformParentStack(
        CLightPreComputeHelper *this,
        struct CComposition *a2,
        const struct CVisualTree *a3,
        struct CVisual *a4,
        unsigned __int64 a5)
{
  unsigned int v5; // esi
  struct CVisual *v6; // rdi
  unsigned __int64 v9; // r15
  char v10; // bl
  struct _LIST_ENTRY *TreeData; // rax
  struct CVisual *v12; // rbx
  struct CVisual *v13; // rax
  unsigned int *v14; // r10
  int v15; // eax
  struct CVisual *v17; // [rsp+70h] [rbp+18h] BYREF
  struct CVisual *v18; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  v17 = a4;
  v6 = a4;
  if ( a4 == *((struct CVisual **)a3 + 3) )
  {
LABEL_7:
    v10 = 1;
  }
  else
  {
    v9 = a5;
    while ( 1 )
    {
      v10 = 0;
      TreeData = CVisual::FindTreeData(v6, a3);
      if ( TreeData )
      {
        if ( TreeData[7].Blink >= (struct _LIST_ENTRY *)v9 )
          break;
      }
      v12 = (struct CVisual *)*((_QWORD *)v6 + 18);
      CWatermarkStack<CVisual *,64,2,10>::Push((unsigned int *)this + 2, &v17);
      if ( v12 )
      {
        v6 = v12;
        v17 = v12;
        if ( v12 != *((struct CVisual **)a3 + 3) )
          continue;
      }
      goto LABEL_7;
    }
  }
  v13 = 0LL;
  v14 = (unsigned int *)((char *)this + 8);
  v18 = 0LL;
  if ( *((_DWORD *)this + 2) )
  {
    v15 = CWatermarkStack<CVisual *,64,2,10>::Top((int *)this + 2, &v18);
    v5 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x278u);
      return v5;
    }
    v13 = v18;
  }
  if ( v10 && v13 != v6 )
    CWatermarkStack<CVisual *,64,2,10>::Push(v14, &v17);
  return v5;
}
