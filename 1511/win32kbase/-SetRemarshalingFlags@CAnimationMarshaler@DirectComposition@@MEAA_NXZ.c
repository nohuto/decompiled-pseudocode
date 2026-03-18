/*
 * XREFs of ?SetRemarshalingFlags@CAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DB700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnimationMarshaler *this)
{
  unsigned __int8 v2; // dl
  __int64 v3; // rax
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rcx

  *((_DWORD *)this + 4) &= 0xFFFFA27F;
  if ( *((_DWORD *)this + 52) )
    *((_DWORD *)this + 4) |= 0x40000u;
  if ( *((_QWORD *)this + 27) )
    *((_DWORD *)this + 57) = 0;
  v2 = *((_BYTE *)this + 184);
  if ( (((*((_DWORD *)this + 4) & 0x8000) == 0) & (v2 >> 2)) != 0 )
  {
    v3 = *((_QWORD *)this + 7);
    *((_DWORD *)this + 4) |= 0x8000u;
    *(_BYTE *)(v3 + 28) = (v2 & 4) != 0;
  }
  v4 = *((_QWORD *)this + 24);
  if ( *((_OWORD *)this + 12) != __PAIR128__(*((_QWORD *)this + 11), 0LL) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x10000) == 0 )
    {
      v6 = *((_QWORD *)this + 7);
      *((_DWORD *)this + 4) = v5 | 0x10000;
      *(_QWORD *)(v6 + 32) = v4;
      *(_QWORD *)(*((_QWORD *)this + 7) + 40LL) = *((_QWORD *)this + 25);
    }
  }
  return *((_QWORD *)this + 10) != 0LL;
}
