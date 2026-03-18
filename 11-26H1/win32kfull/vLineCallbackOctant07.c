/*
 * XREFs of vLineCallbackOctant07 @ 0x1401D7810
 * Callers:
 *     vDrawLine @ 0x140187A94 (vDrawLine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall vLineCallbackOctant07(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  int v5; // ebx
  int v7; // r12d
  int v8; // r14d
  int v9; // ebp
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // rax
  __int64 result; // rax
  __int64 (__fastcall *v14)(_QWORD, _QWORD, _QWORD); // [rsp+68h] [rbp+10h]

  v5 = *(_DWORD *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 20);
  v9 = *(_DWORD *)(a1 + 12);
  v10 = a2 + 4LL * *(int *)(a1 + 4);
  v11 = a3;
  v12 = **(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))(a1 + 32);
  v14 = v12;
  while ( 1 )
  {
    result = v12(*(_QWORD *)(a1 + 32), a4, v10);
    if ( !--v9 )
      break;
    v12 = v14;
    v10 += 4LL;
    v5 += v8;
    if ( v5 >= 0 )
    {
      v5 -= v7;
      v10 += v11;
    }
  }
  return result;
}
