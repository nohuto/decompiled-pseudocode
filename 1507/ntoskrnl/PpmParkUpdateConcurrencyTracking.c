/*
 * XREFs of PpmParkUpdateConcurrencyTracking @ 0x1405B0BBC
 * Callers:
 *     PpmCheckReInit @ 0x1405B0AB4 (PpmCheckReInit.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

unsigned __int64 __fastcall PpmParkUpdateConcurrencyTracking(char a1)
{
  unsigned __int64 result; // rax
  unsigned __int16 v3; // di
  char *v4; // rbx
  char v5; // al
  unsigned __int16 v6; // cx
  __int64 v7; // rdx
  void *v8; // rdx
  __int64 v9; // r8
  unsigned __int16 v10; // cx
  __int64 v11; // rdx
  __int64 v12; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v13[21]; // [rsp+30h] [rbp-71h] BYREF
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+5Fh] BYREF

  result = (unsigned __int64)&retaddr;
  v3 = 0;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v4 = (char *)PpmParkNodes + 120 * v3;
      v5 = v4[114];
      if ( !a1 )
        break;
      if ( (v5 & 8) == 0 )
      {
        v4[114] = v5 | 8;
        v12 = 1310721LL;
        memset(v13, 0, 0xA0uLL);
        v6 = *((_WORD *)v4 + 2);
        v7 = *((_QWORD *)v4 + 1);
        if ( v6 )
          LOWORD(v12) = v6 + 1;
        v13[v6] |= v7;
        v8 = PpmIdleInstallConcurrency;
        v9 = *((_QWORD *)v4 + 6);
LABEL_9:
        PopExecuteOnTargetProcessors((__int64)&v12, (__int64)v8, v9, 0LL);
      }
LABEL_4:
      result = ++v3;
      if ( v3 >= (unsigned int)PpmParkNumNodes )
        return result;
    }
    if ( (v5 & 8) == 0 )
      goto LABEL_4;
    v4[114] = v5 & 0xF7;
    v12 = 1310721LL;
    memset(v13, 0, 0xA0uLL);
    v10 = *((_WORD *)v4 + 2);
    v11 = *((_QWORD *)v4 + 1);
    if ( v10 )
      LOWORD(v12) = v10 + 1;
    v13[v10] |= v11;
    v8 = PpmIdleRemoveConcurrency;
    v9 = 0LL;
    goto LABEL_9;
  }
  return result;
}
