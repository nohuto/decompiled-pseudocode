/*
 * XREFs of RtlpOpenImageFileOptionsKey @ 0x18007F110
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x18007F080 (RtlQueryImageFileExecutionOptions.c)
 *     RtlOpenImageFileOptionsKey @ 0x180090F40 (RtlOpenImageFileOptionsKey.c)
 *     LdrpInitializeExecutionOptions @ 0x180093C48 (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D29E0 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 * Callees:
 *     RtlpOpenBaseImageFileOptionsKey @ 0x18007F1D8 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007F260 (RtlpProcessIFEOKeyFilter.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 */

__int64 __fastcall RtlpOpenImageFileOptionsKey(unsigned __int16 *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // ecx
  __int64 v8; // rax
  int v9; // edx
  __int16 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  int v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  __int16 *v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+48h] [rbp-20h]
  __int128 v16; // [rsp+50h] [rbp-18h]
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  result = RtlpOpenBaseImageFileOptionsKey(&v17);
  if ( (int)result >= 0 )
  {
    v7 = *a1;
    v8 = *((_QWORD *)a1 + 1) + *a1;
    if ( *a1 )
    {
      do
      {
        if ( *(_WORD *)(v8 - 2) == 92 )
          break;
        v8 -= 2LL;
        v7 -= 2;
      }
      while ( v7 );
    }
    v9 = *a1 - v7;
    v11 = v8;
    v10 = v9;
    if ( (unsigned __int16)v9 == v9 )
    {
      v13 = v17;
      v12 = 48;
      v14 = &v10;
      v15 = 576;
      v16 = 0LL;
      result = NtOpenKey(a3, a2, &v12);
      if ( (int)result >= 0 )
        return RtlpProcessIFEOKeyFilter(a3, a2, a1);
    }
    else
    {
      return 3221225507LL;
    }
  }
  return result;
}
