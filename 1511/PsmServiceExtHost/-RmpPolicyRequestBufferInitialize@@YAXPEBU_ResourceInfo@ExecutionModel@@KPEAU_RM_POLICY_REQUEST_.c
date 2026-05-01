/*
 * XREFs of ?RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_BUFFER@@@Z @ 0x180004CC0
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000C690 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x180044678 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

void __fastcall RmpPolicyRequestBufferInitialize(
        const struct ExecutionModel::_ResourceInfo *a1,
        unsigned int a2,
        struct _RM_POLICY_REQUEST_BUFFER *a3)
{
  __int64 v6; // rsi
  unsigned int v7; // ebp
  _BYTE *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx

  v6 = 0LL;
  v7 = 0;
  memset_0(a3, 0, 0x4E0uLL);
  if ( a2 )
  {
    v8 = RmSvcGlobals;
    v9 = a2;
    do
    {
      if ( *(_DWORD *)a1 <= 0x2Fu )
      {
        if ( (v8[1580] & 4) == 0 && *(_DWORD *)a1 == 1 )
        {
          v12 = 3 * v6;
          v6 = (unsigned int)(v6 + 1);
          *(_OWORD *)((char *)a3 + 8 * v12 + 1160) = *(_OWORD *)a1;
          *((_QWORD *)a3 + v12 + 147) = *((_QWORD *)a1 + 2);
        }
        else
        {
          v10 = v7++;
          v11 = 3 * v10;
          *(_OWORD *)((char *)a3 + 8 * v11) = *(_OWORD *)a1;
          *((_QWORD *)a3 + v11 + 2) = *((_QWORD *)a1 + 2);
        }
      }
      a1 = (const struct ExecutionModel::_ResourceInfo *)((char *)a1 + 24);
      --v9;
    }
    while ( v9 );
  }
  *((_DWORD *)a3 + 288) = v7;
  *((_DWORD *)a3 + 308) = v6;
}
