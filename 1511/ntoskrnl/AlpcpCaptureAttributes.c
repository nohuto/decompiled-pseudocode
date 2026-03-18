/*
 * XREFs of AlpcpCaptureAttributes @ 0x14042A430
 * Callers:
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpFormatConnectionRequest @ 0x14047D7C8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     AlpcpGetMessageAttributeOffset32 @ 0x140423FF4 (AlpcpGetMessageAttributeOffset32.c)
 *     AlpcpCaptureContextAttribute @ 0x14042A8B0 (AlpcpCaptureContextAttribute.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14042BCD0 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureDirectAttribute @ 0x14042C540 (AlpcpCaptureDirectAttribute.c)
 *     AlpcpGetMessageAttributeOffset @ 0x14042C940 (AlpcpGetMessageAttributeOffset.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     AlpcpCaptureViewAttribute @ 0x14047BC70 (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureHandleAttribute @ 0x14047D350 (AlpcpCaptureHandleAttribute.c)
 *     AlpcpReleaseAttributes @ 0x14047E354 (AlpcpReleaseAttributes.c)
 *     AlpcpCaptureContextAttribute32 @ 0x1404ABB68 (AlpcpCaptureContextAttribute32.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x1404AF954 (AlpcpCaptureSecurityAttribute32.c)
 *     AlpcpCaptureDirectAttribute32 @ 0x1404B5D50 (AlpcpCaptureDirectAttribute32.c)
 *     AlpcpCaptureViewAttribute32 @ 0x1404BA210 (AlpcpCaptureViewAttribute32.c)
 *     AlpcpGetMessageAttributeSize32 @ 0x1404BA248 (AlpcpGetMessageAttributeSize32.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x1404C5AB4 (AlpcpCaptureHandleAttribute32.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpCaptureAttributes(void *a1, int a2, int *a3, __int64 a4, _QWORD *a5)
{
  ULONG64 v8; // rdx
  int *v9; // rcx
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // r15d
  unsigned int MessageAttributeSize32; // eax
  ULONG v14; // ecx
  char *v15; // rax
  int v16; // esi
  int v17; // edi
  __int64 v18; // rdx
  signed int v20; // ebx
  int v21; // eax
  __int64 MessageAttributeOffset; // rax
  void *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 MessageAttributeOffset32; // rax
  __int64 v27; // rax
  int v28; // eax
  int v29; // edx
  __int64 v30; // rax

  memset(a5, 0, 0x40uLL);
  *a5 = *(_QWORD *)(a4 + 104);
  a5[1] = *(_QWORD *)(a4 + 112);
  if ( !a3 )
    return 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v9 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v9 = (int *)MmUserProbeAddress;
    v10 = *v9;
    v11 = (unsigned int)*v9;
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      MessageAttributeSize32 = AlpcpGetMessageAttributeSize32(v11);
      v14 = 4;
      v12 = 8;
    }
    else
    {
      v12 = 8;
      MessageAttributeSize32 = 8;
      if ( (v11 & 0x80000000) != 0 )
        MessageAttributeSize32 = 32;
      if ( (v10 & 0x40000000) != 0 )
        MessageAttributeSize32 += 32;
      if ( (v10 & 0x20000000) != 0 )
        MessageAttributeSize32 += 32;
      if ( (v10 & 0x10000000) != 0 )
        MessageAttributeSize32 += 24;
      if ( (v10 & 0x8000000) != 0 )
        MessageAttributeSize32 += 24;
      if ( (v10 & 0x4000000) != 0 )
        MessageAttributeSize32 += 8;
      v14 = 8;
    }
    if ( (v10 & 0xA0000000) != 0 )
    {
      v8 = (ULONG64)a3;
      if ( (unsigned __int64)MessageAttributeSize32 - 1 > 0xFFE )
      {
        ProbeForWrite(a3, MessageAttributeSize32, v14);
      }
      else
      {
        if ( ((v14 - 1) & (unsigned int)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          v8 = MmUserProbeAddress;
        *(_BYTE *)v8 = *(_BYTE *)v8;
        *(_BYTE *)(v8 + MessageAttributeSize32 - 1) = *(_BYTE *)(v8 + MessageAttributeSize32 - 1);
      }
    }
    else
    {
      v8 = MessageAttributeSize32;
      if ( (unsigned __int64)MessageAttributeSize32 - 1 > 0xFFFE )
      {
        if ( MessageAttributeSize32 )
        {
          if ( ((v14 - 1) & (unsigned int)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          v15 = (char *)a3 + MessageAttributeSize32;
          if ( (unsigned __int64)a3 + v8 > MmUserProbeAddress || v15 < (char *)a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      else if ( ((v14 - 1) & (unsigned int)a3) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
    }
    v16 = a3[1];
  }
  else
  {
    v10 = *a3;
    v16 = a3[1];
    v12 = 8;
  }
  if ( (~v10 & v16) != 0 )
    return 3221225485LL;
  v17 = 0;
  if ( a2 < 0 )
  {
    if ( v16 < 0 )
    {
      MessageAttributeOffset32 = AlpcpGetMessageAttributeOffset32(v10, 0x80000000);
      v23 = a1;
      v17 = AlpcpCaptureSecurityAttribute32(a1, (char *)a3 + MessageAttributeOffset32, a5);
      if ( v17 < 0 )
        goto LABEL_52;
    }
    else
    {
      v23 = a1;
    }
    if ( (v16 & 0x40000000) != 0 )
    {
      v27 = AlpcpGetMessageAttributeOffset32(v10, 0x40000000);
      v17 = AlpcpCaptureViewAttribute32(v23, (char *)a3 + v27, a4, a5);
      if ( v17 < 0 )
        goto LABEL_52;
    }
    if ( (v16 & 0x20000000) != 0 )
    {
      v24 = AlpcpGetMessageAttributeOffset32(v10, 0x20000000);
      v17 = AlpcpCaptureContextAttribute32(v23, (char *)a3 + v24, a4, a5);
      if ( v17 < 0 )
        goto LABEL_52;
    }
    if ( (v16 & 0x10000000) != 0 )
    {
      v30 = AlpcpGetMessageAttributeOffset32(v10, 0x10000000);
      v17 = AlpcpCaptureHandleAttribute32((char *)a3 + v30, a5);
      if ( v17 < 0 )
        goto LABEL_52;
    }
    if ( (v16 & 0x4000000) == 0 )
      goto LABEL_52;
    v28 = AlpcpGetMessageAttributeOffset32(v10, 0x4000000);
    v21 = AlpcpCaptureDirectAttribute32((int)a3 + v28, v29, (_DWORD)a5, a2, v16);
  }
  else
  {
    if ( v16 < 0 )
    {
      v17 = AlpcpCaptureSecurityAttribute(a1);
      if ( v17 < 0 )
        goto LABEL_52;
    }
    if ( (v16 & 0x40000000) != 0 )
    {
      MessageAttributeOffset = AlpcpGetMessageAttributeOffset((unsigned int)v10, 0x40000000LL);
      v17 = AlpcpCaptureViewAttribute(a1, (char *)a3 + MessageAttributeOffset, a4, a5);
      if ( v17 < 0 )
        goto LABEL_52;
    }
    if ( (v16 & 0x20000000) != 0 )
    {
      v18 = 2LL;
      if ( v10 < 0 )
        v18 = 8LL;
      if ( (v10 & 0x40000000) != 0 )
        v18 += 8LL;
      v17 = AlpcpCaptureContextAttribute(a1, &a3[v18], a4, a5);
      if ( v17 < 0 )
        goto LABEL_52;
    }
    if ( (v16 & 0x10000000) != 0 )
    {
      v25 = AlpcpGetMessageAttributeOffset((unsigned int)v10, 0x10000000LL);
      v17 = AlpcpCaptureHandleAttribute((char *)a3 + v25, a5);
      if ( v17 < 0 )
        goto LABEL_52;
    }
    if ( (v16 & 0x4000000) == 0 )
      goto LABEL_52;
    v20 = v10 & 0xF8000000;
    if ( v20 < 0 )
      v12 = 32;
    if ( (v20 & 0x40000000) != 0 )
      v12 += 32;
    if ( (v20 & 0x20000000) != 0 )
      v12 += 32;
    if ( (v20 & 0x10000000) != 0 )
      v12 += 24;
    if ( (v20 & 0x8000000) != 0 )
      v12 += 24;
    v21 = AlpcpCaptureDirectAttribute(v12 + (int)a3, v8, (_DWORD)a5, a2, v16);
  }
  v17 = v21;
LABEL_52:
  if ( v17 < 0 )
    AlpcpReleaseAttributes(a5);
  return (unsigned int)v17;
}
