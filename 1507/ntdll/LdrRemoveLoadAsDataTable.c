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

__int64 __fastcall LdrRemoveLoadAsDataTable(wchar_t *String2, wchar_t **a2, _QWORD *a3, int a4)
{
  wchar_t *v7; // rdi
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  __int64 v10; // rdx
  bool v11; // zf
  int v12; // edi
  __int64 v13; // rsi
  volatile signed __int32 *v14; // rcx
  int v15; // esi
  const wchar_t *v16; // rcx
  __int64 Heap; // rax
  unsigned int v19; // [rsp+24h] [rbp-34h]
  wchar_t *v20; // [rsp+28h] [rbp-30h]

  if ( String2 )
  {
    v7 = 0LL;
    v8 = -1073741511;
    LdrpInitMuiCrits((volatile signed __int32 *)&DataLoadLockCount, (__int64)&LoadAsDataCrits);
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
        v15 = v9;
        v10 = LoadAsDataTable;
        while ( v15 > 0 )
        {
          if ( (a4 & 0x800) != 0 )
          {
            if ( *(wchar_t **)(v10 + 48LL * v15 - 24) == String2 )
            {
              v7 = *(wchar_t **)(v10 + 48LL * v15 - 48);
              break;
            }
          }
          else if ( (a4 & 0x400) != 0 && (v16 = *(const wchar_t **)(v10 + 48LL * v15 - 40)) != 0LL )
          {
            if ( !wcsicmp(v16, String2) )
            {
              v10 = LoadAsDataTable;
              v7 = *(wchar_t **)(LoadAsDataTable + 48LL * v15 - 48);
              v9 = LoadAsDataTableCount;
              break;
            }
            v9 = LoadAsDataTableCount;
            v10 = LoadAsDataTable;
          }
          else if ( (a4 & 0x200) != 0 && *(wchar_t **)(v10 + 48LL * v15 - 48) == String2 )
          {
            v7 = *(wchar_t **)(v10 + 48LL * v15 - 48);
            break;
          }
          --v15;
        }
        if ( v7 )
          *a2 = v7;
        if ( (a4 & 0x200000) != 0 )
        {
          if ( v7 && a3 )
          {
            *a3 = *(_QWORD *)(v10 + 48LL * v15 - 32);
            if ( (a4 & 0x40000) != 0 )
              ++*(_DWORD *)(v10 + 48LL * v15 - 16);
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
            v20 = v7;
            v12 = v9;
            v19 = v9;
            while ( v12 > 0 )
            {
              v13 = 6LL * v12;
              if ( *(wchar_t **)(v10 + 48LL * v12 - 48) == v20 )
              {
                if ( *(_QWORD *)(v10 + 48LL * v12 - 40) )
                {
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(v10 + 48LL * v12 - 40));
                  v10 = LoadAsDataTable;
                  *(_QWORD *)(LoadAsDataTable + 48LL * v12 - 40) = 0LL;
                  v12 = v19;
                  v9 = LoadAsDataTableCount;
                }
                v14 = *(volatile signed __int32 **)(v10 + 8 * v13 - 8);
                if ( (unsigned __int64)v14 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
                {
                  RtlReleaseActivationContext(v14);
                  v10 = LoadAsDataTable;
                  *(_QWORD *)(LoadAsDataTable + 8 * v13 - 8) = 0LL;
                  v9 = LoadAsDataTableCount;
                }
                if ( v12 != v9 )
                {
                  *(_OWORD *)(v10 + 8 * v13 - 48) = *(_OWORD *)(v10 + 48LL * (v9 - 1));
                  *(_OWORD *)(v10 + 8 * v13 - 32) = *(_OWORD *)(v10 + 48LL * (v9 - 1) + 16);
                  *(_OWORD *)(v10 + 8 * v13 - 16) = *(_OWORD *)(v10 + 48LL * (v9 - 1) + 32);
                }
                LoadAsDataTableCount = --v9;
                if ( v9 < LoadAsDataTableBlockCount - 32 )
                {
                  Heap = RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap);
                  v10 = Heap;
                  if ( !Heap )
                  {
                    v8 = -1073741801;
                    goto LABEL_50;
                  }
                  LoadAsDataTable = Heap;
                  LoadAsDataTableBlockCount -= 32;
                  v12 = v19;
                  v9 = LoadAsDataTableCount;
                }
                v8 = 0;
              }
              v19 = --v12;
            }
            goto LABEL_50;
          }
          if ( (int)--*(_DWORD *)(v10 + 48LL * v15 - 16) <= 0 )
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
