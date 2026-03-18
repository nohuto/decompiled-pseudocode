/*
 * XREFs of vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C028A454
 * Callers:
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C028A358 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025A35C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     vMakeInactiveHelper @ 0x1C028A148 (vMakeInactiveHelper.c)
 */

struct PFF *__fastcall vUnlinkEudcRFONTsAndPFEsWorker(_QWORD *a1, __int64 a2, struct PFF *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 i; // rcx
  __int64 v15; // rax
  struct PFF *result; // rax
  struct PFF *v17; // rdi
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  while ( 1 )
  {
    result = SkipInvalidPff(a3);
    v17 = result;
    if ( !result )
      return result;
    if ( (*((_DWORD *)result + 13) & 8) == 0 )
    {
      v6 = *((_QWORD *)result + 9);
      if ( v6 )
      {
        v18 = 0LL;
        while ( 1 )
        {
          v7 = *(unsigned int *)(v6 + 848);
          v8 = 0LL;
          v9 = 1;
          if ( (_DWORD)v7 )
          {
            v10 = *(_QWORD *)(v6 + 752);
            while ( 1 )
            {
              v11 = *(_QWORD *)(v10 + 8 * v8);
              if ( v11 )
              {
                v12 = *(_QWORD *)(v11 + 112);
                v9 = 0;
                if ( v12 == *a1 || v12 == a1[1] )
                  break;
              }
              v8 = (unsigned int)(v8 + 1);
              if ( (unsigned int)v8 >= (unsigned int)v7 )
                goto LABEL_13;
            }
            vMakeInactiveHelper((__int64 *)(v10 + 8 * v8));
            if ( *(_QWORD *)(*(_QWORD *)(v6 + 112) + 128LL) == a2 )
              break;
          }
LABEL_13:
          if ( *(_QWORD *)(v6 + 752) && v9 )
            break;
LABEL_18:
          *(_DWORD *)(v6 + 720) = 0;
          v6 = *(_QWORD *)(v6 + 520);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
          if ( !v6 )
            goto LABEL_19;
        }
        v13 = *(_QWORD *)(v6 + 752);
        if ( v13 != v6 + 760 )
          Win32FreePool(v13, v7);
        *(_QWORD *)(v6 + 752) = 0LL;
        *(_DWORD *)(v6 + 848) = 0;
        *(_DWORD *)(v6 + 840) = 0;
        *(_DWORD *)(v6 + 844) = 0;
        goto LABEL_18;
      }
LABEL_19:
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v17 + 36); i = (unsigned int)(i + 1) )
      {
        v15 = *((_QWORD *)v17 + i + 28);
        if ( *(_QWORD *)(v15 + 128) == a2 )
          *(_QWORD *)(v15 + 128) = 0LL;
      }
    }
    a3 = (struct PFF *)*((_QWORD *)v17 + 1);
  }
}
