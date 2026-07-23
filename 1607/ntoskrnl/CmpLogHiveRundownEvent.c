/*
 * XREFs of CmpLogHiveRundownEvent @ 0x1405FBCCC
 * Callers:
 *     CmEtwRunDown @ 0x1405FB6F4 (CmEtwRunDown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall CmpLogHiveRundownEvent(__int64 a1, unsigned int a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned int v5; // r9d
  __int64 v6; // rax
  unsigned int v7; // r9d
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  _WORD v12[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v14[6]; // [rsp+48h] [rbp-21h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  __int64 v17; // [rsp+D0h] [rbp+67h] BYREF

  v17 = a1;
  v12[0] = 0;
  v3 = *(_QWORD *)(a1 + 3016);
  v4 = *(_QWORD *)(a1 + 3032);
  v13 = a1 + 2968;
  v14[1] = &v17;
  v14[3] = a1 + 6028;
  v5 = 3;
  v14[0] = 8LL;
  v14[2] = 8LL;
  v14[4] = 4LL;
  if ( v3 )
  {
    v5 = 4;
    v15 = *(unsigned __int16 *)(a1 + 3008);
    v14[5] = v3;
    v16 = 0;
  }
  v6 = 2LL * v5;
  v7 = v5 + 1;
  v14[v6 - 1] = v12;
  v14[v6] = 2LL;
  if ( v4 )
  {
    v8 = *(unsigned __int16 *)(a1 + 3024);
    v9 = 2LL * v7++;
    v14[v9 - 1] = v4;
    LODWORD(v14[v9]) = v8;
    HIDWORD(v14[v9]) = 0;
  }
  v10 = EtwpHostSiloState;
  v11 = 2LL * v7;
  v14[v11 - 1] = v12;
  v14[v11] = 2LL;
  EtwpLogKernelEvent((__int64)&v13, v10, a2, v7 + 1, 0x927u, 0x401802u);
}
