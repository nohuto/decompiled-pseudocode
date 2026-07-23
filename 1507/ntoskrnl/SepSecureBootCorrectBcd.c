/*
 * XREFs of SepSecureBootCorrectBcd @ 0x1406D68C4
 * Callers:
 *     NtFilterBootOption @ 0x1406D6460 (NtFilterBootOption.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     BcdOpenSystemStore @ 0x14056DC50 (BcdOpenSystemStore.c)
 *     BcdCloseStore @ 0x14056E464 (BcdCloseStore.c)
 *     BcdOpenObject @ 0x14056F6CC (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14056F7E4 (BcdCloseObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406D6CC0 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdEnumerateObjects @ 0x14070D344 (BcdEnumerateObjects.c)
 */

__int64 SepSecureBootCorrectBcd()
{
  NTSTATUS updated; // ebx
  char *PoolWithTag; // r15
  ULONG v2; // r14d
  unsigned __int16 *v3; // rdx
  unsigned int v4; // r12d
  HANDLE v5; // rdi
  __int64 v6; // r8
  _DWORD *v7; // r10
  __int16 v8; // r9
  _BCD_OBJECT_DESCRIPTION BcdEnumDescriptor; // [rsp+30h] [rbp-18h] BYREF
  ULONG ObjectCount; // [rsp+80h] [rbp+38h] BYREF
  const GUID *BufferSize; // [rsp+88h] [rbp+40h] BYREF
  HANDLE BcdStoreHandle; // [rsp+90h] [rbp+48h] BYREF
  HANDLE BcdObjectHandle; // [rsp+98h] [rbp+50h] BYREF

  BcdObjectHandle = 0LL;
  ObjectCount = 0;
  LODWORD(BufferSize) = 0;
  BcdStoreHandle = 0LL;
  updated = BcdOpenSystemStore(&BcdStoreHandle);
  if ( updated >= 0 )
  {
    BcdEnumDescriptor = (_BCD_OBJECT_DESCRIPTION)1LL;
    updated = BcdEnumerateObjects(BcdStoreHandle, &BcdEnumDescriptor, 0LL, (PULONG)&BufferSize, &ObjectCount);
    if ( updated == -1073741789 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)BufferSize, 0x62536553u);
      if ( PoolWithTag )
      {
        updated = BcdEnumerateObjects(
                    BcdStoreHandle,
                    &BcdEnumDescriptor,
                    PoolWithTag,
                    (PULONG)&BufferSize,
                    &ObjectCount);
        if ( updated >= 0 )
        {
          v2 = 0;
          if ( ObjectCount )
          {
            while ( 1 )
            {
              BufferSize = (const GUID *)&PoolWithTag[24 * v2];
              updated = BcdOpenObject(BcdStoreHandle, BufferSize, &BcdObjectHandle);
              if ( updated < 0 )
                break;
              v3 = (unsigned __int16 *)qword_14036CCD8;
              v4 = 0;
              v5 = BcdObjectHandle;
              if ( *((_WORD *)qword_14036CCD8 + 18) )
              {
                v6 = (unsigned int)dword_140356BA4;
                do
                {
                  v7 = (_DWORD *)(qword_1403861D8 + 12LL * v4);
                  if ( !*v7 || *v7 == *(_DWORD *)(*(_QWORD *)&BufferSize[1].Data1 + 4LL) )
                  {
                    v8 = *(_WORD *)(qword_1403861E0 + (unsigned int)v7[2]);
                    if ( ((v8 & 0x20) == 0 || (v6 & 4) != 0) && ((v8 & 0x40) == 0 || (v6 & 0x10) != 0) )
                    {
                      updated = SepSecureBootUpdateBcdDataForRule(qword_1403861D8 + 12LL * v4, v5, v6);
                      if ( updated < 0 )
                        goto LABEL_22;
                      v3 = (unsigned __int16 *)qword_14036CCD8;
                      v6 = (unsigned int)dword_140356BA4;
                    }
                  }
                  ++v4;
                }
                while ( v4 < v3[18] );
              }
              BcdCloseObject(v5);
              v5 = 0LL;
              ++v2;
              BcdObjectHandle = 0LL;
              if ( v2 >= ObjectCount )
                goto LABEL_22;
            }
            v5 = BcdObjectHandle;
LABEL_22:
            if ( v5 )
              BcdCloseObject(v5);
          }
        }
        ExFreePoolWithTag(PoolWithTag, 0x62536553u);
      }
      else
      {
        updated = -1073741801;
      }
    }
  }
  if ( BcdStoreHandle )
    BcdCloseStore(BcdStoreHandle);
  return (unsigned int)updated;
}
