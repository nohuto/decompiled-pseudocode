/*
 * XREFs of ?RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z @ 0x1800163A0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z @ 0x180016190 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z.c)
 */

__int64 __fastcall DWMInputRouter::RequestViewHitTestSync(__int64 a1, __int128 *a2, _DWORD *a3)
{
  int v3; // eax
  __int64 v4; // xmm1_8
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]

  v3 = *((_DWORD *)a2 + 6);
  v4 = *((_QWORD *)a2 + 2);
  v9 = *a2;
  v10 = v4;
  v11 = v3;
  v5 = DWMInputRouter::RequestViewHitTestHelper(a1 - 24, (__int64)&v9, a3);
  v7 = v5;
  if ( v5 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 1977, v5);
  return v7;
}
