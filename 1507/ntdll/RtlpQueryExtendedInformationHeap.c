/*
 * XREFs of RtlpQueryExtendedInformationHeap @ 0x1800D9C20
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x1800D9644 (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x1800588CC (RtlpHpLargeAllocGetMetadata.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpGetContainingRange @ 0x1800D903C (RtlpGetContainingRange.c)
 *     RtlpGetHeapWalkEntryOverheadBytes @ 0x1800D9198 (RtlpGetHeapWalkEntryOverheadBytes.c)
 *     RtlpQueryMemoryUsageHeap @ 0x1800DA458 (RtlpQueryMemoryUsageHeap.c)
 *     RtlpWalkHeapInternal @ 0x1800DB648 (RtlpWalkHeapInternal.c)
 *     RtlpEstimateAllocatedSize @ 0x1800EED60 (RtlpEstimateAllocatedSize.c)
 *     RtlpHpSegReportCounters @ 0x1800F14B0 (RtlpHpSegReportCounters.c)
 */

__int64 __fastcall RtlpQueryExtendedInformationHeap(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // ebx
  bool v4; // zf
  unsigned int v6; // esi
  __int64 (__fastcall *v7)(_QWORD *, __int64); // r15
  char v8; // r14
  _QWORD *v9; // r12
  __int64 result; // rax
  unsigned int NumberOfHeaps; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  _DWORD *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r8
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r12
  __int16 v21; // si
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rsi
  int v24; // esi
  _DWORD *v25; // rcx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  _DWORD *v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r14
  int v31; // ecx
  _QWORD *v32; // rcx
  __int64 HeapWalkEntryOverheadBytes; // rax
  int v34; // ecx
  int v35; // ecx
  char v36; // [rsp+30h] [rbp-D0h]
  unsigned int v37; // [rsp+34h] [rbp-CCh]
  int HeapProtection; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v42[6]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v43; // [rsp+88h] [rbp-78h]
  PVOID BaseAddress; // [rsp+90h] [rbp-70h]
  _QWORD v45[22]; // [rsp+A0h] [rbp-60h] BYREF
  int v46; // [rsp+150h] [rbp+50h] BYREF
  _QWORD *Metadata; // [rsp+158h] [rbp+58h]
  _QWORD v48[12]; // [rsp+160h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 16) == -571548178;
  v6 = *(_DWORD *)a2;
  v7 = *(__int64 (__fastcall **)(_QWORD *, __int64))(a2 + 8);
  v37 = *(_DWORD *)a2;
  v39 = v2;
  v43 = 0LL;
  if ( v4 )
  {
    v8 = 1;
    v36 = 1;
    v9 = (_QWORD *)a1;
    BaseAddress = (PVOID)a1;
  }
  else
  {
    v4 = (*(_DWORD *)(a1 + 116) & 0x1000000) == 0;
    v8 = 0;
    v36 = 0;
    v9 = 0LL;
    BaseAddress = 0LL;
    if ( !v4 )
      return 3221225474LL;
  }
  if ( v6 != 0x80000000 )
  {
    memset(v45, 0, 0xA8uLL);
    LODWORD(v45[0]) = 2;
    v45[1] = 64LL;
    v45[2] = a1;
    if ( v8 )
    {
      v45[4] = *v9 << 12;
      v45[4] += v9[9] << 12;
      v45[5] = v9[1] << 12;
      v45[5] += v9[10] << 12;
      result = 0LL;
      LODWORD(v45[3]) = 0;
    }
    else
    {
      LODWORD(v45[3]) = *(unsigned __int8 *)(a1 + 378);
      result = RtlpQueryMemoryUsageHeap(a1, &v45[4], &v45[5]);
    }
    if ( (int)result < 0 )
      return result;
    result = v7(v45, v2);
    if ( (int)result < 0 || v6 < 3 )
      return result;
    memset(v42, 0, sizeof(v42));
    v19 = 0LL;
    v41 = 0LL;
    v20 = 0LL;
    v40 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          LOBYTE(v18) = v6 > 3;
          result = RtlpWalkHeapInternal(a1, v42, v18);
          if ( (_DWORD)result == -2147483622 )
            return 0LL;
          if ( (int)result < 0 )
            return result;
          v21 = WORD1(v42[2]);
          if ( (v42[2] & 0x20000) != 0 )
          {
            if ( v8 || (v42[2] & 0x80000000) != 0 )
            {
              v22 = v43;
              v23 = v42[0];
            }
            else
            {
              v22 = v42[0];
              v23 = v42[0];
              v43 = v42[0];
              if ( v42[0] + 24 == *(_QWORD *)(a1 + 288) )
                v23 = a1;
            }
            memset(v45, 0, 0xA8uLL);
            v45[4] = LODWORD(v42[3]);
            v45[3] = LODWORD(v42[3]) + (unsigned __int64)HIDWORD(v42[3]);
            LODWORD(v45[0]) = 3;
            v45[1] = 56LL;
            v45[2] = v23;
            result = v7(v45, v39);
            if ( (int)result < 0 )
              return result;
            if ( v8 )
            {
              v25 = BaseAddress;
            }
            else
            {
              if ( (v42[2] & 0x80000000) == 0 )
              {
                RtlpGetContainingRange(v22, v22, &v41, &v40, &v46, &HeapProtection);
                v19 = v41;
                v20 = v40;
                v24 = HeapProtection;
                goto LABEL_41;
              }
              v25 = (_DWORD *)a1;
            }
            v19 = v42[0];
            v20 = v42[0] + LODWORD(v42[3]);
            v41 = v42[0];
            v40 = v20;
            HeapProtection = RtlpGetHeapProtection(v25, 0);
            v24 = HeapProtection;
LABEL_41:
            memset(v45, 0, 0xA8uLL);
            LODWORD(v45[0]) = 4;
            v45[1] = 56LL;
            v45[3] = v20 - v19;
            v45[2] = v19;
            LODWORD(v45[4]) = 1;
            HIDWORD(v45[4]) = v24;
            result = v7(v45, v39);
            if ( (int)result < 0 )
              return result;
            goto LABEL_83;
          }
          if ( (v42[2] & 0x40000000) == 0 )
            break;
          memset(v45, 0, 0xA8uLL);
          LODWORD(v45[0]) = 3;
          v26 = 0LL;
          v45[1] = 56LL;
          Metadata = 0LL;
          if ( v8 )
          {
            v45[2] = v42[0];
            Metadata = RtlpHpLargeAllocGetMetadata((__int64)BaseAddress, v42[0]);
            v45[3] = ((Metadata[4] >> 12) + 1LL) << 12;
            v45[4] = Metadata[4] & 0xFFFFFFFFFFFFF000uLL;
          }
          else
          {
            v27 = v42[0] - 16;
            _m_prefetchw((const void *)(v42[0] - 16));
            if ( *(_BYTE *)(v27 + 15) == 5 )
              v27 -= 16LL * *(unsigned __int8 *)(v27 + 14);
            v26 = v27 - 48;
            v45[2] = (v27 - 48) & 0xFFFFFFFFFFFF0000uLL;
            v45[3] = *(_QWORD *)(v27 - 48 + 40);
            v45[4] = *(_QWORD *)(v27 - 48 + 32);
          }
          result = v7(v45, v39);
          if ( (int)result < 0 )
            return result;
          memset(v45, 0, 0xA8uLL);
          LODWORD(v45[0]) = 4;
          v45[1] = 56LL;
          if ( v8 )
          {
            v28 = BaseAddress;
            v45[2] = v42[0];
            v29 = Metadata[4] & 0xFFFFFFFFFFFFF000uLL;
          }
          else
          {
            v45[2] = v26;
            v28 = (_DWORD *)a1;
            v29 = *(_QWORD *)(v26 + 32);
          }
          v45[3] = v29;
          LODWORD(v45[4]) = 1;
          HIDWORD(v45[4]) = RtlpGetHeapProtection(v28, 0);
          result = v7(v45, v39);
          if ( (int)result < 0 )
            return result;
          v21 = WORD1(v42[2]);
          v30 = v42[0];
LABEL_67:
          if ( (v21 & 0xF0) != 0 )
          {
            memset(v48, 0, 0x58uLL);
            v48[4] = v42[1];
            LODWORD(v48[0]) = 5;
            v48[1] = 88LL;
            v48[2] = v30;
            v48[5] = RtlpGetHeapWalkEntryOverheadBytes((__int64)v42);
            v31 = 2;
            if ( (v21 & 0x4000) != 0 )
              v31 = 6;
            LODWORD(v48[3]) = v31;
            if ( (v21 & 1) != 0 )
              LODWORD(v48[3]) = v31 | 1;
            HIDWORD(v48[7]) = 1;
            v48[9] = v42[3];
            LODWORD(v48[10]) = v42[4];
            v48[8] = 32LL;
            v32 = v48;
            goto LABEL_81;
          }
          memset(v45, 0, 0xA8uLL);
          v45[4] = v42[1];
          LODWORD(v45[0]) = 5;
          v45[1] = 56LL;
          v45[2] = v30;
          HeapWalkEntryOverheadBytes = RtlpGetHeapWalkEntryOverheadBytes((__int64)v42);
          v34 = v45[3];
          v45[5] = HeapWalkEntryOverheadBytes;
          if ( (v21 & 1) != 0 )
            v34 = 1;
          LODWORD(v45[3]) = v34;
          if ( (v21 & 0x4000) != 0 )
          {
            v35 = v34 | 4;
LABEL_79:
            LODWORD(v45[3]) = v35;
            goto LABEL_80;
          }
          if ( v21 < 0 )
          {
            v35 = v34 | 8;
            goto LABEL_79;
          }
LABEL_80:
          v32 = v45;
LABEL_81:
          result = v7(v32, v39);
          if ( (int)result < 0 )
            return result;
          v8 = v36;
LABEL_83:
          v6 = v37;
        }
        if ( (v42[2] & 0x10000000) == 0 )
          break;
        v6 = v37;
        if ( v37 >= 4 )
        {
          memset(v45, 0, 0xA8uLL);
          v45[2] = v42[0];
          v45[3] = v42[1];
          LODWORD(v45[0]) = 4;
          v45[1] = 56LL;
          v45[4] = 0x100000002LL;
          result = v7(v45, v39);
          if ( (int)result < 0 )
            return result;
        }
      }
      v4 = v8 == 0;
      v30 = v42[0];
      if ( v4 && (v42[0] < v19 || v42[0] > v20) )
      {
        RtlpGetContainingRange(v43, v42[0], &v41, &v40, &v46, &HeapProtection);
        v6 = v37;
        if ( v37 < 4 )
        {
          v19 = v41;
          v20 = v40;
          goto LABEL_24;
        }
        memset(v45, 0, 0xA8uLL);
        v19 = v41;
        v20 = v40;
        LODWORD(v45[0]) = 4;
        v45[1] = 56LL;
        v45[3] = v40 - v41;
        HIDWORD(v45[4]) = HeapProtection;
        v45[2] = v41;
        LODWORD(v45[4]) = 1;
        result = v7(v45, v39);
        if ( (int)result < 0 )
          return result;
        v21 = WORD1(v42[2]);
        v30 = v42[0];
      }
      if ( v37 >= 4 )
        goto LABEL_67;
      v6 = v37;
