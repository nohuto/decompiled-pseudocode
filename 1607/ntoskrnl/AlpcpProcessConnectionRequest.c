/*
 * XREFs of AlpcpProcessConnectionRequest @ 0x14049CAB4
 * Callers:
 *     AlpcpConnectPort @ 0x140406F90 (AlpcpConnectPort.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpFormatConnectionRequest @ 0x140408318 (AlpcpFormatConnectionRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x140446B10 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpExposeAttributes @ 0x140448CF0 (AlpcpExposeAttributes.c)
 *     AlpcpDispatchConnectionRequest @ 0x14049CF64 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpProbeMessageAttributes @ 0x14049D120 (AlpcpProbeMessageAttributes.c)
 *     AlpcpReadMessageData @ 0x14049D800 (AlpcpReadMessageData.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x14049D884 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14049FF34 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1404AEF1C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpLogConnectFail @ 0x140656880 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1406568DC (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x140656938 (AlpcpLogConnectSuccess.c)
 */

__int64 __fastcall AlpcpProcessConnectionRequest(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        int *a6,
        PLARGE_INTEGER a7,
        char a8,
        KPROCESSOR_MODE a9)
{
  char v12; // r12
  int v13; // r13d
  __int64 v14; // r8
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 result; // rax
  ULONG_PTR v20; // rsi
  unsigned int v21; // r12d
  unsigned int v22; // edi
  unsigned int v23; // eax
  unsigned int v24; // esi
  int v25; // ecx
  ULONG_PTR v26; // rdi
  int v27; // edx
  unsigned int v28; // r8d
  _DWORD *v29; // r13
  __int64 v30; // rdx
  __int16 v31; // ax
  unsigned __int64 v32; // r12
  int v33; // [rsp+50h] [rbp-B8h]
  int v34; // [rsp+50h] [rbp-B8h]
  int v35; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v36; // [rsp+58h] [rbp-B0h]
  int v37[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-A0h]
  __int64 v39; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v40[40]; // [rsp+78h] [rbp-90h] BYREF
  int v41[16]; // [rsp+A0h] [rbp-68h] BYREF

  memset(v41, 0, sizeof(v41));
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v33 = 0;
  v35 = 0;
  v36 = -1LL;
  v38 = -1LL;
  v12 = a8;
  if ( a8 )
  {
    if ( a3 )
    {
      AlpcpProbeForWriteMessageHeader(a3, a2);
      AlpcpProbeAndCaptureMessageHeader(a3, v40, a2);
      v13 = 40;
    }
    else
    {
      v13 = 40;
      memset(v40, 0, sizeof(v40));
    }
    if ( a4 )
    {
      v17 = (__int64)a4;
      if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      v38 = *(_QWORD *)v17;
      v18 = (__int64)a4;
      if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v18 = *(_QWORD *)v18;
      v33 = 0;
      v36 = v38;
      v12 = a8;
    }
    v15 = (__int64)a6;
    if ( a6 )
    {
      LOBYTE(v14) = 1;
      v33 = AlpcpProbeMessageAttributes(a2, a6, v14);
      v35 = v33;
    }
    v16 = (__int64)a7;
    if ( a7 )
    {
      if ( (unsigned __int64)a7 >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      v39 = *(_QWORD *)v16;
      a7 = (PLARGE_INTEGER)&v39;
      v33 = v35;
      v36 = v38;
    }
  }
  else
  {
    v13 = 40;
    if ( a3 )
    {
      *(_OWORD *)v40 = *(_OWORD *)a3;
      *(_OWORD *)&v40[16] = *(_OWORD *)(a3 + 16);
      *(_QWORD *)&v40[32] = *(_QWORD *)(a3 + 32);
    }
    else
    {
      memset(v40, 0, sizeof(v40));
    }
    if ( a4 )
      v36 = *a4;
    v15 = (__int64)a6;
    if ( a6 )
      v33 = *a6;
  }
  result = AlpcpFormatConnectionRequest(
             (ULONG_PTR *)v37,
             a2,
             (_QWORD **)a1,
             a3,
             (unsigned __int16 *)v40,
             a5,
             0LL,
             0LL,
             0,
             v12);
  if ( (int)result >= 0 )
  {
    v20 = *(_QWORD *)v37;
    v21 = *(_DWORD *)(*(_QWORD *)v37 + 256LL);
    if ( AlpcpLogEnabled )
      AlpcpLogConnectRequest(*(_QWORD *)v37);
    *(_QWORD *)v41 = a1;
    *(_QWORD *)&v41[2] = v20;
    v41[12] = a2;
    result = AlpcpDispatchConnectionRequest(v41);
    v22 = result;
    if ( (int)result < 0 )
    {
      if ( AlpcpLogEnabled )
        AlpcpLogConnectFail(v21, (unsigned int)result);
      AlpcpUnlockMessage(v20);
      return v22;
    }
    else if ( (a2 & 0x20000) != 0 )
    {
      *(_QWORD *)v37 = 0LL;
      v23 = AlpcpReceiveSynchronousReply((__int64 *)v41, a9, (ULONG_PTR *)v37, v33, a7);
      v24 = v23;
      if ( v23 )
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectFail(v21, v23);
        if ( (*(_BYTE *)(a1 + 416) & 0x10) != 0 )
          return (unsigned int)-1073741759;
      }
      else
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectSuccess(v21);
        v25 = a2;
        if ( (a2 & 0xC0000000) == 0x80000000 )
          v13 = 24;
        v26 = *(_QWORD *)v37;
        v27 = *(unsigned __int16 *)(*(_QWORD *)v37 + 232LL);
        v28 = v27 + v13;
        v34 = v27 + v13;
        if ( a4 )
        {
          v32 = v28;
          if ( v28 > v36 )
          {
            AlpcpUnlockMessage(*(ULONG_PTR *)v37);
            *a4 = v32;
            return 3221225507LL;
          }
        }
        if ( a3 )
        {
          if ( (a2 & 0xC0000000) == 0x80000000 )
          {
            *(_WORD *)a3 = v27;
            *(_WORD *)(a3 + 2) = *(_WORD *)(v26 + 232) + 24;
            v31 = *(_WORD *)(v26 + 238);
            if ( v31 )
              *(_WORD *)(a3 + 6) = v31 - 16;
            else
              *(_WORD *)(a3 + 6) = 0;
            *(_WORD *)(a3 + 4) = *(_WORD *)(v26 + 236) | 0x1000;
            *(_DWORD *)(a3 + 8) = *(_DWORD *)(v26 + 240);
            *(_DWORD *)(a3 + 12) = *(_DWORD *)(v26 + 248);
            *(_DWORD *)(a3 + 16) = *(_DWORD *)(v26 + 256);
            *(_DWORD *)(a3 + 20) = *(_DWORD *)(v26 + 264);
            *(_DWORD *)(a3 + 20) = *(_DWORD *)(v26 + 264);
            v29 = (_DWORD *)a1;
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a3 + 4) &= 0xC00Fu;
            v30 = a3 + 24;
          }
          else
          {
            *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)v37 + 232LL);
            *(_OWORD *)(a3 + 16) = *(_OWORD *)(v26 + 248);
            *(_QWORD *)(a3 + 32) = *(_QWORD *)(v26 + 264);
            v29 = (_DWORD *)a1;
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a3 + 4) &= 0xC00Fu;
            v30 = a3 + 40;
          }
          if ( *(_QWORD *)(v26 + 176) )
            AlpcpGetDataFromUserVaSafe(v26, v30);
          else
            AlpcpReadMessageData(v26, v30);
          v25 = a2;
          v28 = v34;
        }
        else
        {
          v29 = (_DWORD *)a1;
        }
        if ( a4 )
          *a4 = v28;
        if ( v15 )
          AlpcpExposeAttributes(v29, v25, v26, v15);
        AlpcpUnlockMessage(v26);
      }
      return v24;
    }
  }
  return result;
}
