/*
 * XREFs of NVMeCompleteSubmissionQueueRequests @ 0x1C000666C
 * Callers:
 *     NVMeControllerCompleteAllIORequests @ 0x1C00069CC (NVMeControllerCompleteAllIORequests.c)
 *     NVMeLunCompleteAllIORequests @ 0x1C00078E0 (NVMeLunCompleteAllIORequests.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002E00 (_guard_dispatch_icall_nop.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     IsInternalSrb @ 0x1C00047E8 (IsInternalSrb.c)
 *     NVMeRequestComplete @ 0x1C0008530 (NVMeRequestComplete.c)
 */

void __fastcall NVMeCompleteSubmissionQueueRequests(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  __int64 v9; // rbp
  __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // r11d
  __int64 SrbExtension; // rax
  void (__fastcall *v15)(__int64, __int64, _QWORD); // rax

  if ( a3 )
  {
    v9 = a3;
    v11 = 0LL;
    do
    {
      v12 = _InterlockedExchange64((volatile __int64 *)(v11 + *(_QWORD *)(a2 + 32)), 0LL);
      if ( v12 )
      {
        v13 = *(_BYTE *)(v12 + 2) == 40
            ? *(unsigned __int8 *)(*(unsigned int *)(v12 + 52) + v12 + 10)
            : *(unsigned __int8 *)(v12 + 7);
        if ( (a6 != 1 || !IsInternalSrb(a1, v12)) && (a5 == 1 || a4 == v13) )
        {
          SrbExtension = GetSrbExtension(v12);
          *(_BYTE *)(v12 + 3) = a7;
          v15 = *(void (__fastcall **)(__int64, __int64, _QWORD))(SrbExtension + 4216);
          if ( v15 )
            v15(a1, v12, 0LL);
          NVMeRequestComplete(a1, v12);
        }
      }
      v11 += 16LL;
      --v9;
    }
    while ( v9 );
  }
}
