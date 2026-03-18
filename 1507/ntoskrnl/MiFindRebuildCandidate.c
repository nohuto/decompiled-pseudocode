/*
 * XREFs of MiFindRebuildCandidate @ 0x14005C910
 * Callers:
 *     MiRebuildLargePage @ 0x1400FFA70 (MiRebuildLargePage.c)
 * Callees:
 *     MiPfnsWorthTrying @ 0x14005CAD0 (MiPfnsWorthTrying.c)
 */

__int64 __fastcall MiFindRebuildCandidate(
        unsigned __int16 *a1,
        int a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int *a6)
{
  unsigned int *v6; // r12
  unsigned __int16 v8; // bp
  __int64 v9; // r15
  unsigned int *v10; // r14
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v16; // rax
  int v17; // [rsp+78h] [rbp+10h]
  int v18; // [rsp+88h] [rbp+20h] BYREF

  v18 = a4;
  v17 = a2;
  v6 = a6;
  v8 = *a1;
  v9 = *a6;
  v10 = &a6[4 * v9 + 4];
  if ( (_DWORD)v9 )
  {
    v11 = a5;
    do
    {
      v9 = (unsigned int)(v9 - 1);
      if ( *((unsigned __int8 *)v10 + 2 * v9) == a2 && *((unsigned __int8 *)v10 + 2 * v9 + 1) == a3 )
      {
        v12 = *(_QWORD *)&v6[4 * (unsigned int)v9 + 4];
        v13 = v12 + *(_QWORD *)&v6[4 * (unsigned int)v9 + 6];
LABEL_6:
        if ( v13 - 1 > v11 )
          v13 = v11 + 1;
        if ( v12 < v13 )
        {
          while ( v13 - v12 >= 0x200 )
          {
            if ( (((v13 - 1) ^ (v13 - 512)) & 0xFFFFFFFFFFFFFE00uLL) == 0 )
            {
              v18 = 0;
              v13 -= 512LL;
              v14 = MiPfnsWorthTrying(v8, 48 * (int)v13, 512, 50331648, (__int64)&v18, (__int64)&a6);
              if ( v14 )
              {
                if ( v14 > v13 - v12 )
                  break;
              }
              else if ( a6 && (unsigned int)a6 >= 0x80 )
              {
                return v13;
              }
              goto LABEL_6;
            }
            v16 = v13 - 512;
            if ( (v13 & 0xFFFFFFFFFFFFFE00uLL) != v13 )
              v16 = v13 & 0xFFFFFFFFFFFFFE00uLL;
            v13 = v16;
            if ( v12 >= v16 )
              break;
          }
        }
        a2 = v17;
      }
    }
    while ( (_DWORD)v9 );
  }
  return -1LL;
}
