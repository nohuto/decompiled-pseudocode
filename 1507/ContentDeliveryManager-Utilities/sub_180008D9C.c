/*
 * XREFs of sub_180008D9C @ 0x180008D9C
 * Callers:
 *     sub_180009508 @ 0x180009508 (sub_180009508.c)
 *     sub_180009C28 @ 0x180009C28 (sub_180009C28.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

DWORD __fastcall sub_180008D9C(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rsi
  DWORD v11; // ebx
  DWORD result; // eax

  if ( a5 )
  {
    v8 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
    *a5 = v8;
  }
  *(_DWORD *)(a1 + 128) = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 8);
  v9 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  v10 = *(_QWORD *)(a1 + 144);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(*(_QWORD *)(a1 + 144));
  *(_QWORD *)(a1 + 144) = v9;
  v11 = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 160) = a3;
  *(_QWORD *)(a1 + 40) = a4;
  *(_BYTE *)(a1 + 97) = 0;
  result = GetCurrentThreadId();
  if ( result != v11 && v11 )
  {
    if ( *(_BYTE *)(a1 + 120) )
      return SetEvent(*(HANDLE *)(a1 + 112));
    else
      return PostThreadMessageW(v11, 0, 0LL, 0LL);
  }
  return result;
}
