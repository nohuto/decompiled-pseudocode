/*
 * XREFs of sub_1404960F0 @ 0x1404960F0
 * Callers:
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14051CB5C (ExpLoadAndSortLicensingCacheDescriptors.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall sub_1404960F0(__int64 a1, char a2, void *a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v9; // ebx
  unsigned __int16 *v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r10
  unsigned __int16 *v13; // r11
  char *v14; // rdx
  __int64 v15; // r8
  unsigned __int16 v16; // ax
  char *v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rax

  v9 = 0;
  if ( a3 )
    memset(a3, 0, 16LL * a4);
  v10 = (unsigned __int16 *)(a1 + 20);
  v11 = (unsigned int)(*(_DWORD *)(a1 + 4) + 20);
  v12 = (unsigned int)v11;
  v13 = (unsigned __int16 *)(v11 + a1);
  while ( 1 )
  {
    if ( v10 == v13 )
      v10 = 0LL;
    if ( !v10 )
      break;
    v14 = (char *)v10 - a1;
    if ( a2 == 1 )
    {
      if ( (unsigned __int64)(v14 + 20) > v12 )
        return 3221225534LL;
      v15 = *v10;
      if ( (unsigned __int64)&v14[v15] > v12 )
        return 3221225534LL;
      v16 = v10[1];
      if ( v16 > (unsigned __int16)v15 )
        return 3221225534LL;
      v17 = (char *)v10 + v15;
      if ( (unsigned __int16 *)((char *)v10 + v15) < v10 )
        return 3221225534LL;
      v18 = v16;
      v19 = (unsigned __int64)v10 + v16 + 16;
      if ( v19 < (unsigned __int64)(v10 + 8) )
        return 3221225534LL;
      if ( v19 > (unsigned __int64)v17 )
        return 3221225534LL;
      v20 = (unsigned __int64)v10 + v18 + v10[3] + 16;
      if ( v20 < (unsigned __int64)(v10 + 8) )
        return 3221225534LL;
      if ( v20 > (unsigned __int64)v17 )
        return 3221225534LL;
      v21 = *((_DWORD *)v10 + 2);
      if ( v21 )
      {
        if ( (v21 & 3) == 0 )
          return 3221225534LL;
      }
    }
    if ( a3 )
    {
      if ( v9 < a4 )
      {
        v22 = 2LL * v9;
        *((_BYTE *)a3 + 8 * v22) = 2;
        *((_QWORD *)a3 + v22 + 1) = v10;
      }
    }
    ++v9;
    v10 = (unsigned __int16 *)((char *)v10 + *v10);
  }
  if ( a5 )
    *a5 = v9;
  return a4 < v9 ? 0xC0000023 : 0;
}
