/*
 * XREFs of SendGestureMessage @ 0x1C0203DD0
 * Callers:
 *     NtUserfnGESTURE @ 0x1C0222120 (NtUserfnGESTURE.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     AllocGestureInfo @ 0x1C0203A6C (AllocGestureInfo.c)
 *     ValidateGestureInfo @ 0x1C02040F8 (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C0204130 (_FreeGestureInfo.c)
 */

__int64 __fastcall SendGestureMessage(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *a7)
{
  const void *v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // xmm1_8
  __int64 v15; // rdi
  _OWORD v16[3]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v17; // [rsp+80h] [rbp-58h]
  __int128 v18; // [rsp+88h] [rbp-50h]
  __int128 v19; // [rsp+98h] [rbp-40h]
  __int128 v20; // [rsp+A8h] [rbp-30h]
  __int64 v21; // [rsp+B8h] [rbp-20h]

  v9 = 0LL;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a4 || !a3 || a3 > 0xFFFFFFFF || (unsigned int)a3 < 0x38 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  v10 = (unsigned int)(a3 - 56);
  v11 = a4;
  v12 = a4 + 56;
  if ( a4 + 56 < a4 || v12 > W32UserProbeAddress )
    v11 = W32UserProbeAddress;
  v18 = *(_OWORD *)v11;
  v19 = *(_OWORD *)(v11 + 16);
  v20 = *(_OWORD *)(v11 + 32);
  v13 = *(_QWORD *)(v11 + 48);
  v21 = v13;
  v16[0] = v18;
  v16[1] = v19;
  v16[2] = v20;
  v17 = v13;
  if ( (_DWORD)v13 != (_DWORD)v10 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( (_DWORD)v13 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v11) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & v12) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (unsigned int)v13 + a4 + 56;
    v10 = W32UserProbeAddress;
    if ( v11 > W32UserProbeAddress || v11 < v12 )
      *W32UserProbeAddress = 0;
    v9 = (const void *)v12;
  }
  if ( !(unsigned int)ValidateGestureInfo(v11, v10, v16) )
    return 0LL;
  v15 = AllocGestureInfo(a1, 0, (__int64)v16, v9);
  if ( !v15 )
    return 0LL;
  *a7 = _guard_dispatch_icall_fptr();
  if ( a6 >= 0x2AB && (a6 <= 0x2AC || a6 == 692) )
    FreeGestureInfo(v15, 1LL);
  return 1LL;
}
