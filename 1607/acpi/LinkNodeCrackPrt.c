/*
 * XREFs of LinkNodeCrackPrt @ 0x1C0021C44
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0089870 (IrqArbAddAllocation.c)
 *     IrqArbGetNextAllocationRange @ 0x1C008BE50 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C008CDB4 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0004C64 (WPP_RECORDER_SF_s.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     AMLIEvalPkgDataElement @ 0x1C0021FFC (AMLIEvalPkgDataElement.c)
 *     RtlStringCchPrintfW @ 0x1C0024110 (RtlStringCchPrintfW.c)
 *     LinkNodepGetFilter @ 0x1C0027534 (LinkNodepGetFilter.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C004D554 (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_x @ 0x1C0055F8C (WPP_RECORDER_SF_x.c)
 *     PcisuppGetRoutingInfo @ 0x1C008AFF0 (PcisuppGetRoutingInfo.c)
 *     PcisuppGetBusSlotNumber @ 0x1C008C6F4 (PcisuppGetBusSlotNumber.c)
 *     PcisuppGetProgConfigHeader @ 0x1C008FD78 (PcisuppGetProgConfigHeader.c)
 *     PcisuppSetRoutingInfo @ 0x1C008FE60 (PcisuppSetRoutingInfo.c)
 *     PcisuppGetParentPdo @ 0x1C008FF34 (PcisuppGetParentPdo.c)
 *     LinkNodeFindByNsObj @ 0x1C00A1CC0 (LinkNodeFindByNsObj.c)
 *     LinkNodepAddAttachedDevice @ 0x1C00A1E68 (LinkNodepAddAttachedDevice.c)
 */

