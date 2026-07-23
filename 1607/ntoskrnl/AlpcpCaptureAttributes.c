/*
 * XREFs of AlpcpCaptureAttributes @ 0x14044B6A0
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x140408318 (AlpcpFormatConnectionRequest.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14005E3F4 (PsGetWorkOnBehalfThread.c)
 *     IoThreadToProcess @ 0x14005F270 (IoThreadToProcess.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1400A34AC (PsEncodeThreadWorkOnBehalfTicket.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AlpcpCaptureViewAttribute @ 0x14040A6E0 (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureContextAttribute @ 0x14044BBE0 (AlpcpCaptureContextAttribute.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14044C520 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureDirectAttribute @ 0x14044C900 (AlpcpCaptureDirectAttribute.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     AlpcpReleaseAttributes @ 0x14049F9A8 (AlpcpReleaseAttributes.c)
 *     AlpcpCaptureHandleAttribute @ 0x1404AFE78 (AlpcpCaptureHandleAttribute.c)
 *     AlpcpGetMessageAttributeOffset @ 0x1404B1D58 (AlpcpGetMessageAttributeOffset.c)
 *     AlpcpCaptureContextAttribute32 @ 0x1404B56EC (AlpcpCaptureContextAttribute32.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1404B5E78 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     AlpcpGetMessageAttributeOffset32 @ 0x1404B60E0 (AlpcpGetMessageAttributeOffset32.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x1404B98BC (AlpcpCaptureSecurityAttribute32.c)
 *     AlpcpCaptureDirectAttribute32 @ 0x1404C2088 (AlpcpCaptureDirectAttribute32.c)
 *     AlpcpCaptureViewAttribute32 @ 0x1404C670C (AlpcpCaptureViewAttribute32.c)
 *     AlpcpGetMessageAttributeSize32 @ 0x1405298AC (AlpcpGetMessageAttributeSize32.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x14052A1C4 (AlpcpCaptureHandleAttribute32.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpCaptureAttributes(void *a1, int a2, _DWORD *a3, __int64 a4, void *a5)
{
  _QWORD *v8; // r12
  _BYTE *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // r11
  unsigned int v13; // ebx
  int v14; // r15d
  unsigned int MessageAttributeSize32; // eax
  ULONG v16; // ecx
  char *v17; // rax
  int v18; // edi
  int v19; // esi
  __int64 v20; // rcx
  signed int v22; // ebx
  struct _KTHREAD *CurrentThread; // rbx
  PVOID WorkOnBehalfThread; // rax
  void *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  void *v28; // r15
  __int64 v29; // rax
  __int64 MessageAttributeOffset; // rax
  __int64 MessageAttributeOffset32; // rax
  int v32; // eax
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v38; // [rsp+90h] [rbp+18h] BYREF

  v8 = a5;
  memset(a5, 0, 0x48uLL);
  *v8 = *(_QWORD *)(a4 + 104);
  v8[1] = *(_QWORD *)(a4 + 112);
  if ( !a3 )
    return 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v11 = (__int64)a3;
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v13 = *(_DWORD *)v11;
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      MessageAttributeSize32 = AlpcpGetMessageAttributeSize32(v13, v9, v10);
      v16 = 4;
      v14 = 8;
    }
    else
    {
      v14 = 8;
      MessageAttributeSize32 = 8;
      if ( (v13 & 0x80000000) != 0 )
        MessageAttributeSize32 = 32;
      if ( (v13 & 0x40000000) != 0 )
        MessageAttributeSize32 += 32;
      if ( (v13 & 0x20000000) != 0 )
        MessageAttributeSize32 += 32;
      if ( (v13 & 0x10000000) != 0 )
        MessageAttributeSize32 += 24;
      if ( (v13 & 0x8000000) != 0 )
        MessageAttributeSize32 += 24;
      if ( (v13 & 0x4000000) != 0 )
        MessageAttributeSize32 += 8;
      if ( (v13 & 0x2000000) != 0 )
        MessageAttributeSize32 += 8;
      v16 = 8;
    }
    if ( (v13 & 0xA0000000) != 0 )
    {
      v9 = a3;
      if ( (unsigned __int64)MessageAttributeSize32 - 1 > 0xFFE )
      {
        ProbeForWrite(a3, MessageAttributeSize32, v16);
      }
      else
      {
        if ( ((v16 - 1) & (unsigned int)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a3 >= v12 )
          v9 = (_BYTE *)v12;
        *v9 = *v9;
        v9[MessageAttributeSize32 - 1] = v9[MessageAttributeSize32 - 1];
      }
    }
    else
    {
      v9 = (_BYTE *)MessageAttributeSize32;
      if ( (unsigned __int64)MessageAttributeSize32 - 1 > 0xFFFE )
      {
        if ( MessageAttributeSize32 )
        {
          if ( ((v16 - 1) & (unsigned int)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          v17 = (char *)a3 + MessageAttributeSize32;
          if ( (_DWORD *)((char *)a3 + (_QWORD)v9) > (_DWORD *)v12 || v17 < (char *)a3 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else if ( ((v16 - 1) & (unsigned int)a3) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
    }
    v18 = a3[1];
  }
  else
  {
    v13 = *a3;
    v18 = a3[1];
    v14 = 8;
  }
  if ( (~v13 & v18) == 0 )
  {
    v19 = 0;
    if ( a2 >= 0 )
    {
      if ( v18 >= 0 || (v19 = AlpcpCaptureSecurityAttribute(a1), v19 >= 0) )
      {
        if ( (v18 & 0x40000000) == 0
          || (v27 = AlpcpGetMessageAttributeOffset(v13, 0x40000000LL),
              v19 = AlpcpCaptureViewAttribute((__int64)a1, (_DWORD *)((char *)a3 + v27), a4, (__int64)v8),
              v19 >= 0) )
        {
          if ( (v18 & 0x20000000) == 0 )
            goto LABEL_106;
          v20 = 2LL;
          if ( (v13 & 0x80000000) != 0 )
            v20 = 8LL;
          if ( (v13 & 0x40000000) != 0 )
            v20 += 8LL;
          v19 = AlpcpCaptureContextAttribute(a1, &a3[v20], a4, v8);
          if ( v19 >= 0 )
          {
LABEL_106:
            if ( (v18 & 0x10000000) == 0
              || (MessageAttributeOffset = AlpcpGetMessageAttributeOffset(v13, 0x10000000LL),
                  v19 = AlpcpCaptureHandleAttribute((char *)a3 + MessageAttributeOffset, v8),
                  v19 >= 0) )
            {
              if ( (v18 & 0x4000000) == 0 )
                goto LABEL_54;
              v22 = v13 & 0xF8000000;
              if ( v22 < 0 )
                v14 = 32;
              if ( (v22 & 0x40000000) != 0 )
                v14 += 32;
              if ( (v22 & 0x20000000) != 0 )
                v14 += 32;
              if ( (v22 & 0x10000000) != 0 )
                v14 += 24;
              if ( (v22 & 0x8000000) != 0 )
                v14 += 24;
              if ( (v22 & 0x2000000) != 0 )
                v14 += 8;
              v19 = AlpcpCaptureDirectAttribute(v14 + (int)a3, (_DWORD)v9, (_DWORD)v8, a2, v18);
              if ( v19 >= 0 )
              {
LABEL_54:
                if ( (v18 & 0x2000000) != 0 )
                {
                  CurrentThread = KeGetCurrentThread();
                  WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &a5);
                  v25 = WorkOnBehalfThread;
                  if ( WorkOnBehalfThread )
                  {
                    PsEncodeThreadWorkOnBehalfTicket((__int64)WorkOnBehalfThread, &v38);
                    v26 = v38;
                  }
                  else if ( *(_QWORD *)&IoThreadToProcess(CurrentThread)[2].ThreadSeed[12] )
                  {
                    PsEncodeThreadWorkOnBehalfTicket((__int64)CurrentThread, &v38);
                    v26 = v38;
                  }
                  else
                  {
                    v26 = 0LL;
                  }
                  if ( (_DWORD)a5 )
                    ObfDereferenceObject(v25);
                  v8[8] = v26;
                  return 0;
                }
              }
            }
          }
        }
      }
LABEL_55:
      if ( v19 < 0 )
        AlpcpReleaseAttributes(v8);
      return (unsigned int)v19;
    }
    if ( v18 < 0 )
    {
      MessageAttributeOffset32 = AlpcpGetMessageAttributeOffset32(v13, 0x80000000LL);
      v28 = a1;
      v19 = AlpcpCaptureSecurityAttribute32(a1, (char *)a3 + MessageAttributeOffset32, v8);
      if ( v19 < 0 )
        goto LABEL_55;
    }
    else
    {
      v28 = a1;
    }
    if ( (v18 & 0x40000000) == 0
      || (v34 = AlpcpGetMessageAttributeOffset32(v13, 0x40000000LL),
          v19 = AlpcpCaptureViewAttribute32(v28, (char *)a3 + v34, a4, v8),
          v19 >= 0) )
    {
      if ( (v18 & 0x20000000) == 0
        || (v29 = AlpcpGetMessageAttributeOffset32(v13, 0x20000000LL),
            v19 = AlpcpCaptureContextAttribute32(v28, (char *)a3 + v29, a4, v8),
            v19 >= 0) )
      {
        if ( (v18 & 0x10000000) == 0
          || (v35 = AlpcpGetMessageAttributeOffset32(v13, 0x10000000LL),
              v19 = AlpcpCaptureHandleAttribute32((char *)a3 + v35, v8),
              v19 >= 0) )
        {
          if ( (v18 & 0x4000000) == 0
            || (v32 = AlpcpGetMessageAttributeOffset32(v13, 0x4000000LL),
                v19 = AlpcpCaptureDirectAttribute32((int)a3 + v32, v33, (_DWORD)v8, a2, v18),
                v19 >= 0) )
          {
            if ( (v18 & 0x2000000) != 0 )
              v19 = AlpcpCaptureWorkOnBehalfAttribute(v8);
          }
        }
      }
    }
    goto LABEL_55;
  }
  return 3221225485LL;
}
