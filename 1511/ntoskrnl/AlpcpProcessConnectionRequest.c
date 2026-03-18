/*
 * XREFs of AlpcpProcessConnectionRequest @ 0x1404807A4
 * Callers:
 *     AlpcpConnectPort @ 0x14046D59C (AlpcpConnectPort.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x14042338C (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpReadMessageData @ 0x1404233F0 (AlpcpReadMessageData.c)
 *     AlpcpExposeAttributes @ 0x14042C820 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveSynchronousReply @ 0x14042EF50 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpFormatConnectionRequest @ 0x14047D7C8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14047E410 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpDispatchConnectionRequest @ 0x14047FE08 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpProbeMessageAttributes @ 0x140480C64 (AlpcpProbeMessageAttributes.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1404A645C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpLogConnectFail @ 0x140620AF4 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x140620B50 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x140620BAC (AlpcpLogConnectSuccess.c)
 */

__int64 __fastcall AlpcpProcessConnectionRequest(
        __int64 a1,
        unsigned int a2,
        ULONG64 a3,
        __int64 *a4,
        int *a5,
        int *a6,
        PLARGE_INTEGER p_QuadPart,
        char a8,
        unsigned __int8 a9)
{
  int v12; // r13d
  __int64 v13; // r8
  unsigned int *v14; // r15
  PLARGE_INTEGER v15; // rcx
  __int64 *v16; // rcx
  _QWORD *v17; // rcx
  __int64 result; // rax
  ULONG_PTR v19; // rsi
  unsigned int v20; // r12d
  unsigned int v21; // edi
  unsigned int v22; // esi
  int v23; // ecx
  int v24; // eax
  ULONG_PTR v25; // rdi
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rdx
  __int16 v30; // ax
  __int64 v31; // r12
  unsigned int v32; // [rsp+50h] [rbp-B8h]
  int v33; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v34; // [rsp+58h] [rbp-B0h]
  int v35[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-A0h]
  LONGLONG QuadPart; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v38[40]; // [rsp+78h] [rbp-90h] BYREF
  int v39[2]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v40[7]; // [rsp+A8h] [rbp-60h] BYREF

  *(_QWORD *)v39 = 0LL;
  memset(v40, 0, sizeof(v40));
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v12 = 0;
  v33 = 0;
  v34 = -1LL;
  v36 = -1LL;
  if ( a8 )
  {
    if ( a3 )
    {
      AlpcpProbeForWriteMessageHeader(a3, a2);
      AlpcpProbeAndCaptureMessageHeader((__m128i *)a3, (__int64)v38, a2);
    }
    else
    {
      memset(v38, 0, sizeof(v38));
    }
    if ( a4 )
    {
      v16 = a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v16 = (__int64 *)MmUserProbeAddress;
      v36 = *v16;
      v17 = a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v17 = (_QWORD *)MmUserProbeAddress;
      *v17 = *v17;
      v12 = 0;
      v34 = v36;
    }
    v14 = (unsigned int *)a6;
    if ( a6 )
    {
      LOBYTE(v13) = 1;
      v12 = AlpcpProbeMessageAttributes(a2, a6, v13);
      v33 = v12;
    }
    v15 = p_QuadPart;
    if ( p_QuadPart )
    {
      if ( (unsigned __int64)p_QuadPart >= MmUserProbeAddress )
        v15 = (PLARGE_INTEGER)MmUserProbeAddress;
      QuadPart = v15->QuadPart;
      p_QuadPart = (PLARGE_INTEGER)&QuadPart;
      v12 = v33;
      v34 = v36;
    }
  }
  else
  {
    if ( a3 )
    {
      *(_OWORD *)v38 = *(_OWORD *)a3;
      *(_OWORD *)&v38[16] = *(_OWORD *)(a3 + 16);
      *(_QWORD *)&v38[32] = *(_QWORD *)(a3 + 32);
    }
    else
    {
      memset(v38, 0, sizeof(v38));
    }
    if ( a4 )
      v34 = *a4;
    v14 = (unsigned int *)a6;
    if ( a6 )
      v12 = *a6;
  }
  result = AlpcpFormatConnectionRequest((ULONG_PTR *)v35, a2, a1, a3, (unsigned __int16 *)v38, a5, 0LL, 0LL, 0, a8);
  if ( (int)result >= 0 )
  {
    v19 = *(_QWORD *)v35;
    v20 = *(_DWORD *)(*(_QWORD *)v35 + 248LL);
    if ( AlpcpLogEnabled )
      AlpcpLogConnectRequest(*(_QWORD *)v35);
    *(_QWORD *)v39 = a1;
    v40[0] = v19;
    LODWORD(v40[5]) = a2;
    result = AlpcpDispatchConnectionRequest((__int64)v39);
    v21 = result;
    if ( (int)result < 0 )
    {
      if ( AlpcpLogEnabled )
        AlpcpLogConnectFail(v20, (unsigned int)result);
      AlpcpUnlockMessage(v19);
      return v21;
    }
    else if ( (a2 & 0x20000) != 0 )
    {
      *(_QWORD *)v35 = 0LL;
      v22 = AlpcpReceiveSynchronousReply((__int64 *)v39, a9, (ULONG_PTR *)v35, v12, p_QuadPart);
      if ( v22 )
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectFail(v20, v22);
        if ( (*(_BYTE *)(a1 + 416) & 0x10) != 0 )
          return (unsigned int)-1073741759;
      }
      else
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectSuccess(v20);
        v23 = a2;
        v24 = 40;
        if ( (a2 & 0xC0000000) == 0x80000000 )
          v24 = 24;
        v25 = *(_QWORD *)v35;
        v26 = *(unsigned __int16 *)(*(_QWORD *)v35 + 224LL);
        v27 = (unsigned int)(v26 + v24);
        v32 = v27;
        if ( a4 )
        {
          v31 = (unsigned int)v27;
          if ( (unsigned int)v27 > v34 )
          {
            AlpcpUnlockMessage(*(ULONG_PTR *)v35);
            *a4 = v31;
            return 3221225507LL;
          }
        }
        if ( a3 )
        {
          if ( (a2 & 0xC0000000) == 0x80000000 )
          {
            *(_WORD *)a3 = v26;
            *(_WORD *)(a3 + 2) = v26 + 24;
            v30 = *(_WORD *)(v25 + 230);
            if ( v30 )
              *(_WORD *)(a3 + 6) = v30 - 16;
            else
              *(_WORD *)(a3 + 6) = 0;
            *(_WORD *)(a3 + 4) = *(_WORD *)(v25 + 228) | 0x1000;
            *(_DWORD *)(a3 + 8) = *(_DWORD *)(v25 + 232);
            *(_DWORD *)(a3 + 12) = *(_DWORD *)(v25 + 240);
            *(_DWORD *)(a3 + 16) = *(_DWORD *)(v25 + 248);
            *(_DWORD *)(a3 + 20) = *(_DWORD *)(v25 + 256);
            *(_DWORD *)(a3 + 20) = *(_DWORD *)(v25 + 256);
            v28 = a1;
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a3 + 4) &= 0xC00Fu;
            v29 = a3 + 24;
          }
          else
          {
            *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)v35 + 224LL);
            *(_OWORD *)(a3 + 16) = *(_OWORD *)(v25 + 240);
            *(_QWORD *)(a3 + 32) = *(_QWORD *)(v25 + 256);
            v28 = a1;
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a3 + 4) &= 0xC00Fu;
            v29 = a3 + 40;
          }
          if ( *(_QWORD *)(v25 + 168) )
            AlpcpGetDataFromUserVaSafe(v25, v29);
          else
            AlpcpReadMessageData(v25, v29);
          v23 = a2;
          v27 = v32;
        }
        else
        {
          v28 = a1;
        }
        if ( a4 )
          *a4 = v27;
        if ( v14 )
          AlpcpExposeAttributes(v28, v23, v25, v14);
        AlpcpUnlockMessage(v25);
      }
      return v22;
    }
  }
  return result;
}
