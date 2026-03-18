/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000F590
 * Callers:
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C005B250 (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C005CD7C (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C005D5A8 (--0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C006DA98 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 *     ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C006EB6C (--0VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx

  if ( a3 )
  {
    v5 = a3;
    do
    {
      a4(a1);
      a1 += a2;
      --v5;
    }
    while ( v5 );
  }
}
