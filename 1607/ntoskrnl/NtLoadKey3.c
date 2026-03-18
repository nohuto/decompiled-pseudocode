/*
 * XREFs of NtLoadKey3 @ 0x1401B3004
 * Callers:
 *     <none>
 * Callees:
 *     CmLoadDifferencingKey @ 0x14049B648 (CmLoadDifferencingKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtLoadKey3(int a1, int a2, int a3, __int64 a4, int a5, ACCESS_MASK DesiredAccess, __int64 a7)
{
  KPROCESSOR_MODE PreviousMode; // bl
  int v10; // r10d
  int v12; // ecx
  __int128 v13; // xmm0
  int v15; // [rsp+38h] [rbp-60h]
  int v16; // [rsp+60h] [rbp-38h]
  int v17; // [rsp+68h] [rbp-30h]
  __int64 v18; // [rsp+70h] [rbp-28h]
  __int64 v19; // [rsp+78h] [rbp-20h]

  v19 = 0LL;
  v18 = 0LL;
  v16 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = 0;
  v17 = 0;
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
      v19 = *(_QWORD *)(a4 + 8);
      v12 |= 4u;
    }
    else
    {
      if ( (unsigned __int8)v13 != 3LL )
        return 3221225714LL;
      if ( (v12 & 8) != 0 )
        return 3221225714LL;
      v18 = *(_QWORD *)(a4 + 8);
      v12 |= 8u;
    }
    v16 = v12;
    a4 += 16LL;
    --a5;
  }
  return CmLoadDifferencingKey(a1, a2, a3 | 0x8000u, v10, v19, DesiredAccess, a7, v15, 0LL, v18, PreviousMode);
}
