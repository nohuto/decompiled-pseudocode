/*
 * XREFs of ACPIInterruptDispatchEventDpc @ 0x1C002B530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C0006A8C (ACPIWriteGpeStatusRegister.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0006DB0 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C0006E78 (ACPIGpeIndexToByteIndex.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0051808 (OSNotifyDeviceWakeByGPEEvent.c)
 */

void __fastcall ACPIInterruptDispatchEventDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v4; // r14
  size_t v5; // r15
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int8 v9; // si
  __int64 v10; // rdx
  unsigned __int8 v11; // r10
  unsigned int v12; // ebx
  __int64 v13; // rdx
  size_t v14; // r8
  char v15; // al
  _BYTE *v16; // rcx
  unsigned __int8 v17; // r13
  unsigned int v18; // edx
  __int64 v19; // rcx
  int v20; // r12d
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // ecx
  unsigned int v24; // edi
  unsigned int v25; // r12d
  unsigned __int8 v26; // [rsp+38h] [rbp-69h]
  unsigned int v27; // [rsp+3Ch] [rbp-65h]
  unsigned int v28; // [rsp+40h] [rbp-61h]
  _QWORD v29[12]; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v30[32]; // [rsp+B0h] [rbp+Fh] BYREF

  v4 = 0;
  HIBYTE(v27) = 0;
  v5 = *((unsigned __int16 *)AcpiInformation + 51);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  AcpiGpeDpcScheduled = 0;
  if ( AcpiGpeDpcRunning )
    goto LABEL_5;
  AcpiGpeDpcRunning = 1;
  memset(v29, 0, 0x20uLL);
  do
  {
    AcpiGpeWorkDone = 0;
    if ( (_DWORD)v5 )
    {
      v13 = 0LL;
      v14 = v5;
      do
      {
        v15 = *((_BYTE *)GpeRunMethod + v13);
        *((_BYTE *)GpeRunMethod + v13) = 0;
        *((_BYTE *)&v29[8] + v13) = v15;
        *((_BYTE *)&v29[4] + v13) = *((_BYTE *)GpeIsLevel + v13);
        v16 = GpeComplete;
        *((_BYTE *)v29 + v13) |= *((_BYTE *)GpeComplete + v13);
        v16[v13++] = 0;
        --v14;
      }
      while ( v14 );
    }
    memmove(v30, GpeWakeEnable, v5);
    KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
    v12 = 0;
    if ( (_DWORD)v5 )
    {
      v10 = 0LL;
      v28 = 0;
      do
      {
        v11 = *((_BYTE *)&v29[4] + v12);
        v17 = *((_BYTE *)&v29[8] + v12);
        v26 = v11;
        while ( v17 )
        {
          v22 = *((unsigned __int16 *)AcpiInformation + 43);
          v23 = FirstSetLeftBit[v17];
          v24 = 1 << v23;
          v17 &= ~(unsigned __int8)(1 << v23);
          if ( v12 >= (unsigned int)v22 + *((unsigned __int16 *)AcpiInformation + 49) )
            KeBugCheckEx(0xA5u, 0x17uLL, v23 + 8 * v12, 2uLL, 0LL);
          if ( v12 >= (unsigned int)v22 )
          {
            v10 = v12 - (unsigned int)v22;
            v25 = *((unsigned __int16 *)AcpiInformation + 50) + v23 + 8 * v10;
          }
          else
          {
            v25 = v10 + v23;
          }
          if ( ((unsigned __int8)v24 & *((_BYTE *)GpeHandlerType + v12)) != 0 )
          {
            LOBYTE(v27) = v12;
            BYTE1(v27) = 1 << v23;
            BYTE2(v27) = v11;
            byte_1C0073367 = (v11 & (unsigned __int8)v24) != 0 ? 76 : 69;
            byte_1C0073368 = HexDigit[(unsigned __int64)v25 >> 4];
            byte_1C0073369 = HexDigit[v25 & 0xF];
            if ( (int)AMLIGetNameSpaceObject(byte_1C0073360) >= 0 )
            {
              v20 = AMLIAsyncEvalObject(0LL, 0LL, 0, 0LL, ACPIInterruptEventCompletion, v27);
              AMLIDereferenceHandleEx(0LL, v21);
              if ( v20 >= 0 )
              {
                if ( v20 != 259 )
                  v4 |= v24;
              }
              else
              {
                KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
                *((_BYTE *)GpeRunMethod + v12) |= v24;
                if ( !AcpiGpeDpcScheduled )
                {
                  AcpiGpeDpcScheduled = 1;
                  KeSetTimer(&AcpiGpeTimer, (LARGE_INTEGER)-20000000LL, &AcpiGpeDpc);
                }
                KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
              }
            }
          }
          else
          {
            if ( ((unsigned __int8)v24 & v30[v12]) != 0 )
            {
              OSNotifyDeviceWakeByGPEEvent(v25, v12, v24);
LABEL_9:
              v4 |= v24;
              goto LABEL_10;
            }
            v18 = *(unsigned __int8 *)((unsigned int)ACPIGpeIndexToByteIndex(v25, v10, v22) + GpeMap);
            if ( v18 < GpeVectorTableSize )
            {
              _mm_lfence();
              v19 = *((_QWORD *)GpeVectorTable + 2 * v18 + 1);
              if ( v19 )
              {
                (*(void (__fastcall **)(__int64, _QWORD))(v19 + 8))(v19, *(_QWORD *)(v19 + 16));
              }
              else
              {
                LOBYTE(v18) = 2;
                WPP_RECORDER_SF_D(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v18,
                  22,
                  10,
                  (__int64)&WPP_1176e3f7fda631e80cbbb77fbc689b11_Traceguids,
                  v25);
              }
              goto LABEL_9;
            }
          }
LABEL_10:
          v10 = v28;
          v11 = v26;
        }
        *((_BYTE *)v29 + v12) |= v4;
        v10 = (unsigned int)(v10 + 8);
        ++v12;
        v28 = v10;
        v4 = 0;
      }
      while ( v12 < (unsigned int)v5 );
    }
    KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  }
  while ( AcpiGpeWorkDone );
  v6 = 0;
  if ( (_DWORD)v5 )
  {
    v8 = 0LL;
    do
    {
      v9 = *((_BYTE *)v29 + v8);
      if ( (v9 & *((_BYTE *)&v29[4] + v8)) != 0 )
        ACPIWriteGpeStatusRegister(v6, v9 & *((_BYTE *)&v29[4] + v8));
      ++v6;
      *((_BYTE *)GpePending + v8) &= ~v9;
      LOBYTE(v7) = *((_BYTE *)GpeWakeEnable + v8) | *((_BYTE *)GpeEnable + v8);
      *((_BYTE *)GpeCurEnable + v8) |= v9 & v7 & ~(~*((_BYTE *)GpeWakeEnable + v8) & *((_BYTE *)GpeWakeHandler + v8));
      ++v8;
    }
    while ( v6 < (unsigned int)v5 );
  }
  AcpiGpeDpcRunning = 0;
  ACPIGpeEnableDisableEvents(1, v7);
LABEL_5:
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
