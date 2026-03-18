/*
 * XREFs of ?GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z @ 0x1C007F47C
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C007A834 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00144B8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C005656C (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 */

void __fastcall VIDMM_PROCESS::GetNumBytesToTrim(
        VIDMM_PROCESS *this,
        unsigned int a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v5; // rsi
  __int64 v7; // rdx
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a2;
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( v7 )
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
      (DXGAUTOPUSHLOCKSHARED *)v8,
      (struct _KTHREAD **)(v7 + 304),
      (__int64)a3,
      a4);
    VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(*(struct VIDMM_GLOBAL ***)(*((_QWORD *)this + 2) + 8 * v5), a3, 0, 1);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
  }
  else
  {
    *a3 = 0LL;
  }
}
