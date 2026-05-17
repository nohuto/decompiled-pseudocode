/*
 * XREFs of RtlpWaitOnAddress @ 0x180035EEC
 * Callers:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18000B080 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlpWaitOnCriticalSection @ 0x180035D54 (RtlpWaitOnCriticalSection.c)
 *     RtlWaitOnAddress @ 0x1800783F0 (RtlWaitOnAddress.c)
 * Callees:
 *     RtlpAddWaitBlockToWaitList @ 0x180035FD8 (RtlpAddWaitBlockToWaitList.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x180036050 (RtlpWaitOnAddressWithTimeout.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18006E06C (RtlpWaitOnAddressRemoveWaitBlock.c)
 */

__int64 __fastcall RtlpWaitOnAddress(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v6; // ebx
  unsigned int v9; // ebp
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  bool v13; // zf
  _QWORD v15[5]; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+48h] [rbp-10h]

  v6 = a3;
  if ( (unsigned __int64)(a3 - 1) <= 7 && ((a3 - 1) & a3) == 0 )
  {
    v15[0] = a1;
    v9 = 0;
    v16 = 1;
    memset(&v15[2], 0, 24);
    v15[1] = NtCurrentTeb()->ClientId.UniqueThread;
    RtlpAddWaitBlockToWaitList(v15);
    v10 = v6 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 2;
        if ( v12 )
        {
          if ( v12 != 4 )
            goto LABEL_11;
          v13 = *a1 == *a2;
        }
        else
        {
          v13 = *(_DWORD *)a1 == *(_DWORD *)a2;
        }
      }
      else
      {
        v13 = *(_WORD *)a1 == *(_WORD *)a2;
      }
      if ( v13 )
        return (unsigned int)RtlpWaitOnAddressWithTimeout(v15, a4, a5);
    }
    else if ( *(_BYTE *)a1 == *(_BYTE *)a2 )
    {
      return (unsigned int)RtlpWaitOnAddressWithTimeout(v15, a4, a5);
    }
LABEL_11:
    RtlpWaitOnAddressRemoveWaitBlock(v15);
    return v9;
  }
  return 3221225485LL;
}
