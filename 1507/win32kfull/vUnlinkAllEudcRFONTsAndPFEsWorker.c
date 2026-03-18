/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C00FAAB4
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C012A9B0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025D318 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     vMakeInactiveHelper @ 0x1C028B758 (vMakeInactiveHelper.c)
 */

struct PFF *__fastcall vUnlinkAllEudcRFONTsAndPFEsWorker(__int64 a1, int a2, struct PFF *a3)
{
  __int64 v5; // rbx
  __int64 i; // rsi
  __int64 v7; // rcx
  __int64 j; // rdx
  __int64 v9; // rcx
  struct PFF *result; // rax
  struct PFF *v11; // rdi
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  while ( 1 )
  {
    result = SkipInvalidPff(a3);
    v11 = result;
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 13) & 8) == 0 )
    {
      v5 = *((_QWORD *)result + 9);
      if ( v5 )
      {
        v12 = 0LL;
        do
        {
          vMakeInactiveHelper(v5 + 736);
          if ( *(_QWORD *)(v5 + 744) )
            vMakeInactiveHelper(v5 + 744);
          if ( a2 && *(_QWORD *)(v5 + 752) )
          {
            for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v5 + 848); i = (unsigned int)(i + 1) )
              vMakeInactiveHelper(*(_QWORD *)(v5 + 752) + 8 * i);
            v7 = *(_QWORD *)(v5 + 752);
            if ( v7 != v5 + 760 )
              Win32FreePool(v7);
            *(_DWORD *)(v5 + 848) = 0;
            *(_QWORD *)(v5 + 752) = 0LL;
            *(_DWORD *)(v5 + 840) = 0;
            *(_DWORD *)(v5 + 844) = 0;
          }
          *(_DWORD *)(v5 + 720) = 0;
          v5 = *(_QWORD *)(v5 + 520);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
        }
        while ( v5 );
      }
      if ( a2 )
      {
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)v11 + 36); *(_QWORD *)(v9 + 128) = 0LL )
        {
          v9 = *((_QWORD *)v11 + j + 27);
          j = (unsigned int)(j + 1);
        }
      }
    }
    a3 = (struct PFF *)*((_QWORD *)v11 + 1);
  }
  return result;
}
