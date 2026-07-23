/*
 * XREFs of PopGenerateScratchMdl @ 0x140123868
 * Callers:
 *     PopGenerateUnHibernatedMdl @ 0x1403D1700 (PopGenerateUnHibernatedMdl.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1400A8990 (MmAllocatePagesForMdlEx.c)
 */

PMDL __fastcall PopGenerateScratchMdl(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  PMDL PagesForMdl; // r8
  SIZE_T v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  PHYSICAL_ADDRESS v10; // rcx
  unsigned __int64 v11; // rax

  v2 = *(_QWORD *)(a1 + 248);
  PagesForMdl = 0LL;
  v5 = a2 << 12;
  v6 = 0LL;
  v7 = __rdtsc();
  if ( *(_DWORD *)(v2 + 8) )
  {
    while ( 1 )
    {
      v8 = v2 + 16 + 48 * v6;
      v9 = *(_QWORD *)(v8 + 16) << 12;
      if ( *(_DWORD *)(v8 + 44) == -268435455 && (*(_QWORD *)(v8 + 16) + *(_QWORD *)(v8 + 32)) << 12 >= v5 + 0x1000000 )
      {
        if ( v9 > 0x100000000LL )
          goto LABEL_12;
        v10.QuadPart = 0x1000000LL;
        if ( v9 > 0x1000000 )
          v10.QuadPart = v9;
        if ( 0x100000000LL - v10.QuadPart >= v5 )
        {
          PagesForMdl = MmAllocatePagesForMdlEx(v10, (PHYSICAL_ADDRESS)0x100000000LL, 0LL, v5, MmCached, 0xDu);
          if ( PagesForMdl )
            break;
        }
      }
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)(v2 + 8) )
        goto LABEL_12;
    }
    PagesForMdl->Next = *(struct _MDL **)(qword_1403033E0 + 128);
    *(_QWORD *)(qword_1403033E0 + 128) = PagesForMdl;
    *(_QWORD *)(qword_1403033E0 + 136) += a2;
  }
LABEL_12:
  v11 = __rdtsc();
  qword_140303808 += (((unsigned __int64)HIDWORD(v11) << 32) | (unsigned int)v11) - v7;
  return PagesForMdl;
}
