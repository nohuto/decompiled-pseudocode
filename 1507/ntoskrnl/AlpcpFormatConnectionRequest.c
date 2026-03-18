/*
 * XREFs of AlpcpFormatConnectionRequest @ 0x14052A7D4
 * Callers:
 *     NtSecureConnectPort @ 0x140529588 (NtSecureConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x140529D38 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140471338 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpAllocateMessage @ 0x140474B20 (AlpcpAllocateMessage.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpCaptureAttributes @ 0x14047EB30 (AlpcpCaptureAttributes.c)
 *     AlpcpMapLegacyPortView @ 0x14052ABD8 (AlpcpMapLegacyPortView.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpFormatConnectionRequest(
        ULONG_PTR *a1,
        int a2,
        _QWORD **a3,
        __int64 a4,
        unsigned __int16 *a5,
        int *a6,
        __int64 a7,
        ULONG_PTR *a8,
        char a9,
        char a10)
{
  int v10; // r14d
  char v11; // r15
  unsigned __int16 *v13; // rdi
  __int64 v15; // r10
  __int64 result; // rax
  unsigned int v17; // esi
  ULONG_PTR v18; // rbx
  _WORD *v19; // rcx
  unsigned __int16 v20; // ax
  __int16 v21; // dx
  ULONG_PTR v22; // rbx
  signed int v23; // ecx
  __int64 v24; // r14
  __int64 v25; // rax
  ULONG_PTR v26; // r8
  __int64 v27; // rax
  bool v28; // zf
  __int64 v29; // rdx
  unsigned __int16 v30; // cx
  char v31; // cl
  int v32; // edi
  signed __int64 BugCheckParameter4; // rcx
  char v34; // cl
  int v35; // edi
  signed __int64 v36; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp+50h] BYREF

  v10 = a2;
  v11 = a9;
  v13 = a5;
  v15 = *a3[2];
  if ( a4 )
  {
    if ( a9 )
    {
      if ( *a5 > (unsigned __int64)(*(_QWORD *)(v15 + 272) - 40LL) )
        *a5 = *(_WORD *)(v15 + 272) - 40;
      v23 = 0;
    }
    else
    {
      v30 = *a5;
      v23 = v30 >= (unsigned __int16)(v30 + 40) ? -1073741811 : a5[1] != v30 + 40LL ? 0xC000000D : 0;
    }
    if ( v23 < 0 )
      return (unsigned int)v23;
  }
  result = AlpcpAllocateMessage(&BugCheckParameter2, 0LL, 0LL);
  v17 = result;
  if ( (int)result >= 0 )
  {
    v18 = BugCheckParameter2;
    if ( v11 )
    {
      v24 = a7;
      if ( a7 )
      {
        v17 = AlpcpMapLegacyPortView(a3);
        v25 = *(_QWORD *)(v24 + 24);
        v10 = a2;
        *(_QWORD *)(v18 + 256) = v25;
      }
      else
      {
        v10 = a2;
        *(_QWORD *)(BugCheckParameter2 + 256) = 0LL;
      }
    }
    else
    {
      v17 = AlpcpCaptureAttributes(a3, v10, a6, BugCheckParameter2, (_QWORD *)(BugCheckParameter2 + 104));
    }
    if ( (v17 & 0x80000000) != 0 )
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v18);
      v31 = *(_BYTE *)(v18 - 32);
      v32 = 0;
      if ( (v31 & 1) != 0 )
      {
        v32 = 0x10000 - *(__int16 *)(v18 - 30);
        *(_WORD *)(v18 - 30) = 0;
        *(_BYTE *)(v18 - 32) = v31 & 0xFE;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v18 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v18 - 16));
      KeAbPostRelease(v18 - 16);
      if ( v32 <= 0 )
        return v17;
      BugCheckParameter4 = -v32 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 - 24), -v32);
      if ( BugCheckParameter4 > 0 )
        return v17;
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
    }
    else
    {
      v19 = (_WORD *)BugCheckParameter2;
      *(_OWORD *)(BugCheckParameter2 + 232) = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
      v20 = *v13;
      v19[112] = *v13;
      v19[113] = v20 + 40;
      v21 = v19[114] & 0xFF00 | 0xA;
      v19[114] = v21;
      if ( !KeGetCurrentThread()->PreviousMode )
        v19[114] = v21 | v13[2] & 0x8000;
      v22 = BugCheckParameter2;
      if ( !*v13
        || (v17 = AlpcpSetupMessageDataForDeferredCopy(BugCheckParameter2, a4, v10, *v13, v11, a10),
            (v17 & 0x80000000) == 0) )
      {
        if ( v11 )
        {
          v26 = *(_QWORD *)(v22 + 144);
          if ( v26 )
          {
            *a8 = v26;
            _m_prefetchw((const void *)(v26 - 24));
            v27 = *(_QWORD *)(v26 - 24);
            v28 = v27 == 0;
            if ( v27 > 0 )
            {
              do
              {
                v29 = v27;
                v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v26 - 24), v27 + 1, v27);
                if ( v27 == v29 )
                {
                  v22 = BugCheckParameter2;
                  goto LABEL_10;
                }
              }
              while ( v27 > 0 );
              v22 = BugCheckParameter2;
              v28 = v27 == 0;
            }
            if ( !v28 )
              KeBugCheckEx(0x18u, 0LL, v26, 0x20uLL, v27);
          }
        }
LABEL_10:
        *a1 = v22;
        return v17;
      }
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v22);
      v34 = *(_BYTE *)(v22 - 32);
      v35 = 0;
      if ( (v34 & 1) != 0 )
      {
        v35 = 0x10000 - *(__int16 *)(v22 - 30);
        *(_WORD *)(v22 - 30) = 0;
        *(_BYTE *)(v22 - 32) = v34 & 0xFE;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v22 - 16));
      KeAbPostRelease(v22 - 16);
      if ( v35 <= 0 )
        return v17;
      v36 = -v35 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 - 24), -v35);
      if ( v36 > 0 )
        return v17;
      if ( v36 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v36);
    }
    AlpcpDestroyBlob(BugCheckParameter2);
    return v17;
  }
  return result;
}
