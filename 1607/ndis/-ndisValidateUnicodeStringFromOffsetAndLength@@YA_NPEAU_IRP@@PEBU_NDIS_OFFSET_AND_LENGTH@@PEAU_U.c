/*
 * XREFs of ?ndisValidateUnicodeStringFromOffsetAndLength@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNICODE_STRING@@@Z @ 0x1C00CC0CC
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00EBC18 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisValidateOffsetAndLength@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAPEAX@Z @ 0x1C00CC070 (-ndisValidateOffsetAndLength@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAPEAX@Z.c)
 */

char __fastcall ndisValidateUnicodeStringFromOffsetAndLength(
        struct _IRP *a1,
        const struct _NDIS_OFFSET_AND_LENGTH *a2,
        struct _UNICODE_STRING *a3)
{
  __int64 v4; // rdx
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int16 v10; // ax
  void *v11; // [rsp+48h] [rbp+20h] BYREF

  if ( !ndisValidateOffsetAndLength(a1, a2, (const struct _NDIS_OFFSET_AND_LENGTH **)&v11) )
    return 0;
  v6 = *(_DWORD *)(v4 + 4);
  if ( (v6 & 1) != 0 )
    return 0;
  if ( !v6 )
  {
    a3->Buffer = 0LL;
    *(_DWORD *)&a3->Length = 0;
    return 1;
  }
  if ( v6 > 0x1000 )
    return 0;
  v7 = (v6 >> 1) - 1;
  v8 = (unsigned int)v7;
  if ( *((_WORD *)v11 + v7) )
    return 0;
  v9 = -1LL;
  do
    ++v9;
  while ( *((_WORD *)v11 + v9) );
  if ( v9 != v8 )
    return 0;
  a3->Buffer = (wchar_t *)v11;
  v10 = *(_WORD *)(v4 + 4);
  a3->MaximumLength = v10;
  a3->Length = v10 - 2;
  return 1;
}
