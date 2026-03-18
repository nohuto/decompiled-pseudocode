/*
 * XREFs of ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00B55CC
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C007C660 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00B4EBC (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 * Callees:
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C001C8E0 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 */

void __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(
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
    16,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE);
}
