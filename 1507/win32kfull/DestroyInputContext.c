/*
 * XREFs of DestroyInputContext @ 0x1C01E2EAC
 * Callers:
 *     NtUserDestroyInputContext @ 0x1C0218CC0 (NtUserDestroyInputContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     AssociateInputContext @ 0x1C00F7584 (AssociateInputContext.c)
 */

__int64 __fastcall DestroyInputContext(_QWORD *a1)
{
  __int64 v2; // rbx
  int v3; // ecx
  struct tagBWL *v5; // rax
  struct tagBWL *v6; // rbp
  unsigned __int64 *i; // rsi
  __int64 v8; // rax

  v2 = a1[2];
  if ( v2 != gptiCurrent )
  {
    v3 = 5;
LABEL_3:
    UserSetLastError(v3);
    return 0LL;
  }
  if ( a1 == *(_QWORD **)(v2 + 712) )
  {
    v3 = 87;
    goto LABEL_3;
  }
  v5 = BuildHwndList(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 416) + 8LL) + 16LL) + 96LL), 3, a1[2]);
  v6 = v5;
  if ( v5 )
  {
    for ( i = (unsigned __int64 *)((char *)v5 + 32); *i != 1; ++i )
    {
      v8 = HMValidateHandleNoSecure(*i, 1);
      if ( v8 && *(_QWORD *)(v8 + 248) == *a1 )
        AssociateInputContext(v8, *(__int64 **)(v2 + 712));
    }
    FreeHwndList(v6);
  }
  if ( (*(_BYTE *)(gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + 17LL) & 1) == 0 )
    HMDestroyUnlockedObject();
  return 1LL;
}
