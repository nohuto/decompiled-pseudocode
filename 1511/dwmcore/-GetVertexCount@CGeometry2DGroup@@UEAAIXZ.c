/*
 * XREFs of ?GetVertexCount@CGeometry2DGroup@@UEAAIXZ @ 0x180133260
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
          v4 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 104LL))(v6);
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
