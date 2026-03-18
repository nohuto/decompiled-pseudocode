/*
 * XREFs of ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x1C01251F0
 * Callers:
 *     ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0148274 (-Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::AcquireOverlayId(ADAPTER_RENDER *this, struct DXGOVERLAY *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ecx
  _QWORD *i; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 22327LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = 0LL;
  v6 = *(_DWORD *)(*((_QWORD *)this + 2) + 1364LL);
  if ( !v6 )
    return 0xFFFFFFFFLL;
  for ( i = (_QWORD *)((char *)this + 504); *i; ++i )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= v6 )
      return 0xFFFFFFFFLL;
  }
  *((_QWORD *)this + v5 + 63) = a2;
  return (unsigned int)v5;
}
