/*
 * XREFs of ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x1C0017F1C
 * Callers:
 *     ?Initialize@CAnimationMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0018510 (-Initialize@CAnimationMarshaler@DirectComposition@@MEAAJXZ.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00187B0 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_K.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::EnsureTimeListEntry(
        DirectComposition::CAnimationMarshaler *this)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  __int64 v4; // rax

  v1 = *((_QWORD *)this + 9);
  v2 = 0;
  if ( v1 && (*(_DWORD *)(v1 + 24) & 2) != 0 )
    *((_QWORD *)this + 9) = 0LL;
  if ( !*((_QWORD *)this + 9) )
  {
    v4 = Win32AllocPoolWithQuotaZInit(0x38uLL);
    if ( v4 )
    {
      *(_DWORD *)(v4 + 48) = 1;
      *(_QWORD *)v4 = this;
    }
    else
    {
      v4 = 0LL;
    }
    *((_QWORD *)this + 9) = v4;
    if ( !v4 )
      return (unsigned int)-1073741801;
    if ( v1 )
      *(_QWORD *)(v1 + 16) = v4;
  }
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 8) = *((_QWORD *)this + 9);
  return v2;
}
