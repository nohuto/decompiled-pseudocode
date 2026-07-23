/*
 * XREFs of LdrRemoveLoadAsDataTable @ 0x18006B740
 * Callers:
 *     LdrAddLoadAsDataTable @ 0x18006B290 (LdrAddLoadAsDataTable.c)
 *     LdrResRelease @ 0x180081140 (LdrResRelease.c)
 *     LdrpResMapFile @ 0x1800CC53C (LdrpResMapFile.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReAllocateHeap @ 0x18002DA20 (RtlReAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x18003823C (LdrpInitMuiCrits.c)
 *     RtlReleaseActivationContext @ 0x18003D9D0 (RtlReleaseActivationContext.c)
 *     _wcsicmp @ 0x1800857E0 (_wcsicmp.c)
 */

NTSTATUS __cdecl LdrRemoveLoadAsDataTable(PVOID InitModule, PVOID *BaseModule, PSIZE_T Size, ULONG Flags)
{
  PVOID v7; // rdi
  NTSTATUS v8; // ebx
  unsigned int v9; // r8d
  _QWORD *v10; // rdx
  bool v11; // zf
  int v12; // edi
  __int64 v13; // rsi
  _ACTIVATION_CONTEXT *v14; // rcx
  __int64 v15; // rax
  int v16; // esi
  const wchar_t *v17; // rcx
  _QWORD *Heap; // rax
  unsigned int v20; // [rsp+24h] [rbp-34h]
  PVOID v21; // [rsp+28h] [rbp-30h]

  if ( InitModule )
  {
    v7 = 0LL;
    v8 = -1073741511;
    LdrpInitMuiCrits((volatile signed __int32 *)&DataLoadLockCount, &LoadAsDataCrits);
    RtlEnterCriticalSection(&LoadAsDataCrits);
    v9 = LoadAsDataTableCount;
    if ( LoadAsDataTableCount )
    {
      if ( (Flags & 0xE00) == 0 )
      {
        v10 = LoadAsDataTable;
        goto LABEL_5;
      }
      if ( BaseModule )
      {
        *BaseModule = 0LL;
        v16 = v9;
        v10 = LoadAsDataTable;
        while ( v16 > 0 )
        {
          if ( (Flags & 0x800) != 0 )
          {
            if ( (PVOID)v10[6 * v16 - 3] == InitModule )
            {
              v7 = (PVOID)v10[6 * v16 - 6];
              break;
            }
          }
          else if ( (Flags & 0x400) != 0 && (v17 = (const wchar_t *)v10[6 * v16 - 5]) != 0LL )
          {
            if ( !wcsicmp(v17, (const wchar_t *)InitModule) )
            {
              v10 = LoadAsDataTable;
              v7 = (PVOID)*((_QWORD *)LoadAsDataTable + 6 * v16 - 6);
              v9 = LoadAsDataTableCount;
              break;
            }
            v9 = LoadAsDataTableCount;
            v10 = LoadAsDataTable;
          }
          else if ( (Flags & 0x200) != 0 && (PVOID)v10[6 * v16 - 6] == InitModule )
          {
            v7 = (PVOID)v10[6 * v16 - 6];
            break;
          }
          --v16;
        }
        if ( v7 )
          *BaseModule = v7;
        if ( (Flags & 0x200000) != 0 )
        {
          if ( v7 && Size )
          {
            *Size = v10[6 * v16 - 4];
            if ( (Flags & 0x40000) != 0 )
              ++LODWORD(v10[6 * v16 - 2]);
            v8 = 0;
          }
        }
        else
        {
          v11 = v7 == 0LL;
          if ( !v7 )
          {
LABEL_6:
            if ( v11 )
              v7 = InitModule;
            v21 = v7;
            v12 = v9;
            v20 = v9;
            while ( v12 > 0 )
            {
              v13 = 6LL * v12;
              if ( (PVOID)v10[6 * v12 - 6] == v21 )
              {
                if ( v10[6 * v12 - 5] )
                {
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v10[6 * v12 - 5]);
                  v10 = LoadAsDataTable;
                  *((_QWORD *)LoadAsDataTable + 6 * v12 - 5) = 0LL;
                  v12 = v20;
                  v9 = LoadAsDataTableCount;
                }
                v14 = (_ACTIVATION_CONTEXT *)v10[v13 - 1];
                if ( (unsigned __int64)&v14[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
                {
                  RtlReleaseActivationContext(v14);
                  v10 = LoadAsDataTable;
                  *((_QWORD *)LoadAsDataTable + v13 - 1) = 0LL;
                  v9 = LoadAsDataTableCount;
                }
                if ( v12 != v9 )
                {
                  *(_OWORD *)&v10[v13 - 6] = *(_OWORD *)&v10[6 * v9 - 6];
                  *(_OWORD *)&v10[v13 - 4] = *(_OWORD *)&v10[6 * v9 - 4];
                  *(_OWORD *)&v10[v13 - 2] = *(_OWORD *)&v10[6 * v9 - 2];
                }
                LoadAsDataTableCount = --v9;
                v15 = (unsigned int)(LoadAsDataTableBlockCount - 32);
                if ( v9 < (unsigned int)v15 )
                {
                  Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, LoadAsDataTable, 48 * v15);
                  v10 = Heap;
                  if ( !Heap )
                  {
                    v8 = -1073741801;
                    goto LABEL_50;
                  }
                  LoadAsDataTable = Heap;
                  LoadAsDataTableBlockCount -= 32;
                  v12 = v20;
                  v9 = LoadAsDataTableCount;
                }
                v8 = 0;
              }
              v20 = --v12;
            }
            goto LABEL_50;
          }
          if ( (int)--LODWORD(v10[6 * v16 - 2]) <= 0 )
          {
LABEL_5:
            v11 = v7 == 0LL;
            goto LABEL_6;
          }
          v8 = -1073740024;
        }
      }
      else
      {
        v8 = -1073741811;
      }
    }
LABEL_50:
    RtlLeaveCriticalSection(&LoadAsDataCrits);
    return v8;
  }
  return -1073741811;
}
