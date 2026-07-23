/*
 * XREFs of LdrpInitializeGraphRecurse @ 0x1800722A8
 * Callers:
 *     LdrpPrepareModuleForExecution @ 0x18002DA78 (LdrpPrepareModuleForExecution.c)
 *     LdrGetProcedureAddressForCaller @ 0x180031D50 (LdrGetProcedureAddressForCaller.c)
 *     LdrpInitializeGraphRecurse @ 0x1800722A8 (LdrpInitializeGraphRecurse.c)
 *     LdrpInitializeShimDllDependencies @ 0x18007DF68 (LdrpInitializeShimDllDependencies.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800D6028 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpInitializeGraphRecurse @ 0x1800722A8 (LdrpInitializeGraphRecurse.c)
 *     LdrpInitializeNode @ 0x180072374 (LdrpInitializeNode.c)
 */

__int64 __fastcall LdrpInitializeGraphRecurse(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 **v5; // rsi
  char v6; // al
  __int64 **v7; // rdi
  __int64 *v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  char v11; // [rsp+40h] [rbp+8h] BYREF
  _BYTE *v12; // [rsp+50h] [rbp+18h]

  v12 = a3;
  if ( *(_DWORD *)(a1 + 56) == -4 )
    return 3221225794LL;
  v5 = *(__int64 ***)(a1 + 40);
  v6 = 0;
  v11 = 0;
  if ( v5 )
  {
    v7 = v5;
    do
    {
      v7 = (__int64 **)*v7;
      if ( ((_BYTE)v7[3] & 1) == 0 )
      {
        v8 = v7[1];
        if ( *((_DWORD *)v8 + 14) == 7 )
        {
          result = LdrpInitializeGraphRecurse(v8, a2, &v11);
          if ( (int)result < 0 )
            goto LABEL_19;
          v6 = v11;
        }
        else
        {
          if ( *((_DWORD *)v8 + 14) == -4 )
          {
            result = 3221225794LL;
            goto LABEL_19;
          }
          if ( *((_DWORD *)v8 + 14) == 8 )
            v6 = 1;
          v11 = v6;
        }
      }
    }
    while ( v7 != v5 );
    if ( v6 )
    {
      *v12 = 1;
      v10 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
      if ( v10 )
      {
        if ( a2 != *(_QWORD *)(v10 + 32) )
          return 0LL;
      }
    }
  }
  result = LdrpInitializeNode(a1);
  if ( (int)result < 0 )
LABEL_19:
    *(_DWORD *)(a1 + 56) = -4;
  return result;
}
