/*
 * XREFs of DxgkCreateDoDPrimarySection @ 0x1C0147C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall DxgkCreateDoDPrimarySection(__int64 a1, unsigned int a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  PVOID v8; // rcx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  if ( *(_DWORD *)(a1 + 4) > a2 )
    a2 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)a1 = a2;
  v10 = a2;
  v3 = MmCreateSection(&Object, 0LL, 0LL, &v10, 4, 0x8000000, 0LL, 0LL);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v8 = Object;
    *(_QWORD *)(a1 + 8) = Object;
    ObfReferenceObject(v8);
    return Object;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdError(v6);
    return 0LL;
  }
}
