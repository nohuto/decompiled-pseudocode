/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x180003FB0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

void __cdecl TpReleaseCleanupGroupMembers(
        PTP_CLEANUP_GROUP CleanupGroup,
        LOGICAL CancelPendingCallbacks,
        PVOID CleanupParameter)
{
  _TP_CLEANUP_GROUP *i; // rax
  volatile signed __int32 *v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  _TP_CLEANUP_GROUP *v10; // rcx
  _TP_CLEANUP_GROUP *v11; // rdx
  _TP_CLEANUP_GROUP **v12; // rax
  PTP_CLEANUP_GROUP *v13; // rdx
  _TP_CLEANUP_GROUP *v14; // rdx
  signed __int32 **v15; // r8
  _TP_CLEANUP_GROUP **v16; // rax
  signed __int32 v17; // r8d
  bool v18; // zf
  signed __int32 v19; // eax
  PTP_CLEANUP_GROUP *v20; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v21; // rdx
  _QWORD **v22; // r14
  _QWORD *v23; // rdi
  _QWORD *j; // rax
  volatile signed __int32 *v25; // rdi
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v28; // rdx
  _RTL_DYNAMIC_HASH_TABLE *v29; // rbx
  _RTL_DYNAMIC_HASH_TABLE *v30; // rbx
  _QWORD *v31; // rbx
  __int64 v32; // rax
  void (__fastcall *v33)(_QWORD *, _QWORD); // r15
  __int64 v34; // rax
  void (__fastcall *v35)(_QWORD *); // r15
  signed __int32 *v36; // [rsp+20h] [rbp-38h]
  volatile signed __int32 *v37; // [rsp+20h] [rbp-38h]
  _TP_CLEANUP_GROUP *v38; // [rsp+28h] [rbp-30h]
  _QWORD *v39; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  if ( CleanupGroup )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 7);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 1);
      for ( i = (_TP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 2);
            i != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 16);
            i = v38 )
      {
        v7 = (volatile signed __int32 *)((char *)i - 40);
        v36 = (signed __int32 *)((char *)i - 40);
        v38 = *(_TP_CLEANUP_GROUP **)i;
        _m_prefetchw((char *)i + 120);
        v8 = *((_DWORD *)i + 30);
        do
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange(v7 + 40, v8 | 0x20000, v8);
        }
        while ( v9 != v8 );
        if ( (v8 & 0x30000) != 0 )
        {
          v14 = (_TP_CLEANUP_GROUP *)(v36 + 10);
          v15 = (signed __int32 **)*((_QWORD *)v36 + 5);
          v16 = (_TP_CLEANUP_GROUP **)*((_QWORD *)v36 + 6);
          if ( v15[1] != v36 + 10 || *v16 != v14 )
            __fastfail(3u);
          *v16 = (_TP_CLEANUP_GROUP *)v15;
          v15[1] = (signed __int32 *)v16;
          _m_prefetchw(v36);
          v17 = *v36;
          do
          {
            if ( !v17 )
            {
              *((_QWORD *)v36 + 6) = v36 + 10;
              *(_QWORD *)v14 = v14;
              goto LABEL_12;
            }
            v19 = _InterlockedCompareExchange(v36, v17 + 1, v17);
            v18 = v17 == v19;
            v17 = v19;
          }
          while ( !v18 );
          v20 = (PTP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 9);
          *(_QWORD *)v14 = (char *)CleanupGroup + 64;
          *((_QWORD *)v36 + 6) = v20;
          if ( *v20 != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 64) )
            __fastfail(3u);
          *v20 = v14;
          *((_QWORD *)CleanupGroup + 9) = v14;
        }
        else
        {
          *((_QWORD *)v36 + 22) = retaddr;
          v10 = (_TP_CLEANUP_GROUP *)(v36 + 10);
          v11 = (_TP_CLEANUP_GROUP *)*((_QWORD *)v36 + 5);
          v12 = (_TP_CLEANUP_GROUP **)*((_QWORD *)v36 + 6);
          if ( *(_TP_CLEANUP_GROUP **)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
            __fastfail(3u);
          *v12 = v11;
          *((_QWORD *)v11 + 1) = v12;
          v13 = (PTP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 9);
          *(_QWORD *)v10 = (char *)CleanupGroup + 64;
          *((_QWORD *)v36 + 6) = v13;
          if ( *v13 != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 64) )
            __fastfail(3u);
          *v13 = v10;
          *((_QWORD *)CleanupGroup + 9) = v10;
        }
LABEL_12:
        ;
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 1);
      v22 = (_QWORD **)((char *)CleanupGroup + 64);
      v23 = (_QWORD *)*((_QWORD *)CleanupGroup + 8);
      while ( v23 != v22 )
      {
        v31 = v23 - 5;
        v23 = (_QWORD *)*v23;
        v32 = v31[1];
        v33 = *(void (__fastcall **)(_QWORD *, _QWORD))(v32 + 16);
        if ( v33 )
        {
          ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
            *(PRTL_DYNAMIC_HASH_TABLE *)(v32 + 16),
            v21);
          v33(v31, CancelPendingCallbacks);
        }
        if ( CancelPendingCallbacks )
        {
          v34 = v31[1];
          v35 = *(void (__fastcall **)(_QWORD *))(v34 + 24);
          if ( v35 )
          {
            ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
              *(PRTL_DYNAMIC_HASH_TABLE *)(v34 + 24),
              v21);
            v35(v31);
          }
        }
      }
      for ( j = *v22; j != v22; j = v39 )
      {
        v25 = (volatile signed __int32 *)(j - 5);
        v37 = (volatile signed __int32 *)(j - 5);
        v39 = (_QWORD *)*j;
        v26 = (_QWORD *)*j;
        v27 = (_QWORD *)j[1];
        if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v27 != j )
          __fastfail(3u);
        *v27 = v26;
        v26[1] = v27;
        j[1] = j;
        *j = j;
        TppBarrierAdjust(v25 + 14, 0LL, 1LL);
        if ( *((_QWORD *)v25 + 3) )
        {
          if ( (v25[40] & 0x10000) != 0 )
          {
            v25 = v37;
          }
          else
          {
            v29 = (_RTL_DYNAMIC_HASH_TABLE *)*((_QWORD *)v25 + 3);
            ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
              v29,
              v28);
            v25 = v37;
            ((void (__fastcall *)(_QWORD, PVOID))v29)(*((_QWORD *)v37 + 11), CleanupParameter);
          }
        }
        if ( _InterlockedExchangeAdd(v25, 0xFFFFFFFF) == 1 )
        {
          v30 = (_RTL_DYNAMIC_HASH_TABLE *)**((_QWORD **)v37 + 1);
          ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
            v30,
            v28);
          ((void (__fastcall *)(volatile signed __int32 *))v30)(v37);
        }
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 7);
      TppBarrierAdjust((char *)CleanupGroup + 32, 0LL, 1LL);
    }
  }
  else
  {
    TppRaiseInvalidParameter();
  }
}
