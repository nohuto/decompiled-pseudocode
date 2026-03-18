/*
 * XREFs of ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C0021598
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

char __fastcall DXGDEVICE::IsDisplayedPrimary(struct _KTHREAD **this, unsigned int a2, const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  char v7; // bl
  unsigned int v8; // edx
  const struct DXGALLOCATION **v9; // rax
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v11, this + 26);
  v6 = (unsigned int)v3;
  if ( this[v3 + 101] != a3 )
  {
    v7 = 0;
    v8 = 0;
    v9 = &this[8 * v6 + 165];
    while ( *v9 != a3 )
    {
      ++v8;
      ++v9;
      if ( v8 >= 8 )
        goto LABEL_7;
    }
  }
  v7 = 1;
LABEL_7:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return v7;
}
