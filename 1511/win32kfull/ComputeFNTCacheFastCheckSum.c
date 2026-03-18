/*
 * XREFs of ComputeFNTCacheFastCheckSum @ 0x1C0011878
 * Callers:
 *     ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAU_FONTFILEVIEW@@KPEAPEAVPDEV@@PEAUtagDESIGNVECTOR@@K@Z @ 0x1C001175C (-LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAU_FONTFILEVIEW@@KPEAPEAVPDEV@@PEAUtagDESIGNVECTOR@@K@Z.c)
 * Callees:
 *     Win32FileInfo @ 0x1C0011944 (Win32FileInfo.c)
 */

__int64 __fastcall ComputeFNTCacheFastCheckSum(
        unsigned int a1,
        unsigned __int16 *a2,
        __int64 *a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned int a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned int v10; // edi
  __int64 v11; // r15
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  _DWORD *v16; // rdx
  unsigned __int64 v18; // rax

  v6 = 0LL;
  v7 = a1;
  v10 = 0;
  if ( a4 )
  {
    v11 = a4;
    do
    {
      v12 = *a3;
      if ( !*(_DWORD *)(*a3 + 24) || !*(_QWORD *)v12 )
      {
        Win32FileInfo(*(PCWSTR *)(v12 + 80));
        *(_DWORD *)(*a3 + 24) = 0;
      }
      v13 = (_DWORD *)*a3++;
      v10 = v13[1] + 257 * (*v13 + 257 * (257 * v10 + v13[6]));
      --v11;
    }
    while ( v11 );
  }
  if ( (_DWORD)v7 )
  {
    v14 = v7;
    do
    {
      v15 = *a2++;
      v10 = v15 + 257 * v10;
      --v14;
    }
    while ( v14 );
  }
  v16 = a5;
  if ( a5 && a6 )
  {
    v18 = (4 * ((unsigned __int64)a6 >> 2) + 3) >> 2;
    if ( a5 > &a5[(unsigned __int64)a6 >> 2] )
      v18 = 0LL;
    if ( v18 )
    {
      do
      {
        ++v6;
        v10 = *v16++ + 257 * v10;
      }
      while ( v6 < v18 );
    }
  }
  return v10;
}