__int64 __fastcall LinkNodeCrackPrt(__int64 a1, _QWORD *a2, _DWORD *a3, char a4)
{
  PVOID v4; // rax
  unsigned __int8 v8; // r13
  __int64 result; // rax
  int v10; // ebx
  KIRQL v11; // di
  _QWORD *Filter; // rax
  _QWORD *v13; // r14
  __int64 *v14; // rdi
  __int64 *v15; // r15
  char v16; // r13
  __int64 v17; // rdx
  char v18; // di
  __int64 v19; // rdx
  unsigned int v20; // edi
  __int64 v21; // rdx
  _DWORD *v22; // rcx
  int ProgConfigHeader; // r14d
  int v24; // eax
  char v25; // cl
  _QWORD *PoolWithTag; // rdi
  KIRQL v27; // r13
  _QWORD *v28; // rax
  _QWORD *v29; // r14
  char v31; // [rsp+34h] [rbp-CCh]
  int v32; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v33; // [rsp+3Ch] [rbp-C4h]
  __int128 v34; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v37[40]; // [rsp+70h] [rbp-90h] BYREF
  PCSZ v38[5]; // [rsp+98h] [rbp-68h] BYREF
  struct _UNICODE_STRING String; // [rsp+C0h] [rbp-40h] BYREF
  struct _STRING v40; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v41[16]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v42; // [rsp+F0h] [rbp-10h]
  _DWORD v43[10]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v44[40]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v45[40]; // [rsp+158h] [rbp+58h] BYREF
  _DWORD v46[2]; // [rsp+180h] [rbp+80h] BYREF
  char v47; // [rsp+18Ah] [rbp+8Ah]
  int v48; // [rsp+1ACh] [rbp+ACh]
  unsigned __int8 v49; // [rsp+1BDh] [rbp+BDh]
  _QWORD v50[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  WCHAR SourceString; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v52; // [rsp+1E2h] [rbp+E2h]
  __int64 v53; // [rsp+1EAh] [rbp+EAh]
  __int16 v54; // [rsp+1F2h] [rbp+F2h]
  WCHAR v55; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v56; // [rsp+1FAh] [rbp+FAh]
  __int64 v57; // [rsp+202h] [rbp+102h]
  __int16 v58; // [rsp+20Ah] [rbp+10Ah]
  wchar_t pszDest[20]; // [rsp+210h] [rbp+110h] BYREF

  v4 = AcpiDriverObject;
  *a2 = 0LL;
  *a3 = 0;
  *(_QWORD *)&UnicodeString.Length = a3;
  v31 = 0;
  v33 = 0;
  v34 = 0LL;
  if ( *(PVOID *)(a1 + 8) == v4 && (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) & 0x2000000) != 0 )
    return 3221226021LL;
  if ( (int)PcisuppGetRoutingInfo(a1, &v34) >= 0 )
  {
    *a2 = v34;
    *a3 = DWORD2(v34);
    return 0LL;
  }
  if ( (int)PcisuppGetProgConfigHeader(a1, v46) < 0 )
    return 3221226021LL;
  v8 = v49;
  result = PcisuppGetParentPdo(a1, &DestinationString);
  if ( (int)result >= 0 )
  {
    result = PcisuppGetBusSlotNumber(a1, 0, (unsigned int)&v32, 0, 0LL);
    if ( (int)result >= 0 )
    {
      v10 = v32;
      while ( 1 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        Filter = (_QWORD *)LinkNodepGetFilter(
                             *(_QWORD *)(RootDeviceExtension + 720),
                             *(_QWORD *)&DestinationString.Length);
        v13 = Filter;
        if ( Filter )
          ObfReferenceObject(Filter);
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
        if ( v13 )
        {
          v14 = *(__int64 **)(v13[8] + 712LL);
          ObfDereferenceObject(v13);
          v15 = AMLIGetNamedChild(v14, 1414680671);
          if ( v15 )
            break;
        }
        result = PcisuppGetProgConfigHeader(*(_QWORD *)&DestinationString.Length, v46);
        if ( (int)result < 0 )
          return result;
        if ( v47 == 4 )
        {
          v8 = ((v10 & 0x1F) + v8 - 1) % 4 + 1;
        }
        else
        {
          if ( v47 != 7 )
            return 3221225473LL;
          v8 = v49;
        }
        result = PcisuppGetBusSlotNumber(*(_DWORD *)&DestinationString.Length, 0, (unsigned int)&v32, 0, 0LL);
        if ( (int)result >= 0 )
        {
          v10 = v32;
          result = PcisuppGetParentPdo(*(_QWORD *)&DestinationString.Length, &DestinationString);
          if ( (int)result >= 0 )
            continue;
        }
        return result;
      }
      v16 = v8 - 1;
      memset(v38, 0, sizeof(v38));
      memset(v43, 0, sizeof(v43));
      if ( (int)AMLIEvalNameSpaceObject(v15, v45, 0, 0LL) >= 0 )
      {
        v18 = 0;
        do
        {
          v19 = v33++;
          if ( (int)AMLIEvalPkgDataElement(v45, v19, v37) < 0 )
            break;
          if ( (int)AMLIEvalPkgDataElement(v37, 0LL, v41) >= 0 )
          {
            if ( (v10 & 0x1F) == WORD1(v42) )
            {
              if ( (_WORD)v42 != 0xFFFF )
              {
                WPP_RECORDER_SF_x(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v42,
                  20,
                  10,
                  (__int64)&WPP_87b6afdecf8d38c8b67e387aa711ef89_Traceguids,
                  v42);
                dword_1C0074698 = 0;
                byte_1C007469C = 0;
                v10 = v10 & 0xFFFFFF00 | (32 * (v42 & 7)) | (v42 >> 16) & 0x1F;
                v20 = -1073741811;
                FreeDataBuffs((__int64)v41, 1u);
                dword_1C0074698 = 0;
                byte_1C007469C = 0;
                FreeDataBuffs((__int64)v37, 1u);
                goto LABEL_48;
              }
              if ( (int)AMLIEvalPkgDataElement(v37, 1LL, v44) >= 0 )
              {
                if ( v44[16] == v16 )
                {
                  if ( (int)AMLIEvalPkgDataElement(v37, 2LL, v38) >= 0 )
                    v18 = 1;
                  v24 = AMLIEvalPkgDataElement(v37, 3LL, v43);
                  v25 = v18;
                  if ( v24 >= 0 )
                    v25 = 1;
                  v31 = v25;
                  v18 = v25;
                }
                dword_1C0074698 = 0;
                byte_1C007469C = 0;
                FreeDataBuffs((__int64)v44, 1u);
              }
            }
            dword_1C0074698 = 0;
            byte_1C007469C = 0;
            FreeDataBuffs((__int64)v41, 1u);
          }
          dword_1C0074698 = 0;
          byte_1C007469C = 0;
          FreeDataBuffs((__int64)v37, 1u);
        }
        while ( !v18 );
        dword_1C0074698 = 0;
        byte_1C007469C = 0;
        FreeDataBuffs((__int64)v45, 1u);
        v20 = -1073741275;
        if ( !v31 )
          goto LABEL_48;
        v21 = 2LL;
        if ( WORD1(v38[0]) == 2 && v38[4] )
        {
          if ( (int)AMLIGetNameSpaceObject(v38[4]) < 0 )
          {
            v20 = -1073741772;
LABEL_48:
            AMLIDereferenceHandleEx((volatile signed __int32 *)v15, v17);
            if ( a4 )
            {
              v55 = 0;
              v56 = 0LL;
              v57 = 0LL;
              v58 = 0;
              SourceString = 0;
              v52 = 0LL;
              v53 = 0LL;
              v54 = 0;
              RtlStringCchPrintfW(pszDest, 0x14uLL, L"IRQARB");
              RtlInitUnicodeString(&DestinationString, &SourceString);
              RtlInitUnicodeString(&String, &v55);
              if ( RtlIntegerToUnicodeString(v10 & 0x1F, 0, &DestinationString) >= 0
                && RtlIntegerToUnicodeString((unsigned __int8)v10 >> 5, 0, &String) >= 0 )
              {
                v50[0] = pszDest;
                v50[1] = &SourceString;
                v50[2] = &v55;
                if ( v20 == -1073741811 )
                {
                  ACPIWriteEventLogEntry(3221553161LL, v50, 3LL);
                }
                else if ( v20 == -1073741772 )
                {
                  RtlInitAnsiString(&v40, v38[4]);
                  RtlAnsiStringToUnicodeString(&UnicodeString, &v40, 1u);
                  v50[3] = UnicodeString.Buffer;
                  ACPIWriteEventLogEntry(3221553160LL, v50, 4LL);
                  RtlFreeUnicodeString(&UnicodeString);
                  WPP_RECORDER_SF_s(
                    WPP_GLOBAL_Control->DeviceExtension,
                    2,
                    20,
                    11,
                    (__int64)&WPP_87b6afdecf8d38c8b67e387aa711ef89_Traceguids,
                    (__int64)v38[4]);
                }
                else
                {
                  ACPIWriteEventLogEntry(3221553158LL, v50, 3LL);
                  WPP_RECORDER_SF_D(
                    WPP_GLOBAL_Control->DeviceExtension,
                    2,
                    20,
                    12,
                    (__int64)&WPP_87b6afdecf8d38c8b67e387aa711ef89_Traceguids,
                    v10);
                }
              }
            }
            return v20;
          }
          ProgConfigHeader = LinkNodeFindByNsObj(*(_QWORD *)&DestinationString.Length, a2);
          if ( ProgConfigHeader >= 0 )
          {
            *(_QWORD *)&v34 = *a2;
            DWORD2(v34) = 0;
            BYTE12(v34) = 0;
            PcisuppSetRoutingInfo(a1, &v34);
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x49706341u);
            if ( PoolWithTag )
            {
              v27 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
              v28 = (_QWORD *)LinkNodepGetFilter(*(_QWORD *)(RootDeviceExtension + 720), a1);
              v29 = v28;
              if ( v28 )
                ObfReferenceObject(v28);
              KeReleaseSpinLock(&AcpiDeviceTreeLock, v27);
              if ( v29 )
              {
                PoolWithTag[2] = *(_QWORD *)(v29[8] + 712LL);
                ObfDereferenceObject(v29);
              }
              else
              {
                PoolWithTag[2] = 0LL;
              }
              PoolWithTag[3] = v15;
              PoolWithTag[6] = a1;
              v15 = 0LL;
              *((_DWORD *)PoolWithTag + 8) = v10;
              ProgConfigHeader = PcisuppGetProgConfigHeader(a1, v46);
              if ( ProgConfigHeader >= 0 )
              {
                *((_DWORD *)PoolWithTag + 9) = v46[0];
                *((_DWORD *)PoolWithTag + 10) = v48;
              }
              LinkNodepAddAttachedDevice(*a2, PoolWithTag);
            }
          }
        }
        else if ( HIWORD(v43[0]) == 1 )
        {
          v22 = *(_DWORD **)&UnicodeString.Length;
          ProgConfigHeader = 0;
          BYTE12(v34) = 2;
          *(_QWORD *)&v34 = 0LL;
          **(_DWORD **)&UnicodeString.Length = v43[4];
          *a2 = 0LL;
          DWORD2(v34) = *v22;
          PcisuppSetRoutingInfo(a1, &v34);
        }
        else
        {
          ProgConfigHeader = -1073741701;
        }
        if ( v15 )
          AMLIDereferenceHandleEx((volatile signed __int32 *)v15, v21);
        dword_1C0074698 = 0;
        byte_1C007469C = 0;
        FreeDataBuffs((__int64)v38, 1u);
        dword_1C0074698 = 0;
        byte_1C007469C = 0;
        FreeDataBuffs((__int64)v43, 1u);
        return (unsigned int)ProgConfigHeader;
      }
      v20 = -1073741275;
      goto LABEL_48;
    }
  }
  return result;
}
