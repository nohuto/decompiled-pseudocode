/*
 * XREFs of ?Set@VIDMM_POLICY@@QEAAHXZ @ 0x1C00534F8
 * Callers:
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C0057FA4 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_POLICY::Set(VIDMM_POLICY *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( ((*(_DWORD *)this >> 2) & 1) == (((*(_DWORD *)this >> 1) & 1) == 0) )
    return 0LL;
  *(_DWORD *)this ^= ((unsigned __int8)*(_DWORD *)this ^ (unsigned __int8)(4 * (((*(_DWORD *)this >> 1) & 1) == 0))) & 4;
  return result;
}
