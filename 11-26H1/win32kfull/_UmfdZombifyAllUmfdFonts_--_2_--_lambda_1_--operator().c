/*
 * XREFs of _UmfdZombifyAllUmfdFonts_::_2_::_lambda_1_::operator() @ 0x1402967F4
 * Callers:
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x140225258 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 * Callees:
 *     ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850 (-PffBucket@PFT@@QEBA-AVPffIterator@@K@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 */

void __fastcall UmfdZombifyAllUmfdFonts_::_2_::_lambda_1_::operator()(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v8 = a1;
    v2 = a2;
    if ( *(_DWORD *)(a2 + 28) )
    {
      v3 = 0;
      if ( *(_DWORD *)(a2 + 24) )
      {
        do
        {
          PFT::PffBucket(v2, (PffIterator *)&v8, v3);
          while ( 1 )
          {
            v7 = v8;
            if ( !v8 )
              break;
            v4 = *(_QWORD *)(v8 + 96);
            if ( v4 )
            {
              if ( (*(_DWORD *)(v4 + 40) & 0x8000) == 0 )
              {
                v5 = 0LL;
                for ( *(_BYTE *)(*(_QWORD *)(v8 + 88) + 24LL) = 1;
                      (unsigned int)v5 < *(_DWORD *)(v7 + 36);
                      *(_QWORD *)(v6 + 16) = 0LL )
                {
                  v6 = *(_QWORD *)(*(_QWORD *)(v7 + 208) + 8 * v5);
                  v5 = (unsigned int)(v5 + 1);
                }
              }
            }
            PffIterator::operator++(&v8);
          }
          ++v3;
        }
        while ( v3 < *(_DWORD *)(v2 + 24) );
      }
    }
  }
}
