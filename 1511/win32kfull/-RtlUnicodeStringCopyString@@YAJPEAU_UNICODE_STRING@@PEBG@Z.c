/*
 * XREFs of ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0125EDC
 * Callers:
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0110824 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C01240E0 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C0125BB4 (GetLocalMachineRegistryDWORDValues.c)
 *     ComputePTPCurtainRegions @ 0x1C01D09CC (ComputePTPCurtainRegions.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0224E4C (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringCopyString(struct _UNICODE_STRING *a1, char *a2)
{
  USHORT Length; // dx
  PWSTR Buffer; // rbx
  unsigned __int64 v6; // r8
  __int64 result; // rax
  USHORT MaximumLength; // r9
  __int64 v9; // rdx
  __int16 v10; // cx
  signed __int64 v11; // rbx

  Length = a1->Length;
  Buffer = 0LL;
  v6 = 0LL;
  result = 0LL;
  if ( (a1->Length & 1) != 0 )
    return 3221225485LL;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > MaximumLength || MaximumLength == 0xFFFF )
    return 3221225485LL;
  if ( !a1->Buffer && (Length || MaximumLength) )
  {
    result = 3221225485LL;
  }
  else
  {
    Buffer = a1->Buffer;
    v6 = (unsigned __int64)MaximumLength >> 1;
  }
  if ( (int)result >= 0 )
  {
    v9 = 0x7FFFLL;
    result = 0LL;
    v10 = 0;
    if ( !v6 )
      goto LABEL_26;
    v11 = (char *)Buffer - a2;
    do
    {
      if ( !v9 )
        break;
      if ( !*(_WORD *)a2 )
        break;
      *(_WORD *)&a2[v11] = *(_WORD *)a2;
      --v9;
      a2 += 2;
      ++v10;
      --v6;
    }
    while ( v6 );
    if ( !v6 && v9 )
    {
LABEL_26:
      if ( *(_WORD *)a2 )
        result = 2147483653LL;
    }
    a1->Length = 2 * v10;
  }
  return result;
}
