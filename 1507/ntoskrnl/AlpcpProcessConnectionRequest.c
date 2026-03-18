/*
 * XREFs of AlpcpProcessConnectionRequest @ 0x140529D38
 * Callers:
 *     AlpcpConnectPort @ 0x140472880 (AlpcpConnectPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpReadMessageData @ 0x14047A100 (AlpcpReadMessageData.c)
 *     AlpcpReceiveSynchronousReply @ 0x14047A190 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpExposeAttributes @ 0x140480310 (AlpcpExposeAttributes.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     AlpcpDispatchConnectionRequest @ 0x14052A624 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x14052A7D4 (AlpcpFormatConnectionRequest.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14052F9E8 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogConnectFail @ 0x1406A0170 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1406A01CC (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1406A0228 (AlpcpLogConnectSuccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProcessConnectionRequest(
        __int64 a1,
        int a2,
        ULONG64 a3,
        _QWORD *a4,
        __int64 a5,
        int *Address,
        PLARGE_INTEGER p_QuadPart,
        char a8,
        KPROCESSOR_MODE a9)
{
  __int64 result; // rax
  _BYTE *v13; // rcx
  _BYTE *v14; // rcx
  __m128i *v15; // rcx
  unsigned __int64 *v16; // rcx
  _QWORD *v17; // rcx
  __int64 v18; // r12
  int *v19; // rcx
  int v20; // esi
  ULONG v21; // r8d
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rdx
  _BYTE *v25; // rcx
  PLARGE_INTEGER v26; // rcx
  ULONG_PTR v27; // rsi
  unsigned int v28; // r13d
  int v29; // r14d
  char v30; // cl
  signed __int64 BugCheckParameter4; // rcx
  __int64 v32; // rdx
  int v33; // r10d
  int v34; // r8d
  ULONG_PTR v35; // rsi
  int v36; // edx
  unsigned int v37; // r8d
  int v38; // r14d
  char v39; // cl
  signed __int64 v40; // rcx
  __int16 v41; // ax
  char *v42; // rdx
  int v43; // r14d
  char v44; // cl
  signed __int64 v45; // rcx
  unsigned int v46; // [rsp+50h] [rbp-E8h]
  unsigned int v47; // [rsp+50h] [rbp-E8h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-E0h] BYREF
  int v49; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v50; // [rsp+68h] [rbp-D0h]
  _QWORD *v51; // [rsp+70h] [rbp-C8h]
  int v52; // [rsp+78h] [rbp-C0h]
  _BYTE v53[40]; // [rsp+80h] [rbp-B8h] BYREF
  LONGLONG QuadPart; // [rsp+A8h] [rbp-90h] BYREF
  __m128i v55; // [rsp+B0h] [rbp-88h]
  __int64 v56; // [rsp+C0h] [rbp-78h]
  int v57[2]; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD v58[7]; // [rsp+D8h] [rbp-60h] BYREF

  v51 = a4;
  *(_QWORD *)v57 = 0LL;
  memset(v58, 0, sizeof(v58));
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v49 = 0;
  v50 = -1LL;
  if ( a8 )
  {
    if ( a3 )
    {
      if ( (a2 & 0xC0000000) == 0x80000000 )
      {
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = (_BYTE *)a3;
        if ( a3 >= MmUserProbeAddress )
          v13 = (_BYTE *)MmUserProbeAddress;
        *v13 = *v13;
        v13[23] = v13[23];
      }
      else
      {
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = (_BYTE *)a3;
        if ( a3 >= MmUserProbeAddress )
          v14 = (_BYTE *)MmUserProbeAddress;
        *v14 = *v14;
        v14[39] = v14[39];
      }
      v15 = (__m128i *)a3;
      if ( (a2 & 0xC0000000) == 0x80000000 )
      {
        if ( a3 >= MmUserProbeAddress )
          v15 = (__m128i *)MmUserProbeAddress;
        v55 = *v15;
        v56 = v15[1].m128i_i64[0];
        *(_WORD *)v53 = _mm_cvtsi128_si32(v55);
        *(_WORD *)&v53[2] = v55.m128i_i16[0] + 40;
        *(_DWORD *)&v53[4] = _mm_cvtsi128_si32(_mm_srli_si128(v55, 4));
        *(_QWORD *)&v53[8] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v55, 8));
        *(_QWORD *)&v53[16] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v55, 12));
        *(_DWORD *)&v53[24] = v56;
        *(_QWORD *)&v53[32] = HIDWORD(v56);
      }
      else
      {
        if ( a3 >= MmUserProbeAddress )
          v15 = (__m128i *)MmUserProbeAddress;
        *(__m128i *)v53 = *v15;
        *(__m128i *)&v53[16] = v15[1];
        *(_QWORD *)&v53[32] = v15[2].m128i_i64[0];
      }
    }
    else
    {
      memset(v53, 0, sizeof(v53));
    }
    if ( a4 )
    {
      v16 = a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v16 = (unsigned __int64 *)MmUserProbeAddress;
      v50 = *v16;
      v17 = a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v17 = (_QWORD *)MmUserProbeAddress;
      *v17 = *v17;
    }
    v18 = (__int64)Address;
    if ( Address )
    {
      v19 = Address;
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        v19 = (int *)MmUserProbeAddress;
      v20 = *v19;
      v21 = 8;
      v22 = *v19;
      if ( (a2 & 0xC0000000) == 0x80000000 )
      {
        if ( v22 < 0 )
          v21 = 20;
        if ( (v20 & 0x40000000) != 0 )
          v21 += 16;
        if ( (v20 & 0x20000000) != 0 )
          v21 += 20;
        if ( (v20 & 0x10000000) != 0 )
          v21 += 16;
        if ( (v20 & 0x8000000) != 0 )
          v21 += 24;
        v23 = v21;
        v21 = 4;
      }
      else
      {
        v23 = 8;
        if ( v22 < 0 )
          v23 = 32;
        if ( (v20 & 0x40000000) != 0 )
          v23 += 32;
        if ( (v20 & 0x20000000) != 0 )
          v23 += 32;
        if ( (v20 & 0x10000000) != 0 )
          v23 += 24;
        if ( (v20 & 0x8000000) != 0 )
          v23 += 24;
        if ( (v20 & 0x4000000) != 0 )
          v23 += 8;
      }
      v24 = v23;
      if ( (unsigned __int64)v23 - 1 > 0xFFE )
      {
        ProbeForWrite(Address, v23, v21);
      }
      else
      {
        if ( ((v21 - 1) & (unsigned int)Address) != 0 )
          ExRaiseDatatypeMisalignment();
        v25 = Address;
        if ( (unsigned __int64)Address >= MmUserProbeAddress )
          v25 = (_BYTE *)MmUserProbeAddress;
        *v25 = *v25;
        v25[v24 - 1] = v25[v24 - 1];
      }
      v49 = v20;
    }
    v26 = p_QuadPart;
    if ( p_QuadPart )
    {
      if ( (unsigned __int64)p_QuadPart >= MmUserProbeAddress )
        v26 = (PLARGE_INTEGER)MmUserProbeAddress;
      QuadPart = v26->QuadPart;
      p_QuadPart = (PLARGE_INTEGER)&QuadPart;
    }
  }
  else
  {
    if ( a3 )
    {
      *(_OWORD *)v53 = *(_OWORD *)a3;
      *(_OWORD *)&v53[16] = *(_OWORD *)(a3 + 16);
      *(_QWORD *)&v53[32] = *(_QWORD *)(a3 + 32);
    }
    else
    {
      memset(v53, 0, sizeof(v53));
    }
    if ( a4 )
      v50 = *a4;
    v18 = (__int64)Address;
    if ( Address )
      v49 = *Address;
  }
  result = AlpcpFormatConnectionRequest(
             (unsigned int)&BugCheckParameter2,
             a2,
             a1,
             a3,
             (__int64)v53,
             a5,
             0LL,
             0LL,
             0,
             a8);
  if ( (int)result >= 0 )
  {
    v27 = BugCheckParameter2;
    v46 = *(_DWORD *)(BugCheckParameter2 + 248);
    if ( AlpcpLogEnabled )
      AlpcpLogConnectRequest(BugCheckParameter2);
    *(_QWORD *)v57 = a1;
    v58[0] = v27;
    LODWORD(v58[5]) = a2;
    result = AlpcpDispatchConnectionRequest(v57);
    v28 = result;
    if ( (int)result < 0 )
    {
      if ( AlpcpLogEnabled )
        AlpcpLogConnectFail(v46, (unsigned int)result);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v27);
      v29 = 0;
      v30 = *(_BYTE *)(v27 - 32);
      if ( (v30 & 1) != 0 )
      {
        v29 = 0x10000 - *(__int16 *)(v27 - 30);
        *(_BYTE *)(v27 - 32) = v30 & 0xFE;
        *(_WORD *)(v27 - 30) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v27 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v27 - 16));
      KeAbPostRelease(v27 - 16);
      if ( v29 <= 0 )
        return v28;
      BugCheckParameter4 = -v29 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 - 24), -v29);
      if ( BugCheckParameter4 > 0 )
        return v28;
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
LABEL_146:
      AlpcpDestroyBlob(BugCheckParameter2);
      return v28;
    }
    if ( (a2 & 0x20000) == 0 )
      return result;
    BugCheckParameter2 = 0LL;
    v28 = AlpcpReceiveSynchronousReply((__int64 *)v57, a9, (__int64 *)&BugCheckParameter2, v49, p_QuadPart);
    if ( v28 )
    {
      if ( AlpcpLogEnabled )
        AlpcpLogConnectFail(v46, v28);
      if ( (*(_BYTE *)(a1 + 416) & 0x10) != 0 )
        return (unsigned int)-1073741759;
      return v28;
    }
    if ( AlpcpLogEnabled )
      AlpcpLogConnectSuccess(v46, v32);
    v33 = a2;
    v34 = 40;
    if ( (a2 & 0xC0000000) == 0x80000000 )
      v34 = 24;
    v35 = BugCheckParameter2;
    v36 = *(unsigned __int16 *)(BugCheckParameter2 + 224);
    v37 = v36 + v34;
    v47 = v37;
    if ( !v51 || v37 <= v50 )
    {
      if ( a3 )
      {
        if ( (a2 & 0xC0000000) == 0x80000000 )
        {
          *(_WORD *)a3 = v36;
          v52 = *(unsigned __int16 *)(v35 + 224) + 24;
          *(_WORD *)(a3 + 2) = v52;
          v41 = *(_WORD *)(v35 + 230);
          if ( v41 )
            *(_WORD *)(a3 + 6) = v41 - 16;
          else
            *(_WORD *)(a3 + 6) = 0;
          *(_WORD *)(a3 + 4) = *(_WORD *)(v35 + 228) | 0x1000;
          *(_DWORD *)(a3 + 8) = *(_DWORD *)(v35 + 232);
          *(_DWORD *)(a3 + 12) = *(_DWORD *)(v35 + 240);
          *(_DWORD *)(a3 + 16) = *(_DWORD *)(v35 + 248);
          *(_DWORD *)(a3 + 20) = *(_DWORD *)(v35 + 256);
          *(_DWORD *)(a3 + 20) = *(_DWORD *)(v35 + 256);
          if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
            *(_WORD *)(a3 + 4) &= 0xC00Fu;
          v42 = (char *)(a3 + 24);
        }
        else
        {
          *(_OWORD *)a3 = *(_OWORD *)(BugCheckParameter2 + 224);
          *(_OWORD *)(a3 + 16) = *(_OWORD *)(v35 + 240);
          *(_QWORD *)(a3 + 32) = *(_QWORD *)(v35 + 256);
          if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
            *(_WORD *)(a3 + 4) &= 0xC00Fu;
          v52 = *(unsigned __int16 *)(v35 + 226);
          v42 = (char *)(a3 + 40);
        }
        if ( *(_QWORD *)(v35 + 168) )
          AlpcpGetDataFromUserVaSafe(v35, v42);
        else
          AlpcpReadMessageData(v35, v42);
        v37 = v47;
        v33 = a2;
      }
      if ( v51 )
        *v51 = v37;
      if ( v18 )
        AlpcpExposeAttributes((_DWORD *)a1, v33, v35, v18);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v35);
      v43 = 0;
      v44 = *(_BYTE *)(v35 - 32);
      if ( (v44 & 1) != 0 )
      {
        v43 = 0x10000 - *(__int16 *)(v35 - 30);
        *(_BYTE *)(v35 - 32) = v44 & 0xFE;
        *(_WORD *)(v35 - 30) = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v35 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v35 - 16));
      KeAbPostRelease(v35 - 16);
      if ( v43 <= 0 )
        return v28;
      v45 = -v43 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 - 24), -v43);
      if ( v45 > 0 )
        return v28;
      if ( v45 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v45);
      goto LABEL_146;
    }
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
    v38 = 0;
    v39 = *(_BYTE *)(v35 - 32);
    if ( (v39 & 1) != 0 )
    {
      v38 = 0x10000 - *(__int16 *)(v35 - 30);
      *(_BYTE *)(v35 - 32) = v39 & 0xFE;
      *(_WORD *)(v35 - 30) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v35 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v35 - 16));
    KeAbPostRelease(v35 - 16);
    if ( v38 > 0 )
    {
      v40 = -v38 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 - 24), -v38);
      if ( v40 <= 0 )
      {
        if ( v40 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v40);
        AlpcpDestroyBlob(BugCheckParameter2);
      }
    }
    *v51 = v47;
    return 3221225507LL;
  }
  return result;
}
