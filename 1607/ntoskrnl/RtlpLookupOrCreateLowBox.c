/*
 * XREFs of RtlpLookupOrCreateLowBox @ 0x140013BBC
 * Callers:
 *     RtlpHashStringToAtom @ 0x140428450 (RtlpHashStringToAtom.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x14000EE48 (RtlpQueryLowBoxId.c)
 *     RtlpAllocateAtom @ 0x14051CF10 (RtlpAllocateAtom.c)
 */

__int64 __fastcall RtlpLookupOrCreateLowBox(__int64 a1, __int64 a2, char a3)
{
  int LowBoxId; // esi
  __int64 result; // rax
  __int64 *v7; // rdi
  __int16 v8; // cx
  __int16 v9; // dx
  __int64 v10; // rcx
  __int16 v11; // cx

  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    LowBoxId = 0;
  else
    LowBoxId = RtlpQueryLowBoxId();
  if ( !LowBoxId )
    return a2 + 16;
  v7 = (__int64 *)(a2 + 16);
  for ( result = *(_QWORD *)(a2 + 16); (__int64 *)result != v7; result = *(_QWORD *)result )
  {
    if ( *(_DWORD *)(result + 16) == LowBoxId )
    {
      if ( a3 )
      {
        v8 = *(_WORD *)(result + 22);
        if ( (v8 & 4) == 0 )
        {
          v9 = *(_WORD *)(result + 20);
          if ( v9 == -1 )
            *(_WORD *)(result + 22) = v8 | 1;
          else
            *(_WORD *)(result + 20) = v9 + 1;
          *(_WORD *)(result + 22) |= 4u;
        }
      }
      return result;
    }
  }
  result = RtlpAllocateAtom(24LL, 1282241601LL);
  if ( result )
  {
    v10 = *v7;
    if ( *(__int64 **)(*v7 + 8) != v7 )
      __fastfail(3u);
    *(_QWORD *)result = v10;
    *(_QWORD *)(result + 8) = v7;
    *(_QWORD *)(v10 + 8) = result;
    *v7 = result;
    *(_DWORD *)(result + 20) = 0;
    *(_DWORD *)(result + 16) = LowBoxId;
    if ( a3 )
    {
      *(_DWORD *)(result + 20) = 262145;
      v11 = *(_WORD *)(a2 + 36);
      if ( v11 == -1 )
        *(_WORD *)(a2 + 38) |= 1u;
      else
        *(_WORD *)(a2 + 36) = v11 + 1;
    }
  }
  return result;
}
