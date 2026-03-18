/*
 * XREFs of AlpcpLogWaitForNewMessage @ 0x1406A0390
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x14047F3A0 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     AlpcpGetPortNameInformation @ 0x14069FC58 (AlpcpGetPortNameInformation.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406A005C (AlpcpInvokeLogCallbacks.c)
 */

void __fastcall AlpcpLogWaitForNewMessage(char *a1)
{
  const void **v1; // rbx
  unsigned int v3; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v8; // xmm0
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  const void **v10; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  v10 = 0LL;
  v3 = 30;
  if ( a1 )
  {
    v9 = -1;
    if ( (int)AlpcpGetPortNameInformation(a1, &v10, &v9) < 0 )
      return;
    v1 = v10;
    v3 = *(unsigned __int16 *)v10 + 30;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x654C6C41u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v3);
    v1 = v10;
    v8 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
    v5[4] = 4;
    *(_OWORD *)v5 = v8;
    if ( a1 )
    {
      v5[6] = (a1[416] & 6) == 2;
      memmove(v5 + 7, v1[1], *(unsigned __int16 *)v1);
    }
    else
    {
      v5[6] = 0;
    }
    AlpcpInvokeLogCallbacks((__int64)v5, v3, v6, v7);
    ExFreePoolWithTag(v5, 0);
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
