/*
 * XREFs of VfIrpLogRetrieveWmiData @ 0x14074E35C
 * Callers:
 *     ViDdiDispatchWmiQueryAllData @ 0x140738A3C (ViDdiDispatchWmiQueryAllData.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObQueryNameString @ 0x14054C280 (ObQueryNameString.c)
 */

__int64 __fastcall VfIrpLogRetrieveWmiData(
        unsigned int a1,
        __int64 a2,
        unsigned int *a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int *a6)
{
  __int64 v7; // rbx
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rdi
  __int64 v10; // r15
  int v11; // ecx
  _QWORD **v12; // r14
  _QWORD *v13; // rax
  NTSTATUS v14; // ebx
  unsigned int v15; // r13d
  unsigned int *v16; // rbp
  _WORD *v17; // rsi
  _QWORD *v18; // rax
  _QWORD *v19; // r15
  _OBJECT_NAME_INFORMATION *v20; // rax
  void *v21; // rcx
  unsigned int v22; // ebp
  __int64 v23; // r15
  _OWORD *v24; // rsi
  unsigned int v25; // r13d
  unsigned int v26; // edi
  int v27; // ebp
  char *v28; // r14
  __int64 v29; // r12
  _DWORD *v30; // r15
  _DWORD *v31; // rdx
  int v32; // eax
  unsigned int v33; // esi
  unsigned int *v34; // rcx
  char *v35; // r14
  ULONG ReturnLength; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v37; // [rsp+24h] [rbp-64h]
  ULONG Length[2]; // [rsp+28h] [rbp-60h]
  _QWORD **v39; // [rsp+30h] [rbp-58h]
  __int64 v40; // [rsp+38h] [rbp-50h]
  unsigned int *v41; // [rsp+40h] [rbp-48h]
  unsigned int *v42; // [rsp+48h] [rbp-40h]

  v7 = a1;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  *(_QWORD *)Length = 16LL;
  PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74496656u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = 3 * v7;
  v40 = 3 * v7;
  v11 = 0;
  v12 = (_QWORD **)(ViIrpLogDatabase + 8 + 24 * v7);
  v13 = *v12;
  while ( v13 != v12 )
  {
    v13 = (_QWORD *)*v13;
    ++v11;
  }
  v14 = 0;
  v15 = 8 * v11 + 60 + 4 * v11;
  v37 = 8 * v11 + 60;
  v16 = (unsigned int *)(a2 + v37);
  v17 = (_WORD *)(a2 + v15);
  v41 = (unsigned int *)(a2 + 60);
  v18 = v12;
  v39 = v12;
  if ( *v12 != v12 )
  {
    while ( 1 )
    {
      v19 = (_QWORD *)*v18;
      v14 = ObQueryNameString(*(PVOID *)(*v18 - 8LL), PoolWithTag, Length[0], &ReturnLength);
      if ( v14 == -1073741820 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        v20 = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x74496656u);
        PoolWithTag = v20;
        if ( !v20 )
          return (unsigned int)-1073741670;
        v21 = (void *)*(v19 - 1);
        Length[0] = ReturnLength;
        v14 = ObQueryNameString(v21, v20, ReturnLength, &ReturnLength);
      }
      if ( v14 >= 0 )
      {
        if ( PoolWithTag->Name.Length )
        {
          if ( a2 )
            *v16 = v15;
          v42 = v16 + 1;
          v22 = PoolWithTag->Name.Length + 18;
          v23 = v22 >> 1;
          if ( a2 )
            *v17 = v22;
          v24 = v17 + 1;
          v25 = v15 + 2;
          if ( a2 )
          {
            *v24 = *(_OWORD *)L"VERIFIER";
            memmove(v24 + 1, PoolWithTag->Name.Buffer, PoolWithTag->Name.Length);
            *((_WORD *)v24 + (unsigned int)(v23 - 1)) = 0;
          }
          v15 = v22 + v25;
          v17 = (_WORD *)v24 + v23;
          v16 = v42;
        }
        else
        {
          *((_DWORD *)v19 + 4) |= 2u;
        }
        v18 = *v39;
        v39 = (_QWORD **)v18;
        if ( (_QWORD **)*v18 != v12 )
          continue;
      }
      v10 = v40;
      break;
    }
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v14 < 0 )
    return (unsigned int)v14;
  v26 = (v15 + 7) & 0xFFFFFFF8;
  v27 = 0;
  v28 = (char *)(a2 + v26);
  Length[0] = v26;
  v29 = ViIrpLogDatabase + 8 + 8 * v10;
  v30 = (_DWORD *)v29;
  if ( *(_QWORD *)v29 != v29 )
  {
    do
    {
      v31 = *(_DWORD **)v30;
      v32 = *(_DWORD *)(*(_QWORD *)v30 + 16LL);
      if ( (v32 & 2) == 0 )
      {
        ++v27;
        if ( (v32 & 1) != 0 )
          v33 = v31[6];
        else
          v33 = v31[7];
        if ( a2 )
        {
          v34 = v41;
          v41[1] = 40 * v33 + 8;
          *v34 = v26;
          *(_DWORD *)v28 = v31[5];
          *((_DWORD *)v28 + 1) = v33;
          v35 = v28 + 8;
          v41 = v34 + 2;
          memmove(v35, v31 + 8, 40LL * v33);
          v28 = &v35[40 * v33];
        }
        v26 += 40 * v33 + 8;
      }
      v30 = *(_DWORD **)v30;
    }
    while ( *(_QWORD *)v30 != v29 );
  }
  *a3 = v37;
  *a4 = v27;
  *a5 = Length[0];
  *a6 = v26;
  return 0LL;
}
