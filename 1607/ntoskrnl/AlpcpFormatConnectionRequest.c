/*
 * XREFs of AlpcpFormatConnectionRequest @ 0x140408318
 * Callers:
 *     NtSecureConnectPort @ 0x14049C42C (NtSecureConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x14049CAB4 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpAllocateMessage @ 0x14040A24C (AlpcpAllocateMessage.c)
 *     AlpcpReferenceBlob @ 0x14040AC0C (AlpcpReferenceBlob.c)
 *     AlpcpCaptureAttributes @ 0x14044B6A0 (AlpcpCaptureAttributes.c)
 *     AlpcpMapLegacyPortView @ 0x1404713B8 (AlpcpMapLegacyPortView.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14049FA0C (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpValidateConnectionMessage @ 0x14049FEBC (AlpcpValidateConnectionMessage.c)
 */

__int64 __fastcall AlpcpFormatConnectionRequest(
        ULONG_PTR *a1,
        unsigned int a2,
        _QWORD **a3,
        __int64 a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int64 a7,
        ULONG_PTR *a8,
        char a9,
        char a10)
{
  ULONG_PTR *v10; // rbp
  char v11; // si
  int v12; // r12d
  unsigned __int16 *v13; // r14
  void *v14; // r15
  __int64 v16; // rcx
  __int64 result; // rax
  int v18; // ebx
  ULONG_PTR v19; // rdi
  _WORD *v20; // rcx
  __int16 v21; // ax
  __int16 v22; // dx
  int v23; // r9d
  __int64 v24; // rbp
  __int64 v25; // rax
  ULONG_PTR v26; // rcx
  ULONG_PTR v28; // [rsp+80h] [rbp+18h] BYREF

  v10 = a1;
  v11 = a9;
  v12 = a4;
  v13 = a5;
  v14 = a3;
  v16 = *a3[2];
  if ( !a4 || (LOBYTE(a3) = a9, result = AlpcpValidateConnectionMessage(v16, a5, a3), (int)result >= 0) )
  {
    result = AlpcpAllocateMessage(&v28, 0LL, 0LL);
    v18 = result;
    if ( (int)result >= 0 )
    {
      v19 = v28;
      if ( v11 )
      {
        v24 = a7;
        if ( a7 )
        {
          v18 = AlpcpMapLegacyPortView(v14);
          v25 = *(_QWORD *)(v24 + 24);
          v10 = a1;
          *(_QWORD *)(v19 + 264) = v25;
        }
        else
        {
          v10 = a1;
          *(_QWORD *)(v28 + 264) = 0LL;
        }
      }
      else
      {
        v18 = AlpcpCaptureAttributes(v14, a2, a6, v28, v28 + 104);
      }
      if ( v18 < 0 )
        goto LABEL_22;
      v20 = (_WORD *)v28;
      *(_OWORD *)(v28 + 240) = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
      v21 = *v13;
      v20[116] = *v13;
      v20[117] = v21 + 40;
      v22 = v20[118] & 0xFF00 | 0xA;
      v20[118] = v22;
      if ( !KeGetCurrentThread()->PreviousMode )
        v20[118] = v22 | v13[2] & 0x8000;
      v23 = *v13;
      v19 = v28;
      if ( (_WORD)v23 && (v18 = AlpcpSetupMessageDataForDeferredCopy(v28, v12, a2, v23, v11, a10), v18 < 0) )
      {
LABEL_22:
        AlpcpUnlockMessage(v19);
      }
      else
      {
        if ( v11 )
        {
          v26 = *(_QWORD *)(v19 + 144);
          if ( v26 )
          {
            *a8 = v26;
            AlpcpReferenceBlob(v26);
          }
        }
        *v10 = v19;
      }
      return (unsigned int)v18;
    }
  }
  return result;
}
