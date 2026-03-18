/*
 * XREFs of ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C0144B3C
 * Callers:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00A5B80 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 * Callees:
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C0021114 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 */

void __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(
        DXGALLOCATIONREFERENCE **a1)
{
  char *v1; // rbx
  DXGALLOCATIONREFERENCE *v2; // rcx

  v1 = (char *)(a1 + 1);
  v2 = *a1;
  if ( v2 != (DXGALLOCATIONREFERENCE *)v1 && v2 )
    DXGALLOCATIONREFERENCE::`vector deleting destructor'(v2);
  `vector destructor iterator'(
    v1,
    8LL,
    40LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE);
}
