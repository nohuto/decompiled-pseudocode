/*
 * XREFs of PiDqTraceQueryCreate @ 0x14048D044
 * Callers:
 *     PiDqIrpQueryCreate @ 0x14048B94C (PiDqIrpQueryCreate.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1400870D0 (PsGetCurrentThreadProcessId.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     Template_pqzzzzzzz @ 0x1401CE654 (Template_pqzzzzzzz.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpConvertDevpropcompkeyArrayToString @ 0x14062D710 (PnpConvertDevpropcompkeyArrayToString.c)
 *     PiDqConvertObjectTypeToString @ 0x140631428 (PiDqConvertObjectTypeToString.c)
 *     PiDqConvertQueryFlagsToString @ 0x1406314C8 (PiDqConvertQueryFlagsToString.c)
 *     FilterConvertToString @ 0x1406E4A6C (FilterConvertToString.c)
 */

__int64 __fastcall PiDqTraceQueryCreate(__int64 a1)
{
  NTSTATUS v1; // ebx
  __int64 v3; // rdi
  PVOID v4; // rsi
  char *v5; // r13
  PVOID v6; // r15
  char *v7; // r12
  int v8; // edx
  const wchar_t *v9; // rax
  __int64 v10; // rax
  char *PoolWithTag; // rax
  unsigned int v12; // ecx
  char *v13; // rdx
  PVOID v14; // rax
  void *v15; // r14
  PVOID v16; // rax
  __int64 v17; // rax
  char *v18; // rax
  unsigned int v19; // ecx
  char *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-58h]
  __int64 v23[3]; // [rsp+60h] [rbp-18h] BYREF
  SIZE_T NumberOfBytes; // [rsp+C8h] [rbp+50h] BYREF
  const WCHAR *v26; // [rsp+D0h] [rbp+58h]
  char *v27; // [rsp+D8h] [rbp+60h]

  v1 = 0;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x400000) == 0 )
    return (unsigned int)v1;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0LL;
  v27 = 0LL;
  v23[0] = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v1 = PiDqConvertObjectTypeToString(*(unsigned int *)(v3 + 16), v23);
  if ( v1 < 0 )
    return (unsigned int)v1;
  v8 = *(_DWORD *)(v3 + 20);
  v1 = 0;
  v26 = 0LL;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v9 = L"Instance";
    }
    else
    {
      if ( v8 != 2 )
      {
        v1 = -1073741811;
        goto LABEL_12;
      }
      v9 = L"Instances";
    }
    v26 = v9;
    goto LABEL_13;
  }
  v26 = L"Type";
LABEL_12:
  if ( v1 < 0 )
    return (unsigned int)v1;
