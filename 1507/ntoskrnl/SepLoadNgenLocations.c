/*
 * XREFs of SepLoadNgenLocations @ 0x1407E3034
 * Callers:
 *     SepSetSystemPaths @ 0x1405BC640 (SepSetSystemPaths.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14017F250 (ZwEnumerateValueKey.c)
 *     ZwQueryKey @ 0x14017F2B0 (ZwQueryKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 SepLoadNgenLocations()
{
  unsigned int v0; // r13d
  NTSTATUS v1; // eax
  NTSTATUS v2; // ebx
  ULONG v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  _DWORD *PoolWithTag; // rsi
  _DWORD *v9; // rax
  signed __int64 v10; // rdi
  ULONG v11; // r12d
  unsigned int v12; // r14d
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  void *v15; // r9
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rax
  ULONG ResultLength; // [rsp+38h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  void *v22; // [rsp+48h] [rbp-59h]
  ULONG Length; // [rsp+50h] [rbp-51h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-49h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+88h] [rbp-19h] BYREF
  int v26; // [rsp+8Ch] [rbp-15h]
  unsigned int v27; // [rsp+90h] [rbp-11h]
  _BYTE KeyInformation[32]; // [rsp+98h] [rbp-9h] BYREF
  ULONG v29; // [rsp+B8h] [rbp+17h]
  int v30; // [rsp+BCh] [rbp+1Bh]

  v0 = 0;
  ObjectAttributes.Attributes = 576;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"tv";
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v2 = v1;
  if ( v1 >= 0 )
  {
    v2 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( v2 >= 0 && v29 && (unsigned int)(v30 - 1) <= 0xFFFE )
    {
      v4 = 0;
      v5 = 0;
      v6 = 0;
      while ( 1 )
      {
        v2 = ZwEnumerateValueKey(KeyHandle, v4, KeyValueBasicInformation, KeyValueInformation, 0x10u, &ResultLength);
        if ( ((v2 + 0x80000000) & 0x80000000) == 0 && v2 != -2147483643 )
          break;
        if ( v26 == 4 && v27 >= 2 )
        {
          v5 += v27 + 16;
          if ( v5 < v27 + 16 )
            goto LABEL_22;
          ++v6;
        }
        if ( ++v4 >= v29 )
        {
          if ( !v6 )
            goto LABEL_3;
          v7 = v5 + 8;
          if ( v5 + 8 < v5 )
          {
LABEL_22:
            v2 = -1073741675;
            break;
          }
          v2 = 0;
          Length = v30 + 16;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v30 + 16), 0x63734943u);
          if ( PoolWithTag )
          {
            v9 = ExAllocatePoolWithTag(PagedPool, v7, 0x63734943u);
            v10 = (signed __int64)v9;
            if ( v9 )
            {
              v11 = 0;
              v9[1] = 0xFFFF;
              v22 = &v9[4 * v6 + 2];
              v12 = v7 - (16 * v6 + 8);
              if ( v29 )
              {
                while ( 1 )
                {
                  v2 = ZwEnumerateValueKey(KeyHandle, v11, KeyValueBasicInformation, PoolWithTag, Length, &ResultLength);
                  if ( v2 < 0 )
                    break;
                  if ( PoolWithTag[1] == 4 && PoolWithTag[2] >= 2u )
                  {
                    do
                    {
                      v13 = PoolWithTag[2];
                      if ( *((_WORD *)PoolWithTag + ((unsigned __int64)v13 >> 1) + 5) )
                        break;
                      PoolWithTag[2] = v13 - 2;
                    }
                    while ( v13 - 2 >= 2 );
                    v14 = PoolWithTag[2];
                    if ( v14 )
                    {
                      if ( v14 > v12 || v0 >= v6 )
                      {
                        v2 = -2147483643;
                        break;
                      }
                      v15 = v22;
                      if ( *(unsigned __int16 *)(v10 + 4) < v14 )
                        LOWORD(v14) = *(_WORD *)(v10 + 4);
                      v16 = *(unsigned __int16 *)(v10 + 6);
                      *(_WORD *)(v10 + 4) = v14;
                      v17 = PoolWithTag[2];
                      if ( v16 > v17 )
                        LOWORD(v17) = v16;
                      *(_WORD *)(v10 + 6) = v17;
                      v18 = 2LL * v0;
                      *(_QWORD *)(v10 + 8 * v18 + 16) = v15;
                      *(_WORD *)(v10 + 8 * v18 + 8) = *((_WORD *)PoolWithTag + 4);
                      *(_WORD *)(v10 + 8 * v18 + 10) = *((_WORD *)PoolWithTag + 4);
                      memmove(v15, PoolWithTag + 3, (unsigned int)PoolWithTag[2]);
                      v19 = (unsigned int)PoolWithTag[2];
                      v22 = (char *)v22 + v19;
                      v12 -= v19;
                      ++v0;
                    }
                  }
                  if ( ++v11 >= v29 )
                    goto LABEL_40;
                }
              }
              else
              {
LABEL_40:
                *(_WORD *)(v10 + 4) += 8;
                *(_WORD *)(v10 + 6) += 8;
                *(_DWORD *)v10 = v0;
                v10 &= -(__int64)(_InterlockedCompareExchange64(&qword_14036C8F8, v10, 0LL) != 0);
              }
              if ( v10 )
                ExFreePoolWithTag((PVOID)v10, 0x63734943u);
            }
            else
            {
              v2 = -1073741801;
            }
            ExFreePoolWithTag(PoolWithTag, 0x63734943u);
          }
          else
          {
            v2 = -1073741801;
          }
          break;
        }
      }
    }
  }
  else if ( v1 == -1073741772 )
  {
LABEL_3:
    v2 = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
