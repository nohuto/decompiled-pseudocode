/*
 * XREFs of KiGroupSchedulingMoveThread @ 0x140098ADC
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x14005B8A0 (KiSearchForNewThreadOnProcessor.c)
 *     KiGroupSchedulingMoveThread @ 0x140098ADC (KiGroupSchedulingMoveThread.c)
 * Callees:
 *     KiGroupSchedulingMoveThread @ 0x140098ADC (KiGroupSchedulingMoveThread.c)
 *     KiRemoveThreadFromScbQueue @ 0x140098BE4 (KiRemoveThreadFromScbQueue.c)
 *     KiPrcbInGroupAffinity @ 0x1400CABB0 (KiPrcbInGroupAffinity.c)
 */

__int64 __fastcall KiGroupSchedulingMoveThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax
  unsigned int v7; // r8d
  unsigned int v8; // r11d
  _QWORD *v9; // rsi
  _QWORD *v10; // r9
  __int64 v11; // rdi
  int v12; // r8d
  _QWORD *v13; // r9
  unsigned int v14; // r11d
  _QWORD *v15; // rax
  unsigned __int64 v16; // rcx

  v3 = *(_QWORD *)(a3 + 8);
  v4 = a2;
  if ( !v3 )
    return 0LL;
  while ( 1 )
  {
    v7 = *(unsigned __int16 *)(v3 + 26);
    if ( *(_WORD *)(v3 + 26) )
    {
      do
      {
        _BitScanReverse(&v8, v7);
        v9 = (_QWORD *)(16LL * v8 + v3 + 48);
        v10 = (_QWORD *)*v9;
        do
        {
          v11 = (__int64)(v10 - 27);
          if ( (unsigned int)KiPrcbInGroupAffinity(a1, v10 + 45) )
          {
            KiRemoveThreadFromScbQueue(a2, v3 - 88, v11, v14);
            result = v11;
            *(_DWORD *)(v11 + 536) = *(_DWORD *)(a1 + 36);
            return result;
          }
          v10 = (_QWORD *)*v13;
        }
        while ( v10 != v9 );
        v7 = v12 ^ (1 << v14);
      }
      while ( v7 );
      v4 = a2;
    }
    if ( *(_QWORD *)(v3 + 304) )
    {
      result = KiGroupSchedulingMoveThread(a1, v4, v3 + 304);
      if ( result )
        break;
    }
    v15 = *(_QWORD **)(v3 + 8);
    v16 = v3;
    if ( v15 )
    {
      do
      {
        v3 = (unsigned __int64)v15;
        v15 = (_QWORD *)*v15;
      }
      while ( v15 );
    }
    else
    {
      while ( 1 )
      {
        v3 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v3 || *(_QWORD *)v3 == v16 )
          break;
        v16 = v3;
      }
    }
    if ( !v3 )
      return 0LL;
    v4 = a2;
  }
  return result;
}
