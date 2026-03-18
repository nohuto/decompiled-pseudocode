/*
 * XREFs of CmUnloadKeyEx @ 0x140498BA0
 * Callers:
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 * Callees:
 *     CmpTryToRundownHive @ 0x1400D2844 (CmpTryToRundownHive.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     CmpSearchForOpenSubKeys @ 0x140499670 (CmpSearchForOpenSubKeys.c)
 *     CmpRecordUnloadEventForHive @ 0x140499B10 (CmpRecordUnloadEventForHive.c)
 */

__int64 __fastcall CmUnloadKeyEx(ULONG_PTR BugCheckParameter4, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v7; // r8
  int v8; // esi
  __int64 result; // rax
  char v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+58h] [rbp+20h]

  v3 = *(_QWORD *)(BugCheckParameter4 + 32);
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 10;
  if ( *(_BYTE *)(v3 + 4112) == 1 )
  {
    *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 11;
    return 3221225865LL;
  }
  else
  {
    v11 = -1;
    v10 = 0;
    if ( !CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)v3, (_DWORD *)BugCheckParameter4, &v10)
      || (*(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 12,
          result = CmUnloadKey(BugCheckParameter4, 0LL, a3),
          (_DWORD)result == -1073741535) )
    {
      if ( CmpReferenceKeyControlBlock((signed __int32 *)BugCheckParameter4) )
      {
        CmpSearchForOpenSubKeys(BugCheckParameter4, 4LL, v7, 0LL);
        *(_WORD *)(BugCheckParameter4 + 4) |= 0x20u;
        *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 14;
        if ( a2 && (v8 = CmpRecordUnloadEventForHive(v3), v8 < 0) )
        {
          *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 15;
          CmpDereferenceKeyControlBlock(BugCheckParameter4);
          return (unsigned int)v8;
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
