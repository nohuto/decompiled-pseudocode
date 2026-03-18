/*
 * XREFs of CmpLogHiveRundownEvent @ 0x1405DDD7C
 * Callers:
 *     CmEtwRunDown @ 0x1405DD7C4 (CmEtwRunDown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall CmpLogHiveRundownEvent(__int64 a1, unsigned int a2)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 v6; // rax
  unsigned int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  _WORD v11[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v13[6]; // [rsp+48h] [rbp-21h]
  int v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+7Ch] [rbp+13h]
  __int64 v16; // [rsp+D0h] [rbp+67h] BYREF

  v16 = a1;
  v11[0] = 0;
  v3 = *(_QWORD *)(a1 + 3016);
  v4 = *(_QWORD *)(a1 + 3032);
  v12 = a1 + 2968;
  v13[1] = &v16;
  v13[3] = a1 + 6028;
  v5 = 3;
  v13[0] = 8LL;
  v13[2] = 8LL;
  v13[4] = 4LL;
  if ( v3 )
  {
    v5 = 4;
    v14 = *(unsigned __int16 *)(a1 + 3008);
    v13[5] = v3;
    v15 = 0;
  }
  v6 = 2LL * v5;
  v7 = v5 + 1;
  v13[v6 - 1] = v11;
  v13[v6] = 2LL;
  if ( v4 )
  {
    v8 = *(unsigned __int16 *)(a1 + 3024);
    v9 = 2LL * v7++;
    v13[v9 - 1] = v4;
    LODWORD(v13[v9]) = v8;
    HIDWORD(v13[v9]) = 0;
  }
  v10 = 2LL * v7;
  v13[v10 - 1] = v11;
  v13[v10] = 2LL;
  EtwpLogKernelEvent((__int64)&v12, a2, v7 + 1, 0x927u, 0x401802u);
}
