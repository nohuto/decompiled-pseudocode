/*
 * XREFs of DestroyInputContext @ 0x1C01D9C00
 * Callers:
 *     NtUserDestroyInputContext @ 0x1C02117F0 (NtUserDestroyInputContext.c)
 * Callees:
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     AssociateInputContext @ 0x1C0122608 (AssociateInputContext.c)
 */

__int64 __fastcall DestroyInputContext(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  struct tagBWL *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagBWL *v9; // rbp
  unsigned __int64 *i; // rsi
  __int64 v11; // rax

  v2 = a1[2];
  if ( v2 != gptiCurrent )
  {
    v3 = 5LL;
LABEL_3:
    UserSetLastError(v3);
    return 0LL;
  }
  if ( a1 == *(_QWORD **)(v2 + 704) )
  {
    v3 = 87LL;
    goto LABEL_3;
  }
  v5 = BuildHwndList(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 408) + 8LL) + 16LL) + 96LL),
         (struct tagWND *)3,
         a1[2]);
  v9 = v5;
  if ( v5 )
  {
    for ( i = (unsigned __int64 *)((char *)v5 + 32); *i != 1; ++i )
    {
      LOBYTE(v6) = 1;
      v11 = HMValidateHandleNoSecure(*i, v6, v7, v8);
      if ( v11 && *(_QWORD *)(v11 + 248) == *a1 )
        AssociateInputContext(v11, *(__int64 **)(v2 + 704));
    }
    FreeHwndList(v9);
  }
  if ( (*(_BYTE *)(gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + 17LL) & 1) == 0 )
    HMDestroyUnlockedObject();
  return 1LL;
}
