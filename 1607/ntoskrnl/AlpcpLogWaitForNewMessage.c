/*
 * XREFs of AlpcpLogWaitForNewMessage @ 0x140656AA0
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x14044BC40 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     AlpcpGetPortNameInformation @ 0x140655F60 (AlpcpGetPortNameInformation.c)
 *     AlpcpInvokeLogCallbacks @ 0x14065676C (AlpcpInvokeLogCallbacks.c)
 */

void __fastcall AlpcpLogWaitForNewMessage(char *a1)
{
  const void **v1; // rbx
  unsigned int v3; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rdi
  __int128 v6; // xmm0
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  const void **v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  v8 = 0LL;
  v3 = 30;
  if ( a1 )
  {
    v7 = -1;
    if ( (int)AlpcpGetPortNameInformation(a1, &v8, &v7) < 0 )
      return;
    v1 = v8;
    v3 = *(unsigned __int16 *)v8 + 30;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x654C6C41u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v3);
    v1 = v8;
    v6 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
    v5[4] = 4;
    *(_OWORD *)v5 = v6;
    if ( a1 )
    {
      v5[6] = (a1[416] & 6) == 2;
      memmove(v5 + 7, v1[1], *(unsigned __int16 *)v1);
    }
    else
    {
      v5[6] = 0;
    }
    AlpcpInvokeLogCallbacks((__int64)v5, v3);
    ExFreePoolWithTag(v5, 0);
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
