/*
 * XREFs of PspGetSetContextInternal @ 0x1403EDB60
 * Callers:
 *     PspGetSetContextSpecialApc @ 0x14015B7C0 (PspGetSetContextSpecialApc.c)
 * Callees:
 *     RtlpVirtualUnwind @ 0x140023A90 (RtlpVirtualUnwind.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140027FB0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpGetStackLimits @ 0x140028310 (RtlpGetStackLimits.c)
 *     PspGetBaseTrapFrame @ 0x140028498 (PspGetBaseTrapFrame.c)
 *     IoThreadToProcess @ 0x1400284B0 (IoThreadToProcess.c)
 *     RtlpIsFrameInBoundsEx @ 0x1400284B8 (RtlpIsFrameInBoundsEx.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlpCaptureContext @ 0x14015BA60 (RtlpCaptureContext.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeDoesTebMatchThread @ 0x1401CCD98 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x1401CCDB0 (KeGetCurrentUmsTeb.c)
 *     PspGetContext @ 0x1403EEB58 (PspGetContext.c)
 *     PspSetContext @ 0x1403EEEEC (PspSetContext.c)
 *     HvlGetSetSecureContext @ 0x1405F6C4C (HvlGetSetSecureContext.c)
 *     KeClearUmsThreadKernelLock @ 0x14061B18C (KeClearUmsThreadKernelLock.c)
 *     KeUpdateUmsThreadState @ 0x14061B43C (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x14061BB3C (KeBuildPrimaryThreadContext.c)
 *     KeCopyContextFromUch @ 0x14061BE54 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x14061C110 (KeCopyContextFromUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x14061C7A4 (KeUpdatePrimaryThreadContext.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x140643C78 (PspRundownUmsThreadForApcDelivery.c)
 *     PspSetUmsThreadContext @ 0x140643E1C (PspSetUmsThreadContext.c)
 */

