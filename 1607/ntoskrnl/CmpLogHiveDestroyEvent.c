/*
 * XREFs of CmpLogHiveDestroyEvent @ 0x1405FBA64
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14010BABC (CmpRemoveHiveFromNamespace.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall CmpLogHiveDestroyEvent(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r9
  unsigned int v3; // edx
  __int64 v4; // rax
  unsigned int v5; // edx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  _WORD v10[8]; // [rsp+30h] [rbp-19h] BYREF
  __int64 *v11; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v12[2]; // [rsp+48h] [rbp-1h]
  int v13; // [rsp+58h] [rbp+Fh]
  int v14; // [rsp+5Ch] [rbp+13h]
  __int64 v15; // [rsp+B0h] [rbp+67h] BYREF

  v15 = a1;
  v12[0] = 8LL;
  v10[0] = 0;
  v1 = *(_QWORD *)(a1 + 3016);
  v2 = *(_QWORD *)(a1 + 3032);
  v11 = &v15;
  v3 = 1;
  if ( v1 )
  {
    v12[1] = v1;
    v3 = 2;
    v13 = *(unsigned __int16 *)(a1 + 3008);
    v14 = 0;
  }
  v4 = 2LL * v3;
  v5 = v3 + 1;
  v12[v4 - 1] = v10;
  v12[v4] = 2LL;
  if ( v2 )
  {
    v6 = *(unsigned __int16 *)(a1 + 3024);
    v7 = 2LL * v5++;
    v12[v7 - 1] = v2;
    LODWORD(v12[v7]) = v6;
    HIDWORD(v12[v7]) = 0;
  }
  v8 = 2LL * v5;
  v12[v8 - 1] = v10;
  v12[v8] = 2LL;
  return EtwTraceKernelEvent((int)&v11, v5 + 1, 0x41000000u, 2341, 5249282);
}
