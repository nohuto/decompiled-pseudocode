/*
 * XREFs of ??0?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C015AC30
 * Callers:
 *     DxgkPinDirectFlipResources @ 0x1C01615E0 (DxgkPinDirectFlipResources.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000C708 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall PagedPoolArray<DXGRESOURCEREFERENCE,4>::PagedPoolArray<DXGRESOURCEREFERENCE,4>(__int64 a1)
{
  *(_QWORD *)a1 = 0LL;
  `vector constructor iterator'(
    (char *)(a1 + 8),
    8LL,
    4LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  *(_DWORD *)(a1 + 40) = 0;
  return a1;
}
