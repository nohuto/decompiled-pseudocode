/*
 * XREFs of sub_18000FF28 @ 0x18000FF28
 * Callers:
 *     sub_18000F804 @ 0x18000F804 (sub_18000F804.c)
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_180008814 @ 0x180008814 (sub_180008814.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18000DF5C @ 0x18000DF5C (sub_18000DF5C.c)
 *     sub_18001863C @ 0x18001863C (sub_18001863C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18000FF28(RTL_SRWLOCK *a1, PVOID *a2)
{
  PVOID Ptr; // rdi
  PVOID v5; // rax
  PVOID v6; // rdi
  PVOID v7; // rax
  int v8; // eax
  int v9; // esi
  PVOID v10; // rbx
  int v11; // r9d
  int v12; // edx
  _QWORD *v13; // rax
  __int64 v14; // rbp
  PVOID v16; // rdi
  PVOID v17; // rsi
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  void *v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp+18h] BYREF
  RTL_SRWLOCK *v22; // [rsp+88h] [rbp+20h] BYREF

  Ptr = a1[12].Ptr;
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(a1[12].Ptr);
  v5 = a1[12].Ptr;
  *a2 = v5;
  if ( v5 )
    return 0LL;
  sub_180008814(a1 + 11, &SRWLock);
  v6 = a1[12].Ptr;
  if ( v6 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 8LL))(a1[12].Ptr);
  v7 = a1[12].Ptr;
  *a2 = v7;
  if ( v7 )
  {
LABEL_24:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return 0LL;
  }
  v19 = 0LL;
  v8 = sub_18000DF5C(&v19);
  v9 = v8;
  v10 = v19;
  if ( v8 >= 0 )
  {
    v22 = a1;
    v13 = (_QWORD *)sub_18001863C(&v20, &v22);
    v9 = (*(__int64 (__fastcall **)(PVOID, _QWORD, RTL_SRWLOCK *))(*(_QWORD *)v10 + 112LL))(v10, *v13, a1 + 13);
    v14 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v9 < 0 )
    {
      v11 = v9;
      v12 = 431;
      goto LABEL_13;
    }
    if ( a1[12].Ptr != v10 )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 8LL))(v10);
      v16 = a1[12].Ptr;
      a1[12].Ptr = v10;
      if ( v16 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = a1[12].Ptr;
    if ( v17 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v17 + 8LL))(a1[12].Ptr);
    *a2 = a1[12].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
    goto LABEL_24;
  }
  v11 = v8;
  v12 = 418;
LABEL_13:
  sub_1800025D0(retaddr, v12, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v11);
  if ( v10 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v9;
}
