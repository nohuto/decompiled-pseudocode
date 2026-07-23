/*
 * XREFs of KiFlushReadyLists @ 0x1401DBE00
 * Callers:
 *     KeTransitionProcessorParkState @ 0x1401DBAA4 (KeTransitionProcessorParkState.c)
 * Callees:
 *     <none>
 */

void __fastcall KiFlushReadyLists(__int64 a1, unsigned int *a2, __int64 *a3)
{
  unsigned int v3; // r10d
  unsigned int v6; // eax
  _QWORD *v7; // r9
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // rcx

  v3 = *a2;
  if ( *a2 )
  {
    do
    {
      _BitScanForward(&v6, v3);
      v7 = (_QWORD *)(a1 + 16LL * v6);
      v3 &= v3 - 1;
      v8 = (_QWORD *)*v7;
      v9 = (_QWORD *)v7[1];
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v9 != v7 )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = v9;
      v7[1] = v7;
      *v7 = v7;
      v10 = v8;
      do
      {
        v11 = *a3;
        v12 = v8 - 27;
        *((_DWORD *)v12 + 29) |= 2u;
        v8 = (_QWORD *)*v8;
        *((_BYTE *)v12 + 388) = 7;
        v12 += 27;
        *a3 = (__int64)v12;
        *v12 = v11;
      }
      while ( v8 != v10 );
    }
    while ( v3 );
    *a2 = 0;
  }
}
