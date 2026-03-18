/*
 * XREFs of ACPIDevicePowerProcessGenericPhase @ 0x1C001C470
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001C040 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIDeviceCompleteRequest @ 0x1C001C684 (ACPIDeviceCompleteRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIDevicePowerProcessGenericPhase(_SLIST_ENTRY *a1, __int64 a2, unsigned __int16 a3, char a4)
{
  _SLIST_ENTRY *Next; // rbx
  unsigned int v6; // r9d
  char v9; // r13
  unsigned __int32 v10; // r12d
  _SLIST_ENTRY *v11; // rdi
  struct _SLIST_ENTRY *v12; // rsi
  unsigned __int32 v13; // eax
  unsigned __int32 v14; // edx
  __int64 v15; // r8
  int v17; // r8d
  int v18; // eax
  _SLIST_ENTRY *v19; // rcx
  struct _SLIST_ENTRY **v20; // rax
  __int64 **v21; // rax

  Next = a1->Next;
  v6 = 0;
  v9 = 1;
  if ( a1->Next == a1 )
    return v6;
  v10 = a3;
  do
  {
    v11 = Next->Next;
    v12 = Next;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)&Next[13], 1, 1);
    v14 = v13;
    if ( v13 >= v10 )
      KeBugCheckEx(0xA3u, 1uLL, 0xC16B4uLL, 0LL, 0LL);
    _mm_lfence();
    v15 = *(_QWORD *)(a2 + 8LL * v13);
    if ( v15 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)&Next[13], 1, v13);
      v18 = (*(__int64 (__fastcall **)(_SLIST_ENTRY *, _QWORD, __int64, _QWORD))(v15 + 8LL * SLODWORD(Next[3].Next)))(
              Next,
              v13,
              v15,
              0LL);
      v6 = 0;
      if ( v18 >= 0 )
        continue;
      v14 = 0;
    }
    Next = v11;
    if ( v14 == 1 )
    {
      v17 = *((_DWORD *)&v12[3].Next + 2);
      if ( (v17 & 0x10000000) != 0
        || (v17 & 0x1000000) != 0
        && ((v17 & 0x4000000) != 0
         || (*(_BYTE *)(*((_QWORD *)&v12[2].Next + 1) + 904LL) & 0x40) != 0
         && (v12[4].Next != &v12[4] || (v17 & 0x2000000) == 0 && AcpiPowerCurrentPagingPathTransitions)) )
      {
        v19 = v12->Next;
        v20 = (struct _SLIST_ENTRY **)*((_QWORD *)&v12->Next + 1);
        if ( *(&v12->Next->Next + 1) != v12 || *v20 != v12 )
          __fastfail(3u);
        *v20 = v19;
        *((_QWORD *)&v19->Next + 1) = v20;
        v12[6].Next = a1;
        v21 = (__int64 **)qword_1C0059B58;
        v12->Next = (_SLIST_ENTRY *)&AcpiPowerBlockedOnDependencyList;
        *((_QWORD *)&v12->Next + 1) = v21;
        if ( *v21 != &AcpiPowerBlockedOnDependencyList )
          __fastfail(3u);
        *v21 = (__int64 *)v12;
        qword_1C0059B58 = (__int64)v12;
        goto LABEL_8;
      }
    }
    else if ( !v14 )
    {
      goto LABEL_7;
    }
    v9 = 0;
LABEL_7:
    if ( v14 == 2 )
      goto LABEL_19;
LABEL_8:
    if ( a4 == 1 && !v14 )
    {
LABEL_19:
      ACPIDeviceCompleteRequest(v12);
      v6 = 0;
    }
  }
  while ( Next != a1 );
  if ( !v9 )
    return 259;
  return v6;
}
