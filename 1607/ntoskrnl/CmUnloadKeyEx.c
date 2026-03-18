/*
 * XREFs of CmUnloadKeyEx @ 0x14049D9AC
 * Callers:
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 * Callees:
 *     CmpTryToRundownHive @ 0x1400876A8 (CmpTryToRundownHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x140437DB0 (CmpDereferenceKeyControlBlock.c)
 *     CmpSearchForOpenSubKeys @ 0x14049ACE4 (CmpSearchForOpenSubKeys.c)
 *     CmpRecordUnloadEventForHive @ 0x14049B43C (CmpRecordUnloadEventForHive.c)
 *     CmUnloadKey @ 0x14049F858 (CmUnloadKey.c)
 *     CmpReferenceKeyControlBlock @ 0x1404A0538 (CmpReferenceKeyControlBlock.c)
 */

__int64 __fastcall CmUnloadKeyEx(ULONG_PTR BugCheckParameter4, void *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  char v8; // r8
  int v9; // esi
  __int64 result; // rax
  char v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+58h] [rbp+20h]

  v3 = *(_QWORD *)(BugCheckParameter4 + 24);
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 10;
  if ( *(_BYTE *)(v3 + 4112) == 1 )
  {
    *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 11;
    return 3221225865LL;
  }
  else
  {
    v12 = -1;
    v11 = 0;
    if ( !CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)v3, (_DWORD *)BugCheckParameter4, &v11)
      || (*(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 12,
          result = CmUnloadKey(BugCheckParameter4, v7, a3),
          (_DWORD)result == -1073741535) )
    {
      if ( (unsigned __int8)CmpReferenceKeyControlBlock(BugCheckParameter4) )
      {
        CmpSearchForOpenSubKeys(BugCheckParameter4, 4, v8, 0LL);
        *(_WORD *)(BugCheckParameter4 + 4) |= 0x20u;
        *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 14;
        if ( a2 && (v9 = CmpRecordUnloadEventForHive(v3, a2), v9 < 0) )
        {
          *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 15;
          CmpDereferenceKeyControlBlock(BugCheckParameter4);
          return (unsigned int)v9;
        }
        else
        {
          *(_QWORD *)(v3 + 4104) = BugCheckParameter4;
          result = 259LL;
          *(_BYTE *)(v3 + 4112) = 1;
        }
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
