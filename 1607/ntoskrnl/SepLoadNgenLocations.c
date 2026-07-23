/*
 * XREFs of SepLoadNgenLocations @ 0x1407B7D5C
 * Callers:
 *     SepSetSystemPaths @ 0x14057A5A8 (SepSetSystemPaths.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14015A450 (ZwEnumerateValueKey.c)
 *     ZwQueryKey @ 0x14015A4B0 (ZwQueryKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 SepLoadNgenLocations()
{
  unsigned int v0; // r13d
  NTSTATUS v1; // eax
  NTSTATUS v2; // ebx
  ULONG v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // r15d
  unsigned int v6; // r14d
  _DWORD *PoolWithTag; // rsi
  _DWORD *v8; // rax
  signed __int64 v9; // rdi
  ULONG v10; // r12d
  unsigned int v11; // r14d
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  void *v14; // r9
  unsigned int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  ULONG ResultLength; // [rsp+38h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  ULONG Length; // [rsp+48h] [rbp-59h]
  void *v23; // [rsp+50h] [rbp-51h]
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
  if ( v1 < 0 )
  {
    if ( v1 == -1073741772 )
LABEL_37:
      v2 = 0;
  }
  else
  {
    v2 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( v2 >= 0 && v29 && (unsigned int)(v30 - 1) <= 0xFFFE )
    {
      v3 = 0;
      v4 = 0;
      v5 = 0;
      while ( 1 )
      {
        v2 = ZwEnumerateValueKey(KeyHandle, v3, KeyValueBasicInformation, KeyValueInformation, 0x10u, &ResultLength);
        if ( ((v2 + 0x80000000) & 0x80000000) == 0 && v2 != -2147483643 )
          break;
        if ( v26 == 4 && v27 >= 2 )
        {
          v4 += v27 + 16;
          if ( v4 < v27 + 16 )
            goto LABEL_42;
          ++v5;
        }
        if ( ++v3 >= v29 )
        {
          if ( !v5 )
            goto LABEL_37;
          v6 = v4 + 8;
          if ( v4 + 8 < v4 )
          {
LABEL_42:
            v2 = -1073741675;
            break;
          }
          v2 = 0;
          Length = v30 + 16;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v30 + 16), 0x63734943u);
          if ( PoolWithTag )
          {
            v8 = ExAllocatePoolWithTag(PagedPool, v6, 0x63734943u);
            v9 = (signed __int64)v8;
            if ( v8 )
            {
              v8[1] = 0xFFFF;
              v10 = 0;
              v23 = &v8[4 * v5 + 2];
              v11 = v6 - (16 * v5 + 8);
              if ( v29 )
              {
                while ( 1 )
                {
                  v2 = ZwEnumerateValueKey(KeyHandle, v10, KeyValueBasicInformation, PoolWithTag, Length, &ResultLength);
                  if ( v2 < 0 )
                    break;
                  if ( PoolWithTag[1] == 4 && PoolWithTag[2] >= 2u )
                  {
                    do
                    {
                      v12 = PoolWithTag[2];
                      if ( *((_WORD *)PoolWithTag + ((unsigned __int64)v12 >> 1) + 5) )
                        break;
                      PoolWithTag[2] = v12 - 2;
                    }
                    while ( v12 - 2 >= 2 );
                    v13 = PoolWithTag[2];
                    if ( v13 )
                    {
                      if ( v13 > v11 || v0 >= v5 )
                      {
                        v2 = -2147483643;
                        break;
                      }
                      v14 = v23;
                      if ( *(unsigned __int16 *)(v9 + 4) < v13 )
                        LOWORD(v13) = *(_WORD *)(v9 + 4);
                      v15 = *(unsigned __int16 *)(v9 + 6);
                      *(_WORD *)(v9 + 4) = v13;
                      v16 = PoolWithTag[2];
                      if ( v15 > v16 )
                        LOWORD(v16) = v15;
                      *(_WORD *)(v9 + 6) = v16;
                      v17 = 2LL * v0;
                      *(_QWORD *)(v9 + 8 * v17 + 16) = v14;
                      *(_WORD *)(v9 + 8 * v17 + 8) = *((_WORD *)PoolWithTag + 4);
                      *(_WORD *)(v9 + 8 * v17 + 10) = *((_WORD *)PoolWithTag + 4);
                      memmove(v14, PoolWithTag + 3, (unsigned int)PoolWithTag[2]);
                      v18 = (unsigned int)PoolWithTag[2];
                      v23 = (char *)v23 + v18;
                      v11 -= v18;
                      ++v0;
                    }
                  }
                  if ( ++v10 >= v29 )
                    goto LABEL_30;
                }
              }
              else
              {
LABEL_30:
                *(_WORD *)(v9 + 4) += 8;
                *(_WORD *)(v9 + 6) += 8;
                *(_DWORD *)v9 = v0;
                v9 &= -(__int64)(_InterlockedCompareExchange64(&qword_140341598, v9, 0LL) != 0);
              }
              if ( v9 )
                ExFreePoolWithTag((PVOID)v9, 0x63734943u);
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
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
