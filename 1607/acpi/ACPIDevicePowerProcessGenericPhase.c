/*
 * XREFs of ACPIDevicePowerProcessGenericPhase @ 0x1C0012650
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C0011020 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIDeviceCompleteRequest @ 0x1C00109E0 (ACPIDeviceCompleteRequest.c)
 *     WPP_RECORDER_SF_qsLLdqss @ 0x1C00128D0 (WPP_RECORDER_SF_qsLLdqss.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIDevicePowerProcessGenericPhase(_SLIST_ENTRY *a1, __int64 a2, unsigned __int16 a3, char a4)
{
  _SLIST_ENTRY *Next; // rdi
  unsigned __int32 v8; // r13d
  _SLIST_ENTRY *v9; // rsi
  struct _SLIST_ENTRY *v10; // r14
  unsigned __int32 v11; // eax
  unsigned __int32 v12; // ebx
  __int64 v13; // rdx
  int v15; // edx
  char v16; // si
  __int64 v17; // rcx
  __int64 *v18; // r9
  __int64 v19; // r8
  const char *v20; // r8
  _SLIST_ENTRY *v21; // rcx
  struct _SLIST_ENTRY **v22; // rax
  struct _SLIST_ENTRY **v23; // rax
  char v24; // [rsp+A0h] [rbp+8h]

  Next = a1->Next;
  v24 = 1;
  if ( a1->Next == a1 )
    return 0LL;
  v8 = a3;
  do
  {
    v9 = Next->Next;
    v10 = Next;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)&Next[13], 1, 1);
    v12 = v11;
    if ( v11 >= v8 )
      KeBugCheckEx(0xA3u, 1uLL, 0xC16D7uLL, 0LL, 0LL);
    _mm_lfence();
    v13 = *(_QWORD *)(a2 + 8LL * v11);
    if ( v13 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)&Next[13], 1, v11);
      if ( (*(int (__fastcall **)(_SLIST_ENTRY *, __int64, _QWORD))(v13 + 8LL * SLODWORD(Next[3].Next)))(Next, v13, 0LL) >= 0 )
        continue;
      v12 = 0;
    }
    Next = v9;
    if ( v12 == 1 )
    {
      v15 = *((_DWORD *)&v10[3].Next + 2);
      if ( (v15 & 0x10000000) != 0
        || (v16 = 0, (v15 & 0x1000000) != 0)
        && ((v15 & 0x4000000) != 0
         || (*(_BYTE *)(*((_QWORD *)&v10[2].Next + 1) + 912LL) & 0x40) != 0
         && (v10[4].Next != &v10[4] || (v15 & 0x2000000) == 0 && AcpiPowerCurrentPagingPathTransitions)) )
      {
        v16 = 1;
      }
      v17 = *((_QWORD *)&v10[2].Next + 1);
      v18 = qword_1C002C340;
      if ( v17 )
      {
        v19 = *(_QWORD *)(v17 + 8);
        if ( (v19 & 0x200000000000LL) != 0 && (v19 & 0x400000000000LL) != 0 )
          v18 = *(__int64 **)(v17 + 568);
      }
      if ( v16 )
        v20 = "IS";
      else
        v20 = "NOT";
      WPP_RECORDER_SF_qsLLdqss(WPP_GLOBAL_Control->DeviceExtension, v15, (_DWORD)v20, (_DWORD)v18);
      if ( v16 )
      {
        v21 = v10->Next;
        v22 = (struct _SLIST_ENTRY **)*((_QWORD *)&v10->Next + 1);
        if ( *(&v10->Next->Next + 1) != v10 || *v22 != v10 )
          __fastfail(3u);
        *v22 = v21;
        *((_QWORD *)&v21->Next + 1) = v22;
        v10[6].Next = a1;
        v23 = (struct _SLIST_ENTRY **)qword_1C0073F58;
        if ( *(__int64 **)qword_1C0073F58 != &AcpiPowerBlockedOnDependencyList )
          __fastfail(3u);
        v10->Next = (_SLIST_ENTRY *)&AcpiPowerBlockedOnDependencyList;
        *((_QWORD *)&v10->Next + 1) = v23;
        *v23 = v10;
        qword_1C0073F58 = (__int64)v10;
        goto LABEL_8;
      }
    }
    else if ( !v12 )
    {
      goto LABEL_7;
    }
    v24 = 0;
LABEL_7:
    if ( v12 == 2 )
      goto LABEL_25;
LABEL_8:
    if ( a4 == 1 && !v12 )
LABEL_25:
      ACPIDeviceCompleteRequest(v10);
  }
  while ( Next != a1 );
  if ( !v24 )
    return 259LL;
  return 0LL;
}
