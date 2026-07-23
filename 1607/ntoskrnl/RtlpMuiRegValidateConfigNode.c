/*
 * XREFs of RtlpMuiRegValidateConfigNode @ 0x14023E7F8
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x140560B14 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1406E69C4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x1406E6F08 (RtlpMuiRegGetInstalledLanguageIndex.c)
 */

__int64 __fastcall RtlpMuiRegValidateConfigNode(__int64 a1, unsigned __int16 *a2)
{
  __int64 v3; // rdx
  int InstalledLanguageIndex; // eax
  int v6; // r9d
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int16 v9; // bp
  __int16 v10; // r15
  char v11; // r14
  __int16 v12; // r13
  __int16 v13; // r12
  int v14; // r8d
  int v15; // edx
  char v16; // al
  __int16 v17; // r8
  _WORD *v19; // [rsp+40h] [rbp-58h] BYREF
  int v20; // [rsp+A0h] [rbp+8h]
  __int16 v21; // [rsp+A8h] [rbp+10h] BYREF
  __int16 v22; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int16 i; // [rsp+B8h] [rbp+20h]

  v20 = a1;
  v3 = a2[1] >> 14;
  v21 = -1;
  InstalledLanguageIndex = RtlpMuiRegGetInstalledLanguageIndex(a1, v3, *a2, &v22);
  v6 = 0;
  v7 = InstalledLanguageIndex;
  if ( InstalledLanguageIndex >= 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v22;
    if ( (*(_WORD *)v8 & 0x1000) != 0 )
    {
      return (unsigned int)-1073741772;
    }
    else
    {
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        v11 = (a2[1] >> v10) & 3;
        if ( !v11 )
          break;
        if ( !v8 )
          return (unsigned int)-1073741772;
        v12 = 0;
        v13 = 0;
        v14 = a2[v9 + 3];
        for ( i = a2[v9 + 3]; ; v14 = i )
        {
          v15 = (unsigned __int16)(*(_WORD *)(v8 + 8) >> v13);
          v19 = 0LL;
          LOBYTE(v6) = v15 & 3;
          LOBYTE(v15) = v11;
          v16 = RtlpMuiRegConfigMatchesInstalled(
                  v20,
                  v15,
                  v14,
                  v6,
                  *(_WORD *)(v8 + 2LL * v12 + 12),
                  (__int64)&v19,
                  (__int64)&v21);
          v6 = 0;
          if ( v16 )
          {
            if ( (!v19 || (*v19 & 0x1000) == 0) && ((*(_BYTE *)v8 & 4) == 0 || v19) )
              break;
          }
          ++v12;
          v13 += 2;
          if ( v13 >= 8 )
            return (unsigned int)-1073741772;
        }
        v17 = v21;
        v8 = (__int64)v19;
        if ( v21 != -1 )
        {
          a2[1] = (2 << (2 * v9)) | a2[1] & ~(3 << (2 * v9));
          a2[v9 + 3] = v17;
        }
        ++v9;
        v10 += 2;
        if ( v10 >= 6 )
          return v7;
      }
      if ( !v9 )
        return (unsigned int)-1073741823;
    }
  }
  return v7;
}
