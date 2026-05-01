/*
 * XREFs of ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007300
 * Callers:
 *     RmpActivityHostDelete @ 0x180007508 (RmpActivityHostDelete.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostRemoveFromTables(struct _RM_ACTIVITY_HOST *a1)
{
  _DWORD *v2; // r10
  struct _RM_ACTIVITY_HOST *v3; // rdx
  _QWORD *v4; // rbx
  _DWORD *v5; // r10
  _QWORD *v6; // rdx
  __int64 v7; // [rsp+60h] [rbp+8h]
  __int64 v8; // [rsp+60h] [rbp+8h]

  RtlAcquireSRWLockExclusive((char *)RmSvcGlobals + 40);
  v2 = RmSvcGlobals;
  v7 = *((_QWORD *)a1 + 1) & (-1LL << (*((_DWORD *)RmSvcGlobals + 7) & 0x1F));
  v3 = (struct _RM_ACTIVITY_HOST *)(*((_QWORD *)RmSvcGlobals + 4)
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
                                    + HIBYTE(v7)) & (unsigned int)((*((_DWORD *)RmSvcGlobals + 7) >> 5) - 1)));
  if ( (*(_QWORD *)a1 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v3 = (struct _RM_ACTIVITY_HOST *)(*((_QWORD *)RmSvcGlobals + 4)
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
                                      + HIBYTE(v7)) & (unsigned int)((*((_DWORD *)RmSvcGlobals + 7) >> 5) - 1)));
  while ( (*(_QWORD *)v3 & 1) == 0 )
  {
    if ( *(struct _RM_ACTIVITY_HOST **)v3 == a1 )
    {
      *(_QWORD *)v3 = *(_QWORD *)a1;
      --v2[6];
      *(_QWORD *)a1 |= 0x8000000000000002uLL;
      break;
    }
    v3 = *(struct _RM_ACTIVITY_HOST **)v3;
  }
  *((_DWORD *)a1 + 5) |= 0x80000000;
  v4 = (_QWORD *)((char *)a1 + 856);
  v5 = RmSvcGlobals;
  v8 = v4[1] & (-1LL << (*((_DWORD *)RmSvcGlobals + 439) & 0x1F));
  v6 = (_QWORD *)(*((_QWORD *)RmSvcGlobals + 220)
                + 8LL
                * ((37
                  * (BYTE6(v8)
                   + 37
                   * (BYTE5(v8)
                    + 37
                    * (BYTE4(v8)
                     + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                  + HIBYTE(v8)) & (unsigned int)((*((_DWORD *)RmSvcGlobals + 439) >> 5) - 1)));
  if ( (*v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v6 = (_QWORD *)(*((_QWORD *)RmSvcGlobals + 220)
                  + 8LL
                  * ((37
                    * (BYTE6(v8)
                     + 37
                     * (BYTE5(v8)
                      + 37
                      * (BYTE4(v8)
                       + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                    + HIBYTE(v8)) & (unsigned int)((*((_DWORD *)RmSvcGlobals + 439) >> 5) - 1)));
  while ( (*v6 & 1) == 0 )
  {
    if ( (_QWORD *)*v6 == v4 )
    {
      *v6 = *v4;
      --v5[438];
      *v4 |= 0x8000000000000002uLL;
      break;
    }
    v6 = (_QWORD *)*v6;
  }
  RtlReleaseSRWLockExclusive((char *)RmSvcGlobals + 40);
}
