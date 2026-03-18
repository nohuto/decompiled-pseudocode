/*
 * XREFs of ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x1C004CF90
 * Callers:
 *     ?Initialize@CAnimationMarshaler@DirectComposition@@MEAAJXZ @ 0x1C004D720 (-Initialize@CAnimationMarshaler@DirectComposition@@MEAAJXZ.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C004D980 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::EnsureTimeListEntry(
        DirectComposition::CAnimationMarshaler *this)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  _DWORD *v5; // rax

  v1 = *((_QWORD *)this + 10);
  v2 = 0;
  if ( v1 && (*(_DWORD *)(v1 + 24) & 2) != 0 )
    *((_QWORD *)this + 10) = 0LL;
  if ( !*((_QWORD *)this + 10) )
  {
    v5 = Win32AllocPoolWithQuotaZInit(0x38uLL);
    if ( v5 )
    {
      v5[12] = 1;
      *(_QWORD *)v5 = this;
    }
    else
    {
      v5 = 0LL;
    }
    *((_QWORD *)this + 10) = v5;
    if ( !v5 )
      return (unsigned int)-1073741801;
    if ( v1 )
      *(_QWORD *)(v1 + 16) = v5;
  }
  if ( !*((_QWORD *)this + 9) )
    *((_QWORD *)this + 9) = *((_QWORD *)this + 10);
  return v2;
}
