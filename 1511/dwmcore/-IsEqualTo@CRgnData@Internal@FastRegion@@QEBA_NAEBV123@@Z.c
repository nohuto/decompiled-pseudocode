/*
 * XREFs of ?IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z @ 0x180111314
 * Callers:
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x18007ECB0 (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall FastRegion::Internal::CRgnData::IsEqualTo(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2)
{
  int v5; // eax
  int v6; // edi
  __int64 v7; // rbp
  int *v8; // rdx
  __int64 v9; // r11
  signed __int64 v10; // r12
  _DWORD *v11; // rcx
  char *v12; // r10
  __int64 v13; // rsi
  __int64 v14; // rcx
  signed __int64 v15; // r14

  if ( *(_DWORD *)this != *(_DWORD *)a2 )
    return 0;
  v5 = *(_DWORD *)this - 1;
  v6 = 0;
  v7 = 0LL;
  if ( v5 > 0 )
  {
    v8 = (int *)((char *)a2 + 24);
    v9 = this - a2;
    v10 = this - a2 - 4;
    while ( 1 )
    {
      v11 = (int *)((char *)v8 + v9 - 12);
      if ( *v11 != *(v8 - 3) )
        return 0;
      v12 = (char *)v11 + *(int *)((char *)v8 + v9 - 8);
      v13 = ((__int64)v8 + v10 + *(int *)((char *)v8 + v9) - (_QWORD)v12) >> 2;
      if ( (unsigned int)((*v8 - (*(v8 - 2) - 12LL) - 4) >> 2) != (_DWORD)v13 )
        return 0;
      v14 = 0LL;
      if ( (int)v13 > 0 )
      {
        v15 = (char *)v8 + *(v8 - 2) - 12 - v12;
        while ( *(_DWORD *)v12 == *(_DWORD *)&v12[v15] )
        {
          ++v14;
          v12 += 4;
          if ( v14 >= (int)v13 )
            goto LABEL_11;
        }
        return 0;
      }
LABEL_11:
      ++v6;
      ++v7;
      v8 += 2;
      if ( v7 >= v5 )
        return *((_DWORD *)this + 2 * v6 + 3) == *((_DWORD *)a2 + 2 * v6 + 3);
    }
  }
  return *((_DWORD *)this + 2 * v6 + 3) == *((_DWORD *)a2 + 2 * v6 + 3);
}
