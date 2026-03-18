/*
 * XREFs of vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C028BA04
 * Callers:
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C028B908 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025D318 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     vMakeInactiveHelper @ 0x1C028B758 (vMakeInactiveHelper.c)
 */

struct PFF *__fastcall vUnlinkEudcRFONTsAndPFEsWorker(_QWORD *a1, __int64 a2, struct PFF *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 i; // rcx
  __int64 v14; // rax
  struct PFF *result; // rax
  struct PFF *v16; // rdi
  __int64 v17; // [rsp+40h] [rbp+18h] BYREF

  while ( 1 )
  {
    result = SkipInvalidPff(a3);
    v16 = result;
    if ( !result )
      return result;
    if ( (*((_DWORD *)result + 13) & 8) == 0 )
    {
      v6 = *((_QWORD *)result + 9);
      if ( v6 )
      {
        v17 = 0LL;
        do
        {
          v7 = *(_DWORD *)(v6 + 848);
          v8 = 0LL;
          if ( v7 )
          {
            v9 = *(_QWORD *)(v6 + 752);
            while ( 1 )
            {
              v10 = *(_QWORD *)(v9 + 8 * v8);
              if ( v10 )
              {
                v11 = *(_QWORD *)(v10 + 112);
                if ( v11 == *a1 || v11 == a1[1] )
                  break;
              }
              v8 = (unsigned int)(v8 + 1);
              if ( (unsigned int)v8 >= v7 )
                goto LABEL_15;
            }
            vMakeInactiveHelper((__int64 *)(v9 + 8 * v8));
            v12 = *(_QWORD *)(v6 + 752);
            if ( v12 != v6 + 760 )
              Win32FreePool(v12);
            *(_QWORD *)(v6 + 752) = 0LL;
            *(_DWORD *)(v6 + 848) = 0;
            *(_DWORD *)(v6 + 840) = 0;
            *(_DWORD *)(v6 + 844) = 0;
          }
LABEL_15:
          *(_DWORD *)(v6 + 720) = 0;
          v6 = *(_QWORD *)(v6 + 520);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
        }
        while ( v6 );
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v16 + 36); i = (unsigned int)(i + 1) )
      {
        v14 = *((_QWORD *)v16 + i + 27);
        if ( *(_QWORD *)(v14 + 128) == a2 )
          *(_QWORD *)(v14 + 128) = 0LL;
      }
    }
    a3 = (struct PFF *)*((_QWORD *)v16 + 1);
  }
}
