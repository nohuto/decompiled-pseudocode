/*
 * XREFs of NtAlpcQueryInformationMessage @ 0x1404A5E90
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     AlpcpCaptureIdMessage @ 0x1404A605C (AlpcpCaptureIdMessage.c)
 *     AlpcpQuerySidMessage @ 0x1404A60DC (AlpcpQuerySidMessage.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x14051A738 (AlpcpQueryTokenModifiedIdMessage.c)
 */

NTSTATUS __cdecl NtAlpcQueryInformationMessage(
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ALPC_MESSAGE_INFORMATION_CLASS MessageInformationClass,
        PVOID MessageInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // bl
  PULONG v11; // rdi
  _DWORD *v12; // rcx
  unsigned int v13; // r14d
  NTSTATUS v14; // ebx
  PVOID v15; // r15
  ULONG_PTR v16; // r14
  __int32 v17; // esi
  NTSTATUS TokenModifiedIdMessage; // eax
  unsigned int v20; // [rsp+30h] [rbp-38h] BYREF
  int v21; // [rsp+34h] [rbp-34h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR v23[2]; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AlpcpCaptureIdMessage(PortMessage, &v20, &v21);
  if ( PreviousMode )
  {
    ProbeForWrite(MessageInformation, Length, 4u);
    v11 = ReturnLength;
    if ( ReturnLength )
    {
      v12 = ReturnLength;
      if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
        v12 = (_DWORD *)MmUserProbeAddress;
      *v12 = *v12;
    }
  }
  else
  {
    v11 = ReturnLength;
  }
  v13 = v20;
  if ( !v20 )
  {
    v14 = -1073741811;
    goto LABEL_21;
  }
  v14 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v15 = Object;
    v14 = AlpcpLookupMessage((__int64)Object, v13, v21, v23);
    if ( v14 < 0 )
    {
LABEL_20:
      ObfDereferenceObject(v15);
      goto LABEL_21;
    }
    v16 = v23[0];
    if ( *(_QWORD *)(v23[0] + 24) )
    {
      if ( MessageInformationClass )
      {
        v17 = MessageInformationClass - 1;
        if ( v17 )
        {
          if ( v17 != 1 || MessageInformation || Length || v11 )
          {
            v14 = -1073741811;
          }
          else
          {
            v14 = 0;
            if ( (*(_DWORD *)(v23[0] + 40) & 7) != 4 )
              v14 = 259;
          }
          goto LABEL_19;
        }
        TokenModifiedIdMessage = AlpcpQueryTokenModifiedIdMessage(
                                   (_DWORD)v15,
                                   v23[0],
                                   (_DWORD)MessageInformation,
                                   Length,
                                   (__int64)v11);
      }
      else
      {
        TokenModifiedIdMessage = AlpcpQuerySidMessage(
                                   (_DWORD)v15,
                                   v23[0],
                                   (_DWORD)MessageInformation,
                                   Length,
                                   (__int64)v11);
      }
      v14 = TokenModifiedIdMessage;
    }
    else
    {
      v14 = -1073740029;
    }
LABEL_19:
    AlpcpUnlockMessage(v16);
    goto LABEL_20;
  }
LABEL_21:
  KeLeaveCriticalRegion();
  return v14;
}