LABEL_24:
      v8 = v36;
    }
  }
  memset(v45, 0, 0xA8uLL);
  LODWORD(v45[0]) = 0x80000000;
  v45[1] = 168LL;
  if ( v8 )
  {
    RtlpHpSegReportCounters(v9, v45);
  }
  else
  {
    LODWORD(v45[3]) = *(unsigned __int16 *)(a1 + 208);
    HIDWORD(v45[2]) = 1;
    v45[4] = a1;
    NumberOfHeaps = NtCurrentPeb()->NumberOfHeaps;
    v45[5] = *(_QWORD *)(a1 + 528);
    v12 = *(_QWORD *)(a1 + 536) - *(_QWORD *)(a1 + 624);
    HIDWORD(v45[3]) = NumberOfHeaps - 1;
    v45[6] = v12;
    v13 = RtlpEstimateAllocatedSize(a1);
    v14 = *(_DWORD **)(a1 + 312);
    v45[10] = v13;
    v45[11] = 16LL * *(_QWORD *)(a1 + 192);
    LODWORD(v45[9]) = *(_DWORD *)(a1 + 564);
    LODWORD(v45[13]) = *(_DWORD *)(a1 + 552);
    v45[8] = *(_QWORD *)(a1 + 544);
    LODWORD(v45[7]) = *(_DWORD *)(a1 + 560);
    HIDWORD(v45[13]) = *(_DWORD *)(a1 + 568);
    LODWORD(v45[14]) = HIDWORD(v45[13]);
    if ( v14 )
    {
      v15 = v14[4];
      LODWORD(v45[12]) = v15;
      if ( *(_QWORD *)v14 )
        LODWORD(v45[12]) = *(_DWORD *)(*(_QWORD *)v14 + 16LL) + v15;
    }
    v16 = *(_QWORD *)(a1 + 352);
    v17 = *(_DWORD *)(a1 + 580);
    HIDWORD(v45[12]) = v17;
    if ( v16 )
    {
      if ( *(_QWORD *)v16 != -1LL )
        v3 = *(_DWORD *)(*(_QWORD *)v16 + 36LL);
      HIDWORD(v45[12]) = v3 + v17;
    }
  }
  return v7(v45, v2);
}
