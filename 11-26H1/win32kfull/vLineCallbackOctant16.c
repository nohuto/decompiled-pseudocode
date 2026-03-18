/*
 * XREFs of vLineCallbackOctant16 @ 0x1401EC420
 * Callers:
 *     vDrawLine @ 0x140187A94 (vDrawLine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall vLineCallbackOctant16(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  int v5; // esi
  int v7; // r13d
  int v8; // ebp
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(_QWORD, _QWORD, __int64); // r15
  __int64 result; // rax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // [rsp+50h] [rbp+8h]

  v5 = *(_DWORD *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 12);
  v15 = *(_DWORD *)(a1 + 20);
  v9 = a3;
  v10 = a2 + 4LL * *(int *)(a1 + 4);
  v11 = **(__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(a1 + 32);
  while ( 1 )
  {
    result = v11(*(_QWORD *)(a1 + 32), a4, v10);
    if ( !--v8 )
      break;
    v13 = v10 + v9;
    v14 = v5 + v15;
    v10 += v9 + 4;
    v5 = v5 + v15 - v7;
    if ( v14 < 0 )
    {
      v5 = v14;
      v10 = v13;
    }
  }
  return result;
}
