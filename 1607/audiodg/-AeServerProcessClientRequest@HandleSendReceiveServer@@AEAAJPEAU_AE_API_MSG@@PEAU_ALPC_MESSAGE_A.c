/*
 * XREFs of ?AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAX@Z @ 0x1400152E8
 * Callers:
 *     ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x140015380 (-AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ.c)
 * Callees:
 *     ?ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAPEAX@Z @ 0x140024E6C (-ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@P.c)
 *     ?ValidateStopListening@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@@Z @ 0x1400335B0 (-ValidateStopListening@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@@Z.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerProcessClientRequest(
        void ***this,
        struct _AE_API_MSG *a2,
        struct _ALPC_MESSAGE_ATTRIBUTES *a3,
        void *a4)
{
  struct _AE_API_MSG *v4; // rdi
  volatile __int64 *v5; // rsi
  unsigned int v6; // ebx
  __int64 MessageAttribute; // rax
  void *v8; // rcx
  __int64 result; // rax
  int v10; // eax
  struct _AE_API_MSG *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v4 = a2;
  if ( *((_WORD *)a2 + 1) != 48 )
    goto LABEL_8;
  if ( *((_DWORD *)a2 + 10) != 1 )
  {
    if ( *((_DWORD *)a2 + 10) == 2 )
    {
      v10 = HandleSendReceiveServer::ValidateStopListening((HandleSendReceiveServer *)this, &v11);
      goto LABEL_14;
    }
    if ( *((_DWORD *)a2 + 10) == 3 )
    {
      v10 = HandleSendReceiveServer::ExtractHandle(
              (HandleSendReceiveServer *)(unsigned int)(*((_DWORD *)a2 + 10) - 2),
              &v11,
              a3,
              this[5]);
LABEL_14:
      v6 = v10;
      goto LABEL_7;
    }
LABEL_8:
    v6 = -1073741649;
    goto LABEL_7;
  }
  v5 = (volatile __int64 *)this[4];
  v6 = 0;
  if ( (*((_DWORD *)a3 + 1) & 0x10000000) == 0 )
  {
    v6 = -1073741649;
    *((_DWORD *)a2 + 11) = -1073741649;
    goto LABEL_7;
  }
  MessageAttribute = AlpcGetMessageAttribute(a3);
  if ( !MessageAttribute )
  {
    v10 = -1073741816;
    *((_DWORD *)v4 + 11) = -1073741816;
    goto LABEL_14;
  }
  v8 = *(void **)(MessageAttribute + 8);
  if ( v5 )
  {
    _InterlockedExchange64(v5, (__int64)v8);
    v4 = v11;
  }
  else
  {
    NtClose(v8);
  }
LABEL_7:
  result = v6;
  *((_DWORD *)v4 + 11) = v6;
  return result;
}
