/*
 * XREFs of EtwpObjectHandleEnumCallback @ 0x14066577C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExCheckSingleFilter @ 0x140150230 (ExCheckSingleFilter.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExUnlockHandleTableEntry @ 0x1403F7084 (ExUnlockHandleTableEntry.c)
 *     ObQueryNameStringMode @ 0x14041FE90 (ObQueryNameStringMode.c)
 */

char __fastcall EtwpObjectHandleEnumCallback(__int64 a1, volatile signed __int64 *a2, unsigned int a3, __int64 a4)
{
  unsigned __int16 v7; // r12
  unsigned __int64 v8; // rcx
  bool v9; // zf
  void *v10; // r14
  _WORD *v11; // r9
  unsigned int v12; // esi
  __int64 v13; // r8
  int v14; // r11d
  int v15; // r8d
  unsigned int v16; // r10d
  unsigned int v17; // r8d
  _WORD *PoolWithTag; // rbx
  int v19; // r15d
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rax
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-31h] BYREF
  int v26; // [rsp+40h] [rbp-29h]
  unsigned int v27; // [rsp+44h] [rbp-25h]
  __int16 v28; // [rsp+48h] [rbp-21h]
  unsigned __int64 *v29; // [rsp+50h] [rbp-19h] BYREF
  int v30; // [rsp+58h] [rbp-11h]
  int v31; // [rsp+5Ch] [rbp-Dh]
  __int64 v32; // [rsp+60h] [rbp-9h]
  int v33; // [rsp+68h] [rbp-1h]
  int v34; // [rsp+6Ch] [rbp+3h]

  v7 = 4390;
  if ( !*(_BYTE *)(a4 + 56) )
    v7 = 4391;
  v8 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v26 = *(_DWORD *)(a4 + 36);
  v9 = *(_BYTE *)(a4 + 60) == 0;
  v27 = a3;
  v10 = (void *)(v8 + 48);
  v25 = v8 + 48;
  if ( !v9 )
    v27 = a3 | 0x80000000;
  v11 = *(_WORD **)(a4 + 8);
  v12 = 1;
  v28 = (unsigned __int8)(ObHeaderCookie ^ *(_BYTE *)(v8 + 24) ^ BYTE1(v8));
  if ( v11 )
  {
    v13 = 0LL;
    if ( !*v11 )
    {
LABEL_10:
      ExUnlockHandleTableEntry(a1, a2);
      return 0;
    }
    v14 = *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v8 + 24) ^ (unsigned __int64)BYTE1(v8)]
                    + 192);
    while ( !(unsigned int)ExCheckSingleFilter(v14, *(_DWORD *)&v11[2 * v13 + 2]) )
    {
      v13 = (unsigned int)(v15 + 1);
      if ( (unsigned int)v13 >= v16 )
        goto LABEL_10;
    }
  }
  ObfReferenceObjectWithTag(v10, 0x54777445u);
  ExUnlockHandleTableEntry(a1, a2);
  v17 = *(unsigned __int16 *)(a4 + 24);
  v31 = 0;
  PoolWithTag = *(_WORD **)(a4 + 16);
  v29 = &v25;
  LODWORD(NumberOfBytes) = v17;
  v30 = 18;
  while ( 1 )
  {
    v19 = ObQueryNameStringMode((char *)v10, (__int64)PoolWithTag, v17, &NumberOfBytes, 0);
    if ( v19 != -1073741820 )
      break;
    if ( PoolWithTag != *(_WORD **)(a4 + 16) )
      ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74777445u);
    if ( !PoolWithTag )
      break;
    v17 = NumberOfBytes;
  }
  ObfDereferenceObjectWithTag(v10, 0x54777445u);
  if ( !v19 )
  {
    v20 = 0x2000;
    if ( *PoolWithTag < 0x2000u )
      v20 = (unsigned __int16)*PoolWithTag;
    v21 = *((_QWORD *)PoolWithTag + 1);
    v12 = 2;
    v34 = 0;
    v32 = v21;
    v33 = v20;
  }
  v22 = 16LL * v12;
  *(int *)((char *)&v31 + v22) = 0;
  (&v29)[(unsigned __int64)v22 / 8] = (unsigned __int64 *)&EtwpNull;
  *(int *)((char *)&v30 + v22) = 2;
  EtwpLogKernelEvent((__int64)&v29, *(unsigned int *)(a4 + 28), v12 + 1, v7, 0x401802u);
  if ( PoolWithTag && PoolWithTag != *(_WORD **)(a4 + 16) )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0;
}
