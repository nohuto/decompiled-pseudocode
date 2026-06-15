/*
 * XREFs of ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x140015380
 * Callers:
 *     ?AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z @ 0x1400152D0 (-AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z.c)
 * Callees:
 *     ?AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAX@Z @ 0x1400152E8 (-AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_A.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiLoop(HandleSendReceiveServer *this)
{
  __int64 result; // rax
  _BYTE *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  void *v6; // r9
  char v7; // cl
  void *v8; // rcx
  int v9; // [rsp+40h] [rbp-118h]
  __int64 v10; // [rsp+50h] [rbp-108h] BYREF
  __int64 v11; // [rsp+58h] [rbp-100h] BYREF
  _BYTE v12[8]; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v13[4]; // [rsp+68h] [rbp-F0h] BYREF
  __int16 v14; // [rsp+6Ch] [rbp-ECh]
  unsigned __int64 v15; // [rsp+70h] [rbp-E8h]
  _DWORD v16[4]; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-A8h]
  int v18; // [rsp+E0h] [rbp-78h]
  _BYTE v19[64]; // [rsp+F0h] [rbp-68h] BYREF

  result = AlpcInitializeMessageAttribute(805306368LL, v19, 64LL, v12);
  if ( (int)result >= 0 )
  {
    AlpcGetMessageAttribute(v19);
    v3 = 0LL;
    memset_0(v16, 0, 0x48uLL);
    v17 = 48LL;
    while ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 14, 1, 1) )
    {
      v4 = *((_QWORD *)this + 1);
      v10 = 48LL;
      v5 = NtAlpcSendWaitReceivePort(
             v4,
             0x10000LL,
             v3,
             0LL,
             v13,
             &v10,
             v19,
             &HandleSendReceiveServer::AeServerApiThreadTimeout);
      if ( v5 < 0 )
      {
        v3 = 0LL;
      }
      else if ( v5 != 258 )
      {
        if ( (unsigned __int8)v14 == 1 )
        {
          HandleSendReceiveServer::AeServerProcessClientRequest(
            (void ***)this,
            (struct _AE_API_MSG *)v13,
            (struct _ALPC_MESSAGE_ATTRIBUTES *)v19,
            v6);
          v3 = v13;
        }
        else
        {
          if ( (unsigned __int8)v14 != 3 )
          {
            switch ( (unsigned __int8)v14 )
            {
              case 5u:
                v8 = (void *)*((_QWORD *)this + 3);
                if ( v8 )
                {
                  NtClose(v8);
                  *((_QWORD *)this + 3) = 0LL;
                }
                v3 = 0LL;
                _InterlockedExchange((volatile __int32 *)this + 14, 1);
                continue;
              case 0xAu:
                v7 = 0;
                v16[0] = 0;
                v18 = 0;
                if ( v15 <= 0xFFFFFFFF && (_DWORD)v15 == *((_DWORD *)this + 4) )
                {
                  v7 = 1;
                  v16[0] = 0x80000;
                  v18 = 16;
                }
                LOBYTE(v9) = v7;
                NtAlpcAcceptConnectPort(&v11, *((_QWORD *)this + 1), 0LL, 0LL, v16, 0LL, v13, v19, v9);
                *((_QWORD *)this + 3) = v11;
                *((_BYTE *)this + 60) = 1;
                break;
              case 0xCu:
                break;
              default:
                v3 = 0LL;
                continue;
            }
          }
          v3 = 0LL;
        }
      }
    }
    return 0LL;
  }
  return result;
}
