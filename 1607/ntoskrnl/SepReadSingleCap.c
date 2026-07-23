/*
 * XREFs of SepReadSingleCap @ 0x140696574
 * Callers:
 *     SepReadAndInsertCaps @ 0x14069621C (SepReadAndInsertCaps.c)
 * Callees:
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlValidSid @ 0x140420690 (RtlValidSid.c)
 */

__int64 __fastcall SepReadSingleCap(HANDLE KeyHandle, int a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  ULONG Length; // r14d
  unsigned int *PoolWithTag; // rdi
  NTSTATUS v8; // ebx
  unsigned int v9; // esi
  __int64 v10; // rsi
  int v11; // ebp
  SIZE_T v12; // rbx
  char *v13; // rax
  char *v14; // rbp
  unsigned int *v15; // r13
  unsigned __int64 v16; // r15
  __int16 v17; // ax
  char *v18; // r15
  unsigned int v19; // edx
  unsigned int v20; // r9d
  _QWORD *v21; // r8
  __int64 v22; // r10
  __int64 v23; // rax
  char *v25; // [rsp+30h] [rbp-48h]
  ULONG ResultLength; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+18h]
  __int64 v28; // [rsp+98h] [rbp+20h]

  v28 = a4;
  v27 = a3;
  ResultLength = 0;
  Length = a2 + 18;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(a2 + 18), 0x70536553u);
  if ( PoolWithTag )
  {
    v8 = ZwQueryValueKey(KeyHandle, &ContainedCapes, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
    if ( v8 < 0 )
      goto LABEL_27;
    v9 = PoolWithTag[2];
    v10 = v9 ? v9 >> 2 : 0LL;
    v8 = ZwQueryValueKey(KeyHandle, &CapeName, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
    if ( v8 < 0 )
      goto LABEL_27;
    v11 = PoolWithTag[2] + ((8 * v10 + 73) & 0xFFFFFFFE);
    v8 = ZwQueryValueKey(KeyHandle, &CapSid, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
    if ( v8 < 0 )
      goto LABEL_27;
    v12 = PoolWithTag[2] + v11;
    v13 = (char *)ExAllocatePoolWithTag(PagedPool, v12, 0x70536553u);
    v14 = v13;
    if ( v13 )
    {
      v25 = &v13[v12];
      v8 = ZwQueryValueKey(KeyHandle, &CapeFlags, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
      if ( v8 >= 0 )
      {
        if ( PoolWithTag[2] == 4 )
        {
          v15 = PoolWithTag + 3;
          *((_DWORD *)v14 + 14) = PoolWithTag[3];
          v8 = ZwQueryValueKey(KeyHandle, &CapeName, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
          if ( v8 >= 0 )
          {
            v16 = (unsigned __int64)&v14[8 * v10 + 73] & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v16 + PoolWithTag[2] <= (unsigned __int64)v25 )
            {
              v17 = *((_WORD *)PoolWithTag + 4);
              *((_WORD *)v14 + 21) = v17;
              *((_WORD *)v14 + 20) = v17;
              *((_QWORD *)v14 + 6) = v16;
              memmove(
                (void *)((unsigned __int64)&v14[8 * v10 + 73] & 0xFFFFFFFFFFFFFFFEuLL),
                PoolWithTag + 3,
                PoolWithTag[2]);
              v18 = (char *)(PoolWithTag[2] + v16);
              v8 = ZwQueryValueKey(KeyHandle, &CapSid, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
              if ( v8 < 0 )
                goto LABEL_27;
              if ( &v18[PoolWithTag[2]] <= v25 )
              {
                *((_QWORD *)v14 + 3) = v18;
                memmove(v18, PoolWithTag + 3, PoolWithTag[2]);
                v8 = ZwQueryValueKey(
                       KeyHandle,
                       &ContainedCapes,
                       KeyValuePartialInformation,
                       PoolWithTag,
                       Length,
                       &ResultLength);
                if ( v8 < 0 )
                  goto LABEL_27;
                v19 = 0;
                *((_DWORD *)v14 + 15) = v10;
                if ( !(_DWORD)v10 )
                {
LABEL_24:
                  if ( RtlValidSid(*((PSID *)v14 + 3)) )
                    *a5 = v14;
                  else
                    v8 = -1073741704;
                  goto LABEL_27;
                }
                v20 = v27;
                v21 = v14 + 64;
                v22 = v28;
                while ( 1 )
                {
                  v23 = *v15;
                  if ( (unsigned int)v23 >= v20 )
                    break;
                  ++v19;
                  ++v15;
                  *v21++ = v22 + 56 * v23;
                  if ( v19 >= (unsigned int)v10 )
                    goto LABEL_24;
                }
              }
            }
            v8 = -1073741789;
          }
        }
        else
        {
          v8 = -1073741811;
        }
      }
    }
    else
    {
      v8 = -1073741670;
    }
LABEL_27:
    ExFreePoolWithTag(PoolWithTag, 0x70536553u);
    return (unsigned int)v8;
  }
  return (unsigned int)-1073741670;
}
