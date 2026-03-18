/*
 * XREFs of CmpGetValueForAudit @ 0x1405E9330
 * Callers:
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpGetValueData @ 0x140422DD0 (CmpGetValueData.c)
 */

__int64 __fastcall CmpGetValueForAudit(__int64 a1, __int64 a2, __int64 a3, ULONG a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // esi
  __int64 v8; // rax
  __int64 v9; // r13
  bool ValueData; // al
  void *v12; // rsi
  unsigned int v13; // r14d
  PVOID PoolWithTag; // rax
  int v15; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+44h] [rbp-1Ch] BYREF
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-18h] BYREF
  void *Src; // [rsp+50h] [rbp-10h] BYREF
  char v19; // [rsp+A0h] [rbp+40h] BYREF
  ULONG Tag; // [rsp+B8h] [rbp+58h]

  Tag = a4;
  v5 = 0;
  v16 = -1;
  Src = 0LL;
  v19 = 0;
  v6 = a2;
  v15 = -1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v16);
  v9 = v8;
  if ( !v8 )
    return 3221225626LL;
  ValueData = CmpGetValueData(a1, v6, v8, (unsigned int *)&NumberOfBytes, (__int64 *)&Src, &v19, (__int64)&v15);
  v12 = Src;
  if ( !ValueData )
    goto LABEL_7;
  v13 = NumberOfBytes;
  if ( (_DWORD)NumberOfBytes )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, Tag);
    *(_QWORD *)(a3 + 8) = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, v12, v13);
      *(_DWORD *)(a3 + 4) = v13;
      *(_DWORD *)a3 = *(_DWORD *)(v9 + 12);
      goto LABEL_8;
    }
LABEL_7:
    v5 = -1073741670;
  }
LABEL_8:
  if ( v12 )
  {
    if ( v19 == 1 )
      ExFreePoolWithTag(v12, 0);
    else
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v15);
  }
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v16);
  return v5;
}
