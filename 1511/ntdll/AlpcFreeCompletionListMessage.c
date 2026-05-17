/*
 * XREFs of AlpcFreeCompletionListMessage @ 0x1800714E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AlpcFreeCompletionListMessage(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r8
  int v5; // eax
  int v6; // ecx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  volatile signed __int32 *v10; // r11
  int v11; // r9d
  unsigned int v12; // edx
  unsigned __int64 v13; // rcx

  if ( (a2 & 0x3F) == 0 )
  {
    v3 = *(__int16 *)(a2 + 2);
    v4 = a2 + v3;
    if ( *(_DWORD *)(a1 + 36) )
    {
      v5 = ((_BYTE)a2 + (_BYTE)v3) & 7;
      if ( v5 )
        v6 = 8 - v5;
      else
        v6 = 0;
      v4 += (unsigned int)(v6 + *(_DWORD *)(a1 + 40));
    }
    v7 = a1 + *(unsigned int *)(a1 + 28);
    if ( a2 < v4 && a2 >= v7 && v4 <= v7 + *(unsigned int *)(a1 + 32) )
    {
      v8 = (a2 - v7) >> 6;
      v9 = ((v4 - v7 + 63) >> 6) - v8;
      v10 = (volatile signed __int32 *)(a1 + *(unsigned int *)(a1 + 20) + 4 * ((a2 - v7) >> 11));
      v11 = v8 & 0x1F;
      if ( v11 )
      {
        v12 = 32 - v11;
        if ( (unsigned int)(32 - v11) > v9 )
          v12 = v9;
        _InterlockedAnd(v10++, ~(((1 << v12) - 1) << v11));
        v9 -= v12;
      }
      if ( v9 >= 0x20 )
      {
        v13 = v9 >> 5;
        v9 += -32LL * (v9 >> 5);
        do
        {
          _InterlockedAnd(v10++, 0);
          --v13;
        }
        while ( v13 );
      }
      if ( v9 )
        _InterlockedAnd(v10, ~((1 << v9) - 1));
      _InterlockedAdd((volatile signed __int32 *)(a1 + 192), 1u);
    }
  }
}
