/*
 * XREFs of RtlpQueryExtendedInformationHeap @ 0x180095010
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x1800EA764 (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x1800436D4 (RtlpGetHeapProtection.c)
 *     RtlpWalkHeapInternal @ 0x18004D354 (RtlpWalkHeapInternal.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18004F94C (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpQueryMemoryUsageHeap @ 0x180089A80 (RtlpQueryMemoryUsageHeap.c)
 *     RtlpGetContainingRange @ 0x180089CFC (RtlpGetContainingRange.c)
 *     RtlpGetHeapWalkEntryOverheadBytes @ 0x18008A4B8 (RtlpGetHeapWalkEntryOverheadBytes.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpEstimateAllocatedSize @ 0x1800F7D40 (RtlpEstimateAllocatedSize.c)
 *     RtlpHpSegReportCounters @ 0x1800FA030 (RtlpHpSegReportCounters.c)
 */

__int64 __fastcall RtlpQueryExtendedInformationHeap(_DWORD *BaseAddress, __int64 a2)
{
  __int64 v2; // r15
  int v3; // ebx
  __int64 (__fastcall *v4)(_QWORD *, __int64); // r12
  unsigned int v6; // eax
  bool v7; // zf
  char v8; // r14
  _QWORD *v9; // rsi
  unsigned int NumberOfHeaps; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 result; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r14
  int v22; // eax
  int v23; // eax
  _QWORD *v24; // rcx
  __int16 v25; // si
  int v26; // eax
  unsigned __int64 v27; // r15
  _DWORD *v28; // rsi
  _DWORD *v29; // rcx
  int v30; // esi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  _DWORD *v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  char v36; // [rsp+30h] [rbp-D0h]
  int HeapProtection; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v38; // [rsp+38h] [rbp-C8h]
  __int64 v39; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall *v40)(_QWORD *, __int64); // [rsp+48h] [rbp-B8h]
  unsigned __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v43[6]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v44; // [rsp+90h] [rbp-70h]
  unsigned __int64 v45; // [rsp+98h] [rbp-68h]
  _QWORD v46[22]; // [rsp+A0h] [rbp-60h] BYREF
  int v47; // [rsp+150h] [rbp+50h] BYREF
  _QWORD *Metadata; // [rsp+158h] [rbp+58h]
  _QWORD v49[12]; // [rsp+160h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v3 = 0;
  v4 = *(__int64 (__fastcall **)(_QWORD *, __int64))(a2 + 8);
  v6 = *(_DWORD *)a2;
  v38 = *(_DWORD *)a2;
  v39 = v2;
  v7 = BaseAddress[4] == -571548178;
  v40 = v4;
  v45 = 0LL;
  if ( v7 )
  {
    v8 = 1;
    v36 = 1;
    v9 = BaseAddress;
    v44 = BaseAddress;
  }
  else
  {
    v7 = (BaseAddress[29] & 0x1000000) == 0;
    v8 = 0;
    v36 = 0;
    v9 = 0LL;
    v44 = 0LL;
    if ( !v7 )
      return 3221225474LL;
  }
  if ( v6 != 0x80000000 )
  {
    memset(v46, 0, 0xA8uLL);
    LODWORD(v46[0]) = 2;
    v46[1] = 64LL;
    v46[2] = BaseAddress;
    if ( v8 )
    {
      v46[4] = *v9 << 12;
      v46[4] += v9[9] << 12;
      v46[5] = v9[1] << 12;
      v46[5] += v9[10] << 12;
      result = 0LL;
      LODWORD(v46[3]) = 0;
    }
    else
    {
      LODWORD(v46[3]) = *((unsigned __int8 *)BaseAddress + 386);
      result = RtlpQueryMemoryUsageHeap((__int64)BaseAddress, &v46[4], &v46[5]);
    }
    if ( (int)result < 0 )
      return result;
    result = v4(v46, v2);
    if ( (int)result < 0 || v38 < 3 )
      return result;
    memset(v43, 0, sizeof(v43));
    v19 = 0LL;
    v41 = 0LL;
    v20 = 0LL;
    v42 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        LOBYTE(v18) = v38 > 3;
        result = RtlpWalkHeapInternal((__int64)BaseAddress, v43, v18);
        if ( (_DWORD)result == -2147483622 )
          return 0LL;
        if ( (int)result < 0 )
          return result;
        v25 = WORD1(v43[2]);
        if ( (v43[2] & 0x20000) == 0 )
          break;
        if ( v8 || (v43[2] & 0x80000000) != 0 )
        {
          v27 = v45;
          v28 = (_DWORD *)v43[0];
        }
        else
        {
          v27 = v43[0];
          v28 = (_DWORD *)v43[0];
          v45 = v43[0];
          if ( v43[0] + 24 == *((_QWORD *)BaseAddress + 36) )
            v28 = BaseAddress;
        }
        memset(v46, 0, 0xA8uLL);
        v46[3] = LODWORD(v43[3]) + (unsigned __int64)HIDWORD(v43[3]);
        v46[4] = LODWORD(v43[3]);
        LODWORD(v46[0]) = 3;
        v46[1] = 56LL;
        v46[2] = v28;
        result = v40(v46, v39);
        if ( (int)result < 0 )
          return result;
        if ( v8 )
        {
          v29 = v44;
        }
        else
        {
          if ( (v43[2] & 0x80000000) == 0 )
          {
            RtlpGetContainingRange(v27, v27, &v41, &v42, &v47, &HeapProtection);
            v19 = v41;
            v20 = v42;
            v30 = HeapProtection;
            goto LABEL_52;
          }
          v29 = BaseAddress;
        }
        v19 = v43[0];
        v20 = v43[0] + LODWORD(v43[3]);
        v41 = v43[0];
        v42 = v20;
        HeapProtection = RtlpGetHeapProtection(v29, 0);
        v30 = HeapProtection;
LABEL_52:
        memset(v46, 0, 0xA8uLL);
        v46[2] = v19;
        v31 = v20 - v19;
        LODWORD(v46[4]) = 1;
        HIDWORD(v46[4]) = v30;
LABEL_53:
        v46[3] = v31;
        v46[1] = 56LL;
        LODWORD(v46[0]) = 4;
        result = v40(v46, v39);
        if ( (int)result < 0 )
          return result;
      }
      if ( (v43[2] & 0x40000000) != 0 )
        break;
      if ( (v43[2] & 0x10000000) != 0 )
      {
        if ( v38 >= 4 )
        {
          memset(v46, 0, 0xA8uLL);
          v46[2] = v43[0];
          v31 = v43[1];
          v46[4] = 0x100000002LL;
          goto LABEL_53;
        }
      }
      else
      {
        v7 = v8 == 0;
        v21 = v43[0];
        if ( v7 && (v43[0] > v20 || v43[0] < v19) )
        {
          RtlpGetContainingRange(v45, v43[0], &v41, &v42, &v47, &HeapProtection);
          if ( v38 < 4 )
          {
            v19 = v41;
            v20 = v42;
            goto LABEL_78;
          }
          memset(v46, 0, 0xA8uLL);
          v19 = v41;
          v20 = v42;
          LODWORD(v46[0]) = 4;
          v46[3] = v42 - v41;
          HIDWORD(v46[4]) = HeapProtection;
          v46[1] = 56LL;
          v46[2] = v41;
          LODWORD(v46[4]) = 1;
          result = v40(v46, v39);
          if ( (int)result < 0 )
            return result;
          v25 = WORD1(v43[2]);
          v21 = v43[0];
        }
        if ( v38 < 4 )
          goto LABEL_78;
LABEL_23:
        if ( (v25 & 0xF0) == 0 )
        {
          memset(v46, 0, 0xA8uLL);
          v46[4] = v43[1];
          LODWORD(v46[0]) = 5;
          v46[1] = 56LL;
          v46[2] = v21;
          v46[5] = RtlpGetHeapWalkEntryOverheadBytes((__int64)v43);
          v22 = v46[3];
          if ( (v25 & 1) != 0 )
            v22 = 1;
          LODWORD(v46[3]) = v22;
          if ( (v25 & 0x4000) != 0 )
          {
            v23 = v22 | 4;
LABEL_29:
            LODWORD(v46[3]) = v23;
          }
          else if ( v25 < 0 )
          {
            v23 = v22 | 8;
            goto LABEL_29;
          }
          v24 = v46;
          goto LABEL_31;
        }
        memset(v49, 0, 0x58uLL);
        v49[4] = v43[1];
        LODWORD(v49[0]) = 5;
        v49[1] = 88LL;
        v49[2] = v21;
        v49[5] = RtlpGetHeapWalkEntryOverheadBytes((__int64)v43);
        v26 = 2;
        if ( (v25 & 0x4000) != 0 )
          v26 = 6;
        LODWORD(v49[3]) = v26;
        if ( (v25 & 1) != 0 )
          LODWORD(v49[3]) = v26 | 1;
        v49[9] = v43[3];
        LODWORD(v49[10]) = v43[4];
        HIDWORD(v49[7]) = 1;
        v24 = v49;
        v49[8] = 32LL;
LABEL_31:
        result = v40(v24, v39);
        if ( (int)result < 0 )
          return result;
LABEL_78:
        v8 = v36;
      }
    }
    memset(v46, 0, 0xA8uLL);
    LODWORD(v46[0]) = 3;
    v32 = 0LL;
    v46[1] = 56LL;
    Metadata = 0LL;
    if ( v8 )
    {
      v46[2] = v43[0];
      Metadata = RtlpHpLargeAllocGetMetadata((__int64)v44, v43[0]);
      v46[3] = ((Metadata[4] >> 12) + 1LL) << 12;
      v46[4] = Metadata[4] & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
      v35 = v43[0] - 16;
      _m_prefetchw((const void *)(v43[0] - 16));
      if ( *(_BYTE *)(v35 + 15) == 5 )
        v35 -= 16LL * *(unsigned __int8 *)(v35 + 14);
      v32 = v35 - 48;
      v46[2] = (v35 - 48) & 0xFFFFFFFFFFFF0000uLL;
      v46[3] = *(_QWORD *)(v35 - 48 + 40);
      v46[4] = *(_QWORD *)(v35 - 48 + 32);
    }
    result = v40(v46, v39);
    if ( (int)result < 0 )
      return result;
    memset(v46, 0, 0xA8uLL);
    LODWORD(v46[0]) = 4;
    v46[1] = 56LL;
    if ( v8 )
    {
      v33 = v44;
      v46[2] = v43[0];
      v34 = Metadata[4] & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
      v46[2] = v32;
      v33 = BaseAddress;
      v34 = *(_QWORD *)(v32 + 32);
    }
    v46[3] = v34;
    LODWORD(v46[4]) = 1;
    HIDWORD(v46[4]) = RtlpGetHeapProtection(v33, 0);
    result = v40(v46, v39);
    if ( (int)result < 0 )
      return result;
    v25 = WORD1(v43[2]);
    v21 = v43[0];
    goto LABEL_23;
  }
  memset(v46, 0, 0xA8uLL);
  LODWORD(v46[0]) = 0x80000000;
  v46[1] = 168LL;
  if ( v8 )
  {
    RtlpHpSegReportCounters(v9, v46);
  }
  else
  {
    LODWORD(v46[3]) = *((unsigned __int16 *)BaseAddress + 104);
    HIDWORD(v46[2]) = 1;
    v46[4] = BaseAddress;
    NumberOfHeaps = NtCurrentPeb()->NumberOfHeaps;
    v46[5] = *((_QWORD *)BaseAddress + 67);
    v11 = *((_QWORD *)BaseAddress + 68) - *((_QWORD *)BaseAddress + 79);
    HIDWORD(v46[3]) = NumberOfHeaps - 1;
    v46[6] = v11;
    v12 = RtlpEstimateAllocatedSize(BaseAddress);
    v13 = (_DWORD *)*((_QWORD *)BaseAddress + 39);
    v46[10] = v12;
    v46[11] = 16LL * *((_QWORD *)BaseAddress + 24);
    LODWORD(v46[9]) = BaseAddress[143];
    LODWORD(v46[13]) = BaseAddress[140];
    v46[8] = *((_QWORD *)BaseAddress + 69);
    LODWORD(v46[7]) = BaseAddress[142];
    HIDWORD(v46[13]) = BaseAddress[144];
    LODWORD(v46[14]) = HIDWORD(v46[13]);
    if ( v13 )
    {
      v14 = v13[4];
      LODWORD(v46[12]) = v14;
      if ( *(_QWORD *)v13 )
        LODWORD(v46[12]) = *(_DWORD *)(*(_QWORD *)v13 + 16LL) + v14;
    }
    v15 = *((_QWORD *)BaseAddress + 44);
    v16 = BaseAddress[147];
    HIDWORD(v46[12]) = v16;
    if ( v15 )
    {
      if ( *(_QWORD *)v15 != -1LL )
        v3 = *(_DWORD *)(*(_QWORD *)v15 + 36LL);
      HIDWORD(v46[12]) = v3 + v16;
    }
  }
  return v4(v46, v2);
}
