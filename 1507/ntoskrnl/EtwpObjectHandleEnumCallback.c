/*
 * XREFs of EtwpObjectHandleEnumCallback @ 0x1406E8870
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140426100 (ObQueryNameStringMode.c)
 */

char __fastcall EtwpObjectHandleEnumCallback(__int64 a1, volatile signed __int64 *a2, unsigned int a3, __int64 a4)
{
  unsigned __int16 v7; // r13
  unsigned __int64 v8; // rcx
  void *v9; // r14
  _WORD *v10; // r8
  unsigned int v11; // edi
  unsigned int v12; // r11d
  unsigned int v13; // r12d
  int v14; // ecx
  _DWORD *v15; // r10
  unsigned int v16; // r9d
  __int64 v17; // rdx
  char v18; // r8
  unsigned int v19; // r8d
  _WORD *PoolWithTag; // rbx
  int v21; // r15d
  int v22; // ecx
  __int64 v23; // rax
  signed __int32 v25[8]; // [rsp+0h] [rbp-79h] BYREF
  int v26; // [rsp+20h] [rbp-59h]
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v28[2]; // [rsp+38h] [rbp-41h]
  _DWORD v29[2]; // [rsp+40h] [rbp-39h]
  unsigned __int64 v30; // [rsp+48h] [rbp-31h] BYREF
  int v31; // [rsp+50h] [rbp-29h]
  unsigned int v32; // [rsp+54h] [rbp-25h]
  __int16 v33; // [rsp+58h] [rbp-21h]
  unsigned __int64 *v34; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v35[2]; // [rsp+68h] [rbp-11h]
  int v36; // [rsp+78h] [rbp-1h]
  int v37; // [rsp+7Ch] [rbp+3h]

  v7 = 4390;
  if ( !*(_BYTE *)(a4 + 56) )
    v7 = 4391;
  v8 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v31 = *(_DWORD *)(a4 + 36);
  v32 = a3;
  v9 = (void *)(v8 + 48);
  v30 = v8 + 48;
  if ( *(_BYTE *)(a4 + 60) )
    v32 = a3 | 0x80000000;
  v10 = *(_WORD **)(a4 + 8);
  v11 = 1;
  v33 = (unsigned __int8)(ObHeaderCookie ^ *(_BYTE *)(v8 + 24) ^ BYTE1(v8));
  if ( !v10 )
  {
LABEL_15:
    ObfReferenceObjectWithTag(v9, 0x54777445u);
    _InterlockedExchangeAdd64(a2, 1uLL);
    _InterlockedOr(v25, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
    v19 = *(unsigned __int16 *)(a4 + 24);
    PoolWithTag = *(_WORD **)(a4 + 16);
    v34 = &v30;
    LODWORD(NumberOfBytes) = v19;
    v35[0] = 18LL;
    while ( 1 )
    {
      v21 = ObQueryNameStringMode((char *)v9, (__int64)PoolWithTag, v19, &NumberOfBytes, 0);
      if ( v21 != -1073741820 )
        break;
      if ( PoolWithTag != *(_WORD **)(a4 + 16) )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74777445u);
      if ( !PoolWithTag )
        break;
      v19 = NumberOfBytes;
    }
    ObfDereferenceObjectWithTag(v9, 0x54777445u);
    if ( !v21 )
    {
      v22 = 0x2000;
      if ( *PoolWithTag < 0x2000u )
        v22 = (unsigned __int16)*PoolWithTag;
      v11 = 2;
      v35[1] = *((_QWORD *)PoolWithTag + 1);
      v36 = v22;
      v37 = 0;
    }
    v23 = 2LL * v11;
    v26 = 4200450;
    v35[v23 - 1] = &EtwpNull;
    v35[v23] = 2LL;
    EtwpLogKernelEvent((__int64)&v34, *(_DWORD *)(a4 + 28), v11 + 1, v7, v26);
    if ( PoolWithTag && PoolWithTag != *(_WORD **)(a4 + 16) )
      ExFreePoolWithTag(PoolWithTag, 0);
    return 0;
  }
  v12 = 0;
  v13 = (unsigned __int16)*v10;
  v14 = *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v8 + 24) ^ (unsigned __int64)BYTE1(v8)]
                  + 192);
  if ( *v10 )
  {
    v28[0] = v14;
    v15 = v10 + 2;
LABEL_8:
    v16 = 0;
    v17 = 0LL;
    v29[0] = *v15;
    while ( 1 )
    {
      v18 = *((_BYTE *)v29 + v17);
      if ( v18 == 42 )
        goto LABEL_15;
      if ( v18 != 63 && (v16 != 3 || (*((_BYTE *)v28 + v17) & 0x7F) != v18) && *((_BYTE *)v28 + v17) != v18 )
      {
        ++v12;
        ++v15;
        if ( v12 < v13 )
          goto LABEL_8;
        break;
      }
      ++v16;
      ++v17;
      if ( v16 >= 4 )
        goto LABEL_15;
    }
  }
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v25, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  return 0;
}
