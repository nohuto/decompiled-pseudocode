/*
 * XREFs of ACPIInterruptDispatchEventDpc @ 0x1C003CA70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIWriteGpeStatusRegister @ 0x1C0006E8C (ACPIWriteGpeStatusRegister.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00075D4 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C000769C (ACPIGpeIndexToByteIndex.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C003E160 (OSNotifyDeviceWakeByGPEEvent.c)
 */

void __fastcall ACPIInterruptDispatchEventDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v4; // r14
  size_t v5; // r15
  size_t v6; // rdi
  char *v7; // rcx
  signed __int64 v8; // r8
  size_t v9; // r10
  signed __int64 v10; // r11
  signed __int64 v11; // rbx
  signed __int64 v12; // r9
  signed __int64 v13; // rdx
  char v14; // al
  unsigned int v15; // ebx
  int v16; // r13d
  unsigned __int8 v17; // r10
  unsigned __int8 v18; // r12
  __int64 v19; // r8
  int v20; // ecx
  int v21; // edi
  __int64 v22; // rdx
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // edi
  __int64 v27; // rbx
  unsigned __int8 v28; // si
  _BYTE *v29; // r10
  unsigned __int8 v30; // [rsp+38h] [rbp-69h]
  unsigned int v31; // [rsp+3Ch] [rbp-65h]
  int v32; // [rsp+48h] [rbp-59h]
  _BYTE v33[32]; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v34[32]; // [rsp+70h] [rbp-31h] BYREF
  _BYTE v35[32]; // [rsp+90h] [rbp-11h] BYREF
  _BYTE v36[32]; // [rsp+B0h] [rbp+Fh] BYREF

  v4 = 0;
  HIBYTE(v31) = 0;
  v5 = *((unsigned __int16 *)AcpiInformation + 51);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  AcpiGpeDpcScheduled = 0;
  if ( AcpiGpeDpcRunning )
    goto LABEL_38;
  AcpiGpeDpcRunning = 1;
  memset(v33, 0, sizeof(v33));
  v6 = (unsigned int)v5;
  do
  {
    AcpiGpeWorkDone = 0;
    if ( (_DWORD)v5 )
    {
      v7 = (char *)GpeRunMethod;
      v8 = (_BYTE *)GpeIsLevel - (_BYTE *)GpeRunMethod;
      v9 = v6;
      v10 = v35 - (_BYTE *)GpeRunMethod;
      v11 = v34 - (_BYTE *)GpeRunMethod;
      v12 = v33 - (_BYTE *)GpeRunMethod;
      v13 = (_BYTE *)GpeComplete - (_BYTE *)GpeRunMethod;
      do
      {
        v14 = *v7;
        *v7 = 0;
        v7[v10] = v14;
        v7[v11] = v7[v8];
        v7[v12] |= v7[v13];
        (v7++)[v13] = 0;
        --v9;
      }
      while ( v9 );
    }
    memmove(v36, GpeWakeEnable, v6);
    KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
    v15 = 0;
    if ( (_DWORD)v5 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = v34[v15];
        v18 = v35[v15];
        v30 = v17;
        while ( v18 )
        {
          v19 = *((unsigned __int16 *)AcpiInformation + 43);
          v20 = FirstSetLeftBit[v18];
          v21 = 1 << v20;
          v18 &= ~(unsigned __int8)(1 << v20);
          if ( v15 >= (unsigned int)v19 + *((unsigned __int16 *)AcpiInformation + 49) )
            KeBugCheckEx(0xA5u, 0x17uLL, v20 + 8 * v15, 2uLL, 0LL);
          if ( v15 >= (unsigned int)v19 )
            v22 = *((unsigned __int16 *)AcpiInformation + 50) + v20 + 8 * (v15 - (unsigned int)v19);
          else
            v22 = (unsigned int)(v20 + v16);
          if ( ((unsigned __int8)v21 & *((_BYTE *)GpeHandlerType + v15)) == 0 )
          {
            if ( ((unsigned __int8)v21 & v36[v15]) != 0 )
            {
              OSNotifyDeviceWakeByGPEEvent((unsigned int)v22);
            }
            else
            {
              v23 = *(unsigned __int8 *)((unsigned int)ACPIGpeIndexToByteIndex((unsigned int)v22, v22, v19) + GpeMap);
              if ( v23 >= GpeVectorTableSize )
                goto LABEL_27;
              _mm_lfence();
              v24 = *((_QWORD *)GpeVectorTable + 2 * v23 + 1);
              if ( v24 )
                (*(void (__fastcall **)(__int64, _QWORD))(v24 + 8))(v24, *(_QWORD *)(v24 + 16));
            }
            goto LABEL_26;
          }
          LOBYTE(v31) = v15;
          BYTE1(v31) = 1 << v20;
          BYTE2(v31) = v17;
          byte_1C0058BC7 = (v17 & (unsigned __int8)v21) != 0 ? 76 : 69;
          byte_1C0058BC8 = HexDigit[(unsigned __int64)(unsigned int)v22 >> 4];
          byte_1C0058BC9 = HexDigit[v22 & 0xF];
          if ( (int)AMLIGetNameSpaceObject(byte_1C0058BC0) < 0 )
            goto LABEL_27;
          v32 = AMLIAsyncEvalObject(0LL, 0LL, 0, 0LL, ACPIInterruptEventCompletion, v31);
          AMLIDereferenceHandleEx(0LL);
          if ( v32 >= 0 )
          {
            if ( v32 == 259 )
              goto LABEL_27;
LABEL_26:
            v4 |= v21;
            goto LABEL_27;
          }
          KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
          *((_BYTE *)GpeRunMethod + v15) |= v21;
          if ( !AcpiGpeDpcScheduled )
          {
            AcpiGpeDpcScheduled = 1;
            KeSetTimer(&AcpiGpeTimer, (LARGE_INTEGER)-20000000LL, &AcpiGpeDpc);
          }
          KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
LABEL_27:
          v17 = v30;
        }
        v33[v15++] |= v4;
        v16 += 8;
        v4 = 0;
        if ( v15 >= (unsigned int)v5 )
        {
          v6 = v5;
          break;
        }
      }
    }
    KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  }
  while ( AcpiGpeWorkDone );
  v26 = 0;
  if ( (_DWORD)v5 )
  {
    v27 = 0LL;
    do
    {
      v28 = v33[v27];
      if ( (v28 & v34[v27]) != 0 )
        ACPIWriteGpeStatusRegister(v26, v28 & v34[v27]);
      v29 = GpeCurEnable;
      ++v26;
      *((_BYTE *)GpePending + v27) &= ~v28;
      LOBYTE(v25) = *((_BYTE *)GpeWakeEnable + v27) | *((_BYTE *)GpeEnable + v27);
      v29[v27] |= v28 & v25 & ~(~*((_BYTE *)GpeWakeEnable + v27) & *((_BYTE *)GpeWakeHandler + v27));
      ++v27;
    }
    while ( v26 < (unsigned int)v5 );
  }
  AcpiGpeDpcRunning = 0;
  ACPIGpeEnableDisableEvents(1, v25);
LABEL_38:
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
