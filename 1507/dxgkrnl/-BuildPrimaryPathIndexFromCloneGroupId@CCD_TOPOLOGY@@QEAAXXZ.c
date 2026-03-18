/*
 * XREFs of ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0064A60
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0066644 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(CCD_TOPOLOGY *this)
{
  unsigned int i; // r8d
  __int64 v3; // rdx
  unsigned __int16 v4; // ax
  unsigned int j; // ecx
  __int64 v6; // rdx
  unsigned __int16 v7; // ax
  __int64 v8; // r8
  int v9; // r11d
  unsigned int k; // edx
  __int64 v11; // r8
  unsigned __int16 v12; // ax
  __int64 v13; // r10

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    *(_DWORD *)(216LL * i + v3 + 48) &= ~0x40000u;
  }
  for ( j = 0; ; ++j )
  {
    v6 = *((_QWORD *)this + 8);
    v7 = v6 ? *(_WORD *)(v6 + 20) : 0;
    if ( j >= v7 )
      break;
    v8 = 216LL * j;
    if ( (*(_DWORD *)(v8 + v6 + 48) & 0x40000) == 0 )
    {
      v9 = *(_DWORD *)(v8 + v6 + 248);
      for ( k = j; ; ++k )
      {
        v11 = *((_QWORD *)this + 8);
        v12 = v11 ? *(_WORD *)(v11 + 20) : 0;
        if ( k >= v12 )
          break;
        v13 = 216LL * k;
        if ( *(_DWORD *)(v13 + v11 + 248) == v9 )
        {
          *(_DWORD *)(v13 + v11 + 236) = j;
          *(_DWORD *)(v13 + *((_QWORD *)this + 8) + 48) |= 0x40000u;
        }
      }
    }
  }
}
