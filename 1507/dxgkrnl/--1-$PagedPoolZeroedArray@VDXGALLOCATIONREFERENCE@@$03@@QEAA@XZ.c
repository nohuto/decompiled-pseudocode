/*
 * XREFs of ??1?$PagedPoolZeroedArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C0147230
 * Callers:
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0071C20 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 * Callees:
 *     <none>
 */

void __fastcall PagedPoolZeroedArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolZeroedArray<DXGALLOCATIONREFERENCE,4>(
        void **a1)
{
  char *v1; // rbx
  char *v2; // rcx

  v1 = (char *)(a1 + 1);
  v2 = (char *)*a1;
  if ( v2 != v1 && v2 )
    ExFreePoolWithTag(v2, 0);
  `vector destructor iterator'(v1, 8LL, 4, (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE);
}
