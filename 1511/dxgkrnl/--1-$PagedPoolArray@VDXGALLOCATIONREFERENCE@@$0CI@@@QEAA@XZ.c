/*
 * XREFs of ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C0124A90
 * Callers:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00B4110 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 * Callees:
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C001C8E0 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
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
    40,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE);
}
