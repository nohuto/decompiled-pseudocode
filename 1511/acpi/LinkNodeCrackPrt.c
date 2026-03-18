/*
 * XREFs of LinkNodeCrackPrt @ 0x1C00172D4
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0069680 (IrqArbAddAllocation.c)
 *     IrqArbGetNextAllocationRange @ 0x1C006B740 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C006C928 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     AMLIGetNameSpaceObject @ 0x1C000E05C (AMLIGetNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     AMLIEvalPkgDataElement @ 0x1C0016B08 (AMLIEvalPkgDataElement.c)
 *     RtlStringCchPrintfW @ 0x1C001EA28 (RtlStringCchPrintfW.c)
 *     LinkNodepGetFilter @ 0x1C0020A18 (LinkNodepGetFilter.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C003AFD4 (ACPIWriteEventLogEntry.c)
 *     PcisuppGetRoutingInfo @ 0x1C0068AE0 (PcisuppGetRoutingInfo.c)
 *     PcisuppGetBusSlotNumber @ 0x1C006BED8 (PcisuppGetBusSlotNumber.c)
 *     PcisuppSetRoutingInfo @ 0x1C0072130 (PcisuppSetRoutingInfo.c)
 *     PcisuppGetProgConfigHeader @ 0x1C00728E0 (PcisuppGetProgConfigHeader.c)
 *     PcisuppGetParentPdo @ 0x1C00729C8 (PcisuppGetParentPdo.c)
 *     LinkNodeFindByNsObj @ 0x1C0080180 (LinkNodeFindByNsObj.c)
 *     LinkNodepAddAttachedDevice @ 0x1C0080328 (LinkNodepAddAttachedDevice.c)
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
  __int64 v14; // rdi
  volatile signed __int32 *v15; // r15
  char v16; // r13
  char v17; // di
  unsigned int v18; // edx
  unsigned int v19; // edi
  _DWORD *v20; // rcx
  int ProgConfigHeader; // r14d
  int v22; // eax
  char v23; // cl
  __int64 v24; // rcx
  _QWORD *PoolWithTag; // rdi
  KIRQL v26; // r13
  _QWORD *v27; // rax
  _QWORD *v28; // r14
  char v30; // [rsp+34h] [rbp-CCh]
  int v31; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v32; // [rsp+3Ch] [rbp-C4h]
  __int128 v33; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v36[40]; // [rsp+70h] [rbp-90h] BYREF
  PCSZ v37[5]; // [rsp+98h] [rbp-68h] BYREF
  struct _STRING v38; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v39[10]; // [rsp+D0h] [rbp-30h] BYREF
  struct _UNICODE_STRING String; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v41[16]; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v42; // [rsp+118h] [rbp+18h]
  _BYTE v43[40]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v44[40]; // [rsp+158h] [rbp+58h] BYREF
  _DWORD v45[2]; // [rsp+180h] [rbp+80h] BYREF
  char v46; // [rsp+18Ah] [rbp+8Ah]
  int v47; // [rsp+1ACh] [rbp+ACh]
  unsigned __int8 v48; // [rsp+1BDh] [rbp+BDh]
  _QWORD v49[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  WCHAR SourceString; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v51; // [rsp+1E2h] [rbp+E2h]
  __int64 v52; // [rsp+1EAh] [rbp+EAh]
  __int16 v53; // [rsp+1F2h] [rbp+F2h]
  WCHAR v54; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v55; // [rsp+1FAh] [rbp+FAh]
  __int64 v56; // [rsp+202h] [rbp+102h]
  __int16 v57; // [rsp+20Ah] [rbp+10Ah]
  wchar_t pszDest[20]; // [rsp+210h] [rbp+110h] BYREF

  v4 = AcpiDriverObject;
  *a2 = 0LL;
  *a3 = 0;
  *(_QWORD *)&UnicodeString.Length = a3;
  v30 = 0;
  v32 = 0;
  v33 = 0LL;
  if ( *(PVOID *)(a1 + 8) == v4 && (**(_DWORD **)(a1 + 64) & 0x2000000) != 0 )
    return 3221226021LL;
  if ( (int)PcisuppGetRoutingInfo(a1, &v33) >= 0 )
  {
    *a2 = v33;
    *a3 = DWORD2(v33);
    return 0LL;
  }
  if ( (int)PcisuppGetProgConfigHeader(a1, v45) < 0 )
    return 3221226021LL;
  v8 = v48;
  result = PcisuppGetParentPdo(a1, &DestinationString);
  if ( (int)result >= 0 )
  {
    result = PcisuppGetBusSlotNumber(a1, 0, (unsigned int)&v31, 0, 0LL);
    if ( (int)result >= 0 )
    {
      v10 = v31;
      while ( 1 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        Filter = (_QWORD *)LinkNodepGetFilter(
                             *(_QWORD *)(RootDeviceExtension + 712),
                             *(_QWORD *)&DestinationString.Length);
        v13 = Filter;
        if ( Filter )
          ObfReferenceObject(Filter);
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13[8] + 704LL);
          ObfDereferenceObject(v13);
          v15 = (volatile signed __int32 *)AMLIGetNamedChild(v14, 1414680671);
          if ( v15 )
            break;
        }
        result = PcisuppGetProgConfigHeader(*(_QWORD *)&DestinationString.Length, v45);
        if ( (int)result < 0 )
          return result;
        if ( v46 == 4 )
        {
          v8 = ((v10 & 0x1F) + v8 - 1) % 4 + 1;
        }
        else
        {
          if ( v46 != 7 )
            return 3221225473LL;
          v8 = v48;
        }
        result = PcisuppGetBusSlotNumber(*(_DWORD *)&DestinationString.Length, 0, (unsigned int)&v31, 0, 0LL);
        if ( (int)result >= 0 )
        {
          v10 = v31;
          result = PcisuppGetParentPdo(*(_QWORD *)&DestinationString.Length, &DestinationString);
          if ( (int)result >= 0 )
            continue;
        }
        return result;
      }
      v16 = v8 - 1;
      memset(v37, 0, sizeof(v37));
      memset(v39, 0, sizeof(v39));
      if ( (int)AMLIEvalNameSpaceObject((__int64 *)v15, v43, 0, 0LL) < 0 )
      {
        v19 = -1073741275;
LABEL_48:
        AMLIDereferenceHandleEx(v15);
        if ( !a4 )
          return v19;
        v54 = 0;
        v55 = 0LL;
        v56 = 0LL;
        v57 = 0;
        SourceString = 0;
        v51 = 0LL;
        v52 = 0LL;
        v53 = 0;
        RtlStringCchPrintfW(pszDest, 0x14uLL, L"IRQARB");
        RtlInitUnicodeString(&DestinationString, &SourceString);
        RtlInitUnicodeString(&String, &v54);
        if ( RtlIntegerToUnicodeString(v10 & 0x1F, 0, &DestinationString) < 0
          || RtlIntegerToUnicodeString((unsigned __int8)v10 >> 5, 0, &String) < 0 )
        {
          return v19;
        }
        v49[0] = pszDest;
        v49[1] = &SourceString;
        v49[2] = &v54;
        if ( v19 == -1073741811 )
        {
          v24 = 3221553161LL;
        }
        else
        {
          if ( v19 == -1073741772 )
          {
            RtlInitAnsiString(&v38, v37[4]);
            RtlAnsiStringToUnicodeString(&UnicodeString, &v38, 1u);
            v49[3] = UnicodeString.Buffer;
            ACPIWriteEventLogEntry(3221553160LL, v49, 4LL);
            RtlFreeUnicodeString(&UnicodeString);
            return v19;
          }
          v24 = 3221553158LL;
        }
        ACPIWriteEventLogEntry(v24, v49, 3LL);
        return v19;
      }
      v17 = 0;
      do
      {
        v18 = v32++;
        if ( (int)AMLIEvalPkgDataElement((__int64)v43, v18, v36) < 0 )
          break;
        if ( (int)AMLIEvalPkgDataElement((__int64)v36, 0, v41) >= 0 )
        {
          if ( (v10 & 0x1F) == WORD1(v42) )
          {
            if ( (_WORD)v42 != 0xFFFF )
            {
              dword_1C005A228 = 0;
              byte_1C005A22C = 0;
              v10 = v10 & 0xFFFFFF00 | (32 * (v42 & 7)) | (v42 >> 16) & 0x1F;
              v19 = -1073741811;
              FreeDataBuffs((__int64)v41, 1u);
              dword_1C005A228 = 0;
              byte_1C005A22C = 0;
              FreeDataBuffs((__int64)v36, 1u);
              goto LABEL_48;
            }
            if ( (int)AMLIEvalPkgDataElement((__int64)v36, 1u, v44) >= 0 )
            {
              if ( v44[16] == v16 )
              {
                if ( (int)AMLIEvalPkgDataElement((__int64)v36, 2u, v37) >= 0 )
                  v17 = 1;
                v22 = AMLIEvalPkgDataElement((__int64)v36, 3u, v39);
                v23 = v17;
                if ( v22 >= 0 )
                  v23 = 1;
                v30 = v23;
                v17 = v23;
              }
              dword_1C005A228 = 0;
              byte_1C005A22C = 0;
              FreeDataBuffs((__int64)v44, 1u);
            }
          }
          dword_1C005A228 = 0;
          byte_1C005A22C = 0;
          FreeDataBuffs((__int64)v41, 1u);
        }
        dword_1C005A228 = 0;
        byte_1C005A22C = 0;
        FreeDataBuffs((__int64)v36, 1u);
      }
      while ( !v17 );
      dword_1C005A228 = 0;
      byte_1C005A22C = 0;
      FreeDataBuffs((__int64)v43, 1u);
      v19 = -1073741275;
      if ( !v30 )
        goto LABEL_48;
      if ( WORD1(v37[0]) == 2 && v37[4] )
      {
        if ( (int)AMLIGetNameSpaceObject(v37[4]) < 0 )
        {
          v19 = -1073741772;
          goto LABEL_48;
        }
        ProgConfigHeader = LinkNodeFindByNsObj(*(_QWORD *)&DestinationString.Length, a2);
        if ( ProgConfigHeader >= 0 )
        {
          *(_QWORD *)&v33 = *a2;
          DWORD2(v33) = 0;
          BYTE12(v33) = 0;
          PcisuppSetRoutingInfo(a1, &v33);
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x49706341u);
          if ( PoolWithTag )
          {
            v26 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
            v27 = (_QWORD *)LinkNodepGetFilter(*(_QWORD *)(RootDeviceExtension + 712), a1);
            v28 = v27;
            if ( v27 )
              ObfReferenceObject(v27);
            KeReleaseSpinLock(&AcpiDeviceTreeLock, v26);
            if ( v28 )
            {
              PoolWithTag[2] = *(_QWORD *)(v28[8] + 704LL);
              ObfDereferenceObject(v28);
            }
            else
            {
              PoolWithTag[2] = 0LL;
            }
            PoolWithTag[3] = v15;
            PoolWithTag[6] = a1;
            v15 = 0LL;
            *((_DWORD *)PoolWithTag + 8) = v10;
            ProgConfigHeader = PcisuppGetProgConfigHeader(a1, v45);
            if ( ProgConfigHeader >= 0 )
            {
              *((_DWORD *)PoolWithTag + 9) = v45[0];
              *((_DWORD *)PoolWithTag + 10) = v47;
            }
            LinkNodepAddAttachedDevice(*a2, PoolWithTag);
          }
        }
      }
      else if ( HIWORD(v39[0]) == 1 )
      {
        v20 = *(_DWORD **)&UnicodeString.Length;
        ProgConfigHeader = 0;
        BYTE12(v33) = 2;
        *(_QWORD *)&v33 = 0LL;
        **(_DWORD **)&UnicodeString.Length = v39[4];
        *a2 = 0LL;
        DWORD2(v33) = *v20;
        PcisuppSetRoutingInfo(a1, &v33);
      }
      else
      {
        ProgConfigHeader = -1073741701;
      }
      if ( v15 )
        AMLIDereferenceHandleEx(v15);
      dword_1C005A228 = 0;
      byte_1C005A22C = 0;
      FreeDataBuffs((__int64)v37, 1u);
      dword_1C005A228 = 0;
      byte_1C005A22C = 0;
      FreeDataBuffs((__int64)v39, 1u);
      return (unsigned int)ProgConfigHeader;
    }
  }
  return result;
}
