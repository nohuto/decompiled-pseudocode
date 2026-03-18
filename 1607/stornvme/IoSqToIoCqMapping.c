/*
 * XREFs of IoSqToIoCqMapping @ 0x1C00063A0
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006E84 (NVMeControllerInitPart2.c)
 * Callees:
 *     IsIntelChatham @ 0x1C00047C8 (IsIntelChatham.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 */

void __fastcall IoSqToIoCqMapping(__int64 a1)
{
  char v2; // r8
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // rcx
  char v6; // al
  unsigned int i; // r9d
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int16 v10; // dx
  __int64 v11; // rdx
  unsigned int j; // r8d
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int k; // edx
  __int64 v16; // rax

  v2 = 0;
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 544) + 50LL) = *(_WORD *)(*(_QWORD *)(a1 + 552) + 96LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 552) + 104LL) = 0;
    if ( IsIntelChatham(a1) )
      *(_DWORD *)(*(_QWORD *)(v3 + 552) + 104LL) = 1;
  }
  else
  {
    v4 = 0;
    if ( *(_WORD *)(a1 + 234) )
    {
      do
      {
        v5 = *(_QWORD *)(a1 + 552) + 168LL * v4;
        if ( *(_DWORD *)(v5 + 108) )
        {
          v6 = v2;
          *(_QWORD *)(v5 + 108) = 0LL;
          if ( !v2 )
            v6 = 1;
          v2 = v6;
        }
        ++v4;
      }
      while ( v4 < *(unsigned __int16 *)(a1 + 234) );
      if ( v2 )
        NVMeZeroMemory(
          *(void **)(*(_QWORD *)(a1 + 552) + 120LL),
          8
        * *(unsigned __int16 *)(a1 + 234)
        * ((*(unsigned __int16 *)(a1 + 232) - 1) / *(unsigned __int16 *)(a1 + 234) + 1));
    }
    for ( i = 0; i < *(unsigned __int16 *)(a1 + 232); ++*(_DWORD *)(v11 + 108) )
    {
      v8 = i++;
      v9 = *(_QWORD *)(a1 + 544) + 136 * v8;
      v10 = (*(unsigned __int16 *)(v9 + 40) - 1) % *(unsigned __int16 *)(a1 + 234) + 1;
      *(_WORD *)(v9 + 50) = v10;
      v11 = *(_QWORD *)(a1 + 552) + 168LL * (v10 - 1);
      *(_QWORD *)(*(_QWORD *)(v11 + 120) + 8LL * (unsigned int)(*(_DWORD *)(v11 + 112))++) = v9;
    }
    for ( j = 0; j < *(unsigned __int16 *)(a1 + 234); *(_QWORD *)(v14 + 16) = v13 )
    {
      v13 = *(_QWORD *)(a1 + 552) + 168LL * j;
      if ( *(_WORD *)(a1 + 200) == 1 )
        v14 = *(_QWORD *)(a1 + 208) + 24LL * j;
      else
        v14 = *(_QWORD *)(a1 + 208) + 24LL * (j + 1);
      ++j;
      *(_DWORD *)(v13 + 104) = *(_DWORD *)v14;
    }
    for ( k = 0; k < *(unsigned __int16 *)(a1 + 234); *(_DWORD *)(168 * v16 + *(_QWORD *)(a1 + 552) + 112) = 0 )
      v16 = k++;
  }
}
