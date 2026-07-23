/*
 * XREFs of PiDevCfgResolveMultiSzValue @ 0x14063E0AC
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PnpMultiSzContainsString @ 0x1401CF258 (PnpMultiSzContainsString.c)
 *     PnpValidateMultiSzData @ 0x1401CF37C (PnpValidateMultiSzData.c)
 *     PnpValidateRegistryMultiSz @ 0x1401CF3C4 (PnpValidateRegistryMultiSz.c)
 *     PnpValidateStringData @ 0x1401CF488 (PnpValidateStringData.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
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
  char *v9; // rbp
  size_t v11; // rbx
  _WORD *v12; // r14
  unsigned int *v14; // r15
  char v15; // al
  unsigned int v16; // edi
  NTSTATUS RegistryValue; // eax
  unsigned int v18; // esi
  char *v19; // r12
  unsigned int v20; // r12d
  const WCHAR *v21; // r13
  __int64 v22; // rax
  unsigned int v23; // ebx
  const WCHAR *v24; // r12
  int v25; // r15d
  bool v26; // zf
  unsigned int v27; // ebx
  char *PoolWithTag; // rax
  NTSTATUS v30; // [rsp+20h] [rbp-68h]
  PVOID P; // [rsp+28h] [rbp-60h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF

  v8 = a7;
  v9 = 0LL;
  v11 = a2;
  v12 = a3;
  P = 0LL;
  *a7 = 0;
  v14 = 0LL;
  *a8 = 0LL;
  if ( !a1 )
    goto LABEL_58;
  if ( a1 <= 2 )
  {
    v15 = PnpValidateStringData((__int64)a3, a2);
  }
  else
  {
    if ( a1 != 7 )
      goto LABEL_58;
    v15 = PnpValidateMultiSzData(a3, a2);
  }
  if ( !v15 )
    return (unsigned int)-1073741823;
  RegistryValue = IopGetRegistryValue(KeyHandle, a6, 0, &P);
  v14 = (unsigned int *)P;
  v16 = RegistryValue;
  v30 = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741772 )
      goto LABEL_59;
    v16 = 0;
    if ( (a4 & 0x40000) == 0 )
    {
      v18 = 0;
      goto LABEL_23;
    }
    v18 = v11;
    if ( a1 != 7 )
      v18 = v11 + 2;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v18, 0x63647050u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, v12, v11);
      goto LABEL_23;
    }
    v14 = (unsigned int *)P;
    goto LABEL_14;
  }
  if ( !PnpValidateRegistryMultiSz(P) )
  {
LABEL_58:
    v16 = -1073741823;
    goto LABEL_59;
  }
  if ( (a4 & 0x40000) != 0 )
  {
    v18 = v14[3];
    v19 = (char *)v14 + v14[2];
    P = v19;
    if ( !v18 )
      v18 = 2;
    v9 = (char *)ExAllocatePoolWithTag(PagedPool, v18 + (unsigned int)v11, 0x63647050u);
    if ( !v9 )
      goto LABEL_14;
    if ( v18 <= 2 )
    {
      v20 = 0;
    }
    else
    {
      memmove(v9, v19, v18);
      v20 = v18 - 2;
    }
    if ( a1 == 7 )
    {
      if ( (a4 & 0x20000) != 0 )
      {
        memmove(&v9[v20], v12, v11);
        v18 = v18 + v11 - 2;
      }
      else if ( *v12 )
      {
        v21 = (const WCHAR *)P;
        do
        {
          v22 = -1LL;
          do
            ++v22;
          while ( v12[v22] );
          v23 = 2 * v22 + 2;
          if ( !PnpMultiSzContainsString(v21, v12) )
          {
            memmove(&v9[v20], v12, v23);
            v20 += v23;
            v18 += v23;
          }
          v12 += (unsigned __int64)v23 >> 1;
        }
        while ( *v12 );
      }
    }
    else if ( (a4 & 0x20000) != 0 || v18 == 2 || !PnpMultiSzContainsString((PCWSTR)P, v12) )
    {
      memmove(&v9[v20], v12, v11);
      v18 += v11;
    }
    goto LABEL_22;
  }
  v9 = (char *)ExAllocatePoolWithTag(PagedPool, v14[3], 0x63647050u);
  if ( v9 )
  {
    if ( a1 != 7 )
      RtlInitUnicodeString(&DestinationString, v12);
    v18 = 2;
    v24 = (const WCHAR *)((char *)v14 + v14[2]);
    if ( *v24 )
    {
      v25 = 0;
      do
      {
        RtlInitUnicodeString(&String2, v24);
        if ( a1 == 7 )
          v26 = PnpMultiSzContainsString(v12, String2.Buffer) == 0LL;
        else
          v26 = RtlEqualUnicodeString(&DestinationString, &String2, 1u) == 0;
        if ( v26 )
        {
          v27 = String2.Length + 2;
          memmove(&v9[v25], String2.Buffer, v27);
          v25 += v27;
          v18 += v27;
        }
        v24 += ((unsigned __int64)String2.Length >> 1) + 1;
      }
      while ( *v24 );
      v16 = v30;
      v14 = (unsigned int *)P;
    }
LABEL_22:
    v8 = a7;
LABEL_23:
    if ( v9 )
      *(_WORD *)&v9[2 * ((unsigned __int64)v18 >> 1) - 2] = 0;
    *v8 = v18;
    *a8 = v9;
    goto LABEL_59;
  }
LABEL_14:
  v16 = -1073741670;
LABEL_59:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return v16;
}
