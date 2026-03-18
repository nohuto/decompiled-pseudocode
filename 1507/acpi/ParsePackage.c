/*
 * XREFs of ParsePackage @ 0x1C0010950
 * Callers:
 *     <none>
 * Callees:
 *     ParseString @ 0x1C000C8B4 (ParseString.c)
 *     ParseOpcode @ 0x1C000D910 (ParseOpcode.c)
 *     ParseIntObj @ 0x1C0010B60 (ParseIntObj.c)
 *     HeapInsertFreeList @ 0x1C0013620 (HeapInsertFreeList.c)
 *     ParseObjName @ 0x1C0020370 (ParseObjName.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintIndent @ 0x1C00443A0 (PrintIndent.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ParsePackage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  int v6; // eax
  __int64 v7; // rdi
  char v8; // dl
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v13; // eax

  v3 = a3;
  if ( (_DWORD)a3 )
    v6 = 2;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( v6 )
  {
    v13 = v6 - 1;
    if ( !v13 )
      goto LABEL_6;
    if ( v13 == 1 )
    {
LABEL_19:
      if ( (gDebugger & 0xD0) != 0 )
      {
        --dword_1C005A114;
        PrintIndent(a1);
        ConPrintf("}");
        --dword_1C005A114;
      }
      v10 = *(_QWORD *)(a1 + 416);
      v11 = v10 - 16;
      *(_QWORD *)(a1 + 416) = *(_QWORD *)(v10 + 8);
      *(_DWORD *)(v10 - 16) = 0;
      byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v11 + 8));
      KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 16);
    if ( (gDebugger & 0xD0) != 0 )
    {
      PrintIndent(a1);
      ConPrintf("{");
      ++dword_1C005A114;
    }
    while ( 1 )
    {
LABEL_6:
      if ( *(_QWORD *)(a1 + 120) < *(_QWORD *)(a2 + 48) )
      {
        while ( 1 )
        {
          v7 = *(int *)(a2 + 40);
          if ( (unsigned int)v7 >= **(_DWORD **)(a2 + 32) )
            break;
          *(_DWORD *)(a2 + 40) = v7 + 1;
          v8 = gDebugger;
          if ( (gDebugger & 0xD0) != 0 && (int)v7 > 0 )
          {
            ConPrintf(",");
            v8 = gDebugger;
          }
          if ( (unsigned __int8)(**(_BYTE **)(a1 + 120) - 17) <= 2u )
          {
            v3 = ParseOpcode(a1, 0, *(_QWORD *)(a2 + 32) + 8 * (v7 + 4 * v7 + 1));
            if ( v3 )
              break;
            if ( a2 != *(_QWORD *)(a1 + 416) )
              return v3;
          }
          else
          {
            if ( (v8 & 0xD0) != 0 )
              PrintIndent(a1);
            v9 = 40 * v7;
            LOBYTE(a3) = 1;
            v3 = ParseIntObj(a1 + 120, v9 + *(_QWORD *)(a2 + 32) + 8LL, a3);
            if ( v3 == -1072431103 )
            {
              v3 = ParseString((const void **)(a1 + 120), v9 + *(_QWORD *)(a2 + 32) + 8LL, 1);
              if ( v3 == -1072431103 )
              {
                LOBYTE(a3) = 1;
                v3 = ParseObjName(a1 + 120, v9 + *(_QWORD *)(a2 + 32) + 8LL, a3);
                if ( v3 == -1072431103 )
                {
                  LogError(3222536193LL);
                  PrintDebugMessage(135, **(unsigned __int8 **)(a1 + 120), *(_QWORD *)(a1 + 120), 0, 0LL);
                  goto LABEL_15;
                }
              }
            }
            if ( v3 )
              break;
          }
          if ( *(_QWORD *)(a1 + 120) >= *(_QWORD *)(a2 + 48) )
            goto LABEL_15;
        }
      }
      if ( v3 == 32772 )
        break;
LABEL_15:
      if ( a2 != *(_QWORD *)(a1 + 416) )
        return v3;
      if ( v3 || *(_QWORD *)(a1 + 120) >= *(_QWORD *)(a2 + 48) || *(_DWORD *)(a2 + 40) >= **(_DWORD **)(a2 + 32) )
      {
        ++*(_DWORD *)(a2 + 16);
        goto LABEL_19;
      }
    }
  }
  return v3;
}
