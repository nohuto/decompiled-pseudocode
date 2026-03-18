/*
 * XREFs of ?GetVertexCount@CGeometry2DGroup@@UEAAIXZ @ 0x18011C610
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CGeometry2DGroup::GetVertexCount(CGeometry2DGroup *this)
{
  unsigned int v1; // esi
  unsigned int v3; // eax
  int v4; // r14d
  unsigned int i; // ebp
  __int64 v6; // r15
  __int64 result; // rax

  v1 = 0;
  v3 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v3;
  if ( (v3 & 6) == 2 )
  {
    if ( (*((_BYTE *)this + 136) & 8) != 0 )
    {
      v4 = 0;
      for ( i = 0; i < *((_DWORD *)this + 20); ++i )
      {
        v6 = *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * i);
        if ( v6 )
          v4 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 96LL))(v6);
      }
      *((_DWORD *)this + 34) &= ~8u;
      *((_DWORD *)this + 25) = v4;
    }
    v1 = *((_DWORD *)this + 25);
  }
  result = v1;
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return result;
}