__int64 __fastcall PspGetSetContextInternal(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // r12
  unsigned __int8 v6; // r15
  _QWORD *v7; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  PEPROCESS v9; // rax
  __int64 BaseTrapFrame; // r13
  struct _KTHREAD *v11; // rax
  struct _KTHREAD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v17; // r12
  ULONG_PTR v18; // rsi
  unsigned __int64 v19; // rax
  unsigned int *v20; // rax
  __int64 v21; // rcx
  _QWORD *Object; // rcx
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rcx
  int v26; // r13d
  int v27; // eax
  __int64 v28; // r8
  int updated; // eax
  unsigned __int64 CurrentUmsTeb; // rax
  bool v31; // al
  __int64 v32; // rcx
  int v33; // eax
  bool v34; // [rsp+60h] [rbp-5D8h]
  char v35[3]; // [rsp+61h] [rbp-5D7h] BYREF
  int v36; // [rsp+64h] [rbp-5D4h] BYREF
  _QWORD *v37; // [rsp+68h] [rbp-5D0h]
  __int64 v38; // [rsp+70h] [rbp-5C8h]
  __int64 v39; // [rsp+78h] [rbp-5C0h] BYREF
  unsigned __int64 v40; // [rsp+80h] [rbp-5B8h] BYREF
  unsigned __int64 v41[3]; // [rsp+88h] [rbp-5B0h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-598h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-588h]
  __int64 v44; // [rsp+B8h] [rbp-580h] BYREF
  unsigned __int64 v45[4]; // [rsp+C0h] [rbp-578h] BYREF
  char v46[144]; // [rsp+E0h] [rbp-558h] BYREF
  char v47; // [rsp+170h] [rbp-4C8h] BYREF
  ULONG_PTR *v48; // [rsp+178h] [rbp-4C0h] BYREF
  char v49; // [rsp+180h] [rbp-4B8h] BYREF
  char v50; // [rsp+188h] [rbp-4B0h] BYREF
  char v51; // [rsp+190h] [rbp-4A8h] BYREF
  char v52; // [rsp+1B8h] [rbp-480h] BYREF
  char v53; // [rsp+1C0h] [rbp-478h] BYREF
  char v54; // [rsp+1C8h] [rbp-470h] BYREF
  char v55; // [rsp+1D0h] [rbp-468h] BYREF
  ULONG_PTR v56; // [rsp+1D8h] [rbp-460h]
  char v57; // [rsp+2E0h] [rbp-358h] BYREF
  char v58; // [rsp+2F0h] [rbp-348h] BYREF
  char v59; // [rsp+300h] [rbp-338h] BYREF
  char v60; // [rsp+310h] [rbp-328h] BYREF
  char v61; // [rsp+320h] [rbp-318h] BYREF
  char v62; // [rsp+330h] [rbp-308h] BYREF
  char v63; // [rsp+340h] [rbp-2F8h] BYREF
  char v64; // [rsp+350h] [rbp-2E8h] BYREF
  char v65; // [rsp+360h] [rbp-2D8h] BYREF
  char v66; // [rsp+370h] [rbp-2C8h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+5B0h] [rbp-88h] BYREF
  __int64 v68; // [rsp+5E0h] [rbp-58h]
  __int64 v69; // [rsp+5E8h] [rbp-50h]

  v3 = (_QWORD *)a3;
  v37 = (_QWORD *)a3;
  v38 = a2;
  v41[1] = a1;
  v41[2] = a3;
  v6 = 0;
  v36 = 0;
  v7 = (_QWORD *)(a1 + 128);
  CurrentThread = KeGetCurrentThread();
  v9 = IoThreadToProcess(CurrentThread);
  if ( *(_BYTE *)(a1 + 88) )
  {
    if ( v9->SecurePid )
    {
      v21 = *(_QWORD *)(a1 + 120);
      MemoryDescriptorList.Next = 0LL;
      MemoryDescriptorList.Size = 8 * ((((unsigned __int64)(v21 & 0xFFF) + 5327) >> 12) + 6);
      MemoryDescriptorList.MdlFlags = 0;
      MemoryDescriptorList.StartVa = (PVOID)(v21 & 0xFFFFFFFFFFFFF000uLL);
      MemoryDescriptorList.ByteOffset = v21 & 0xFFF;
      MemoryDescriptorList.ByteCount = 1232;
      MmProbeAndLockPages(&MemoryDescriptorList, 0, IoModifyAccess);
      *(_DWORD *)(a1 + 92) = HvlGetSetSecureContext(a2, *(_QWORD *)(a1 + 120), v68, v69);
      MmUnlockPages(&MemoryDescriptorList);
      goto LABEL_17;
    }
    BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread);
    v11 = CurrentThread;
    if ( !CurrentThread )
      v11 = KeGetCurrentThread();
    if ( (v11->Header.Reserved1 & 0x40) != 0 )
    {
      Object = CurrentThread->WaitBlock[3].Object;
      if ( (Object[10] & 4) != 0 )
      {
        v23 = *Object;
        v24 = PspRundownUmsThreadForApcDelivery(CurrentThread, &v36, *Object, 0LL);
        *(_DWORD *)(a1 + 92) = v24;
        if ( v24 >= 0 )
        {
          if ( v38 )
          {
            *(_DWORD *)(a1 + 92) = PspSetUmsThreadContext(CurrentThread, *(_QWORD *)(a1 + 120), &v36);
          }
          else
          {
            v25 = *(_QWORD *)(a1 + 120);
            v26 = 0;
            if ( (v36 & 2) != 0 )
              v26 = KeCopyContextFromUmsContext(v25, *(_QWORD *)CurrentThread->WaitBlock[3].Object);
            else
              KeCopyContextFromUch(v25, CurrentThread->WaitBlock[3].SparePtr);
            *(_DWORD *)(a1 + 92) = v26;
          }
          v27 = KeClearUmsThreadKernelLock(v23);
          if ( v27 < 0 )
            *(_DWORD *)(a1 + 92) = v27;
          if ( (v36 & 8) != 0 )
          {
            LOBYTE(v28) = 1;
            updated = KeUpdateUmsThreadState(v23, 0LL, v28);
            if ( updated < 0 )
              *(_DWORD *)(a1 + 92) = updated;
          }
        }
        goto LABEL_17;
      }
    }
    v12 = CurrentThread;
    if ( !CurrentThread )
      v12 = KeGetCurrentThread();
    if ( (v12->Header.Reserved1 & 0x80u) != 0 )
    {
      CurrentUmsTeb = KeGetCurrentUmsTeb(CurrentThread);
      v31 = !KeDoesTebMatchThread((__int64)CurrentThread, CurrentUmsTeb);
      v34 = v31;
      if ( v38 )
      {
        v33 = KeUpdatePrimaryThreadContext(v32, *(_QWORD *)(a1 + 120));
        *(_DWORD *)(a1 + 92) = v33;
        if ( v34 || v33 < 0 )
          goto LABEL_17;
      }
      else if ( v31 )
      {
        *(_DWORD *)(a1 + 92) = KeBuildPrimaryThreadContext(v32, 0, *(_QWORD *)(a1 + 120), 1, 0LL, 0LL);
        goto LABEL_17;
      }
    }
  }
  else
  {
    BaseTrapFrame = (__int64)CurrentThread->TrapFrame;
    if ( !BaseTrapFrame || *(_WORD *)(BaseTrapFrame + 368) != 16 )
      goto LABEL_66;
  }
  if ( (*(_BYTE *)(a1 + 89) & 2) == 0 )
  {
    v13 = PspGetBaseTrapFrame((__int64)CurrentThread);
    v7[19] = v13 - 320 + 256;
    v7[22] = v13 - 320 + 272;
    v7[23] = v13 - 320 + 264;
    v7[28] = v13 - 320 + 280;
    v7[29] = v13 - 320 + 288;
    v7[30] = v13 - 320 + 296;
    v7[31] = v13 - 320 + 304;
    v7[6] = v13 - 320 + 48;
    v7[7] = v13 - 320 + 64;
    v7[8] = v13 - 320 + 80;
    v7[9] = v13 - 320 + 96;
    v7[10] = v13 - 320 + 112;
    v7[11] = v13 - 320 + 128;
    v7[12] = v13 - 320 + 144;
    v7[13] = v13 - 320 + 160;
    v7[14] = v13 - 320 + 176;
    v7[15] = v13 - 320 + 192;
    v7[21] = BaseTrapFrame + 344;
LABEL_11:
    v14 = *(_QWORD *)(a1 + 120);
    v15 = *(_DWORD *)(v14 + 48) & 0x100008;
    if ( v38 )
    {
      if ( v15 == 1048584 && *(_BYTE *)(a1 + 88) == 1 )
        v6 = 1;
      PspSetContext(BaseTrapFrame, v7, *(_QWORD *)(a1 + 120), *(unsigned __int8 *)(a1 + 88));
    }
    else
    {
      if ( v15 == 1048584 && *(_BYTE *)(a1 + 88) == 1 )
        _fxsave((void *)(v14 + 256));
      PspGetContext(BaseTrapFrame, v7, *(_QWORD *)(a1 + 120));
    }
    *(_DWORD *)(a1 + 92) = 0;
    goto LABEL_17;
  }
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v40, (__int64)v41) )
    goto LABEL_66;
  v17 = 0LL;
  v39 = 0LL;
  memset(v45, 0, sizeof(v45));
  v42 = *(_OWORD *)&xmmword_1402CFDD0;
  v43 = qword_1402CFDE0;
  RtlpCaptureContext();
  v7[19] = &v47;
  v7[21] = &v49;
  v7[22] = &v50;
  v7[23] = &v51;
  v7[28] = &v52;
  v7[29] = &v53;
  v7[30] = &v54;
  v7[31] = &v55;
  v7[6] = &v57;
  v7[7] = &v58;
  v7[8] = &v59;
  v7[9] = &v60;
  v7[10] = &v61;
  v7[11] = &v62;
  v7[12] = &v63;
  v7[13] = &v64;
  v7[14] = &v65;
  v7[15] = &v66;
  v7[20] = &v48;
  v35[0] = 0;
  v18 = v56;
  v19 = (unsigned __int64)v48;
  while ( 1 )
  {
    if ( v18 <= (unsigned __int64)MmSystemRangeStart || !RtlpIsFrameInBoundsEx(&v40, v19, v41, v45) )
    {
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
        goto LABEL_65;
      goto LABEL_36;
    }
    v20 = RtlpLookupFunctionEntryForStackWalks(v18, (__int64)&v42);
    if ( v20 )
      break;
    if ( !*((_QWORD *)&v42 + 1) )
      goto LABEL_36;
    v18 = *v48;
    v56 = *v48;
    v19 = (unsigned __int64)++v48;
LABEL_31:
    if ( v17 == BaseTrapFrame )
    {
      v3 = v37;
      goto LABEL_11;
    }
  }
  if ( (int)RtlpVirtualUnwind(
              0,
              *((__int64 *)&v42 + 1),
              v18,
              v20,
              (__int64)v46,
              v35,
              &v44,
              &v39,
              (__int64)v7,
              &v40,
              v41) >= 0 )
  {
    v17 = v39;
    v18 = v56;
    v19 = (unsigned __int64)v48;
    goto LABEL_31;
  }
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
LABEL_65:
    __int2c();
LABEL_36:
  v3 = v37;
LABEL_66:
  *(_DWORD *)(a1 + 92) = -1073741823;
LABEL_17:
  if ( (*(_BYTE *)(a1 + 89) & 1) != 0 )
    *v3 = a1 + 96;
  else
    *v3 = 0LL;
  return v6;
}
