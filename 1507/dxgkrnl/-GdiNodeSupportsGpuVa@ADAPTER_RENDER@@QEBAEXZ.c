/*
 * XREFs of ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0001000
 * Callers:
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C005A740 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C005AA00 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 * Callees:
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C00057AC (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 */

bool __fastcall ADAPTER_RENDER::GdiNodeSupportsGpuVa(ADAPTER_RENDER *this)
{
  unsigned __int8 v1; // al
  __int64 v2; // r10
  char v3; // dl

  v1 = ADAPTER_RENDER::NodeSupportsGpuVa(this, 0, 0);
  v3 = 0;
  if ( v1 )
    return *(_BYTE *)(*(_QWORD *)(v2 + 16) + 1937LL) == 0;
  return v3;
}