LABEL_13:
  if ( v8 == 1 )
  {
    v27 = *(char **)(v3 + 24);
  }
  else if ( v8 == 2 )
  {
    v10 = *(unsigned int *)(v3 + 24);
    if ( (unsigned int)v10 <= 2 )
      return (unsigned int)-1073741811;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 2 * v10, 0x58706E50u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memmove(PoolWithTag, *(const void **)(v3 + 32), 2LL * *(unsigned int *)(v3 + 24));
    v12 = *(_DWORD *)(v3 + 24) - 2;
    if ( *(_DWORD *)(v3 + 24) != 2 )
    {
      v13 = &v7[2 * v12];
      do
      {
        if ( !*(_WORD *)v13 )
          *(_WORD *)v13 = 32;
        v13 -= 2;
        --v12;
      }
      while ( v12 );
    }
    v27 = v7;
  }
  LODWORD(NumberOfBytes) = 512;
  v14 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x58706E50u);
  v15 = v14;
  if ( !v14 )
    goto LABEL_34;
  v1 = PiDqConvertQueryFlagsToString(*(unsigned int *)(v3 + 40), v14, 512LL, &NumberOfBytes);
  if ( v1 == -1073741789 )
  {
    ExFreePoolWithTag(v15, 0x58706E50u);
    v16 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x58706E50u);
    v15 = v16;
    if ( !v16 )
      goto LABEL_34;
    v1 = PiDqConvertQueryFlagsToString(*(unsigned int *)(v3 + 40), v16, (unsigned int)NumberOfBytes, &NumberOfBytes);
  }
  if ( v1 >= 0 )
  {
    if ( (*(_DWORD *)(v3 + 40) & 4) != 0 )
    {
      v17 = *(unsigned int *)(v3 + 48);
      if ( (unsigned int)v17 <= 2 )
      {
        v1 = -1073741811;
        goto LABEL_59;
      }
      v18 = (char *)ExAllocatePoolWithTag(PagedPool, 2 * v17, 0x58706E50u);
      v1 = 0;
      v5 = v18;
      if ( !v18 )
        goto LABEL_34;
      memmove(v18, *(const void **)(v3 + 56), 2LL * *(unsigned int *)(v3 + 48));
      v19 = *(_DWORD *)(v3 + 48) - 2;
      if ( *(_DWORD *)(v3 + 48) != 2 )
      {
        v20 = &v5[2 * v19];
        do
        {
          if ( !*(_WORD *)v20 )
            *(_WORD *)v20 = 32;
          v20 -= 2;
          --v19;
        }
        while ( v19 );
      }
    }
    else
    {
      v1 = 0;
    }
    if ( *(_DWORD *)(v3 + 64) )
    {
      LODWORD(NumberOfBytes) = 512;
      v6 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x58706E50u);
      if ( !v6 )
        goto LABEL_34;
      v1 = PnpConvertDevpropcompkeyArrayToString(
             *(_QWORD *)(v3 + 72),
             *(_DWORD *)(v3 + 64),
             (_DWORD)v6,
             512,
             (__int64)&NumberOfBytes);
      if ( v1 == -1073741789 )
      {
        ExFreePoolWithTag(v6, 0x58706E50u);
        v6 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x58706E50u);
        if ( !v6 )
          goto LABEL_34;
        v1 = PnpConvertDevpropcompkeyArrayToString(
               *(_QWORD *)(v3 + 72),
               *(_DWORD *)(v3 + 64),
               (_DWORD)v6,
               NumberOfBytes,
               (__int64)&NumberOfBytes);
      }
      if ( v1 < 0 )
        goto LABEL_59;
      v1 = 0;
    }
    if ( !*(_DWORD *)(v3 + 80) )
      goto LABEL_57;
    LODWORD(NumberOfBytes) = 512;
    v4 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x58706E50u);
    if ( v4 )
    {
      v1 = FilterConvertToString(*(_DWORD *)(v3 + 80), *(_QWORD *)(v3 + 88), 512, (_DWORD)v4, (__int64)&NumberOfBytes);
      if ( v1 != -1073741789 )
      {
LABEL_55:
        if ( v1 < 0 )
          goto LABEL_59;
        v1 = 0;
LABEL_57:
        if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x400000) != 0 )
        {
          LODWORD(v22) = PsGetCurrentThreadProcessId();
          v1 = Template_pqzzzzzzz(v23[0], v21, (const GUID *)v3, a1, v22, v23[0], v26, v27, v15, v5, v6, v4);
        }
        goto LABEL_59;
      }
      ExFreePoolWithTag(v4, 0x58706E50u);
      v4 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x58706E50u);
      if ( v4 )
      {
        v1 = FilterConvertToString(
               *(_DWORD *)(v3 + 80),
               *(_QWORD *)(v3 + 88),
               NumberOfBytes,
               (_DWORD)v4,
               (__int64)&NumberOfBytes);
        goto LABEL_55;
      }
    }
LABEL_34:
    v1 = -1073741670;
  }
LABEL_59:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x58706E50u);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x58706E50u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x58706E50u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x58706E50u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x58706E50u);
  return (unsigned int)v1;
}
