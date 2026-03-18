/*
 * XREFs of VidSchGetDeviceFlipMode @ 0x1C005EE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDeviceFlipMode(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rbx
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  unsigned __int8 v11; // bl

  v4 = *(_DWORD *)(a1 + 864);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = (unsigned int)a2;
  if ( v4 == 1 )
  {
    *a3 = 0;
    return *(unsigned int *)(v5 + 2100);
  }
  if ( v4 == 2 )
  {
    *a3 = 1;
  }
  else
  {
    v8 = *a3;
    if ( !*a3 )
      return *(unsigned int *)(v5 + 2100);
    if ( v8 != 1 && ((unsigned int)(v8 - 2) > 2 || (*(_DWORD *)(v5 + 2096) & 8) == 0) )
      return 0LL;
  }
  if ( *(int *)(v5 + 2104) >= 4 )
  {
    if ( (unsigned int)a2 >= *(_DWORD *)(v5 + 40) )
    {
      v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v9 + 24) = v6;
      WdLogEvent5_WdAssertion(v9);
      return *(unsigned int *)(v5 + 2100);
    }
    ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 1200), 1u);
    v10 = *(_DWORD *)(v5 + 1924);
    v11 = _bittest(&v10, v6);
    ExReleaseResourceLite((PERESOURCE)(v5 + 1200));
    if ( !v11 )
      return *(unsigned int *)(v5 + 2100);
  }
  return *(unsigned int *)(v5 + 2104);
}
