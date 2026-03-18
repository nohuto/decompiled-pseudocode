/*
 * XREFs of ??0?$PagedPoolZeroedArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C0147198
 * Callers:
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0071C20 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C000E60C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<DXGALLOCATIONREFERENCE,4>::PagedPoolZeroedArray<DXGALLOCATIONREFERENCE,4>(
        __int64 a1,
        unsigned int a2)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  void *v5; // rcx

  *(_QWORD *)a1 = 0LL;
  v2 = a1 + 8;
  v3 = a2;
  `vector constructor iterator'(
    (char *)(a1 + 8),
    8LL,
    4,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  *(_DWORD *)(a1 + 40) = 0;
  if ( (unsigned int)v3 <= 4 )
  {
    *(_QWORD *)a1 = v2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v3 < 8 )
      return a1;
    *(_QWORD *)a1 = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v3, 0x4B677844u);
  }
  v5 = *(void **)a1;
  *(_DWORD *)(a1 + 40) = v3;
  if ( v5 )
    memset(v5, 0, 8 * v3);
  return a1;
}
