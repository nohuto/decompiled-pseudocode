/*
 * XREFs of NtAlpcQueryInformationMessage @ 0x1404089C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     AlpcpQuerySidMessage @ 0x1403FEF88 (AlpcpQuerySidMessage.c)
 *     AlpcpUnlockMessage @ 0x1404091E8 (AlpcpUnlockMessage.c)
 *     AlpcpCaptureIdMessage @ 0x1404093D8 (AlpcpCaptureIdMessage.c)
 *     ProbeForWrite @ 0x14044DAC0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     AlpcpQueryHandleInformationMessage @ 0x1404CBB48 (AlpcpQueryHandleInformationMessage.c)
 *     AlpcpLookupMessage @ 0x14050E300 (AlpcpLookupMessage.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x140655670 (AlpcpQueryTokenModifiedIdMessage.c)
 */

__int64 __fastcall NtAlpcQueryInformationMessage(
        HANDLE Handle,
        __int64 a2,
        int a3,
        volatile void *a4,
        SIZE_T Length,
        unsigned __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // r14d
  NTSTATUS v14; // ebx
  PVOID v15; // r15
  ULONG_PTR v16; // r14
  int v17; // edi
  int v18; // edi
  NTSTATUS TokenModifiedIdMessage; // eax
  unsigned int v21; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-34h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR v24[2]; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AlpcpCaptureIdMessage(a2, &v21, &v22);
  if ( PreviousMode )
  {
    ProbeForWrite(a4, (unsigned int)Length, 4u);
    v11 = a6;
    if ( a6 )
    {
      v12 = a6;
      if ( a6 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  else
  {
    v11 = a6;
  }
  v13 = v21;
  if ( !v21 )
  {
    v14 = -1073741811;
    goto LABEL_19;
  }
  v14 = ObReferenceObjectByHandle(Handle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v15 = Object;
    v14 = AlpcpLookupMessage(Object, v13, v22, v24);
    if ( v14 < 0 )
    {
LABEL_18:
      ObfDereferenceObject(v15);
      goto LABEL_19;
    }
    v16 = v24[0];
    if ( !*(_QWORD *)(v24[0] + 24) )
    {
      v14 = -1073740029;
      goto LABEL_17;
    }
    if ( a3 )
    {
      v17 = a3 - 1;
      if ( !v17 )
      {
        TokenModifiedIdMessage = AlpcpQueryTokenModifiedIdMessage((_DWORD)v15, v24[0], (_DWORD)a4, Length, v11);
        goto LABEL_16;
      }
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          TokenModifiedIdMessage = AlpcpQueryHandleInformationMessage((_DWORD)v15, v24[0], (_DWORD)a4, Length, v11);
LABEL_16:
          v14 = TokenModifiedIdMessage;
LABEL_17:
          AlpcpUnlockMessage(v16);
          goto LABEL_18;
        }
      }
      else if ( !a4 && !(_DWORD)Length && !v11 )
      {
        v14 = 0;
        if ( (*(_DWORD *)(v24[0] + 40) & 7) != 4 )
          v14 = 259;
        goto LABEL_17;
      }
      v14 = -1073741811;
      goto LABEL_17;
    }
    TokenModifiedIdMessage = AlpcpQuerySidMessage((__int64)v15, v24[0], (__int64)a4, Length, v11);
    goto LABEL_16;
  }
LABEL_19:
  KeLeaveCriticalRegion();
  return (unsigned int)v14;
}
