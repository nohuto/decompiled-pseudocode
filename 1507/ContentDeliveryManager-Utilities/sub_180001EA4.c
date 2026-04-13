/*
 * XREFs of sub_180001EA4 @ 0x180001EA4
 * Callers:
 *     sub_180002200 @ 0x180002200 (sub_180002200.c)
 * Callees:
 *     sub_18000150C @ 0x18000150C (sub_18000150C.c)
 *     sub_180001740 @ 0x180001740 (sub_180001740.c)
 *     sub_18000175C @ 0x18000175C (sub_18000175C.c)
 *     sub_180001778 @ 0x180001778 (sub_180001778.c)
 *     sub_180001794 @ 0x180001794 (sub_180001794.c)
 *     sub_1800017B0 @ 0x1800017B0 (sub_1800017B0.c)
 *     sub_1800019C0 @ 0x1800019C0 (sub_1800019C0.c)
 *     sub_180002510 @ 0x180002510 (sub_180002510.c)
 *     sub_180002604 @ 0x180002604 (sub_180002604.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

void __fastcall sub_180001EA4(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        _WORD *a9,
        char a10,
        wchar_t *lpOutputString,
        int a12,
        _BYTE *a13,
        int a14,
        __int64 a15)
{
  int v17; // ebx
  int v18; // edi
  int v19; // eax
  char v20; // r14
  _WORD *v21; // rax
  DWORD CurrentThreadId; // eax
  __int64 (__fastcall *v23)(_QWORD); // rbx
  __int64 v24; // rax
  char v25; // r12
  unsigned __int64 v26; // r9
  __int64 i; // rbx
  __int64 v28; // rbp
  char v29; // al
  __int64 (__fastcall *v30)(_QWORD, _QWORD); // rdi
  __int64 (__fastcall *v31)(_QWORD, _QWORD); // rcx
  void *retaddr; // [rsp+78h] [rbp+0h]

  v17 = a8;
  v18 = 0;
  *lpOutputString = 0;
  *a13 = 0;
  if ( a7 )
  {
    switch ( a7 )
    {
      case 1:
        v19 = sub_18000175C(a8);
        break;
      case 2:
        v19 = sub_180001778(a8);
        break;
      case 3:
        if ( a8 >= 0 )
        {
          v17 = -2147024228;
          sub_180002510(a1, a2, a3, a4, a5, a6, 3, -2147024228);
        }
        v19 = sub_180001794(v17);
        break;
      case 4:
        v19 = sub_1800017B0(a8);
        break;
      default:
        goto LABEL_14;
    }
  }
  else
  {
    v19 = sub_180001740(a8);
  }
  v18 = v19;
LABEL_14:
  *(_DWORD *)a15 = a7;
  v20 = 1;
  *(_DWORD *)(a15 + 4) = v17;
  *(_DWORD *)(a15 + 8) = _InterlockedIncrement(&dword_18003AC5C);
  v21 = a9;
  if ( !a9 || !*a9 )
    v21 = 0LL;
  *(_QWORD *)(a15 + 16) = v21;
  CurrentThreadId = GetCurrentThreadId();
  v23 = (__int64 (__fastcall *)(_QWORD))qword_18003ABF0;
  *(_DWORD *)(a15 + 24) = CurrentThreadId;
  *(_DWORD *)(a15 + 56) = a2;
  *(_QWORD *)(a15 + 32) = a5;
  *(_QWORD *)(a15 + 128) = a6;
  *(_QWORD *)(a15 + 48) = a3;
  *(_QWORD *)(a15 + 136) = a1;
  *(_DWORD *)(a15 + 60) = v18;
  *(_QWORD *)(a15 + 40) = a4;
  *(_QWORD *)(a15 + 64) = 0LL;
  *(_DWORD *)(a15 + 96) = 0;
  *(_QWORD *)(a15 + 104) = 0LL;
  *(_QWORD *)(a15 + 112) = 0LL;
  *(_DWORD *)(a15 + 72) = 0;
  *(_QWORD *)(a15 + 80) = 0LL;
  *(_QWORD *)(a15 + 88) = 0LL;
  if ( v23 )
    v24 = v23(v23);
  else
    v24 = 0LL;
  *(_QWORD *)(a15 + 120) = v24;
  v25 = 0;
  *a13 = 0;
  v26 = GetCurrentThreadId();
  for ( i = qword_18003AD90[v26 % 0x14]; i; i = *(_QWORD *)(i + 16) )
  {
    if ( *(_DWORD *)(i + 8) == (_DWORD)v26 )
      goto LABEL_25;
  }
  i = 0LL;
LABEL_25:
  if ( i && *(_QWORD *)i )
  {
    *a13 = 0;
    if ( sub_1800019C0(a15, *(_QWORD *)i, a13, 1024LL) )
      *(_QWORD *)(a15 + 64) = a13;
    v28 = *(_QWORD *)i;
    do
    {
      v29 = (***(__int64 (__fastcall ****)(_QWORD, __int64))(v28 + 8))(*(_QWORD *)(v28 + 8), a15);
      v28 = *(_QWORD *)(v28 + 16);
      v25 |= v29;
    }
    while ( v28 );
  }
  v30 = qword_18003ABD0;
  if ( qword_18003ABD0 )
  {
    v31 = qword_18003ABD0;
    LOBYTE(v31) = v25;
    qword_18003ABD0(v31, a15);
    v30 = qword_18003ABD0;
  }
  if ( qword_18003ABC8 )
  {
    qword_18003ABC8(a15);
    v30 = qword_18003ABD0;
  }
  if ( *(int *)(a15 + 4) >= 0 && a7 != 4 )
  {
    sub_180002604(retaddr, 2886LL, "internal\\sdk\\inc\\wil\\result.h");
    JUMPOUT(0x1800021F7LL);
  }
  if ( !byte_18003ABF9 && (v30 || qword_18003AC00) )
    v20 = 0;
  if ( a10 || v20 )
  {
    if ( qword_18003AC00 )
      qword_18003AC00(a15, lpOutputString, 2048LL);
    if ( !*lpOutputString )
      sub_18000150C(lpOutputString, 2048LL, a15);
    if ( v20 )
      OutputDebugStringW(lpOutputString);
  }
  else if ( qword_18003AC00 )
  {
    if ( !byte_18003ABF8 )
      qword_18003AC00(a15, 0LL, 0LL);
  }
}
