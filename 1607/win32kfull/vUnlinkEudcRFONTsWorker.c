/*
 * XREFs of vUnlinkEudcRFONTsWorker @ 0x1C028A5A0
 * Callers:
 *     vUnlinkEudcRFONTs @ 0x1C028A270 (vUnlinkEudcRFONTs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025A35C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     vMakeInactiveHelper @ 0x1C028A148 (vMakeInactiveHelper.c)
 */

struct PFF *__fastcall vUnlinkEudcRFONTsWorker(_QWORD *a1, struct PFF *a2)
{
  __int64 v4; // rbx
  __int64 i; // rsi
  __int64 *v6; // rcx
  __int64 v7; // rax
  struct PFF *result; // rax
  struct PFF *v9; // rdi
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    result = SkipInvalidPff(a2);
    v9 = result;
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 13) & 8) == 0 )
    {
      v4 = *((_QWORD *)result + 9);
      if ( v4 )
      {
        v10 = 0LL;
        do
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 848); i = (unsigned int)(i + 1) )
          {
            v6 = (__int64 *)(*(_QWORD *)(v4 + 752) + 8 * i);
            if ( *v6 )
            {
              v7 = *(_QWORD *)(*v6 + 112);
              if ( v7 == *a1 || v7 == a1[1] )
                vMakeInactiveHelper(v6);
            }
          }
          *(_DWORD *)(v4 + 720) = 0;
          v4 = *(_QWORD *)(v4 + 520);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
        }
        while ( v4 );
      }
    }
    a2 = (struct PFF *)*((_QWORD *)v9 + 1);
  }
  return result;
}
