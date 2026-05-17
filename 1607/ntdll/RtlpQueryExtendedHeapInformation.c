/*
 * XREFs of RtlpQueryExtendedHeapInformation @ 0x1800EA6A4
 * Callers:
 *     RtlQueryHeapInformation @ 0x180081940 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlLockHeap @ 0x180019AC0 (RtlLockHeap.c)
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlUnlockHeap @ 0x180019E50 (RtlUnlockHeap.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180095020 (RtlpQueryExtendedInformationHeap.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA33C (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x1800EAB3C (RtlpQueryExtendedInformationAllHeaps.c)
 */

__int64 __fastcall RtlpQueryExtendedHeapInformation(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  int ExtendedInformationHeap; // r14d
  __int16 v10; // si
  unsigned __int64 v11; // rcx
  int Section; // esi
  __int64 v13; // rcx
  int v14; // eax
  char *v15; // r12
  _QWORD *v16; // rax
  _DWORD *v17; // r12
  _DWORD *v18; // rdi
  unsigned __int64 v19; // [rsp+50h] [rbp-B0h]
  __int64 v20; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall *v21)(__int64, _QWORD *); // [rsp+70h] [rbp-90h]
  _QWORD *v22; // [rsp+78h] [rbp-88h]
  int v23; // [rsp+80h] [rbp-80h] BYREF
  __int64 (__fastcall *v24)(__int64, _QWORD *); // [rsp+88h] [rbp-78h]
  _QWORD *v25; // [rsp+90h] [rbp-70h]
  _QWORD v26[12]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v27[16]; // [rsp+100h] [rbp+0h] BYREF
  int v28; // [rsp+190h] [rbp+90h]

  if ( (a1 & 7) != 0 )
    return 3221225485LL;
  if ( *(_QWORD *)a1 == -1LL )
  {
    v23 = *(_DWORD *)(a1 + 16);
    memset(v26, 0, sizeof(v26));
    if ( *(_QWORD *)(a1 + 24) )
    {
      v24 = *(__int64 (__fastcall **)(__int64, _QWORD *))(a1 + 24);
      v7 = *(_QWORD **)(a1 + 32);
    }
    else
    {
      v26[0] = a1;
      v26[10] = a1 + 40;
      v26[11] = a1 + a2;
      v7 = v26;
      v26[9] = a1;
      v24 = RtlpExtendedHeapInformationGenerator;
    }
    v25 = v7;
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
    v8 = *(_QWORD *)(a1 + 8);
    if ( v8 )
    {
      if ( *(_DWORD *)(v8 + 16) == -571548178 )
        v10 = *(_WORD *)(v8 + 36);
      else
        v10 = *(_WORD *)(v8 + 208);
      if ( v10 != -1 )
        RtlLockHeap(v8);
      ExtendedInformationHeap = RtlpQueryExtendedInformationHeap(*(_QWORD *)(a1 + 8), (__int64)&v23);
      if ( v10 != -1 )
        RtlUnlockHeap(*(_QWORD *)(a1 + 8));
    }
    else
    {
      ExtendedInformationHeap = RtlpQueryExtendedInformationAllHeaps(&v23);
    }
    RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock);
    if ( ExtendedInformationHeap == -2147483622 )
      ExtendedInformationHeap = 0;
    if ( v24 == RtlpExtendedHeapInformationGenerator )
    {
      if ( ExtendedInformationHeap >= 0 )
      {
        v11 = v26[10];
        if ( a3 )
          *a3 = v26[10] - v26[9];
        if ( v11 > v26[11] )
          return (unsigned int)-1073741789;
      }
    }
    else if ( a3 )
    {
      *a3 = 88LL;
    }
    return (unsigned int)ExtendedInformationHeap;
  }
  else
  {
    v19 = 0x10000LL;
    Section = NtCreateSection();
    if ( Section >= 0 )
    {
      while ( 1 )
      {
        memset(v27, 0, 0x50uLL);
        v13 = *(_QWORD *)a1;
        v27[2] = *(_QWORD *)(a1 + 8);
        LODWORD(v27[3]) = *(_DWORD *)(a1 + 16);
        v27[1] = v19;
        v27[0] = 0LL;
        v14 = RtlpHeapPerformCrossProcessQuery(v13, (__int64)v27);
        Section = v14;
        if ( v14 != -1073741789 )
          break;
        NtClose(0LL);
        v19 = (v27[4] + 0xFFFFLL) & 0xFFFFFFFFFFFF0000uLL;
        Section = NtCreateSection();
        if ( Section < 0 )
          return (unsigned int)Section;
      }
      if ( v14 >= 0 )
      {
        v20 = 0LL;
        Section = ZwMapViewOfSection();
        if ( Section >= 0 )
        {
          v15 = 0LL;
          memset(v26, 0, sizeof(v26));
          v21 = *(__int64 (__fastcall **)(__int64, _QWORD *))(a1 + 24);
          if ( v21 )
          {
            v16 = *(_QWORD **)(a1 + 32);
          }
          else
          {
            v26[0] = a1;
            v26[10] = a1 + 40;
            v26[9] = a1;
            v26[11] = a1 + a2;
            v16 = v26;
            v21 = RtlpExtendedHeapInformationGenerator;
          }
          v22 = v16;
          v28 = 0;
          if ( LODWORD(v27[5]) )
          {
            while ( 1 )
            {
              v17 = (_DWORD *)((unsigned __int64)(v15 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
              if ( (unsigned __int64)v17 >= v19 || (unsigned __int64)v17 >= 0x20000 || v20 + 0x10000 > (__int64)v19 )
                break;
              v18 = v17;
              if ( (unsigned __int64)(v17 + 4) >= 0x10000 || !*v17 )
              {
                NtUnmapViewOfSection();
                v20 += 0x10000LL;
                Section = ZwMapViewOfSection();
                if ( Section < 0 )
                  goto LABEL_48;
                v18 = 0LL;
                v17 = 0LL;
              }
              Section = v21((__int64)v18, v22);
              if ( Section >= 0 )
              {
                v15 = (char *)v17 + *((_QWORD *)v18 + 1);
                if ( (unsigned int)++v28 < LODWORD(v27[5]) )
                  continue;
              }
              goto LABEL_48;
            }
            Section = -1073741762;
          }
LABEL_48:
          if ( v21 == RtlpExtendedHeapInformationGenerator )
          {
            if ( Section >= 0 )
            {
              if ( a3 )
                *a3 = v26[10] - v26[9];
              if ( v26[10] > v26[11] )
                return (unsigned int)-1073741789;
            }
          }
          else if ( a3 )
          {
            *a3 = 88LL;
          }
        }
      }
    }
    return (unsigned int)Section;
  }
}
