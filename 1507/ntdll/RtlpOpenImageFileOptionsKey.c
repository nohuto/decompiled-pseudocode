/*
 * XREFs of RtlpOpenImageFileOptionsKey @ 0x180071248
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x1800711C0 (RtlQueryImageFileExecutionOptions.c)
 *     LdrpInitializeExecutionOptions @ 0x1800BE35C (LdrpInitializeExecutionOptions.c)
 *     RtlOpenImageFileOptionsKey @ 0x1800CBDF0 (RtlOpenImageFileOptionsKey.c)
 * Callees:
 *     RtlpOpenBaseImageFileOptionsKey @ 0x180071308 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180071394 (RtlpProcessIFEOKeyFilter.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 */

__int64 __fastcall RtlpOpenImageFileOptionsKey(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v6; // edx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rdx
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
    v6 = *a1;
    v7 = *((_QWORD *)a1 + 1) + *a1;
    if ( *a1 )
    {
      do
      {
        if ( *(_WORD *)(v7 - 2) == 92 )
          break;
        v7 -= 2LL;
        v6 -= 2;
      }
      while ( v6 );
    }
    v8 = *a1 - v6;
    v11 = v7;
    v10 = v8;
    if ( (unsigned __int16)v8 == v8 )
    {
      v13 = v17;
      v12 = 48;
      v14 = &v10;
      v15 = 576;
      v16 = 0LL;
      result = NtOpenKey(a3, 9LL, &v12);
      if ( (int)result >= 0 )
        return RtlpProcessIFEOKeyFilter(a3, v9, a1);
    }
    else
    {
      return 3221225507LL;
    }
  }
  return result;
}
