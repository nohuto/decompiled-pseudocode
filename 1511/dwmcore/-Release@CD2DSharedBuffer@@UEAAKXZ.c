/*
 * XREFs of ?Release@CD2DSharedBuffer@@UEAAKXZ @ 0x1800AA850
 * Callers:
 *     ?Release@CD2DSharedBuffer@@WBA@EAAKXZ @ 0x1800BDDA0 (-Release@CD2DSharedBuffer@@WBA@EAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x1800AA7E0 (--_ECD2DSharedBuffer@@MEAAPEAXI@Z.c)
 */

__int64 __fastcall CD2DSharedBuffer::Release(CD2DSharedBuffer *this)
{
  unsigned __int32 v1; // edi
  CD2DSharedBuffer *(__fastcall *v2)(CD2DSharedBuffer *, char); // rsi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v2 = *(CD2DSharedBuffer *(__fastcall **)(CD2DSharedBuffer *, char))(*(_QWORD *)this + 24LL);
    if ( v2 == CD2DSharedBuffer::`vector deleting destructor' )
      CD2DSharedBuffer::`vector deleting destructor'(this, 1);
    else
      v2(this, 1);
  }
  return v1;
}
