/*
 * XREFs of ?IsAnimate@CAnimation@@UEAA_NPEA_N@Z @ 0x180083F40
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

bool __fastcall CAnimation::IsAnimate(CAnimation *this, bool *a2)
{
  bool (__fastcall *v4)(CAnimation *); // rbp
  bool result; // al
  char v6; // al

  v4 = *(bool (__fastcall **)(CAnimation *))(*((_QWORD *)this - 5) + 112LL);
  if ( v4 == CAnimation::HasEnded )
  {
    if ( (*((_BYTE *)this + 56) & 2) != 0 || !*((_QWORD *)this + 8) )
      goto LABEL_5;
  }
  else if ( v4((CAnimation *)((char *)this - 40)) )
  {
LABEL_5:
    result = 0;
    goto LABEL_6;
  }
  if ( !*((_DWORD *)this + 8) )
    goto LABEL_5;
  v6 = *((_BYTE *)this + 56);
  if ( (v6 & 4) != 0 || (v6 & 0x11) == 0x11 )
    goto LABEL_5;
  result = 1;
LABEL_6:
  if ( a2 )
    *a2 = result;
  return result;
}
