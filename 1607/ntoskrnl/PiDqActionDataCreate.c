/*
 * XREFs of PiDqActionDataCreate @ 0x14048C2A4
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14048BEF8 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiDqActionDataFree @ 0x14048C44C (PiDqActionDataFree.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14048C8D4 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetChangedProperties @ 0x1404CF684 (PiDqActionDataGetChangedProperties.c)
 *     PnpAllocatePWSTR @ 0x1404E4D00 (PnpAllocatePWSTR.c)
 *     PiDqGetPnpObjectType @ 0x1404E557C (PiDqGetPnpObjectType.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14063104C (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1406312D0 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 */

__int64 __fastcall PiDqActionDataCreate(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int PWSTR; // edi
  _QWORD *v8; // r14
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rbx
  __int64 *v11; // r14
  unsigned int PnpObjectType; // ebp
  int v13; // r8d
  __int64 v14; // r9
  int v15; // r10d
  int v16; // eax
  bool v17; // zf
  __int64 v18; // r8
  int RequestedProperties; // eax
  __int64 v21; // r9
  int AllPropertiesInBestLanguage; // eax
  _DWORD v23[4]; // [rsp+50h] [rbp-38h] BYREF

  PWSTR = 0;
  v23[0] = 0;
  *a4 = 0LL;
  v8 = a4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x58706E50u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x28uLL);
  if ( *(_QWORD *)(a3 + 16) )
  {
    v11 = (__int64 *)(v10 + 4);
    *v10 = *(_DWORD *)(a3 + 32);
    v10[2] = *(_DWORD *)(a1 + 16);
    PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a3 + 16) + 16LL));
    if ( PWSTR >= 0 )
    {
      if ( !*(_DWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 40) & 2) == 0 || (unsigned int)(*v10 - 1) > 1 )
        goto LABEL_10;
      PnpObjectType = PiDqGetPnpObjectType(*(unsigned int *)(a1 + 16));
      v16 = *(_DWORD *)(a1 + 40);
      if ( (v16 & 2) == 0 )
      {
        LOBYTE(v14) = *(_BYTE *)(a1 + 40) & 4;
        v17 = v13 == 1;
        v18 = *v11;
        if ( v17 )
          RequestedProperties = PiDqActionDataGetRequestedProperties(
                                  a2,
                                  PnpObjectType,
                                  v18,
                                  v14,
                                  *(_QWORD *)(a1 + 56),
                                  *(_QWORD *)(a1 + 72),
                                  v15,
                                  v10 + 8,
                                  v10 + 6);
        else
          RequestedProperties = PiDqActionDataGetChangedProperties(
                                  a2,
                                  PnpObjectType,
                                  v18,
                                  v14,
                                  *(_QWORD *)(a1 + 56),
                                  *(_QWORD *)(a1 + 72),
                                  v15,
                                  *(_QWORD *)(a3 + 24),
                                  (__int64)(v10 + 8),
                                  (__int64)(v10 + 6));
        goto LABEL_9;
      }
      if ( v13 != 1 )
      {
        LOBYTE(v14) = *(_BYTE *)(a1 + 40) & 4;
        RequestedProperties = PiDqActionDataGetChangedProperties(
                                a2,
                                PnpObjectType,
                                *v11,
                                v14,
                                *(_QWORD *)(a1 + 56),
                                0LL,
                                0,
                                *(_QWORD *)(a3 + 24),
                                (__int64)(v10 + 8),
                                (__int64)(v10 + 6));
LABEL_9:
        PWSTR = RequestedProperties;
LABEL_10:
        v8 = a4;
        goto LABEL_11;
      }
      v21 = *v11;
      if ( (v16 & 4) != 0 )
      {
        PWSTR = PiDqActionDataGetAllPropertiesInBestLanguage(
                  a2,
                  0,
                  PnpObjectType,
                  v21,
                  *(_QWORD *)(a1 + 56),
                  (__int64)(v10 + 8),
                  (__int64)(v10 + 6),
                  (__int64)v23);
        if ( PWSTR >= 0 )
        {
          AllPropertiesInBestLanguage = PiDqActionDataGetAllPropertiesInBestLanguage(
                                          a2,
                                          1,
                                          PnpObjectType,
                                          *v11,
                                          *(_QWORD *)(a1 + 56),
                                          (__int64)(v10 + 8),
                                          (__int64)(v10 + 6),
                                          (__int64)v23);
          goto LABEL_29;
        }
      }
      else
      {
        PWSTR = PiDqActionDataGetAllPropertiesInAllLanguages(
                  a2,
                  0,
                  PnpObjectType,
                  v21,
                  (__int64)(v10 + 8),
                  (__int64)(v10 + 6),
                  (__int64)v23);
        if ( PWSTR >= 0 )
        {
          AllPropertiesInBestLanguage = PiDqActionDataGetAllPropertiesInAllLanguages(
                                          a2,
                                          1,
                                          PnpObjectType,
                                          *v11,
                                          (__int64)(v10 + 8),
                                          (__int64)(v10 + 6),
                                          (__int64)v23);
LABEL_29:
          v8 = a4;
          PWSTR = AllPropertiesInBestLanguage;
          if ( AllPropertiesInBestLanguage == -1073741772 )
            PWSTR = 0;
          goto LABEL_11;
        }
      }
    }
LABEL_32:
    PiDqActionDataFree(v10);
    return (unsigned int)PWSTR;
  }
  *v10 = 0;
  v10[2] = 1;
LABEL_11:
  if ( PWSTR < 0 || *v10 == 2 && !v10[6] )
    goto LABEL_32;
  *v8 = v10;
  return (unsigned int)PWSTR;
}
