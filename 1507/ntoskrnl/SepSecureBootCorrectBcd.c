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
  int updated; // ebx
  PVOID PoolWithTag; // r15
  unsigned int v2; // r14d
  unsigned __int16 *v3; // rdx
  unsigned int v4; // r12d
  HANDLE v5; // rdi
  __int64 v6; // r8
  _DWORD *v7; // r10
  __int16 v8; // r9
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+38h] BYREF
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp+40h] BYREF
  HANDLE v13; // [rsp+90h] [rbp+48h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+50h] BYREF

  Handle = 0LL;
  v11 = 0;
  LODWORD(NumberOfBytes) = 0;
  v13 = 0LL;
  updated = BcdOpenSystemStore((__int64)&v13);
  if ( updated >= 0 )
  {
    v10[0] = 1LL;
    updated = BcdEnumerateObjects((_DWORD)v13, (unsigned int)v10, 0, (unsigned int)&NumberOfBytes, (__int64)&v11);
    if ( updated == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x62536553u);
      if ( PoolWithTag )
      {
        updated = BcdEnumerateObjects(
                    (_DWORD)v13,
                    (unsigned int)v10,
                    (_DWORD)PoolWithTag,
                    (unsigned int)&NumberOfBytes,
                    (__int64)&v11);
        if ( updated >= 0 )
        {
          v2 = 0;
          if ( v11 )
          {
            while ( 1 )
            {
              NumberOfBytes = (SIZE_T)PoolWithTag + 24 * v2;
              updated = BcdOpenObject((__int64)v13, (__int128 *)NumberOfBytes, &Handle);
              if ( updated < 0 )
                break;
              v3 = (unsigned __int16 *)qword_14036CCD8;
              v4 = 0;
              v5 = Handle;
              if ( *((_WORD *)qword_14036CCD8 + 18) )
              {
                v6 = (unsigned int)dword_140356BA4;
                do
                {
                  v7 = (_DWORD *)(qword_1403861D8 + 12LL * v4);
                  if ( !*v7 || *v7 == *(_DWORD *)(*(_QWORD *)(NumberOfBytes + 16) + 4LL) )
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
              Handle = 0LL;
              if ( v2 >= v11 )
                goto LABEL_22;
            }
            v5 = Handle;
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
  if ( v13 )
    BcdCloseStore(v13);
  return (unsigned int)updated;
}
