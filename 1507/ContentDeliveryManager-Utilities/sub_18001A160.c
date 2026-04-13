/*
 * XREFs of sub_18001A160 @ 0x18001A160
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008A00 @ 0x180008A00 (sub_180008A00.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001D700 @ 0x18001D700 (sub_18001D700.c)
 *     sub_18001DB28 @ 0x18001DB28 (sub_18001DB28.c)
 */

__int64 __fastcall sub_18001A160(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v5; // r9

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 216) + 8LL))(
         *(_QWORD *)(a1 + 216),
         0LL,
         0LL,
         a1 + 240);
  if ( v2 < 0 )
    goto LABEL_10;
  v3 = a1 == 8 ? 0LL : a1 + 168;
  *(_DWORD *)(a1 + 272) = GetCurrentThreadId();
  CurrentThreadId = GetCurrentThreadId();
  v2 = sub_180008A00(*(_DWORD *)(a1 + 264), *(_DWORD *)(a1 + 268), CurrentThreadId, v5, v3);
  if ( v2 < 0 )
  {
    if ( *(_DWORD *)(a1 + 208) )
    {
      sub_18001DB28(a1, (unsigned int)v2);
      v2 = 0;
    }
    else
    {
      sub_18001D700(a1 - 8, 1LL, (unsigned int)v2);
    }
    if ( v2 < 0 )
LABEL_10:
      sub_18001DB28(a1, (unsigned int)v2);
  }
  return (unsigned int)v2;
}
