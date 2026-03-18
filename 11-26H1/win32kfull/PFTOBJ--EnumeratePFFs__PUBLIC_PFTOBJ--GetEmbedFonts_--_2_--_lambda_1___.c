/*
 * XREFs of PFTOBJ::EnumeratePFFs__PUBLIC_PFTOBJ::GetEmbedFonts_::_2_::_lambda_1___ @ 0x14032684C
 * Callers:
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x140326C0C (-GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ.c)
 * Callees:
 *     ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850 (-PffBucket@PFT@@QEBA-AVPffIterator@@K@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 */

__int64 __fastcall PFTOBJ::EnumeratePFFs__PUBLIC_PFTOBJ::GetEmbedFonts_::_2_::_lambda_1___(__int64 *a1)
{
  __int64 result; // rax
  unsigned int i; // ebx
  __int64 v4; // r11
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  result = *a1;
  for ( i = 0; i < *(_DWORD *)(*a1 + 24); ++i )
  {
    PFT::PffBucket(result, (PffIterator *)&v7, i);
    while ( v7 )
    {
      **(_QWORD **)v4 = v7;
      for ( **(_QWORD **)(v4 + 8) = *(_QWORD *)(**(_QWORD **)v4 + 152LL);
            ;
            **(_QWORD **)(v4 + 8) = *(_QWORD *)(**(_QWORD **)(v4 + 8) + 16LL) )
      {
        v6 = **(_QWORD **)(v4 + 8);
        if ( !v6 )
          break;
        if ( (*(_DWORD *)(v6 + 8) & 4) != 0 )
          v5 = *(_DWORD **)(v4 + 16);
        else
          v5 = *(_DWORD **)(v4 + 32);
        if ( *(_DWORD *)(v6 + 12) == *v5 )
          ++**(_DWORD **)(v4 + 24);
      }
      PffIterator::operator++(&v7);
    }
    result = *a1;
  }
  return result;
}
