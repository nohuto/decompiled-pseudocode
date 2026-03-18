/*
 * XREFs of KdpSendWaitContinue @ 0x1406ABDDC
 * Callers:
 *     KdpReportCommandStringStateChange @ 0x1406AB528 (KdpReportCommandStringStateChange.c)
 *     KdpReportExceptionStateChange @ 0x1406AB694 (KdpReportExceptionStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x1406AB758 (KdpReportLoadSymbolsStateChange.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400431C0 (MmIsSessionAddress.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KdpGetContextEx @ 0x1401C2214 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x1401C23CC (KdpSetContextEx.c)
 *     KdpWriteCustomBreakpoint @ 0x1401C2500 (KdpWriteCustomBreakpoint.c)
 *     KdpSysReadIoSpace @ 0x1401C2A84 (KdpSysReadIoSpace.c)
 *     KdpSysReadMsr @ 0x1401C2B3C (KdpSysReadMsr.c)
 *     KdpSysWriteIoSpace @ 0x1401C2B68 (KdpSysWriteIoSpace.c)
 *     KdpSysWriteMsr @ 0x1401C2C18 (KdpSysWriteMsr.c)
 *     KeSwitchFrozenProcessor @ 0x1401C8EC0 (KeSwitchFrozenProcessor.c)
 *     xHalGetInterruptTranslator @ 0x1404BD620 (xHalGetInterruptTranslator.c)
 *     KdExitDebugger @ 0x1406AAD38 (KdExitDebugger.c)
 *     KdpFillMemory @ 0x1406AAF6C (KdpFillMemory.c)
 *     KdpGetBusData @ 0x1406AB074 (KdpGetBusData.c)
 *     KdpGetContext @ 0x1406AB114 (KdpGetContext.c)
 *     KdpReadControlSpace @ 0x1406AB200 (KdpReadControlSpace.c)
 *     KdpReadPhysicalMemory @ 0x1406AB290 (KdpReadPhysicalMemory.c)
 *     KdpReadPhysicalMemoryLong @ 0x1406AB3C0 (KdpReadPhysicalMemoryLong.c)
 *     KdpReadVirtualMemory @ 0x1406AB478 (KdpReadVirtualMemory.c)
 *     KdpRestoreBreakPointEx @ 0x1406AB864 (KdpRestoreBreakPointEx.c)
 *     KdpSearchMemory @ 0x1406AB95C (KdpSearchMemory.c)
 *     KdpSetContext @ 0x1406AC6D4 (KdpSetContext.c)
 *     KdpSysCheckLowMemory @ 0x1406AC788 (KdpSysCheckLowMemory.c)
 *     KdpSysWriteBusData @ 0x1406AC7FC (KdpSysWriteBusData.c)
 *     KdpWriteBreakPointEx @ 0x1406AC8F0 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x1406ACA94 (KdpWritePhysicalMemory.c)
 *     KdpGetStateChange @ 0x1406AD2BC (KdpGetStateChange.c)
 *     KdpSysWriteControlSpace @ 0x1406AD478 (KdpSysWriteControlSpace.c)
 *     KdpCopyMemoryChunks @ 0x1406AD60C (KdpCopyMemoryChunks.c)
 *     KdpAddBreakpoint @ 0x1406AD820 (KdpAddBreakpoint.c)
 *     KdpDeleteBreakpoint @ 0x1406AD99C (KdpDeleteBreakpoint.c)
 */

