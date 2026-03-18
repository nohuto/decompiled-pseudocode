/*
 * XREFs of PiDevCfgResolveMultiSzValue @ 0x140689694
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 */

__int64 __fastcall PiDevCfgResolveMultiSzValue(
        unsigned int a1,
        unsigned int a2,
        _WORD *a3,
        int a4,
        HANDLE KeyHandle,
        const WCHAR *a6,
        unsigned int *a7,
        _QWORD *a8)
{
  unsigned int *v8; // r12
  _WORD *v10; // r14
  size_t v11; // rbx
  unsigned int *v13; // r13
  unsigned __int64 v14; // rax
  unsigned int v15; // edi
  NTSTATUS RegistryValue; // eax
  unsigned int v17; // esi
  _WORD *v18; // r12
  unsigned __int64 v19; // rax
  char *PoolWithTag; // r15
  __int64 v22; // rcx
  __int64 v23; // rax
  const WCHAR *v24; // rbx
  unsigned int v25; // ebx
  unsigned int v26; // ebx
  const WCHAR *v27; // r12
  int v28; // r13d
  const WCHAR *v29; // rcx
  bool i; // zf
  unsigned int v31; // ebx
  char *v32; // rax
  unsigned int *v33; // [rsp+20h] [rbp-50h] BYREF
  const WCHAR *v34; // [rsp+28h] [rbp-48h]
  UNICODE_STRING String2; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING v38; // [rsp+60h] [rbp-10h] BYREF
  unsigned int Sizea; // [rsp+B0h] [rbp+40h]

  v8 = a7;
  v10 = a3;
  v11 = a2;
  *a7 = 0;
  v13 = 0LL;
  *a8 = 0LL;
  v33 = 0LL;
  if ( !a1 )
    goto LABEL_19;
  if ( a1 > 2 )
  {
    if ( a1 == 7 )
    {
      if ( a2 < 4 || (v14 = (unsigned __int64)a2 >> 1, a3[v14 - 1]) || a3[v14 - 2] )
      {
        if ( a2 != 2 || *a3 )
          return (unsigned int)-1073741823;
      }
      goto LABEL_12;
    }
LABEL_19:
    v15 = -1073741823;
    goto LABEL_20;
  }
  if ( a2 < 2 || a3[((unsigned __int64)a2 >> 1) - 1] )
    return (unsigned int)-1073741823;
LABEL_12:
  RegistryValue = IopGetRegistryValue(KeyHandle, a6, 0, &v33);
  v13 = v33;
  v15 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( v33[1] != 7 )
      goto LABEL_19;
    v17 = v33[3];
    v18 = (_WORD *)((char *)v33 + v33[2]);
    if ( v17 < 4 || (v19 = (unsigned __int64)v17 >> 1, v18[v19 - 1]) || v18[v19 - 2] )
    {
      if ( v17 != 2 || *v18 )
        goto LABEL_19;
    }
    if ( (a4 & 0x40000) != 0 )
    {
      LODWORD(v34) = v17 + v11;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v17 + (unsigned int)v11, 0x63647050u);
      if ( !PoolWithTag )
      {
LABEL_25:
        v15 = -1073741670;
        goto LABEL_20;
      }
      if ( v17 <= 2 )
      {
        v22 = 0LL;
      }
      else
      {
        memmove(PoolWithTag, v18, v17);
        v22 = v17 - 2;
      }
      LODWORD(v33) = v22;
      if ( a1 == 7 )
      {
        if ( (a4 & 0x20000) != 0 )
        {
          memmove(&PoolWithTag[v22], v10, v11);
          v17 = (_DWORD)v34 - 2;
        }
        else
        {
          while ( *v10 )
          {
            v23 = -1LL;
            do
              ++v23;
            while ( v10[v23] );
            Sizea = 2 * v23 + 2;
            RtlInitUnicodeString(&DestinationString, v10);
            v24 = v18;
            if ( *v18 )
            {
              while ( 1 )
              {
                RtlInitUnicodeString(&String2, v24);
                if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
                  break;
                v24 += ((unsigned __int64)String2.Length >> 1) + 1;
                if ( !*v24 )
                  goto LABEL_41;
              }
              v25 = Sizea;
            }
            else
            {
LABEL_41:
              v25 = Sizea;
              memmove(&PoolWithTag[(unsigned int)v33], v10, Sizea);
              LODWORD(v33) = Sizea + (_DWORD)v33;
              v17 += Sizea;
            }
            v10 += (unsigned __int64)v25 >> 1;
          }
        }
      }
      else if ( (a4 & 0x20000) != 0 || v17 == 2 || (RtlInitUnicodeString(&DestinationString, v10), !*v18) )
      {
LABEL_51:
        memmove(&PoolWithTag[(unsigned int)v33], v10, v11);
        v17 = (unsigned int)v34;
      }
      else
      {
        while ( 1 )
        {
          RtlInitUnicodeString(&String2, v18);
          if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
            break;
          v18 += ((unsigned __int64)String2.Length >> 1) + 1;
          if ( !*v18 )
            goto LABEL_51;
        }
      }
      goto LABEL_32;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v33[3], 0x63647050u);
    if ( !PoolWithTag )
      goto LABEL_25;
    v26 = a1;
    if ( a1 != 7 )
      RtlInitUnicodeString(&v38, v10);
    v17 = 2;
    v27 = (const WCHAR *)((char *)v13 + v13[2]);
    if ( !*v27 )
    {
LABEL_32:
      v8 = a7;
LABEL_33:
      if ( PoolWithTag )
        *(_WORD *)&PoolWithTag[2 * ((unsigned __int64)v17 >> 1) - 2] = 0;
      *v8 = v17;
      *a8 = PoolWithTag;
      goto LABEL_20;
    }
    v28 = 0;
    while ( 1 )
    {
      RtlInitUnicodeString(&String2, v27);
      if ( v26 == 7 )
        break;
      if ( !RtlEqualUnicodeString(&v38, &String2, 1u) )
        goto LABEL_64;
LABEL_65:
      v27 += ((unsigned __int64)String2.Length >> 1) + 1;
      if ( !*v27 )
      {
        v13 = v33;
        goto LABEL_32;
      }
    }
    RtlInitUnicodeString(&String1, String2.Buffer);
    v29 = v10;
    for ( i = *v10 == 0; ; i = *v29 == 0 )
    {
      v34 = v29;
      if ( i )
        break;
      RtlInitUnicodeString(&DestinationString, v29);
      if ( RtlEqualUnicodeString(&String1, &DestinationString, 1u) )
        goto LABEL_65;
      v29 = &v34[((unsigned __int64)DestinationString.Length >> 1) + 1];
    }
LABEL_64:
    v31 = String2.Length + 2;
    memmove(&PoolWithTag[v28], String2.Buffer, v31);
    v28 += v31;
    v17 += v31;
    v26 = a1;
    goto LABEL_65;
  }
  if ( RegistryValue == -1073741772 )
  {
    v15 = 0;
    if ( (a4 & 0x40000) == 0 )
    {
      v17 = 0;
      PoolWithTag = 0LL;
      goto LABEL_33;
    }
    v17 = v11;
    if ( a1 != 7 )
      v17 = v11 + 2;
    v32 = (char *)ExAllocatePoolWithTag(PagedPool, v17, 0x63647050u);
    PoolWithTag = v32;
    if ( v32 )
    {
      memmove(v32, v10, v11);
      goto LABEL_33;
    }
    v13 = v33;
    v15 = -1073741670;
  }
LABEL_20:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return v15;
}
