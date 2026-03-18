/*
 * XREFs of ?IsAnimate@CAnimation@@UEAA_NPEA_N@Z @ 0x180039C50
 * Callers:
 *     <none>
 * Callees:
 *     ?HasEnded@CAnimation@@MEAA_NXZ @ 0x1800396B0 (-HasEnded@CAnimation@@MEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CAnimation::IsAnimate(CAnimation *this, bool *a2)
{
  CAnimation *v4; // rcx
  __int64 (*v5)(void); // rax
  char HasEnded; // al
  bool result; // al
  char v8; // al

  v4 = (CAnimation *)((char *)this - 112);
  v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 120LL);
  if ( (char *)v5 == (char *)CAnimation::HasEnded )
    HasEnded = CAnimation::HasEnded(v4);
  else
    HasEnded = v5();
  result = 0;
  if ( !HasEnded )
  {
    if ( *((_DWORD *)this + 8) )
    {
      v8 = *((_BYTE *)this + 64);
      if ( (v8 & 4) == 0 && (v8 & 0x11) != 0x11 )
        result = 1;
    }
  }
  if ( a2 )
    *a2 = result;
  return result;
}
