/*
 * XREFs of NtLoadKey3 @ 0x1401DF924
 * Callers:
 *     <none>
 * Callees:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtLoadKey3(
        _OWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        ACCESS_MASK DesiredAccess,
        HANDLE *a7)
{
  char PreviousMode; // bl
  __int64 v10; // r10
  int v12; // edx
  __int128 v13; // xmm0
  char v15; // [rsp+38h] [rbp-50h]
  int v16; // [rsp+50h] [rbp-38h]
  __int64 v17; // [rsp+58h] [rbp-30h]
  HANDLE v18; // [rsp+60h] [rbp-28h]
  HANDLE Handle; // [rsp+68h] [rbp-20h]

  Handle = 0LL;
  v18 = 0LL;
  v16 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = 0LL;
  v17 = 0LL;
  v12 = 0;
  while ( a5 )
  {
    if ( PreviousMode == 1 )
    {
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = v16;
      v10 = v17;
    }
    v13 = *(_OWORD *)a4;
    if ( (unsigned __int8)*(_OWORD *)a4 == 1LL )
    {
      if ( (v12 & 2) != 0 )
        return 3221225714LL;
      v10 = *(_QWORD *)(a4 + 8);
      v17 = v10;
      v12 |= 2u;
    }
    else if ( (unsigned __int8)v13 == 2LL )
    {
      if ( (v12 & 4) != 0 )
        return 3221225714LL;
      Handle = *(HANDLE *)(a4 + 8);
      v12 |= 4u;
    }
    else
    {
      if ( (unsigned __int8)v13 != 3LL )
        return 3221225714LL;
      if ( (v12 & 8) != 0 )
        return 3221225714LL;
      v18 = *(HANDLE *)(a4 + 8);
      v12 |= 8u;
    }
    v16 = v12;
    a4 += 16LL;
    --a5;
  }
  return CmLoadKeyHelper(a1, a2, a3 | 0x8000u, v10, Handle, DesiredAccess, a7, v15, v18);
}
