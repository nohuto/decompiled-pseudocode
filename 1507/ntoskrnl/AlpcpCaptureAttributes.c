/*
 * XREFs of AlpcpCaptureAttributes @ 0x14047EB30
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     AlpcpFormatConnectionRequest @ 0x14052A7D4 (AlpcpFormatConnectionRequest.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     AlpcpReleaseAttributes @ 0x1404713BC (AlpcpReleaseAttributes.c)
 *     AlpcpCaptureViewAttribute @ 0x140476E18 (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureContextAttribute @ 0x14047F170 (AlpcpCaptureContextAttribute.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14047FE50 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureDirectAttribute @ 0x140480DC0 (AlpcpCaptureDirectAttribute.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     AlpcpCaptureHandleAttribute @ 0x14053B4A4 (AlpcpCaptureHandleAttribute.c)
 *     AlpcpCaptureContextAttribute32 @ 0x14053D604 (AlpcpCaptureContextAttribute32.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x140542714 (AlpcpCaptureSecurityAttribute32.c)
 *     AlpcpCaptureDirectAttribute32 @ 0x14054BDBC (AlpcpCaptureDirectAttribute32.c)
 *     AlpcpCaptureViewAttribute32 @ 0x1405548DC (AlpcpCaptureViewAttribute32.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x14056073C (AlpcpCaptureHandleAttribute32.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpCaptureAttributes(void *a1, int a2, int *a3, __int64 a4, _QWORD *a5)
{
  ULONG64 v8; // rdx
  ULONG64 v9; // r8
  __int64 v10; // r9
  int *v11; // rcx
  int v12; // ebx
  int v13; // r15d
  unsigned int v14; // eax
  ULONG v15; // ecx
  int *v16; // rax
  int v17; // esi
  int v18; // edi
  __int64 v19; // r13
  __int64 v20; // rdx
  signed int v21; // ebx
  int v22; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  signed int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rax

  memset(a5, 0, 0x40uLL);
  *a5 = *(_QWORD *)(a4 + 104);
  a5[1] = *(_QWORD *)(a4 + 112);
  if ( !a3 )
    return 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v11 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v11 = (int *)MmUserProbeAddress;
    v12 = *v11;
    v13 = 8;
    v14 = 2;
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      if ( v12 < 0 )
        v14 = 5;
      if ( (v12 & 0x40000000) != 0 )
        v14 += 4;
      if ( (v12 & 0x20000000) != 0 )
        v14 += 5;
      if ( (v12 & 0x10000000) != 0 )
        v14 += 4;
      if ( (v12 & 0x8000000) != 0 )
        v14 += 6;
      v15 = 4;
    }
    else
    {
      if ( v12 < 0 )
        v14 = 8;
      if ( (v12 & 0x40000000) != 0 )
        v14 += 8;
      if ( (v12 & 0x20000000) != 0 )
        v14 += 8;
      if ( (v12 & 0x10000000) != 0 )
        v14 += 6;
      if ( (v12 & 0x8000000) != 0 )
        v14 += 6;
      if ( (v12 & 0x4000000) != 0 )
        v14 += 2;
      v15 = 8;
    }
    if ( (v12 & 0xA0000000) != 0 )
    {
      v10 = v14 * 4;
      v8 = (ULONG64)a3;
      if ( (unsigned __int64)(v14 * 4) - 1 > 0xFFE )
      {
        ProbeForWrite(a3, v14 * 4, v15);
      }
      else
      {
        if ( ((v15 - 1) & (unsigned int)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          v8 = MmUserProbeAddress;
        *(_BYTE *)v8 = *(_BYTE *)v8;
        *(_BYTE *)(v8 + v14 * 4 - 1) = *(_BYTE *)(v8 + v14 * 4 - 1);
      }
    }
    else
    {
      v8 = v14 * 4;
      v9 = (ULONG64)a3;
      if ( (unsigned __int64)(v14 * 4) - 1 > 0xFFFE )
      {
        if ( v14 * 4 )
        {
          if ( ((v15 - 1) & (unsigned int)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          v16 = &a3[v14];
          if ( (unsigned __int64)a3 + v8 > MmUserProbeAddress || v16 < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      else
      {
        if ( ((v15 - 1) & (unsigned int)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          v9 = MmUserProbeAddress;
      }
    }
    v17 = a3[1];
  }
  else
  {
    v12 = *a3;
    v17 = a3[1];
    v13 = 8;
  }
  if ( (~v12 & v17) != 0 )
    return 3221225485LL;
  v18 = 0;
  if ( a2 < 0 )
  {
    if ( v17 < 0 )
    {
      v18 = AlpcpCaptureSecurityAttribute32(a1, a3 + 2, a5);
      if ( v18 < 0 )
        goto LABEL_77;
    }
    if ( (v17 & 0x40000000) != 0 )
    {
      v28 = 2LL;
      if ( v12 < 0 )
        v28 = 5LL;
      v18 = AlpcpCaptureViewAttribute32(a1, &a3[v28], a4, a5);
      if ( v18 < 0 )
        goto LABEL_77;
    }
    if ( (v17 & 0x20000000) != 0 )
    {
      v25 = 2LL;
      if ( v12 < 0 )
        v25 = 5LL;
      if ( (v12 & 0x40000000) != 0 )
        v25 += 4LL;
      v18 = AlpcpCaptureContextAttribute32(a1, &a3[v25], a4, a5);
      if ( v18 < 0 )
        goto LABEL_77;
    }
    if ( (v17 & 0x10000000) != 0 )
    {
      v29 = 2LL;
      if ( v12 < 0 )
        v29 = 5LL;
      if ( (v12 & 0x40000000) != 0 )
        v29 += 4LL;
      if ( (v12 & 0x20000000) != 0 )
        v29 += 5LL;
      v18 = AlpcpCaptureHandleAttribute32(&a3[v29], a5);
      if ( v18 < 0 )
        goto LABEL_77;
    }
    if ( (v17 & 0x4000000) == 0 )
      goto LABEL_77;
    v27 = v12 & 0xF8000000;
    if ( v27 < 0 )
      v13 = 20;
    if ( (v27 & 0x40000000) != 0 )
      v13 += 16;
    if ( (v27 & 0x20000000) != 0 )
      v13 += 20;
    if ( (v27 & 0x10000000) != 0 )
      v13 += 16;
    if ( (v27 & 0x8000000) != 0 )
      v13 += 24;
    v22 = AlpcpCaptureDirectAttribute32(v13 + (int)a3, v8, (_DWORD)a5, a2, v17);
    goto LABEL_76;
  }
  if ( v17 >= 0 || (v18 = AlpcpCaptureSecurityAttribute(a1), v18 >= 0) )
  {
    if ( (v17 & 0x40000000) != 0 )
    {
      v24 = 2LL;
      if ( v12 < 0 )
        v24 = 8LL;
      v19 = a4;
      v18 = AlpcpCaptureViewAttribute((__int64)a1, &a3[v24], a4, (__int64)a5);
      if ( v18 < 0 )
        goto LABEL_77;
    }
    else
    {
      v19 = a4;
    }
    if ( (v17 & 0x20000000) == 0 )
      goto LABEL_64;
    v20 = 2LL;
    if ( v12 < 0 )
      v20 = 8LL;
    if ( (v12 & 0x40000000) != 0 )
      v20 += 8LL;
    v18 = AlpcpCaptureContextAttribute(a1, &a3[v20], v19, a5);
    if ( v18 >= 0 )
    {
LABEL_64:
      if ( (v17 & 0x10000000) == 0 )
        goto LABEL_133;
      v26 = 2LL;
      if ( v12 < 0 )
        v26 = 8LL;
      if ( (v12 & 0x40000000) != 0 )
        v26 += 8LL;
      if ( (v12 & 0x20000000) != 0 )
        v26 += 8LL;
      v18 = AlpcpCaptureHandleAttribute(&a3[v26], a5);
      if ( v18 >= 0 )
      {
LABEL_133:
        if ( (v17 & 0x4000000) != 0 )
        {
          v21 = v12 & 0xF8000000;
          if ( v21 < 0 )
            v13 = 32;
          if ( (v21 & 0x40000000) != 0 )
            v13 += 32;
          if ( (v21 & 0x20000000) != 0 )
            v13 += 32;
          if ( (v21 & 0x10000000) != 0 )
            v13 += 24;
          if ( (v21 & 0x8000000) != 0 )
            v13 += 24;
          v22 = AlpcpCaptureDirectAttribute(v13 + (int)a3, v8, (_DWORD)a5, a2, v17);
LABEL_76:
          v18 = v22;
        }
      }
    }
  }
LABEL_77:
  if ( v18 < 0 )
    AlpcpReleaseAttributes(a5, v8, v9, v10);
  return (unsigned int)v18;
}
