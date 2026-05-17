/*
 * XREFs of LdrRemoveLoadAsDataTable @ 0x18002CE00
 * Callers:
 *     LdrAddLoadAsDataTable @ 0x18002D160 (LdrAddLoadAsDataTable.c)
 *     LdrResRelease @ 0x180089970 (LdrResRelease.c)
 *     LdrpResMapFile @ 0x1800DD12C (LdrpResMapFile.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlReAllocateHeap @ 0x180020D80 (RtlReAllocateHeap.c)
 *     LdrpInitMuiCrits @ 0x180030344 (LdrpInitMuiCrits.c)
 *     RtlReleaseActivationContext @ 0x18003B790 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     _wcsicmp @ 0x180098360 (_wcsicmp.c)
 */

__int64 __fastcall LdrRemoveLoadAsDataTable(wchar_t *String2, wchar_t **a2, _QWORD *a3, int a4)
{
  wchar_t *v7; // rdi
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  __int64 v10; // rdx
  bool v11; // zf
  int v12; // esi
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // esi
  __int64 v17; // rax
  const wchar_t *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 Heap; // rax
  unsigned int v24; // [rsp+24h] [rbp-34h]

  if ( String2 )
  {
    v7 = 0LL;
    v8 = -1073741511;
    LdrpInitMuiCrits(&DataLoadLockCount, &LoadAsDataCrits);
    RtlEnterCriticalSection((__int64)&LoadAsDataCrits);
    v9 = LoadAsDataTableCount;
    if ( LoadAsDataTableCount )
    {
      if ( (a4 & 0xE00) == 0 )
      {
        v10 = LoadAsDataTable;
        goto LABEL_5;
      }
      if ( a2 )
      {
        *a2 = 0LL;
        v16 = v9;
        v10 = LoadAsDataTable;
        while ( v16 > 0 )
        {
          if ( (a4 & 0x800) != 0 )
          {
            v17 = 48LL * (v16 - 1);
            if ( *(wchar_t **)(v17 + v10 + 24) == String2 )
            {
              v7 = *(wchar_t **)(v17 + v10);
              break;
            }
          }
          else if ( (a4 & 0x400) != 0 && (v18 = *(const wchar_t **)(v10 + 48LL * (v16 - 1) + 8)) != 0LL )
          {
            if ( !wcsicmp(v18, String2) )
            {
              v10 = LoadAsDataTable;
              v7 = *(wchar_t **)(LoadAsDataTable + 48LL * (v16 - 1));
              v9 = LoadAsDataTableCount;
              break;
            }
            v9 = LoadAsDataTableCount;
            v10 = LoadAsDataTable;
          }
          else if ( (a4 & 0x200) != 0 )
          {
            v19 = 48LL * (v16 - 1);
            if ( *(wchar_t **)(v19 + v10) == String2 )
            {
              v7 = *(wchar_t **)(v19 + v10);
              break;
            }
          }
          --v16;
        }
        if ( v7 )
          *a2 = v7;
        if ( (a4 & 0x200000) != 0 )
        {
          if ( v7 && a3 )
          {
            v20 = v16 - 1;
            *a3 = *(_QWORD *)(v10 + 48 * v20 + 16);
            if ( (a4 & 0x40000) != 0 )
              ++*(_DWORD *)(v10 + 48 * v20 + 32);
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
              v7 = String2;
            v12 = v9;
            v24 = v9;
            while ( v12 > 0 )
            {
              v13 = v12 - 1;
              if ( *(wchar_t **)(v10 + 48LL * (v12 - 1)) == v7 )
              {
                if ( *(_QWORD *)(v10 + 48LL * v13 + 8) )
                {
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *(_QWORD *)(v10 + 48LL * (v12 - 1) + 8));
                  v10 = LoadAsDataTable;
                  *(_QWORD *)(LoadAsDataTable + 48LL * v13 + 8) = 0LL;
                  v12 = v24;
                  v9 = LoadAsDataTableCount;
                }
                v14 = *(_QWORD *)(v10 + 48LL * v13 + 40);
                if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                {
                  RtlReleaseActivationContext(v14);
                  v10 = LoadAsDataTable;
                  *(_QWORD *)(LoadAsDataTable + 48LL * v13 + 40) = 0LL;
                  v9 = LoadAsDataTableCount;
                }
                if ( v12 != v9 )
                {
                  *(_OWORD *)(v10 + 48LL * v13) = *(_OWORD *)(v10 + 48LL * (v9 - 1));
                  *(_OWORD *)(v10 + 48LL * v13 + 16) = *(_OWORD *)(v10 + 48LL * (v9 - 1) + 16);
                  *(_OWORD *)(v10 + 48LL * v13 + 32) = *(_OWORD *)(v10 + 48LL * (v9 - 1) + 32);
                }
                LoadAsDataTableCount = --v9;
                v15 = (unsigned int)(LoadAsDataTableBlockCount - 32);
                if ( v9 < (unsigned int)v15 )
                {
                  Heap = RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, LoadAsDataTable, 48 * v15);
                  v10 = Heap;
                  if ( !Heap )
                  {
                    v8 = -1073741801;
                    goto LABEL_50;
                  }
                  LoadAsDataTable = Heap;
                  LoadAsDataTableBlockCount -= 32;
                  v9 = LoadAsDataTableCount;
                }
                v8 = 0;
              }
              v12 = v13;
              v24 = v13;
            }
            goto LABEL_50;
          }
          v21 = 48LL * (v16 - 1);
          if ( (int)--*(_DWORD *)(v21 + v10 + 32) <= 0 )
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
    RtlLeaveCriticalSection((__int64)&LoadAsDataCrits);
    return v8;
  }
  return 3221225485LL;
}
