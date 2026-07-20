/*
 * XREFs of sub_1400047B4 @ 0x1400047B4
 * Callers:
 *     sub_140002E90 @ 0x140002E90 (sub_140002E90.c)
 *     sub_140011F90 @ 0x140011F90 (sub_140011F90.c)
 * Callees:
 *     sub_140004458 @ 0x140004458 (sub_140004458.c)
 */

__int64 __fastcall sub_1400047B4(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v7; // rax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_BYTE *)a1 & 0x10) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    v4 = *(_DWORD *)(v7 + 64);
    v5 = *(_QWORD *)(v7 + 32);
  }
  else if ( (*(_BYTE *)a1 & 8) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v4 = *(_DWORD *)(v3 + 8);
    v5 = *(_QWORD *)(v3 + 48);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 32);
    v4 = 0;
    if ( v5 )
    {
      if ( sub_140004458(*(void **)(a1 + 32), &v8) >= 0 )
        v4 = v8;
      else
        v5 = 0LL;
    }
  }
  *a2 = v5;
  return v4;
}
