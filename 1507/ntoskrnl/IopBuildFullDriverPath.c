/*
 * XREFs of IopBuildFullDriverPath @ 0x140572CFC
 * Callers:
 *     PiNormalizeDeviceText @ 0x14054F2C8 (PiNormalizeDeviceText.c)
 *     PpCheckInDriverDatabase @ 0x140572AC8 (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 */

__int64 __fastcall IopBuildFullDriverPath(unsigned __int16 *a1, void *a2, unsigned __int16 *a3)
{
  const WCHAR *v3; // r13
  unsigned int v6; // edi
  unsigned int v7; // r12d
  NTSTATUS RegistryValue; // eax
  PVOID v9; // rbp
  int v10; // esi
  unsigned int v11; // esi
  _WORD *v12; // r14
  const wchar_t *v13; // r15
  unsigned __int16 v14; // ax
  PVOID PoolWithTagPriority; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // ebx
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  *(_DWORD *)a3 = 0;
  *((_QWORD *)a3 + 1) = 0LL;
  P = 0LL;
  v6 = 0;
  v7 = 0;
  RegistryValue = IopGetRegistryValue(a2, L"ImagePath", 60, &P);
  v9 = P;
  if ( RegistryValue >= 0 && (v10 = *((_DWORD *)P + 3)) != 0 )
  {
    v11 = v10 - 2;
    v12 = (char *)P + *((unsigned int *)P + 2);
    if ( *v12 == 92 )
    {
      v13 = 0LL;
    }
    else
    {
      v13 = L"\\SystemRoot\\";
      v6 = 24;
    }
  }
  else
  {
    v11 = *a1;
    v13 = L"\\SystemRoot\\System32\\Drivers\\";
    v12 = (_WORD *)*((_QWORD *)a1 + 1);
    v3 = L".SYS";
    v6 = 58;
    v7 = 8;
  }
  v14 = v6 + v11 + v7 + 2;
  a3[1] = v14;
  if ( v14 < (unsigned __int64)(v7 + v6 + v11) + 2 )
  {
    v18 = -2147483643;
  }
  else
  {
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              PagedPool,
                              v14,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = ExAllocatePoolWithTag(PagedPool, v14, 0x20206F49u);
    *((_QWORD *)a3 + 1) = PoolWithTagPriority;
    if ( PoolWithTagPriority )
    {
      *a3 = a3[1] - 2;
      if ( v13 )
        memmove(PoolWithTagPriority, v13, v6);
      if ( v11 )
        memmove((void *)(*((_QWORD *)a3 + 1) + v6), v12, v11);
      if ( v7 )
        memmove((void *)(*((_QWORD *)a3 + 1) + v11 + (unsigned __int64)v6), v3, v7);
      v16 = *a3;
      v17 = *((_QWORD *)a3 + 1);
      v18 = 0;
      *(_WORD *)(v17 + 2 * (v16 >> 1)) = 0;
    }
    else
    {
      a3[1] = 0;
      v18 = -1073741670;
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v18;
}
