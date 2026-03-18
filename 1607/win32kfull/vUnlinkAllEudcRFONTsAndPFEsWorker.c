/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C011FC04
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C011FB10 (vUnlinkAllEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025A35C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     vMakeInactiveHelper @ 0x1C028A148 (vMakeInactiveHelper.c)
 */

struct PFF *__fastcall vUnlinkAllEudcRFONTsAndPFEsWorker(__int64 a1, int a2, struct PFF *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 i; // rsi
  __int64 v9; // rcx
  __int64 j; // rdx
  __int64 v11; // rcx
  struct PFF *result; // rax
  struct PFF *v13; // rdi
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  while ( 1 )
  {
    result = SkipInvalidPff(a3);
    v13 = result;
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 13) & 8) == 0 )
    {
      v5 = *((_QWORD *)result + 9);
      if ( v5 )
      {
        v14 = 0LL;
        do
        {
          vMakeInactiveHelper(v5 + 736);
          if ( *(_QWORD *)(v5 + 744) )
            vMakeInactiveHelper(v5 + 744);
          if ( a2 && *(_QWORD *)(v5 + 752) )
          {
            for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v5 + 848); i = (unsigned int)(i + 1) )
              vMakeInactiveHelper(*(_QWORD *)(v5 + 752) + 8 * i);
            v9 = *(_QWORD *)(v5 + 752);
            if ( v9 != v5 + 760 )
              Win32FreePool(v9, v6, v7);
            *(_DWORD *)(v5 + 848) = 0;
            *(_QWORD *)(v5 + 752) = 0LL;
            *(_DWORD *)(v5 + 840) = 0;
            *(_DWORD *)(v5 + 844) = 0;
          }
          *(_DWORD *)(v5 + 720) = 0;
          v5 = *(_QWORD *)(v5 + 520);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
        }
        while ( v5 );
      }
      if ( a2 )
      {
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)v13 + 36); *(_QWORD *)(v11 + 128) = 0LL )
        {
          v11 = *((_QWORD *)v13 + j + 28);
          j = (unsigned int)(j + 1);
        }
      }
    }
    a3 = (struct PFF *)*((_QWORD *)v13 + 1);
  }
  return result;
}
