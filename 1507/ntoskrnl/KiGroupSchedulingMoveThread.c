/*
 * XREFs of KiGroupSchedulingMoveThread @ 0x1400D35B8
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1400A15C0 (KiSearchForNewThreadOnProcessor.c)
 *     KiGroupSchedulingMoveThread @ 0x1400D35B8 (KiGroupSchedulingMoveThread.c)
 * Callees:
 *     KiGroupSchedulingMoveThread @ 0x1400D35B8 (KiGroupSchedulingMoveThread.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400D3690 (KiRemoveThreadFromScbQueue.c)
 */

__int64 __fastcall KiGroupSchedulingMoveThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  unsigned int i; // edx
  __int64 v8; // r9
  _QWORD **v9; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  unsigned __int64 v13; // rcx

  v3 = *(_QWORD *)(a3 + 8);
  while ( v3 )
  {
    for ( i = *(unsigned __int16 *)(v3 + 26); i; i ^= 1 << v8 )
    {
      _BitScanReverse((unsigned int *)&v8, i);
      v9 = (_QWORD **)(16LL * (unsigned int)v8 + v3 + 32);
      v10 = *v9;
      do
      {
        v11 = v10 - 27;
        if ( *(unsigned __int8 *)(a1 + 1616) == *((_WORD *)v10 + 184) && (v11[72] & *(_QWORD *)(a1 + 1608)) != 0LL )
        {
          KiRemoveThreadFromScbQueue(a2, v3 - 88, v10 - 27, v8);
          result = (__int64)v11;
          *((_DWORD *)v11 + 134) = *(_DWORD *)(a1 + 36);
          return result;
        }
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != v9 );
    }
    if ( *(_QWORD *)(v3 + 288) )
    {
      result = KiGroupSchedulingMoveThread(a1, a2, v3 + 288);
      if ( result )
        return result;
    }
    v12 = *(_QWORD **)(v3 + 8);
    v13 = v3;
    if ( v12 )
    {
      do
      {
        v3 = (unsigned __int64)v12;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 );
    }
    else
    {
      while ( 1 )
      {
        v3 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v3 || *(_QWORD *)v3 == v13 )
          break;
        v13 = v3;
      }
    }
  }
  return 0LL;
}
