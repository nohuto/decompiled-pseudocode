/*
 * XREFs of IopExecuteHardwareProfileChange @ 0x14064CEC0
 * Callers:
 *     PnpProfileUpdateHardwareProfile @ 0x1406421A4 (PnpProfileUpdateHardwareProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x1404E27E0 (RtlCompareUnicodeString.c)
 *     CmSetAcpiHwProfile @ 0x14055BF28 (CmSetAcpiHwProfile.c)
 */

__int64 __fastcall IopExecuteHardwareProfileChange(__int64 a1, PCWSTR *a2, unsigned int a3, HANDLE *a4, _BYTE *a5)
{
  __int64 v6; // rdi
  HANDLE *v7; // r13
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v9; // r14
  unsigned int v10; // ebx
  UNICODE_STRING *v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rbp
  UNICODE_STRING *v14; // rsi
  __int64 v15; // r12
  UNICODE_STRING *v16; // rbx
  UNICODE_STRING v17; // xmm0
  int v18; // ebp
  UNICODE_STRING *v19; // rdx
  __int64 v20; // r8
  int Length; // eax
  unsigned int v22; // ebp
  unsigned __int16 *v23; // rax
  __int64 v24; // r8
  unsigned __int16 *v25; // rsi
  _WORD *v26; // r12
  _WORD *v27; // r15
  const void **v28; // r13
  __int64 v29; // r12
  size_t v30; // rbx
  __int16 v31; // ax
  UNICODE_STRING *v33; // [rsp+30h] [rbp-38h]

  v6 = a3;
  v7 = a4;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * a3, 0x33706E50u);
  v33 = PoolWithTag;
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( (_DWORD)v6 )
    {
      v11 = PoolWithTag;
      v12 = v6;
      do
      {
        RtlInitUnicodeString(v11++, *a2++);
        --v12;
      }
      while ( v12 );
      v13 = v6;
      do
      {
        if ( (_DWORD)v6 != 1 )
        {
          v14 = v9;
          v15 = (unsigned int)(v6 - 1);
          v16 = v9 + 1;
          do
          {
            if ( RtlCompareUnicodeString(v16 - 1, v16, 0) > 0 )
            {
              v17 = *v16;
              *v16 = *v14;
              *v14 = v17;
            }
            ++v16;
            ++v14;
            --v15;
          }
          while ( v15 );
        }
        --v13;
      }
      while ( v13 );
      v7 = a4;
    }
    v18 = 0;
    if ( (_DWORD)v6 )
    {
      v19 = v9;
      v20 = v6;
      do
      {
        Length = v19->Length;
        ++v19;
        v18 += Length;
        --v20;
      }
      while ( v20 );
    }
    v22 = v18 + 2;
    v23 = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, v22 + 6LL, 0x33706E50u);
    v25 = v23;
    if ( v23 )
    {
      v26 = v23 + 2;
      v27 = v23 + 2;
      if ( (_DWORD)v6 )
      {
        v28 = (const void **)v9;
        v29 = v6;
        do
        {
          v30 = *(unsigned __int16 *)v28;
          memmove(v27, v28[1], v30);
          v27 = (_WORD *)((char *)v27 + v30);
          v28 += 2;
          --v29;
        }
        while ( v29 );
        v9 = v33;
        v26 = v25 + 2;
        v7 = a4;
      }
      v31 = 1;
      *v27 = 0;
      v25[1] = v22;
      if ( (unsigned int)v6 > 1 || *v26 )
        v31 = 2;
      *v25 = v31;
      v10 = CmSetAcpiHwProfile(
              v25,
              (__int64 (__fastcall *)(_DWORD *, unsigned int *, _QWORD))IopExecuteHwpDefaultSelect,
              v24,
              v7,
              a5);
    }
    else
    {
      v10 = -1073741670;
    }
    ExFreePoolWithTag(v9, 0x33706E50u);
    if ( v25 )
      ExFreePoolWithTag(v25, 0x33706E50u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