__int64 __fastcall KdpSendWaitContinue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 *v11; // rdx
  PVOID *v12; // r8
  char v13; // al
  int v15; // edi
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  __int64 v17; // [rsp+28h] [rbp-D8h]
  PVOID v18; // [rsp+40h] [rbp-C0h] BYREF
  void *v19; // [rsp+48h] [rbp-B8h]
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+54h] [rbp-ACh] BYREF
  void *v22; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+68h] [rbp-98h] BYREF
  int v25; // [rsp+6Ch] [rbp-94h] BYREF
  int v26; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v27[4]; // [rsp+74h] [rbp-8Ch] BYREF
  int v28; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v29[2]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v30; // [rsp+82h] [rbp-7Eh]
  PVOID *v31; // [rsp+88h] [rbp-78h]
  __int16 v32; // [rsp+90h] [rbp-70h] BYREF
  PVOID *v33; // [rsp+98h] [rbp-68h]
  __int16 v34; // [rsp+A0h] [rbp-60h] BYREF
  PVOID *v35; // [rsp+A8h] [rbp-58h]
  __int16 v36; // [rsp+B0h] [rbp-50h] BYREF
  PVOID *v37; // [rsp+B8h] [rbp-48h]
  __int16 v38; // [rsp+C0h] [rbp-40h] BYREF
  PVOID *v39; // [rsp+C8h] [rbp-38h]
  __int16 v40; // [rsp+D0h] [rbp-30h] BYREF
  PVOID *v41; // [rsp+D8h] [rbp-28h]
  __int16 v42; // [rsp+E0h] [rbp-20h] BYREF
  PVOID *v43; // [rsp+E8h] [rbp-18h]
  __int16 v44; // [rsp+F0h] [rbp-10h] BYREF
  PVOID *v45; // [rsp+F8h] [rbp-8h]
  __int16 v46; // [rsp+100h] [rbp+0h] BYREF
  PVOID *v47; // [rsp+108h] [rbp+8h]
  __int16 v48; // [rsp+110h] [rbp+10h] BYREF
  PVOID *v49; // [rsp+118h] [rbp+18h]
  __int16 v50; // [rsp+120h] [rbp+20h] BYREF
  PVOID *v51; // [rsp+128h] [rbp+28h]
  __int16 v52; // [rsp+130h] [rbp+30h] BYREF
  PVOID *v53; // [rsp+138h] [rbp+38h]
  __int16 v54; // [rsp+140h] [rbp+40h] BYREF
  PVOID *v55; // [rsp+148h] [rbp+48h]
  __int16 v56; // [rsp+150h] [rbp+50h] BYREF
  PVOID *v57; // [rsp+158h] [rbp+58h]
  __int16 v58; // [rsp+160h] [rbp+60h] BYREF
  PVOID *v59; // [rsp+168h] [rbp+68h]
  __int16 v60; // [rsp+170h] [rbp+70h] BYREF
  PVOID *v61; // [rsp+178h] [rbp+78h]
  __int16 v62; // [rsp+180h] [rbp+80h] BYREF
  PVOID *v63; // [rsp+188h] [rbp+88h]
  PVOID v64[7]; // [rsp+190h] [rbp+90h] BYREF

  v4 = 0;
  memset(v64, 0, sizeof(v64));
  KdpContextSent = 0;
  v31 = v64;
  WORD1(v18) = 4096;
  v30 = 56;
  v19 = &KdpMessageBuffer;
  KdSendPacket(7LL, a2, a3, &KdpContext);
  while ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
    {
      if ( (_DWORD)KeNumberProcessors_0 == 1 )
        KeQueryPerformanceCounter(0LL);
      v8 = KdReceivePacket(2LL, v29, &v18, v27, &KdpContext);
      if ( v8 == 2 )
        break;
      if ( v8 != 1 )
      {
        switch ( LODWORD(v64[0]) )
        {
          case 0x3130:
            KdpReadVirtualMemory((__int64)v64, &v18, v9);
            continue;
          case 0x3131:
            LODWORD(v64[1]) = KdpCopyMemoryChunks(v64[2], 5, (__int64)&v64[3] + 4);
            v11 = &v38;
            v38 = 56;
            v39 = v64;
            v12 = 0LL;
            goto LABEL_49;
          case 0x3132:
            v32 = 56;
            v33 = v64;
            KdpGetContext((__int64)v64, (__int64)&v18, a4);
            if ( !LODWORD(v64[1]) )
              KdpContextSent = 1;
            v11 = &v32;
            goto LABEL_48;
          case 0x3133:
            KdpSetContext(v64, &v18, a4);
            continue;
          case 0x3134:
            v59 = v64;
            LOBYTE(v9) = 1;
            v58 = 56;
            LODWORD(v64[3]) = KdpAddBreakpoint(v64[2], 204LL, v9, 0LL, BugCheckParameter4, v17);
            v11 = &v58;
            LODWORD(v64[1]) = LODWORD(v64[3]) == 0 ? 0xC0000001 : 0;
            v12 = 0LL;
            goto LABEL_49;
          case 0x3135:
            v43 = v64;
            v42 = 56;
            v13 = KdpDeleteBreakpoint(LODWORD(v64[2]));
            v11 = &v42;
            LODWORD(v64[1]) = v13 == 0 ? 0xC0000001 : 0;
            v12 = 0LL;
            goto LABEL_49;
          case 0x3136:
            LOBYTE(v4) = SLODWORD(v64[2]) >= 0;
            return v4;
          case 0x3137:
            KdpReadControlSpace((__int64)v64, (__int64)&v18, v9);
            continue;
          case 0x3138:
            v55 = v64;
            v54 = 56;
            LODWORD(v64[1]) = KdpSysWriteControlSpace(HIWORD(v64[0]), v64[2], v19, (unsigned __int16)v18, &v20);
            v11 = &v54;
            HIDWORD(v64[3]) = v20;
            goto LABEL_48;
          case 0x3139:
            v47 = v64;
            v46 = 56;
            HIDWORD(v64[3]) = 0;
            LODWORD(v64[1]) = KdpSysReadIoSpace(
                                1,
                                0,
                                1,
                                (unsigned __int16)v64[2],
                                (_BYTE *)&v64[3] + 4,
                                (int)v64[3],
                                &v28);
            v11 = &v46;
            v12 = 0LL;
            goto LABEL_49;
          case 0x313A:
            v63 = v64;
            v62 = 56;
            LODWORD(v64[1]) = KdpSysWriteIoSpace(
                                1,
                                0,
                                1,
                                (unsigned __int16)v64[2],
                                (unsigned __int8 *)&v64[3] + 4,
                                (int)v64[3],
                                &v25);
            v11 = &v62;
            v12 = 0LL;
            goto LABEL_49;
          case 0x313B:
            KiResumeForReboot = 1;
            KdExitDebugger(0LL);
            off_1402D2918();
            HalReturnToFirmware(3LL);
          case 0x313C:
            if ( SLODWORD(v64[2]) < 0 )
              return 0LL;
            KdpGetStateChange(v64, a4);
            return 1LL;
          case 0x313D:
            KdpReadPhysicalMemory((__int64)v64, (__int64)&v18, v9, (__int64)&KdpContext);
            continue;
          case 0x313E:
            KdpWritePhysicalMemory(v64, &v18);
            continue;
          case 0x3140:
          case 0x3141:
          case 0x3142:
          case 0x315A:
            continue;
          case 0x3144:
            v35 = v64;
            v34 = 56;
            LODWORD(v64[5]) = 0;
            LODWORD(v64[1]) = KdpSysReadIoSpace(
                                SHIDWORD(v64[2]),
                                (int)v64[3],
                                SHIDWORD(v64[3]),
                                (unsigned __int16)v64[4],
                                &v64[5],
                                (int)v64[2],
                                &v24);
            v11 = &v34;
            v12 = 0LL;
            goto LABEL_49;
          case 0x3145:
            v37 = v64;
            v36 = 56;
            LODWORD(v64[1]) = KdpSysWriteIoSpace(
                                SHIDWORD(v64[2]),
                                (int)v64[3],
                                SHIDWORD(v64[3]),
                                (unsigned __int16)v64[4],
                                (unsigned __int8 *)&v64[5],
                                (int)v64[2],
                                &v26);
            v11 = &v36;
            v12 = 0LL;
            goto LABEL_49;
          case 0x3146:
            v52 = 56;
            v53 = v64;
            v12 = 0LL;
            *(_OWORD *)&v64[2] = KdVersionBlock;
            v11 = &v52;
            LODWORD(v64[1]) = 0;
            v64[6] = (PVOID)qword_1402C7DE0;
            *(_OWORD *)&v64[4] = xmmword_1402C7DD0;
            LODWORD(v64[0]) = 12614;
            goto LABEL_49;
          case 0x3147:
            if ( !(unsigned int)KdpWriteBreakPointEx(v64, &v18) )
              continue;
            return 0LL;
          case 0x3148:
            KdpRestoreBreakPointEx((__int64)v64, &v18);
            continue;
          case 0x3149:
            KdExitDebugger(0LL);
            KeBugCheckEx(0xE2u, 0LL, 0LL, 0LL, 0LL);
          case 0x3150:
            return KeSwitchFrozenProcessor(HIWORD(v64[0]));
          case 0x3151:
            v56 = 56;
            v57 = v64;
            v11 = &v56;
            LODWORD(v64[1]) = -1073741823;
            v12 = 0LL;
            goto LABEL_49;
          case 0x3152:
            v41 = v64;
            v40 = 56;
            LODWORD(v64[1]) = KdpSysReadMsr((unsigned int)v64[2], &v22);
            v11 = &v40;
            v12 = 0LL;
            *(PVOID *)((char *)&v64[2] + 4) = v22;
            goto LABEL_49;
          case 0x3153:
            v45 = v64;
            v23 = *(unsigned __int64 *)((char *)&v64[2] + 4);
            v44 = 56;
            LODWORD(v64[1]) = KdpSysWriteMsr((unsigned int)v64[2], &v23);
            v11 = &v44;
            v12 = 0LL;
            goto LABEL_49;
          case 0x3156:
            KdpSearchMemory((__int64)v64, (__int64)&v18);
            continue;
          case 0x3157:
            KdpGetBusData(v64, (__int64)&v18, v9);
            continue;
          case 0x3158:
            v49 = v64;
            v48 = 56;
            LODWORD(v64[1]) = KdpSysWriteBusData(
                                LODWORD(v64[2]),
                                HIDWORD(v64[2]),
                                LODWORD(v64[3]),
                                HIDWORD(v64[3]),
                                v19,
                                v64[4],
                                &v21);
            v11 = &v48;
            v12 = 0LL;
            LODWORD(v64[4]) = v21;
            goto LABEL_49;
          case 0x3159:
            v50 = 56;
            v51 = v64;
            LODWORD(v64[1]) = KdpSysCheckLowMemory(4LL);
            v11 = &v50;
            v12 = 0LL;
            goto LABEL_49;
          case 0x315B:
            KdpFillMemory((__int64)v64, (__int64)&v18, v9);
            continue;
          case 0x315C:
            v15 = 0;
            if ( LODWORD(v64[4]) )
            {
              v15 = -1073741811;
            }
            else
            {
              LODWORD(v64[4]) = v64[2] >= MmHighestUserAddress && 2 - MmIsSessionAddress((__int64)v64[2]);
              HIDWORD(v64[4]) = 7;
            }
            LODWORD(v64[1]) = v15;
            v64[3] = 0LL;
            v60 = 56;
            v11 = &v60;
            v61 = v64;
            v12 = 0LL;
            goto LABEL_49;
          case 0x315F:
            KdpGetContextEx(v64, (unsigned __int16 *)&v18);
            continue;
          case 0x3160:
            KdpSetContextEx((__int64)v64, (__int64)&v18, a4);
            continue;
          case 0x3161:
            KdpWriteCustomBreakpoint((__int64)v64, 0x140000000LL, v9, v10);
            continue;
          case 0x3162:
            KdpReadPhysicalMemoryLong((__int64)v64, &v18, v9);
            continue;
          default:
            LOWORD(v18) = 0;
            v11 = (__int16 *)v29;
            LODWORD(v64[1]) = -1073741823;
LABEL_48:
            v12 = &v18;
LABEL_49:
            KdSendPacket(2LL, v11, v12, &KdpContext);
            continue;
        }
      }
    }
    KdSendPacket(7LL, a2, a3, &KdpContext);
  }
  return 1LL;
}
