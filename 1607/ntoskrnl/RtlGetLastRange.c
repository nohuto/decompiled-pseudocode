/*
 * XREFs of RtlGetLastRange @ 0x14055A700
 * Callers:
 *     RtlFindRange @ 0x14055A330 (RtlFindRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetLastRange(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rcx

  *(_QWORD *)a2 = a1;
  v3 = 0;
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 24);
  if ( *(_QWORD *)a1 == a1 )
  {
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *a3 = 0LL;
    return (unsigned int)-2147483622;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8) - 40LL;
    if ( (*(_BYTE *)(v4 + 34) & 1) != 0 )
    {
      *(_QWORD *)(a2 + 8) = v4 + 16;
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(v4 + 24) - 40LL;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)(a2 + 16) = v4;
    }
    *a3 = *(_QWORD *)(a2 + 16);
  }
  return v3;
}
