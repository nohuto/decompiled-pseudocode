/*
 * XREFs of ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018668
 * Callers:
 *     RmpActivityHostDelete @ 0x180004E58 (RmpActivityHostDelete.c)
 * Callees:
 *     RmpSystemDereferenceHostWithPsm @ 0x180018598 (RmpSystemDereferenceHostWithPsm.c)
 */

void __fastcall RmpActivityHostRemoveFromTables(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rdi
  struct _RM_ACTIVITY_HOST *v3; // rdx
  _QWORD *v4; // r10
  _QWORD *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // [rsp+70h] [rbp+8h]
  __int64 v8; // [rsp+70h] [rbp+8h]

  v1 = *((_QWORD *)a1 + 5);
  RtlAcquireSRWLockExclusive(v1 + 32);
  v7 = *((_QWORD *)a1 + 1) & (-1LL << (*(_DWORD *)(v1 + 20) & 0x1F));
  v3 = (struct _RM_ACTIVITY_HOST *)(*(_QWORD *)(v1 + 24)
                                  + 8LL
                                  * ((37
                                    * (BYTE6(v7)
                                     + 37
                                     * (BYTE5(v7)
                                      + 37
                                      * (BYTE4(v7)
                                       + 37
                                       * (BYTE3(v7)
                                        + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
                                    + HIBYTE(v7)) & (unsigned int)((*(_DWORD *)(v1 + 20) >> 5) - 1)));
  if ( (*(_QWORD *)a1 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v3 = (struct _RM_ACTIVITY_HOST *)(*(_QWORD *)(v1 + 24)
                                    + 8LL
                                    * ((37
                                      * (BYTE6(v7)
                                       + 37
                                       * (BYTE5(v7)
                                        + 37
                                        * (BYTE4(v7)
                                         + 37
                                         * (BYTE3(v7)
                                          + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
                                      + HIBYTE(v7)) & (unsigned int)((*(_DWORD *)(v1 + 20) >> 5) - 1)));
  while ( (*(_QWORD *)v3 & 1) == 0 )
  {
    if ( *(struct _RM_ACTIVITY_HOST **)v3 == a1 )
    {
      *(_QWORD *)v3 = *(_QWORD *)a1;
      --*(_DWORD *)(v1 + 16);
      *(_QWORD *)a1 |= 0x8000000000000002uLL;
      break;
    }
    v3 = *(struct _RM_ACTIVITY_HOST **)v3;
  }
  *((_DWORD *)a1 + 5) |= 0x80000000;
  v4 = (_QWORD *)((char *)a1 + 1008);
  v8 = *((_QWORD *)a1 + 127) & (-1LL << (*(_DWORD *)(v1 + 3004) & 0x1F));
  v5 = (_QWORD *)(*(_QWORD *)(v1 + 3008)
                + 8LL
                * ((37
                  * (BYTE6(v8)
                   + 37
                   * (BYTE5(v8)
                    + 37
                    * (BYTE4(v8)
                     + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                  + HIBYTE(v8)) & (unsigned int)((*(_DWORD *)(v1 + 3004) >> 5) - 1)));
  if ( (*((_QWORD *)a1 + 126) & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v5 = (_QWORD *)(*(_QWORD *)(v1 + 3008)
                  + 8LL
                  * ((37
                    * (BYTE6(v8)
                     + 37
                     * (BYTE5(v8)
                      + 37
                      * (BYTE4(v8)
                       + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                    + HIBYTE(v8)) & (unsigned int)((*(_DWORD *)(v1 + 3004) >> 5) - 1)));
  while ( (*v5 & 1) == 0 )
  {
    if ( (_QWORD *)*v5 == v4 )
    {
      *v5 = *v4;
      --*(_DWORD *)(v1 + 3000);
      *v4 |= 0x8000000000000002uLL;
      break;
    }
    v5 = (_QWORD *)*v5;
  }
  RtlReleaseSRWLockExclusive(v1 + 32);
  if ( !*((_DWORD *)a1 + 12) )
  {
    v6 = *((_QWORD *)a1 + 91);
    if ( v6 )
      RmpSystemDereferenceHostWithPsm(a1, v6);
  }
}
