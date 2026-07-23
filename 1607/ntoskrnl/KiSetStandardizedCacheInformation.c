/*
 * XREFs of KiSetStandardizedCacheInformation @ 0x1403D4CD4
 * Callers:
 *     KiSetCacheInformationIntel @ 0x1403D4C7C (KiSetCacheInformationIntel.c)
 *     KiSetCacheInformationAmd @ 0x1403DDA18 (KiSetCacheInformationAmd.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall KiSetStandardizedCacheInformation(__int64 a1, unsigned int a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 result; // rax
  int v11; // edx
  unsigned int v12; // edi
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int64 v16; // r11
  int v17; // edi
  __int64 v18; // rdx
  unsigned int v19; // ecx
  int v20; // ebx
  int v21; // edi
  __int64 v22; // rcx

  v2 = 0LL;
  v3 = a1 + 24448;
  do
  {
    _RAX = a2;
    __asm { cpuid }
    v11 = (int)((_DWORD)result << 27) >> 27;
    v12 = result;
    if ( !v11 )
      break;
    v13 = v11 - 1;
    if ( !v13 )
    {
      *(_DWORD *)(v3 + 8) = 2;
      goto LABEL_7;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      *(_DWORD *)(v3 + 8) = 1;
      goto LABEL_7;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      *(_DWORD *)(v3 + 8) = 0;
LABEL_7:
      if ( (result & 0x200) != 0 )
        *(_BYTE *)(v3 + 1) = -1;
      else
        *(_BYTE *)(v3 + 1) = ((unsigned int)_RBX >> 22) + 1;
      *(_BYTE *)v3 = ((unsigned int)result >> 5) & 7;
      *(_WORD *)(v3 + 2) = (_RBX & 0xFFF) + 1;
      result = (unsigned int)(_RCX + 1);
      *(_DWORD *)(v3 + 4) = result
                          * (((unsigned int)_RBX >> 22) + 1)
                          * ((_RBX & 0xFFF) + 1)
                          * ((((unsigned int)_RBX >> 12) & 0x3FF) + 1);
      v16 = *(_QWORD *)(a1 + 1608);
      v17 = (v12 >> 14) & 0xFFF;
      if ( v17 )
      {
        v18 = 0LL;
        _BitScanReverse(&v19, 2 * v17 + 1);
        result = (unsigned int)KeNumberProcessors_0;
        v20 = ~((unsigned __int8)(1 << v19) - 1);
        v21 = v20 & *(_DWORD *)(a1 + 1620);
        if ( (_DWORD)KeNumberProcessors_0 )
        {
          do
          {
            v22 = KiProcessorBlock[v18];
            if ( *(_QWORD *)(v22 + 1600) == *(_QWORD *)(a1 + 1600) && (v20 & *(_DWORD *)(v22 + 1620)) == v21 )
            {
              v16 |= *(_QWORD *)(v22 + 1608);
              *(_QWORD *)(v22 + 8 * v2 + 24944) |= v16;
            }
            result = (unsigned int)KeNumberProcessors_0;
            v18 = (unsigned int)(v18 + 1);
          }
          while ( (unsigned int)v18 < (unsigned int)KeNumberProcessors_0 );
        }
      }
      v3 += 12LL;
      *(_QWORD *)(a1 + 8 * v2 + 24944) = v16;
      ++*(_DWORD *)(a1 + 24508);
      goto LABEL_16;
    }
    if ( v15 == 2 )
    {
      *(_DWORD *)(v3 + 8) = 3;
      goto LABEL_7;
    }
LABEL_16:
    v2 = (unsigned int)(v2 + 1);
  }
  while ( *(_DWORD *)(a1 + 24508) < 5u );
  return result;
}
