/*
 * XREFs of ?CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x180001A50
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180001520 (-s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004F330 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInputManager::CopyTransform(const struct CMILMatrix *a1, struct tagINPUT_TRANSFORM *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r8

  v2 = a1 - a2;
  v3 = 4LL;
  do
  {
    v4 = 4LL;
    do
    {
      *(_DWORD *)a2 = *(_DWORD *)((char *)a2 + v2);
      a2 = (struct tagINPUT_TRANSFORM *)((char *)a2 + 4);
      --v4;
    }
    while ( v4 );
    --v3;
  }
  while ( v3 );
}
