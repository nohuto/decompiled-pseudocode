/*
 * XREFs of KdpSendWaitContinue @ 0x1406F2744
 * Callers:
 *     KdpReportLoadSymbolsStateChange @ 0x1406F25CC (KdpReportLoadSymbolsStateChange.c)
 *     KdpReportCommandStringStateChange @ 0x1406F3CE0 (KdpReportCommandStringStateChange.c)
 *     KdpReportExceptionStateChange @ 0x1406F4050 (KdpReportExceptionStateChange.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400137C0 (MmIsSessionAddress.c)
 *     KdpSetContextEx @ 0x140125990 (KdpSetContextEx.c)
 *     KdpGetContextEx @ 0x14012E73C (KdpGetContextEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KdpWriteCustomBreakpoint @ 0x1401D16D4 (KdpWriteCustomBreakpoint.c)
 *     KdpSysReadIoSpace @ 0x1401D1964 (KdpSysReadIoSpace.c)
 *     KdpSysReadMsr @ 0x1401D1A1C (KdpSysReadMsr.c)
 *     KdpSysWriteIoSpace @ 0x1401D1A48 (KdpSysWriteIoSpace.c)
 *     KdpSysWriteMsr @ 0x1401D1AF8 (KdpSysWriteMsr.c)
 *     KeSwitchFrozenProcessor @ 0x1401D7A84 (KeSwitchFrozenProcessor.c)
 *     xHalGetInterruptTranslator @ 0x1404CB35C (xHalGetInterruptTranslator.c)
 *     KdExitDebugger @ 0x1406F24D0 (KdExitDebugger.c)
 *     KdpReadVirtualMemory @ 0x1406F2AEC (KdpReadVirtualMemory.c)
 *     KdpCopyMemoryChunks @ 0x1406F2BA0 (KdpCopyMemoryChunks.c)
 *     KdpGetContext @ 0x1406F3240 (KdpGetContext.c)
 *     KdpReadControlSpace @ 0x1406F33A8 (KdpReadControlSpace.c)
 *     KdpGetStateChange @ 0x1406F3504 (KdpGetStateChange.c)
 *     KdpSetContext @ 0x1406F3564 (KdpSetContext.c)
 *     KdpSysWriteControlSpace @ 0x1406F3668 (KdpSysWriteControlSpace.c)
 *     KdpDeleteBreakpoint @ 0x1406F3704 (KdpDeleteBreakpoint.c)
 *     KdpReadPhysicalMemory @ 0x1406F3F6C (KdpReadPhysicalMemory.c)
 *     KdpFillMemory @ 0x1406F5320 (KdpFillMemory.c)
 *     KdpGetBusData @ 0x1406F5434 (KdpGetBusData.c)
 *     KdpReadPhysicalMemoryLong @ 0x1406F54D4 (KdpReadPhysicalMemoryLong.c)
 *     KdpRestoreBreakPointEx @ 0x1406F558C (KdpRestoreBreakPointEx.c)
 *     KdpSearchMemory @ 0x1406F5684 (KdpSearchMemory.c)
 *     KdpSysCheckLowMemory @ 0x1406F5B04 (KdpSysCheckLowMemory.c)
 *     KdpSysWriteBusData @ 0x1406F5B78 (KdpSysWriteBusData.c)
 *     KdpWriteBreakPointEx @ 0x1406F5BD0 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x1406F5D74 (KdpWritePhysicalMemory.c)
 *     KdpAddBreakpoint @ 0x1406F602C (KdpAddBreakpoint.c)
 */

