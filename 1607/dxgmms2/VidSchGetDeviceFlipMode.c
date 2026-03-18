/*
 * XREFs of VidSchGetDeviceFlipMode @ 0x1C0066E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDeviceFlipMode(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rbx
  int v6; // eax
  int v7; // eax
  unsigned __int8 v8; // bl
  __int64 v10; // rax

  v3 = *(_DWORD *)(a1 + 856);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = (unsigned int)a2;
  if ( v3 == 1 )
  {
    *a3 = 0;
  }
  else
  {
    if ( v3 == 2 )
      *a3 = 1;
    v6 = *a3;
    if ( *a3 )
    {
      if ( v6 != 1 && ((unsigned int)(v6 - 2) > 2 || (*(_DWORD *)(v4 + 2136) & 8) == 0) )
        return 0LL;
      if ( *(int *)(v4 + 2144) < 4 )
        return *(unsigned int *)(v4 + 2144);
      if ( (unsigned int)a2 >= *(_DWORD *)(v4 + 40) )
      {
        v10 = WdLogNewEntry5_WdAssertion(a1, a2);
        *(_QWORD *)(v10 + 24) = v5;
        WdLogEvent5_WdAssertion(v10);
      }
      else
      {
        ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 1232), 1u);
        v7 = *(_DWORD *)(v4 + 1956);
        v8 = _bittest(&v7, v5);
        ExReleaseResourceLite((PERESOURCE)(v4 + 1232));
        if ( v8 )
          return *(unsigned int *)(v4 + 2144);
      }
    }
  }
  return *(unsigned int *)(v4 + 2140);
}
