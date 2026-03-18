/*
 * XREFs of ?DxgkEngBltViaGDIApiExt@@YAHPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEBUtagRECT@@2QEAXIIIEEIP6AX22PEAU3@2II@ZP6AH4422@Z@Z @ 0x1C00C3480
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngBltViaGDISupported_0 @ 0x1C0001540 (IsDxgkEngBltViaGDISupported_0.c)
 *     DxgkEngBltViaGDI_0 @ 0x1C0001548 (DxgkEngBltViaGDI_0.c)
 */

__int64 __fastcall DxgkEngBltViaGDIApiExt(
        const struct _D3DKMT_PRESENT *a1,
        HDC a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  int v4; // eax
  unsigned int v5; // r10d

  v4 = IsDxgkEngBltViaGDISupported_0();
  v5 = 0;
  if ( v4 >= 0 )
    return (unsigned int)DxgkEngBltViaGDI_0();
  return v5;
}
