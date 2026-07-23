/*
 * XREFs of IopQueryLegacyBusInformation @ 0x1404CFF90
 * Callers:
 *     PipCallDriverAddDevice @ 0x1403F3BB0 (PipCallDriverAddDevice.c)
 * Callees:
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 */

__int64 __fastcall IopQueryLegacyBusInformation(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int v7; // r9d
  int v8; // ebp
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  _WORD v13[36]; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  P = 0LL;
  memset(v13, 0, sizeof(v13));
  v13[0] = 6171;
  v8 = IopSynchronousCall(a1, (unsigned int)v13, -1073741637, v7, (__int64)&P);
  if ( v8 >= 0 )
  {
    v10 = P;
    if ( P )
    {
      if ( a3 )
        *a3 = *((_DWORD *)P + 4);
      if ( a4 )
        *a4 = v10[5];
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 16);
        if ( v12 )
        {
          if ( *(_QWORD *)(v12 + 64) )
          {
            DbgPrint("*** IopQueryLegacyBusInformation - Driver %wZ returned STATUS_SUCCESS\n", v12 + 56);
            DbgPrint("    for IRP_MN_QUERY_LEGACY_BUS_INFORMATION, and a NULL POINTER.\n");
          }
        }
      }
    }
  }
  return (unsigned int)v8;
}