__int64 __fastcall KdpSendWaitContinue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 *v12; // rdx
  unsigned __int16 *v13; // r8
  char v14; // al
  int v15; // edi
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  __int64 v17; // [rsp+28h] [rbp-D8h]
  unsigned __int16 v18[4]; // [rsp+40h] [rbp-C0h] BYREF
  void *v19; // [rsp+48h] [rbp-B8h]
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[4]; // [rsp+68h] [rbp-98h] BYREF
  int v25; // [rsp+6Ch] [rbp-94h] BYREF
  int v26; // [rsp+70h] [rbp-90h] BYREF
  int v27; // [rsp+74h] [rbp-8Ch] BYREF
  int v28; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v29[2]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v30; // [rsp+82h] [rbp-7Eh]
  _BYTE *v31; // [rsp+88h] [rbp-78h]
  __int16 v32; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v33; // [rsp+98h] [rbp-68h]
  __int16 v34; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE *v35; // [rsp+A8h] [rbp-58h]
  __int16 v36; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v37; // [rsp+B8h] [rbp-48h]
  __int16 v38; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v39; // [rsp+C8h] [rbp-38h]
  __int16 v40; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v41; // [rsp+D8h] [rbp-28h]
  __int16 v42; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE *v43; // [rsp+E8h] [rbp-18h]
  __int16 v44; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE *v45; // [rsp+F8h] [rbp-8h]
  __int16 v46; // [rsp+100h] [rbp+0h] BYREF
  _BYTE *v47; // [rsp+108h] [rbp+8h]
  __int16 v48; // [rsp+110h] [rbp+10h] BYREF
  _BYTE *v49; // [rsp+118h] [rbp+18h]
  __int16 v50; // [rsp+120h] [rbp+20h] BYREF
  _BYTE *v51; // [rsp+128h] [rbp+28h]
  __int16 v52; // [rsp+130h] [rbp+30h] BYREF
  _BYTE *v53; // [rsp+138h] [rbp+38h]
  __int16 v54; // [rsp+140h] [rbp+40h] BYREF
  _BYTE *v55; // [rsp+148h] [rbp+48h]
  __int16 v56; // [rsp+150h] [rbp+50h] BYREF
  _BYTE *v57; // [rsp+158h] [rbp+58h]
  __int16 v58; // [rsp+160h] [rbp+60h] BYREF
  _BYTE *v59; // [rsp+168h] [rbp+68h]
  __int16 v60; // [rsp+170h] [rbp+70h] BYREF
  _BYTE *v61; // [rsp+178h] [rbp+78h]
  __int16 v62; // [rsp+180h] [rbp+80h] BYREF
  _BYTE *v63; // [rsp+188h] [rbp+88h]
  _BYTE v64[56]; // [rsp+190h] [rbp+90h] BYREF

  memset(v64, 0, sizeof(v64));
  v30 = 56;
  v31 = v64;
  v18[1] = 4096;
  v7 = 0;
  KdpContextSent = 0;
  v19 = &KdpMessageBuffer;
  KdSendPacket(7LL, a2, a3, &KdpContext);
  while ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
    {
      if ( (_DWORD)KeNumberProcessors_0 == 1 )
        KeQueryPerformanceCounter(0LL);
      v8 = KdReceivePacket(2LL, v29, v18, v24, &KdpContext);
      if ( v8 == 2 )
        break;
      if ( v8 != 1 )
      {
        switch ( *(_DWORD *)v64 )
        {
          case 0x3130:
            KdpReadVirtualMemory(v64, v18);
            continue;
          case 0x3131:
            *(_DWORD *)&v64[8] = KdpCopyMemoryChunks(*(_DWORD *)&v64[16], (_DWORD)v19, v18[0], 0, 5, (__int64)&v64[28]);
            v12 = &v32;
            v32 = 56;
            v33 = v64;
            v13 = 0LL;
            goto LABEL_16;
          case 0x3132:
            v36 = 56;
            v37 = v64;
            KdpGetContext(v64, v18);
            if ( !*(_DWORD *)&v64[8] )
              KdpContextSent = 1;
            v12 = &v36;
            goto LABEL_15;
          case 0x3133:
            KdpSetContext(v64, v18, a4);
            continue;
          case 0x3134:
            v39 = v64;
            LOBYTE(v9) = 1;
            v38 = 56;
            *(_DWORD *)&v64[24] = KdpAddBreakpoint(*(_QWORD *)&v64[16], 204LL, v9, 0LL, BugCheckParameter4, v17);
            v12 = &v38;
            *(_DWORD *)&v64[8] = *(_DWORD *)&v64[24] == 0 ? 0xC0000001 : 0;
            v13 = 0LL;
            goto LABEL_16;
          case 0x3135:
            v41 = v64;
            v40 = 56;
            v14 = KdpDeleteBreakpoint(*(unsigned int *)&v64[16]);
            v12 = &v40;
            *(_DWORD *)&v64[8] = v14 == 0 ? 0xC0000001 : 0;
            v13 = 0LL;
            goto LABEL_16;
          case 0x3136:
            LOBYTE(v7) = *(_DWORD *)&v64[16] >= 0;
            return v7;
          case 0x3137:
            KdpReadControlSpace(v64, v18);
            continue;
          case 0x3138:
            v43 = v64;
            v42 = 56;
            *(_DWORD *)&v64[8] = KdpSysWriteControlSpace(
                                   *(unsigned __int16 *)&v64[6],
                                   *(_DWORD *)&v64[16],
                                   (_DWORD)v19,
                                   v18[0],
                                   (__int64)&v20);
            v12 = &v42;
            *(_DWORD *)&v64[28] = v20;
            goto LABEL_15;
          case 0x3139:
            v45 = v64;
            v44 = 56;
            *(_DWORD *)&v64[28] = 0;
            *(_DWORD *)&v64[8] = KdpSysReadIoSpace(
                                   1,
                                   0,
                                   1,
                                   *(unsigned __int16 *)&v64[16],
                                   &v64[28],
                                   *(int *)&v64[24],
                                   &v25);
            v12 = &v44;
            v13 = 0LL;
            goto LABEL_16;
          case 0x313A:
            v47 = v64;
            v46 = 56;
            *(_DWORD *)&v64[8] = KdpSysWriteIoSpace(
                                   1,
                                   0,
                                   1,
                                   *(unsigned __int16 *)&v64[16],
                                   &v64[28],
                                   *(int *)&v64[24],
                                   &v26);
            v12 = &v46;
            v13 = 0LL;
            goto LABEL_16;
          case 0x313B:
            KiResumeForReboot = 1;
            KdExitDebugger(0);
            off_1402F25B8();
            HalReturnToFirmware(3LL);
          case 0x313C:
            if ( *(int *)&v64[16] < 0 )
              return 0LL;
            KdpGetStateChange(v64, a4);
            return 1LL;
          case 0x313D:
            KdpReadPhysicalMemory(v64, v18, v9, &KdpContext);
            continue;
          case 0x313E:
            KdpWritePhysicalMemory(v64, v18);
            continue;
          case 0x3140:
          case 0x3141:
          case 0x3142:
          case 0x315A:
            continue;
          case 0x3144:
            v49 = v64;
            v48 = 56;
            *(_DWORD *)&v64[40] = 0;
            *(_DWORD *)&v64[8] = KdpSysReadIoSpace(
                                   *(int *)&v64[20],
                                   *(int *)&v64[24],
                                   *(int *)&v64[28],
                                   *(unsigned __int16 *)&v64[32],
                                   &v64[40],
                                   *(int *)&v64[16],
                                   &v27);
            v12 = &v48;
            v13 = 0LL;
            goto LABEL_16;
          case 0x3145:
            v51 = v64;
            v50 = 56;
            *(_DWORD *)&v64[8] = KdpSysWriteIoSpace(
                                   *(int *)&v64[20],
                                   *(int *)&v64[24],
                                   *(int *)&v64[28],
                                   *(unsigned __int16 *)&v64[32],
                                   &v64[40],
                                   *(int *)&v64[16],
                                   &v28);
            v12 = &v50;
            v13 = 0LL;
            goto LABEL_16;
          case 0x3146:
            v58 = 56;
            v59 = v64;
            v13 = 0LL;
            *(_OWORD *)&v64[16] = KdVersionBlock;
            v12 = &v58;
            *(_DWORD *)&v64[8] = 0;
            *(_QWORD *)&v64[48] = qword_1402F4E48;
            *(_OWORD *)&v64[32] = xmmword_1402F4E38;
            *(_DWORD *)v64 = 12614;
            goto LABEL_16;
          case 0x3147:
            if ( !(unsigned int)KdpWriteBreakPointEx(v64, v18) )
              continue;
            return 0LL;
          case 0x3148:
            KdpRestoreBreakPointEx(v64, v18);
            continue;
          case 0x3149:
            KdExitDebugger(0);
            KeBugCheckEx(0xE2u, 0LL, 0LL, 0LL, 0LL);
          case 0x3150:
            return KeSwitchFrozenProcessor(*(unsigned __int16 *)&v64[6]);
          case 0x3151:
            v60 = 56;
            v61 = v64;
            v12 = &v60;
            *(_DWORD *)&v64[8] = -1073741823;
            v13 = 0LL;
            goto LABEL_16;
          case 0x3152:
            v53 = v64;
            v52 = 56;
            *(_DWORD *)&v64[8] = KdpSysReadMsr(*(unsigned int *)&v64[16], &v22);
            v12 = &v52;
            v13 = 0LL;
            *(_QWORD *)&v64[20] = v22;
            goto LABEL_16;
          case 0x3153:
            v55 = v64;
            v23 = *(_QWORD *)&v64[20];
            v54 = 56;
            *(_DWORD *)&v64[8] = KdpSysWriteMsr(*(unsigned int *)&v64[16], &v23);
            v12 = &v54;
            v13 = 0LL;
            goto LABEL_16;
          case 0x3156:
            KdpSearchMemory(v64, v18);
            continue;
          case 0x3157:
            KdpGetBusData(v64, v18);
            continue;
          case 0x3158:
            v57 = v64;
            v56 = 56;
            *(_DWORD *)&v64[8] = KdpSysWriteBusData(
                                   *(unsigned int *)&v64[16],
                                   *(unsigned int *)&v64[20],
                                   *(unsigned int *)&v64[24],
                                   *(unsigned int *)&v64[28],
                                   v19,
                                   *(_DWORD *)&v64[32],
                                   &v21);
            v12 = &v56;
            v13 = 0LL;
            *(_DWORD *)&v64[32] = v21;
            goto LABEL_16;
          case 0x3159:
            v34 = 56;
            v35 = v64;
            *(_DWORD *)&v64[8] = KdpSysCheckLowMemory(4LL);
            v12 = &v34;
            v13 = 0LL;
            goto LABEL_16;
          case 0x315B:
            KdpFillMemory(v64, v18);
            continue;
          case 0x315C:
            v15 = 0;
            if ( *(_DWORD *)&v64[32] )
            {
              v15 = -1073741811;
            }
            else
            {
              *(_DWORD *)&v64[32] = *(_QWORD *)&v64[16] >= 0x7FFFFFFEFFFFuLL
                                 && 2 - MmIsSessionAddress(*(unsigned __int64 *)&v64[16]);
              *(_DWORD *)&v64[36] = 7;
            }
            *(_DWORD *)&v64[8] = v15;
            *(_QWORD *)&v64[24] = 0LL;
            v62 = 56;
            v12 = &v62;
            v63 = v64;
            v13 = 0LL;
            goto LABEL_16;
          case 0x315F:
            KdpGetContextEx(v64, v18);
            continue;
          case 0x3160:
            KdpSetContextEx((__int64)v64, (__int64)v18, a4);
            continue;
          case 0x3161:
            KdpWriteCustomBreakpoint((__int64)v64, 0x140000000LL, v9, v10);
            continue;
          case 0x3162:
            KdpReadPhysicalMemoryLong(v64, v18);
            continue;
          default:
            v18[0] = 0;
            v12 = (__int16 *)v29;
            *(_DWORD *)&v64[8] = -1073741823;
LABEL_15:
            v13 = v18;
LABEL_16:
            KdSendPacket(2LL, v12, v13, &KdpContext);
            continue;
        }
      }
    }
    KdSendPacket(7LL, a2, a3, &KdpContext);
  }
  return 1LL;
}
