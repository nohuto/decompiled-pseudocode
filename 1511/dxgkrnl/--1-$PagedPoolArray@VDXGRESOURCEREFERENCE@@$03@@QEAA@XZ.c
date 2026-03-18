/*
 * XREFs of ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C0137FE4
 * Callers:
 *     DxgkPinDirectFlipResources @ 0x1C013D310 (DxgkPinDirectFlipResources.c)
 * Callees:
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C000B1C8 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

void __fastcall PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(char **a1)
{
  char *v1; // rdi
  char *v2; // rcx
  char *v3; // rbx

  v1 = (char *)(a1 + 1);
  v2 = *a1;
  if ( v2 != v1 && v2 )
  {
    v3 = v2 - 8;
    `vector destructor iterator'(
      v2,
      8LL,
      *((_DWORD *)v2 - 2),
      (void (__fastcall *)(char *))DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE);
    operator delete(v3);
  }
  `vector destructor iterator'(v1, 8LL, 4, (void (__fastcall *)(char *))DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE);
}
