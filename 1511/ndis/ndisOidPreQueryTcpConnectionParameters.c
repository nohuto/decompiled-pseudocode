/*
 * XREFs of ndisOidPreQueryTcpConnectionParameters @ 0x1C00C0DF4
 * Callers:
 *     ndisOidPreTcpConnectionOffloadParameters @ 0x1C00C12C0 (ndisOidPreTcpConnectionOffloadParameters.c)
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 */

char __fastcall ndisOidPreQueryTcpConnectionParameters(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v4; // eax
  int v5; // ebx
  char result; // al
  __int64 v9; // rdx
  unsigned int v10; // esi
  __int64 v11; // rcx

  v4 = *(_DWORD *)(a3 + 48);
  v5 = 0;
  if ( v4 < 0x38 )
  {
    *(_DWORD *)(a3 + 56) = 56;
    v5 = -1073676268;
LABEL_3:
    result = 1;
    goto LABEL_11;
  }
  if ( !a1 )
  {
    result = 0;
    goto LABEL_11;
  }
  v9 = *(_QWORD *)(a1 + 4152);
  if ( !*(_BYTE *)(v9 + 2) )
  {
    v5 = -1073741637;
    goto LABEL_3;
  }
  v10 = v4 < 0x3C ? 56 : 60;
  memmove(*(void **)(a3 + 40), (const void *)(v9 + 960), v10);
  v11 = *(_QWORD *)(a3 + 40);
  result = 1;
  if ( v10 == 56 )
  {
    *(_WORD *)(v11 + 2) = 56;
    *(_BYTE *)(v11 + 1) = 1;
  }
  *(_DWORD *)(a3 + 52) = v10;
LABEL_11:
  *a4 = v5;
  return result;
}
