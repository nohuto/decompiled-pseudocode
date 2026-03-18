/*
 * XREFs of GetSrbScsiData @ 0x1C0005E04
 * Callers:
 *     NVMeGetFeaturesCacheCompletion @ 0x1C00070B0 (NVMeGetFeaturesCacheCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0007190 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiToNVMe @ 0x1C00087C0 (ScsiToNVMe.c)
 *     NVMeMapError @ 0x1C000CE84 (NVMeMapError.c)
 *     NVMeSetSenseData @ 0x1C000D36C (NVMeSetSenseData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSrbScsiData(__int64 a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _BYTE *a5)
{
  __int64 v5; // rdi
  char v6; // bp
  __int64 i; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax

  v5 = 0LL;
  v6 = 0;
  if ( *(_BYTE *)(a1 + 2) == 40 && !*(_DWORD *)(a1 + 20) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 56); i = (unsigned int)(i + 1) )
    {
      v9 = *(unsigned int *)(a1 + 4 * i + 120);
      if ( (unsigned int)v9 >= 0x80 && (unsigned int)v9 <= *(_DWORD *)(a1 + 16) )
      {
        v10 = a1 + v9;
        if ( *(_DWORD *)v10 == 64 || *(_DWORD *)v10 == 65 )
        {
          v6 = 1;
          if ( a2 )
            *a2 = *(unsigned __int8 *)(v10 + 10);
          if ( *(_BYTE *)(v10 + 10) )
            v5 = v10 + 24;
          if ( a3 )
            *a3 = v10 + 8;
          if ( a4 )
          {
            v11 = *(_QWORD *)(v10 + 16);
LABEL_25:
            *a4 = v11;
          }
LABEL_26:
          if ( a5 )
            *a5 = *(_BYTE *)(v10 + 9);
          continue;
        }
        if ( *(_DWORD *)v10 == 66 )
        {
          v6 = 1;
          if ( a2 )
            *a2 = *(_DWORD *)(v10 + 12);
          if ( *(_DWORD *)(v10 + 12) )
            v5 = v10 + 32;
          if ( a3 )
            *a3 = v10 + 8;
          if ( a4 )
          {
            v11 = *(_QWORD *)(v10 + 24);
            goto LABEL_25;
          }
          goto LABEL_26;
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 2) )
    goto LABEL_40;
  v6 = 1;
  if ( a2 )
    *a2 = *(unsigned __int8 *)(a1 + 10);
  if ( *(_BYTE *)(a1 + 10) )
    v5 = a1 + 72;
  if ( a3 )
    *a3 = a1 + 4;
  if ( a4 )
    *a4 = *(_QWORD *)(a1 + 32);
  if ( a5 )
  {
    *a5 = *(_BYTE *)(a1 + 11);
LABEL_40:
    if ( !v6 )
    {
      if ( a2 )
        *a2 = 0;
      if ( a3 )
        *a3 = 0LL;
      if ( a4 )
        *a4 = 0LL;
      if ( a5 )
        *a5 = 0;
    }
  }
  return v5;
}
