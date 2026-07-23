/*
 * XREFs of SepBuildCapPolicyTable @ 0x140130FF8
 * Callers:
 *     SepRmCapUpdateWrkr @ 0x14055C278 (SepRmCapUpdateWrkr.c)
 * Callees:
 *     RtlCreateHashTable @ 0x14011F4C0 (RtlCreateHashTable.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepRegOpenKey @ 0x140411114 (SepRegOpenKey.c)
 *     SepReadAndPopulateCapes @ 0x14055C3A8 (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1406D8C80 (SepReadAndInsertCaps.c)
 *     SepRmDestroyCapTable @ 0x1406D92E0 (SepRmDestroyCapTable.c)
 */

__int64 __fastcall SepBuildCapPolicyTable(__int64 a1, PRTL_DYNAMIC_HASH_TABLE *a2)
{
  int inserted; // ebx
  unsigned int v4; // edi
  PVOID v6; // rdi
  _RTL_DYNAMIC_HASH_TABLE *PoolWithTag; // rax
  _RTL_DYNAMIC_HASH_TABLE *v8; // rbx
  PVOID v9; // rax
  BOOLEAN v10; // al
  PRTL_DYNAMIC_HASH_TABLE v11; // rsi
  HANDLE v12; // [rsp+20h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+28h] [rbp-8h] BYREF
  PRTL_DYNAMIC_HASH_TABLE HashTable; // [rsp+68h] [rbp+38h] BYREF
  PVOID P; // [rsp+70h] [rbp+40h]
  HANDLE Handle; // [rsp+78h] [rbp+48h] BYREF

  *a2 = 0LL;
  KeyHandle = 0LL;
  v12 = 0LL;
  Handle = 0LL;
  P = 0LL;
  LODWORD(HashTable) = 0;
  if ( (int)SepRegOpenKey(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies",
              0x201u,
              &KeyHandle) < 0
    || (int)SepRegOpenKey(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPEs",
              0x201u,
              &v12) < 0
    || (int)SepRegOpenKey(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPs",
              0x201u,
              &Handle) < 0 )
  {
    inserted = 0;
    goto LABEL_6;
  }
  inserted = SepReadAndPopulateCapes(v12);
  if ( inserted < 0 )
    goto LABEL_14;
  v4 = (unsigned int)HashTable;
  if ( !(_DWORD)HashTable )
    goto LABEL_6;
  PoolWithTag = (_RTL_DYNAMIC_HASH_TABLE *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x70536553u);
  HashTable = PoolWithTag;
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    inserted = -1073741670;
LABEL_14:
    v6 = P;
    goto LABEL_21;
  }
  memset(PoolWithTag, 0, 0x40uLL);
  v9 = P;
  v8[1].TableSize = v4;
  *(_QWORD *)&v8[1].DivisorMask = v9;
  v6 = 0LL;
  v10 = RtlCreateHashTable(&HashTable, 0, 0);
  v11 = HashTable;
  if ( v10 )
  {
    inserted = SepReadAndInsertCaps(Handle);
    if ( inserted >= 0 )
    {
      *a2 = v11;
      goto LABEL_6;
    }
  }
  else
  {
    inserted = -1073741670;
  }
  if ( !v11 )
    goto LABEL_6;
  SepRmDestroyCapTable(v11);
LABEL_21:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x70536553u);
LABEL_6:
  if ( Handle )
    ZwClose(Handle);
  if ( v12 )
    ZwClose(v12);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inserted;
}
