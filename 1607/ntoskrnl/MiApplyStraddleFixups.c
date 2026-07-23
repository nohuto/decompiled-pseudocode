/*
 * XREFs of MiApplyStraddleFixups @ 0x14010858C
 * Callers:
 *     MiPerformFixups @ 0x140509BC0 (MiPerformFixups.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

void __fastcall MiApplyStraddleFixups(__int64 a1, char *a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 *v6; // rbx
  int v10; // ecx
  int v11; // r8d
  char *v12; // r9
  size_t v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF

  v6 = *(__int64 **)(a1 + 16);
  if ( v6 )
  {
    while ( 1 )
    {
      v10 = *((_DWORD *)v6 + 2);
      if ( (v10 & 0xFFFFF000) == a3 )
        break;
      v11 = *((_DWORD *)v6 + 3);
      if ( (v11 & 0xFFFFF000) == a3 )
      {
        v13 = v11 & 0xFFF;
        v12 = a2;
        v14 = 4096 - (v10 & 0xFFFu);
LABEL_8:
        if ( v12 )
        {
          v15 = v6[3];
          v16 = v15;
          if ( a6 == 1 )
          {
            if ( a5 )
              v15 += a5;
            v16 = a4 + v15;
          }
          if ( (_DWORD)v13 )
            memmove(v12, (char *)&v16 + v14, v13);
        }
      }
LABEL_4:
      v6 = (__int64 *)*v6;
      if ( !v6 )
        return;
    }
    if ( (v10 & 0xFFF) == 0 )
    {
      if ( *((_WORD *)v6 + 8) == 3 )
        *(_WORD *)&a2[(*((_DWORD *)v6 + 3) & 0xFFFLL) - 2] += WORD1(a4);
      goto LABEL_4;
    }
    v12 = &a2[v10 & 0xFFF];
    v13 = 4096 - ((unsigned __int16)v12 & 0xFFFu);
    v14 = 0LL;
    goto LABEL_8;
  }
}
