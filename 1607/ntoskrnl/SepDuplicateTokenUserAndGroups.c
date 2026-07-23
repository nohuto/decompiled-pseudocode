/*
 * XREFs of SepDuplicateTokenUserAndGroups @ 0x140693098
 * Callers:
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 * Callees:
 *     SepDuplicateSid @ 0x1404B4434 (SepDuplicateSid.c)
 */

__int64 __fastcall SepDuplicateTokenUserAndGroups(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // ebx
  unsigned int v6; // r8d
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 208);
  v3 = 0;
  v11 = 0LL;
  v6 = 0;
  if ( v2 != -1 )
  {
    result = SepDuplicateSid(*(unsigned __int8 **)(*(_QWORD *)(a1 + 152) + 16LL * v2), &v11);
    v6 = result;
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a2 + 1120) = v11;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1128) + 8LL)) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(a2 + 1128) = *(_QWORD *)(a1 + 1128);
  v8 = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(a2 + 124) = v8;
  if ( v8 )
  {
    do
    {
      v9 = 16LL * v3;
      if ( v3 == v2 )
        v10 = *(_QWORD *)(a2 + 1120);
      else
        v10 = *(_QWORD *)(v9 + *(_QWORD *)(a1 + 152));
      *(_QWORD *)(v9 + *(_QWORD *)(a2 + 152)) = v10;
      ++v3;
      *(_DWORD *)(*(_QWORD *)(a2 + 152) + v9 + 8) = *(_DWORD *)(*(_QWORD *)(a1 + 152) + v9 + 8);
    }
    while ( v3 < *(_DWORD *)(a2 + 124) );
  }
  return v6;
}
