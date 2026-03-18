/*
 * XREFs of PfSnCleanupTrace @ 0x1404F6FD4
 * Callers:
 *     PfSnEndTrace @ 0x1404F6D18 (PfSnEndTrace.c)
 *     PfSnBeginTrace @ 0x140543FC8 (PfSnBeginTrace.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnCleanupTrace(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  void *v7; // rcx
  __int64 **v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  unsigned __int64 v13; // rtt

  v2 = *(_QWORD **)(a1 + 520);
  if ( v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v2 )
        {
          v6 = v2;
          v2 = (_QWORD *)*v2;
          *v6 = 0LL;
        }
        if ( !v2[1] )
          break;
        v5 = v2;
        v2 = (_QWORD *)v2[1];
        v5[1] = 0LL;
      }
      v3 = v2[2];
      ExFreePoolWithTag(v2, 0);
      v4 = v3 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v4 )
        break;
      v2 = (_QWORD *)v4;
    }
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  v7 = *(void **)(a1 + 584);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = (__int64 **)(a1 + 104);
  while ( *v8 != (__int64 *)v8 )
  {
    v9 = *v8;
    v10 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v8 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v8;
    --*(_DWORD *)(a1 + 120);
    ExFreePoolWithTag(v9, 0);
  }
  v11 = *(void **)(a1 + 472);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = *(void **)(a1 + 352);
  if ( v12 )
    ObfDereferenceObjectWithTag(v12, 0x73576650u);
  if ( (*(_BYTE *)(a1 + 486) & 2) != 0 )
  {
    _m_prefetchw(&stru_1403535F0);
    v13 = stru_1403535F0.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v13 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&stru_1403535F0,
                  (stru_1403535F0.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  stru_1403535F0.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&stru_1403535F0);
  }
}
