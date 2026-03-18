/*
 * XREFs of WriteFieldObj @ 0x1C00132F0
 * Callers:
 *     <none>
 * Callees:
 *     HeapInsertFreeList @ 0x1C0012D00 (HeapInsertFreeList.c)
 *     PushAccFieldObj @ 0x1C00131C0 (PushAccFieldObj.c)
 *     AccessFieldData @ 0x1C0013530 (AccessFieldData.c)
 *     ReadSystemMem @ 0x1C001821C (ReadSystemMem.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 */

__int64 __fastcall WriteFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 SystemMem; // rax
  unsigned __int64 *v15; // rdi
  __int64 v16; // rdx
  __int64 result; // rax
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  void *v27; // rcx
  __int64 v28; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3;
  if ( a3 )
  {
    v6 = 3;
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
    if ( !v6 )
    {
      while ( *(_DWORD *)(a2 + 80) < *(_DWORD *)(a2 + 60) )
      {
        v7 = *(_QWORD *)(a2 + 32);
        ++*(_DWORD *)(a2 + 16);
        if ( *(_WORD *)(v7 + 2) == 5 )
        {
          v8 = **(_QWORD **)(v7 + 32);
          if ( *(_WORD *)(v8 + 58) == 132 )
            return PushAccFieldObj(
                     a1,
                     (__int64)WriteFieldObj,
                     **(_QWORD **)(v8 + 88) + 56LL,
                     (_DWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 88) + 88LL) + 8LL),
                     a2 + 96,
                     4u);
        }
LABEL_6:
        ++*(_DWORD *)(a2 + 16);
        v9 = *(_QWORD *)(a2 + 40);
        if ( v9 >= *(_QWORD *)(a2 + 48) )
        {
          SystemMem = 0LL;
        }
        else
        {
          v10 = *(unsigned int *)(a2 + 56);
          v11 = *(_QWORD *)(a2 + 64);
          v28 = 0LL;
          if ( (unsigned int)v10 > 8 )
          {
            SystemMem = -1LL;
          }
          else
          {
            if ( v10 == 1 )
              v12 = 0LL;
            else
              v12 = v9 % (unsigned int)v10;
            if ( v12 )
            {
              memmove(&v28, (const void *)v9, (unsigned int)v10);
              v13 = v28;
            }
            else
            {
              switch ( (_DWORD)v10 )
              {
                case 1:
                  v13 = *(unsigned __int8 *)v9;
                  break;
                case 4:
                  v13 = *(unsigned int *)v9;
                  break;
                case 2:
                  v13 = *(unsigned __int16 *)v9;
                  break;
                case 8:
                  v13 = *(_QWORD *)v9;
                  break;
                default:
                  v13 = -1LL;
                  break;
              }
            }
            SystemMem = v11 & v13;
          }
        }
        v15 = (unsigned __int64 *)(a2 + 88);
        if ( *(_DWORD *)(a2 + 80) )
        {
          *v15 = SystemMem >> *(_DWORD *)(a2 + 72);
          v26 = *(unsigned int *)(a2 + 56);
          *(_QWORD *)(a2 + 40) += v26;
          v27 = *(void **)(a2 + 40);
          if ( (unsigned __int64)v27 >= *(_QWORD *)(a2 + 48) )
            SystemMem = 0LL;
          else
            SystemMem = ReadSystemMem(v27, (unsigned int)v26);
        }
        else
        {
          *v15 = 0LL;
        }
        v16 = *(_QWORD *)(a2 + 32);
        *v15 |= *(_QWORD *)(a2 + 64) & (SystemMem << *(_DWORD *)(a2 + 76));
        result = AccessFieldData(a1, v16, (int)a2 + 96, (int)a2 + 88, 0);
        v3 = result;
        if ( (_DWORD)result == 32772 || a2 != *(_QWORD *)(a1 + 416) )
          return result;
LABEL_18:
        v18 = *(_DWORD *)(a2 + 56);
        *(_DWORD *)(a2 + 96) += v18;
        v19 = *(_DWORD *)(a2 + 100);
        ++*(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 100) = 0;
        v20 = v19 - 8 * v18;
        v21 = *(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 104) += v20;
        if ( v21 >= *(_DWORD *)(a2 + 60) )
        {
          ++*(_DWORD *)(a2 + 16);
          goto LABEL_20;
        }
        *(_DWORD *)(a2 + 16) -= 2;
      }
      *(_DWORD *)(a2 + 16) += 3;
      goto LABEL_20;
    }
  }
  v24 = v6 - 1;
  if ( !v24 )
    goto LABEL_6;
  v25 = v24 - 1;
  if ( !v25 )
    goto LABEL_18;
  if ( v25 != 1 )
    return a3;
LABEL_20:
  v22 = *(_QWORD *)(a1 + 416);
  v23 = v22 - 16;
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v22 + 8);
  *(_DWORD *)(v22 - 16) = 0;
  byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  HeapInsertFreeList(*(_QWORD *)(v23 + 8), v23);
  KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
  return v3;
}
