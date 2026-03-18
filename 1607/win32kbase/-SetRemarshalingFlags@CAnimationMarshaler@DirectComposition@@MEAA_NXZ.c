/*
 * XREFs of ?SetRemarshalingFlags@CAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00EA770
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

  *((_DWORD *)this + 4) &= 0xFFFFD13F;
  if ( *((_DWORD *)this + 54) )
    *((_DWORD *)this + 4) |= 0x20000u;
  if ( *((_QWORD *)this + 28) )
    *((_DWORD *)this + 59) = 0;
  v2 = *((_BYTE *)this + 192);
  if ( (((*((_DWORD *)this + 4) & 0x4000) == 0) & (v2 >> 2)) != 0 )
  {
    v3 = *((_QWORD *)this + 8);
    *((_DWORD *)this + 4) |= 0x4000u;
    *(_BYTE *)(v3 + 28) = (v2 & 4) != 0;
  }
  v4 = *((_QWORD *)this + 25);
  if ( *(_OWORD *)((char *)this + 200) != __PAIR128__(*((_QWORD *)this + 12), 0LL) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x8000) == 0 )
    {
      v6 = *((_QWORD *)this + 8);
      *((_DWORD *)this + 4) = v5 | 0x8000;
      *(_QWORD *)(v6 + 32) = v4;
      *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) = *((_QWORD *)this + 26);
    }
  }
  return *((_QWORD *)this + 11) != 0LL;
}
