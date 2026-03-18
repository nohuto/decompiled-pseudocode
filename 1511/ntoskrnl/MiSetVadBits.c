/*
 * XREFs of MiSetVadBits @ 0x140625CBC
 * Callers:
 *     MiUpdateVadBits @ 0x140462EC8 (MiUpdateVadBits.c)
 * Callees:
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 */

void __fastcall MiSetVadBits(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned int v2; // edi
  unsigned int v3; // esi
  unsigned int i; // ebp
  unsigned int v5; // ecx
  unsigned int v6; // r9d
  int v7; // r14d
  int v8; // edx
  unsigned int v9; // r8d

  v1 = 0xFFFFF58010804208uLL;
  v2 = (*(_DWORD *)(a1 + 24) >> 4) | (*(unsigned __int8 *)(a1 + 32) << 28);
  v3 = (*(_DWORD *)(a1 + 28) >> 4) | (*(unsigned __int8 *)(a1 + 33) << 28);
  for ( i = 0; i < 2; ++i )
  {
    v5 = 8 * *(_DWORD *)(v1 + 8);
    if ( v3 >= v5 )
    {
      v6 = v5 + *(_DWORD *)v1;
      if ( v2 < v6 )
      {
        v7 = 0;
        v8 = v2;
        if ( v2 < v5 )
        {
          v8 = 8 * *(_DWORD *)(v1 + 8);
          v7 = 1;
        }
        v9 = v3;
        if ( v3 >= v6 )
        {
          v9 = v6 - 1;
          v7 = 1;
        }
        RtlSetBits((PRTL_BITMAP)v1, v8 - v5, v9 - v8 + 1);
        if ( !v7 )
          break;
      }
    }
    v1 += 40LL;
  }
}
