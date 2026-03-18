/*
 * XREFs of CmUnloadKeyEx @ 0x1404ED844
 * Callers:
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 * Callees:
 *     CmpTryToRundownHive @ 0x1400D2794 (CmpTryToRundownHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpRecordUnloadEventForHive @ 0x1404ED934 (CmpRecordUnloadEventForHive.c)
 *     CmpSearchForOpenSubKeys @ 0x1404ED9B4 (CmpSearchForOpenSubKeys.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 */

__int64 __fastcall CmUnloadKeyEx(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v7; // r8
  int v8; // esi
  __int64 result; // rax
  char v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+58h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 32);
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
    if ( !CmpTryToRundownHive(v3, (_DWORD *)a1, &v10)
      || (*(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 12,
          result = CmUnloadKey(a1, 0LL, a3),
          (_DWORD)result == -1073741535) )
    {
      if ( CmpReferenceKeyControlBlock(a1) )
      {
        CmpSearchForOpenSubKeys(a1, 4LL, v7, 0LL);
        *(_WORD *)(a1 + 4) |= 0x20u;
        *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 14;
        if ( a2 && (v8 = CmpRecordUnloadEventForHive(v3, a2), v8 < 0) )
        {
          *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 15;
          CmpDereferenceKeyControlBlock(a1);
          return (unsigned int)v8;
        }
        else
        {
          *(_QWORD *)(v3 + 4104) = a1;
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
