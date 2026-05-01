/*
 * XREFs of RmpObjectTableDestroy @ 0x180041200
 * Callers:
 *     RmpActivityHostUninitializeModule @ 0x18003C060 (RmpActivityHostUninitializeModule.c)
 * Callees:
 *     RmpObjectTableEnumerationGetNext @ 0x180006188 (RmpObjectTableEnumerationGetNext.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     ?RmpActivityHostTableDeletionCallback@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18003B6D0 (-RmpActivityHostTableDeletionCallback@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

LPVOID __fastcall RmpObjectTableDestroy(__int64 a1)
{
  __int64 Next; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // rdx
  void *v5; // rbx
  LPVOID result; // rax
  _QWORD v7[3]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp-10h]
  __int64 v9; // [rsp+98h] [rbp+38h]

  RtlAcquireSRWLockExclusive(a1 + 16);
  v8 = *(_QWORD *)(a1 + 8);
  v7[2] = v8;
  v7[0] = a1;
  v7[1] = a1;
  Next = RmpObjectTableEnumerationGetNext(v7);
  while ( Next )
  {
    v3 = Next;
    Next = RmpObjectTableEnumerationGetNext(v7);
    if ( RmpActivityHostTableDeletionCallback )
      RmpActivityHostTableDeletionCallback((struct _RM_OBJECT_HEADER *)v3);
    v9 = *(_QWORD *)(v3 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    v4 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                  + 8LL
                  * ((37
                    * (BYTE6(v9)
                     + 37
                     * (BYTE5(v9)
                      + 37
                      * (BYTE4(v9)
                       + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
                    + HIBYTE(v9)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1)));
    if ( (*(_QWORD *)v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                    + 8LL
                    * ((37
                      * (BYTE6(v9)
                       + 37
                       * (BYTE5(v9)
                        + 37
                        * (BYTE4(v9)
                         + 37
                         * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
                      + HIBYTE(v9)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1)));
    while ( (*v4 & 1) == 0 )
    {
      if ( *v4 == v3 )
      {
        *v4 = *(_QWORD *)v3;
        --*(_DWORD *)a1;
        *(_QWORD *)v3 |= 0x8000000000000002uLL;
        break;
      }
      v4 = (_QWORD *)*v4;
    }
    *(_DWORD *)(v3 + 20) |= 0x80000000;
    RmpObjectRelease((volatile signed __int32 *)v3);
    RmpObjectRelease((volatile signed __int32 *)v3);
  }
  v5 = *(void **)(a1 + 8);
  result = (LPVOID)RtlReleaseSRWLockExclusive(a1 + 16);
  if ( v5 )
    return RmpFreeHeap(v5);
  return result;
}
