/*
 * XREFs of HvlpDetermineEnlightenments @ 0x1401EE7C4
 * Callers:
 *     HvlPhase0Initialize @ 0x1405C0150 (HvlPhase0Initialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     HviGetHypervisorFeatures @ 0x14016F420 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1401EEBEC (HvlpTryToLockCpuManagementVersion.c)
 *     HvlpGetRegister128 @ 0x1401F0338 (HvlpGetRegister128.c)
 *     HviGetEnlightenmentInformation @ 0x1402683B0 (HviGetEnlightenmentInformation.c)
 */

__int64 (__fastcall *(__fastcall *HvlpDetermineEnlightenments())(_DWORD *a1))()
{
  char v0; // si
  int v1; // eax
  int v2; // edi
  __int16 v3; // bp
  unsigned int v4; // ecx
  __int64 v5; // rbx
  bool v6; // zf
  int v7; // eax
  char v8; // r12
  char v9; // r15
  _SLIST_HEADER *CurrentPrcb; // rsi
  __int64 *v11; // rbx
  PHYSICAL_ADDRESS Next; // rbp
  PSLIST_ENTRY v13; // rax
  _SLIST_ENTRY *v14; // r14
  __int64 HypercallCachedPages; // rcx
  struct _KPRCB *v16; // rax
  __int64 v17; // rax
  __int64 (__fastcall *(__fastcall *result)(_DWORD *))(); // rax
  _SLIST_HEADER *v19; // [rsp+28h] [rbp-A0h]
  _SLIST_ENTRY *v20; // [rsp+30h] [rbp-98h]
  int v21; // [rsp+40h] [rbp-88h] BYREF
  int v22; // [rsp+44h] [rbp-84h]
  _DWORD v23[3]; // [rsp+50h] [rbp-78h] BYREF
  int v24; // [rsp+5Ch] [rbp-6Ch]
  __int64 v25; // [rsp+60h] [rbp-68h] BYREF
  int v26; // [rsp+70h] [rbp-58h] BYREF
  signed int v27; // [rsp+74h] [rbp-54h]
  _BYTE v28[7]; // [rsp+80h] [rbp-48h] BYREF
  _BYTE v29[9]; // [rsp+87h] [rbp-41h] BYREF
  int v30; // [rsp+C0h] [rbp-8h]

  HvlEnableIdleYield = 0;
  HviGetEnlightenmentInformation(&v26);
  HviGetHypervisorFeatures(&v25);
  HviGetHypervisorFeatures(v23);
  v0 = v26;
  v1 = HvlpFlags;
  v2 = (v26 & 1) != 0;
  if ( (v26 & 0x800) != 0 )
  {
    v1 = HvlpFlags | 0x100;
    HvlpFlags |= 0x100u;
  }
  if ( (v26 & 8) != 0 )
  {
    v2 |= 0x10u;
    v1 |= 2u;
    HvlpFlags = v1;
  }
  if ( (v26 & 0x200) != 0 )
  {
    v2 |= 0x2000u;
    v1 |= 0x20u;
    HvlpFlags = v1;
  }
  v3 = v24;
  if ( (v24 & 0x10) != 0 )
    v2 |= 0x80u;
  if ( (v26 & 2) != 0 )
    v2 |= 2u;
  if ( (v26 & 4) != 0 )
    v2 |= 4u;
  if ( (v26 & 0x20) != 0 )
    v2 |= 0x20u;
  if ( (v26 & 0x400) != 0 )
    v2 |= 0x8000u;
  if ( (v24 & 0x20) != 0 )
    v2 |= 0x200u;
  if ( v27 > 0 )
  {
    _BitScanReverse(&v4, v27);
    v2 |= 0x40u;
    HvlLongSpinCountMask = v27 | ((1 << v4) - 1);
  }
  v5 = v25;
  if ( (v25 & 0x100000000000LL) != 0 )
  {
    v6 = (unsigned __int8)HvlpTryToLockCpuManagementVersion() == 0;
    v1 = HvlpFlags;
    if ( !v6 )
    {
      v1 = HvlpFlags | 4;
      HvlpFlags |= 4u;
    }
  }
  if ( (v1 & 4) != 0 )
  {
    HvlpGetRegister128(516LL, &v21);
    if ( (v22 & 1) != 0 )
      v2 |= 0x400u;
    if ( (v22 & 2) != 0 )
      v2 |= 0x40000u;
    if ( (v22 & 4) != 0 )
      v2 |= 0x80000u;
    v7 = HvlpRootFlags;
    if ( (v21 & 1) != 0 )
    {
      v7 = HvlpRootFlags | 0x20;
      HvlpRootFlags |= 0x20u;
    }
    if ( (v21 & 2) != 0 )
    {
      v7 |= 0x40u;
      HvlpRootFlags = v7;
    }
    if ( v21 < 0 )
    {
      v2 |= 0x20008u;
      v7 |= 0x87u;
      HvlpRootFlags = v7;
    }
    if ( (v5 & 0x10000000000LL) != 0 )
      HvlpRootFlags = v7 | 0x10;
    v1 = HvlpFlags;
  }
  if ( (v3 & 0x80u) != 0 )
    v2 |= 0x800u;
  if ( (v3 & 8) == 0 )
  {
    v1 |= 8u;
    HvlpFlags = v1;
  }
  if ( (v5 & 0x202) == 0x202 )
    v2 |= 0x100u;
  if ( v0 < 0 )
    v2 |= 0x1000u;
  if ( (v5 & 0x200000000LL) != 0 )
  {
    if ( (v1 & 0x10) != 0 )
    {
      CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
      v13 = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
      v11 = (__int64 *)v13;
      if ( v13 )
      {
        Next = (PHYSICAL_ADDRESS)v13[1].Next;
        v8 = 1;
        v19 = CurrentPrcb;
        v14 = v13;
        v9 = BYTE4(CurrentPrcb);
LABEL_59:
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(70LL, 0LL, (PHYSICAL_ADDRESS)Next.QuadPart);
        HypercallCachedPages = 0LL;
        if ( (v8 & 1) != 0 )
        {
          v14[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
          RtlpInterlockedPushEntrySList(v19 + 1535, v14);
        }
        else if ( (v8 & 2) != 0 )
        {
          if ( (unsigned __int8)CurrentPrcb < 2u )
            __writecr8((unsigned __int8)CurrentPrcb);
        }
        else
        {
          v16 = KeGetCurrentPrcb();
          if ( (v9 & 1) != 0 )
          {
            HypercallCachedPages = (__int64)v16->HypercallCachedPages;
          }
          else if ( (v9 & 2) != 0 )
          {
            HypercallCachedPages = (__int64)v16->HypercallCachedPages + 4096;
          }
          *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16) = Next;
          if ( (_BYTE)CurrentPrcb )
            _enable();
        }
        v17 = *v11;
        v3 = v24;
        v5 = v25;
        HvlPartitionId = v17;
        v1 = HvlpFlags;
        goto LABEL_71;
      }
      v11 = (__int64 *)v28;
      if ( (((unsigned __int64)v28 ^ (unsigned __int64)v29) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        v11 = (__int64 *)((unsigned __int64)v29 & 0xFFFFFFFFFFFFF000uLL);
      v8 = 2;
      LOBYTE(v19) = KeGetCurrentIrql();
      LOBYTE(CurrentPrcb) = (_BYTE)v19;
      if ( (unsigned __int8)v19 < 2u )
        __writecr8(2uLL);
      v9 = BYTE4(v19);
      Next = MmGetPhysicalAddress(v11);
    }
    else
    {
      v8 = 4;
      LOWORD(CurrentPrcb) = v30;
      _disable();
      v9 = 2;
      LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
      HIDWORD(v19) = 2;
      LOBYTE(v19) = (_BYTE)CurrentPrcb;
      v11 = (__int64 *)((char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096);
      Next.QuadPart = v11[2];
    }
    v14 = v20;
    goto LABEL_59;
  }
LABEL_71:
  if ( (v3 & 0x400) != 0 )
    v2 |= 0x4000u;
  if ( (v5 & 4) != 0 )
  {
    v1 |= 0x40u;
    HvlpFlags = v1;
  }
  if ( (v3 & 0x4000) == 0 )
  {
    v1 |= 0x8000u;
    HvlpFlags = v1;
  }
  if ( (v5 & 0x1000000000000LL) != 0 )
    HvlpFlags = v1 | 0x80;
  if ( (v5 & 0x20000000000000LL) != 0 )
    v2 |= 0x10000u;
  result = HvlGetEnlightenmentInfo;
  qword_1403218D0 = (__int64)HvlGetEnlightenmentInfo;
  HvlpEnlightenments = ~HvlpRescindedEnlightenments & 0xFFFFF & v2;
  HvlEnlightenments = ~HvlpRescindedEnlightenments & 0xFFFFF & v2;
  return result;
}
