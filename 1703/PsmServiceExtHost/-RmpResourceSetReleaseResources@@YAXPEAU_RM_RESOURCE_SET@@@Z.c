/*
 * XREFs of ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180017310
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180010080 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpResourceSetRemoveAllDonors@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x1800174E4 (-RmpResourceSetRemoveAllDonors@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180017518 (-RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ?RmpRsEnforcedThresholdsDisarmCheckDestroy@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x18002DD0C (-RmpRsEnforcedThresholdsDisarmCheckDestroy@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z.c)
 */

void __fastcall RmpResourceSetReleaseResources(struct _RM_RESOURCE_SET *a1)
{
  _QWORD *v1; // rax
  void *v3; // rcx
  void *v4; // r8
  ExecutionModel::ResourceSet *v5; // rdi
  __int64 v6; // rax
  __int64 (__fastcall *v7)(ExecutionModel::ResourceSet *); // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  struct _RM_RESOURCE_SET *v10; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // [rsp+50h] [rbp+8h]

  v1 = (_QWORD *)((char *)a1 + 128);
  if ( *((_QWORD *)a1 + 16) )
  {
    v11 = *v1;
    v12 = (_QWORD *)*((_QWORD *)a1 + 17);
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v12 != v1 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    *v1 = 0LL;
    v1[1] = 0LL;
  }
  v3 = (void *)*((_QWORD *)a1 + 18);
  if ( v3 )
    RmpRsEnforcedThresholdsDisarmCheckDestroy(v3);
  v4 = (void *)*((_QWORD *)a1 + 19);
  if ( v4 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    *((_QWORD *)a1 + 19) = 0LL;
  }
  RmpResourceSetRemoveAllRecipients(a1);
  RmpResourceSetRemoveAllDonors(a1);
  v5 = (ExecutionModel::ResourceSet *)*((_QWORD *)a1 + 5);
  RmpObjectRelease(a1);
  v6 = *(_QWORD *)v5;
  *((_QWORD *)v5 + 173) = 0LL;
  v7 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(v6 + 16);
  if ( v7 == ExecutionModel::ResourceSet::Release )
    ExecutionModel::ResourceSet::Release(v5);
  else
    v7(v5);
  v8 = *((_QWORD *)a1 + 14);
  *((_QWORD *)a1 + 5) = 0LL;
  v9 = *(_QWORD *)(v8 + 24) + 536LL;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(v8 + 24) + 552LL);
  v13 = *((_QWORD *)a1 + 1) & (-1LL << (*(_DWORD *)(v9 + 4) & 0x1F));
  v10 = (struct _RM_RESOURCE_SET *)(*(_QWORD *)(v9 + 8)
                                  + 8LL
                                  * ((37
                                    * (BYTE6(v13)
                                     + 37
                                     * (BYTE5(v13)
                                      + 37
                                      * (BYTE4(v13)
                                       + 37
                                       * (BYTE3(v13)
                                        + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
                                    + HIBYTE(v13)) & (unsigned int)((*(_DWORD *)(v9 + 4) >> 5) - 1)));
  if ( (*(_QWORD *)a1 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v10 = (struct _RM_RESOURCE_SET *)(*(_QWORD *)(v9 + 8)
                                    + 8LL
                                    * ((37
                                      * (BYTE6(v13)
                                       + 37
                                       * (BYTE5(v13)
                                        + 37
                                        * (BYTE4(v13)
                                         + 37
                                         * (BYTE3(v13)
                                          + 37
                                          * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
                                      + HIBYTE(v13)) & (unsigned int)((*(_DWORD *)(v9 + 4) >> 5) - 1)));
  while ( (*(_QWORD *)v10 & 1) == 0 )
  {
    if ( *(struct _RM_RESOURCE_SET **)v10 == a1 )
    {
      *(_QWORD *)v10 = *(_QWORD *)a1;
      --*(_DWORD *)v9;
      *(_QWORD *)a1 |= 0x8000000000000002uLL;
      break;
    }
    v10 = *(struct _RM_RESOURCE_SET **)v10;
  }
  *((_DWORD *)a1 + 5) |= 0x80000000;
  RtlReleaseSRWLockExclusive(v9 + 16);
  RmpObjectRelease(a1);
}
