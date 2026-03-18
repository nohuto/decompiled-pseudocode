/*
 * XREFs of _lambda_e4e79ac46a0bd5e7c8e76743931293b9_::operator() @ 0x1C02A3F6C
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02BC2F0 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025A35C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

void __fastcall lambda_e4e79ac46a0bd5e7c8e76743931293b9_::operator()(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  struct PFF *i; // rcx
  __int64 v5; // r10
  __int64 v6; // rcx
  struct PFF *v7; // rax
  int v8; // r9d
  __int64 v9; // r11

  v2 = a2;
  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 28) )
    {
      v3 = 0LL;
      if ( *(_DWORD *)(a2 + 24) )
      {
        do
        {
          for ( i = *(struct PFF **)(v2 + 8 * v3 + 40); ; i = (struct PFF *)*((_QWORD *)v7 + 1) )
          {
            v7 = SkipInvalidPff(i);
            if ( !v7 )
              break;
            if ( *((_QWORD *)v7 + 11) == v9 )
            {
              v5 = 0LL;
              for ( *(_BYTE *)(*((_QWORD *)v7 + 10) + 12LL) = 1;
                    (unsigned int)v5 < *((_DWORD *)v7 + 9);
                    *(_QWORD *)(v6 + 16) = 0LL )
              {
                v6 = *(_QWORD *)(*((_QWORD *)v7 + 19) + 8 * v5);
                v5 = (unsigned int)(v5 + 1);
              }
            }
          }
          v3 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v3 < *(_DWORD *)(v2 + 24) );
      }
    }
  }
}
