/*
 * XREFs of KeFlushMultipleRangeCurrentTb @ 0x140156C90
 * Callers:
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x14003D650 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiDeletePteList @ 0x140093740 (MiDeletePteList.c)
 *     MmProtectSystemCacheView @ 0x140217958 (MmProtectSystemCacheView.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     VmFlushTb @ 0x14025B4C4 (VmFlushTb.c)
 *     ExFlushTb @ 0x140264FB0 (ExFlushTb.c)
 *     HvlFlushRangeListTb @ 0x140270884 (HvlFlushRangeListTb.c)
 */

__int64 __fastcall KeFlushMultipleRangeCurrentTb(unsigned int a1, void **a2, unsigned int a3)
{
  char v7; // r12
  __int64 result; // rax
  unsigned int v9; // ecx
  unsigned __int64 v10; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  void **v16; // r9
  __int64 v17; // rbx
  int v18; // r8d
  char *v19; // rdx
  __int64 v20; // r10
  __int64 v21; // r11
  bool i; // zf
  unsigned __int8 CurrentIrql; // bl
  __int128 v24; // [rsp+30h] [rbp-D0h]
  __int128 v25; // [rsp+40h] [rbp-C0h]
  _DWORD v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v27[21]; // [rsp+58h] [rbp-A8h] BYREF

  _ESI = 0;
  if ( a3 == 1 && KeGetCurrentThread()->ApcState.Process->SecurePid )
  {
    v7 = 1;
    goto LABEL_7;
  }
  result = (unsigned int)HvlEnlightenments;
  v7 = 0;
  if ( (HvlEnlightenments & 6) != 0 )
  {
    if ( (HvlEnlightenments & 2) != 0
      || (result = (unsigned int)KeNumberProcessors_0, (unsigned int)KeNumberProcessors_0 > 1) )
    {
LABEL_7:
      if ( KiKvaShadow )
      {
        if ( !a3 )
          goto LABEL_17;
        v9 = a3 - 1;
        if ( a3 == 1 )
        {
LABEL_10:
          v10 = 0LL;
          LOBYTE(_ESI) = 1;
LABEL_11:
          CurrentPrcb = KeGetCurrentPrcb();
          v26[1] = 0;
          v26[0] = 1310721;
          memset(v27, 0, 0xA0uLL);
          Group = CurrentPrcb->Group;
          GroupSetMember = CurrentPrcb->GroupSetMember;
          if ( CurrentPrcb->Group )
            LOWORD(v26[0]) = Group + 1;
          v27[Group] |= GroupSetMember;
          LOBYTE(v13) = v7;
          LOBYTE(v12) = _ESI;
          result = HvlFlushRangeListTb(v10, v26, v12, v13, a1, a2);
          goto LABEL_33;
        }
      }
      else
      {
        if ( !a3 )
          goto LABEL_10;
        v9 = a3 - 1;
        if ( a3 == 1 )
        {
          v10 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
          goto LABEL_11;
        }
      }
      if ( v9 != 1 )
        goto LABEL_10;
LABEL_17:
      v10 = 0LL;
      goto LABEL_11;
    }
  }
  if ( a1 )
  {
    v16 = a2;
    v17 = a1;
    v18 = (1 << a3) & 0xA;
    do
    {
      v19 = (char *)*v16;
      if ( v18 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
      {
        *(_QWORD *)&v25 = 1LL;
        *((_QWORD *)&v25 + 1) = *v16;
        __asm { invpcid esi, [rsp+140h+var_100] }
      }
      v20 = (unsigned __int64)*v16 & 0x7FF;
      result = -(__int64)((unsigned __int64)*v16 & 0x800);
      v21 = ((unsigned __int64)*v16 & 0x800) != 0 ? 0x200000LL : 4096LL;
      for ( i = v20 == 0; ; i = v20 == 0 )
      {
        __invlpg(v19);
        if ( i )
          break;
        v19 += v21;
        if ( v18 )
        {
          if ( KiFlushPcid )
          {
            result = (__int64)KeGetCurrentThread();
            if ( !*(_BYTE *)(*(_QWORD *)(result + 184) + 640LL) )
            {
              *(_QWORD *)&v24 = 1LL;
              *((_QWORD *)&v24 + 1) = v19;
              __asm { invpcid esi, [rsp+140h+var_110] }
            }
          }
        }
        --v20;
      }
      ++v16;
      --v17;
    }
    while ( v17 );
  }
LABEL_33:
  if ( VmTbFlushEnabled )
    result = VmFlushTb(a1, a2);
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(a1, a2, a3);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
