/*
 * XREFs of RmpClientCallbackGenerateLastMessage @ 0x180009D8C
 * Callers:
 *     RmpClientSubscriptionWnfCallback @ 0x18000A4F0 (RmpClientSubscriptionWnfCallback.c)
 * Callees:
 *     memset_0 @ 0x1800066EC (memset_0.c)
 */

void *__fastcall RmpClientCallbackGenerateLastMessage(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  __int64 v5; // rsi
  _QWORD *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rbx
  void *result; // rax
  __int64 v10; // rcx

  memset_0(a2, 0, 0x38uLL);
  v4 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)a2 = v4;
  if ( v4 == 1 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    v6 = a2 + 1;
    v7 = *(_QWORD *)(a1 + 32);
    v8 = *(_QWORD *)(a1 + 64);
    result = memset_0(v6, 0, 0x30uLL);
    *((_DWORD *)v6 + 6) = 0;
    *v6 = v8;
    v6[1] = v7;
    v6[2] = v5;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 56);
    result = *(void **)(a1 + 32);
    a2[3] = 0LL;
    *((_DWORD *)a2 + 6) = 0;
    a2[1] = result;
    a2[2] = v10;
  }
  return result;
}
