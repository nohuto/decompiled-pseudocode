/*
 * XREFs of SepSecureBootCorrectBcd @ 0x140693FEC
 * Callers:
 *     NtFilterBootOption @ 0x140693BA4 (NtFilterBootOption.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BcdOpenSystemStore @ 0x14053BF2C (BcdOpenSystemStore.c)
 *     BcdCloseStore @ 0x14053C8A8 (BcdCloseStore.c)
 *     BcdOpenObject @ 0x14053D54C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14053D664 (BcdCloseObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406943FC (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdEnumerateObjects @ 0x1406D2088 (BcdEnumerateObjects.c)
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
  __int64 v13; // [rsp+90h] [rbp+48h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+50h] BYREF

  Handle = 0LL;
  v11 = 0;
  LODWORD(NumberOfBytes) = 0;
  v13 = 0LL;
  updated = BcdOpenSystemStore((__int64)&v13);
  if ( updated >= 0 )
  {
    v10[0] = 1LL;
    updated = BcdEnumerateObjects(v13, (unsigned int)v10, 0, (unsigned int)&NumberOfBytes, (__int64)&v11);
    if ( updated == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x62536553u);
      if ( PoolWithTag )
      {
        updated = BcdEnumerateObjects(
                    v13,
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
              updated = BcdOpenObject(v13, (__int128 *)NumberOfBytes, &Handle);
              if ( updated < 0 )
                break;
              v3 = (unsigned __int16 *)qword_140341C00;
              v4 = 0;
              v5 = Handle;
              if ( *((_WORD *)qword_140341C00 + 18) )
              {
                v6 = (unsigned int)dword_140329804;
                do
                {
                  v7 = (_DWORD *)(qword_1403581C0 + 12LL * v4);
                  if ( !*v7 || *v7 == *(_DWORD *)(*(_QWORD *)(NumberOfBytes + 16) + 4LL) )
                  {
                    v8 = *(_WORD *)(qword_1403581C8 + (unsigned int)v7[2]);
                    if ( ((v8 & 0x20) == 0 || (v6 & 4) != 0) && ((v8 & 0x40) == 0 || (v6 & 0x10) != 0) )
                    {
                      updated = SepSecureBootUpdateBcdDataForRule(qword_1403581C0 + 12LL * v4, v5, v6);
                      if ( updated < 0 )
                        goto LABEL_22;
                      v3 = (unsigned __int16 *)qword_140341C00;
                      v6 = (unsigned int)dword_140329804;
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
