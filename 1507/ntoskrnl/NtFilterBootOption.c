/*
 * XREFs of NtFilterBootOption @ 0x1406D6460
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400083B0 (RtlCheckTokenMembership.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SepSecureBootCorrectBcd @ 0x1406D68C4 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1406D6E14 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 */

NTSTATUS __cdecl NtFilterBootOption(
        FILTER_BOOT_OPTION_OPERATION FilterOperation,
        ULONG ObjectType,
        ULONG ElementType,
        PVOID Data,
        ULONG DataSize)
{
  ULONG v6; // esi
  FILTER_BOOT_OPTION_OPERATION v7; // r12d
  NTSTATUS v8; // ebx
  ULONG v9; // r15d
  int v10; // eax
  int v11; // eax
  PVOID v12; // rsi
  unsigned int v13; // ecx
  int v14; // eax
  __int16 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  BOOLEAN IsMember[4]; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+24h] [rbp-54h]
  PVOID P; // [rsp+28h] [rbp-50h]
  _BYTE v22[72]; // [rsp+30h] [rbp-48h] BYREF

  v6 = ObjectType;
  v7 = FilterOperation;
  P = 0LL;
  IsMember[0] = SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode);
  if ( !IsMember[0] && (RtlCheckTokenMembership(0LL, SeAliasAdminsSid, IsMember) < 0 || !IsMember[0]) )
  {
    v8 = -1073741790;
    goto LABEL_58;
  }
  v8 = 0;
  v20 = 0;
  if ( !qword_14036CCD8 )
  {
    v8 = -2143092730;
    goto LABEL_58;
  }
  if ( v7 )
  {
    if ( v7 == FilterBootOptionOperationSetElement )
    {
      if ( v6 )
      {
        if ( ElementType )
        {
          if ( Data )
          {
            v9 = DataSize;
            if ( DataSize )
            {
              v11 = dword_1403861C4;
              if ( !_bittest(&v11, HIBYTE(ElementType) & 0xF) )
              {
LABEL_21:
                v8 = 0;
                goto LABEL_58;
              }
              if ( KeGetCurrentThread()->PreviousMode )
              {
                if ( (unsigned __int64)Data + DataSize > MmUserProbeAddress || (char *)Data + DataSize < Data )
                  *(_BYTE *)MmUserProbeAddress = 0;
                if ( DataSize > 8 )
                {
                  P = ExAllocatePoolWithTag(PagedPool, DataSize, 0x62536553u);
                  if ( !P )
                  {
                    v8 = -1073741801;
                    v20 = -1073741801;
                    goto LABEL_58;
                  }
                  v12 = P;
                  memmove(P, Data, DataSize);
                  Data = v12;
                  v6 = ObjectType;
                }
                else
                {
                  memmove(v22, Data, DataSize);
                  Data = v22;
                }
                v8 = v20;
                v7 = FilterOperation;
              }
              else
              {
                v8 = v20;
              }
              goto LABEL_33;
            }
          }
        }
      }
    }
    else
    {
      if ( v7 != FilterBootOptionOperationDeleteElement )
      {
        v8 = -1073741585;
        goto LABEL_58;
      }
      if ( v6 )
      {
        if ( ElementType )
        {
          if ( !Data )
          {
            v9 = DataSize;
            if ( !DataSize )
            {
              v10 = dword_1403861C4;
              if ( !_bittest(&v10, HIBYTE(ElementType) & 0xF) )
                goto LABEL_21;
LABEL_33:
              v13 = 0;
              if ( *((_WORD *)qword_14036CCD8 + 18) )
              {
                while ( 1 )
                {
                  if ( *(_DWORD *)(qword_1403861D8 + 12LL * v13 + 4) == ElementType )
                  {
                    v14 = *(_DWORD *)(qword_1403861D8 + 12LL * v13);
                    if ( !v14 || v14 == v6 )
                    {
                      v15 = *(_WORD *)(*(unsigned int *)(qword_1403861D8 + 12LL * v13 + 8) + qword_1403861E0);
                      if ( ((v15 & 0x20) == 0 || (dword_140356BA4 & 4) != 0)
                        && ((v15 & 0x40) == 0 || (dword_140356BA4 & 0x10) != 0) )
                      {
                        break;
                      }
                    }
                  }
                  if ( ++v13 >= *((unsigned __int16 *)qword_14036CCD8 + 18) )
                    goto LABEL_58;
                }
                v16 = 3LL * v13;
                if ( v7 == FilterBootOptionOperationSetElement )
                {
                  v8 = SepSecureBootValidateBcdDataAgainstBcdRule(qword_1403861D8 + 4 * v16, Data, v9);
                }
                else
                {
                  v8 = 0;
                  v17 = *(unsigned int *)(qword_1403861D8 + 4 * v16 + 8);
                  if ( (*(_BYTE *)(v17 + qword_1403861E0) & 0x1F) != 8 || *(_WORD *)(v17 + qword_1403861E0 + 2) )
                    v8 = -1069350910;
                }
              }
              goto LABEL_58;
            }
          }
        }
      }
    }
LABEL_48:
    v8 = -1073741811;
    goto LABEL_58;
  }
  if ( v6 || ElementType || Data || DataSize )
    goto LABEL_48;
  if ( !_InterlockedCompareExchange(&dword_1403861C8, 0, 0) )
  {
    v8 = SepSecureBootCorrectBcd((unsigned int)v7);
    v20 = v8;
    if ( v8 < 0 )
      goto LABEL_58;
    _InterlockedExchange(&dword_1403861C8, 1);
  }
  v8 = v20;
LABEL_58:
  if ( P )
    ExFreePoolWithTag(P, 0x62536553u);
  return v8;
}
