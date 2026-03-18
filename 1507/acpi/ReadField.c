/*
 * XREFs of ReadField @ 0x1C0015DD0
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     ParseTerm @ 0x1C000E250 (ParseTerm.c)
 *     AccFieldUnit @ 0x1C0015AE0 (AccFieldUnit.c)
 *     ReadObject @ 0x1C0016CF8 (ReadObject.c)
 * Callees:
 *     NewGlobalHeap @ 0x1C0005D90 (NewGlobalHeap.c)
 *     ListRemoveEntry @ 0x1C0010770 (ListRemoveEntry.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     HeapInsertFreeList @ 0x1C0013620 (HeapInsertFreeList.c)
 *     NewLocalHeap @ 0x1C00186B8 (NewLocalHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044FFC (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 *     RawFieldAccess @ 0x1C0046A3C (RawFieldAccess.c)
 */

__int64 __fastcall ReadField(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v8; // ebp
  unsigned int v9; // r12d
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // r15
  __int64 v17; // rbx
  unsigned int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r11
  __int64 v23; // rax
  _DWORD *v24; // r9
  int v25; // ecx
  int v26; // eax
  unsigned int v27; // r8d
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // r14
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  unsigned int v36; // eax
  int ObjectTypeName; // eax
  unsigned int v38; // r8d
  void *v39; // rax
  __int64 v40; // [rsp+30h] [rbp-48h]
  __int64 v41; // [rsp+38h] [rbp-40h]
  __int64 v43; // [rsp+90h] [rbp+18h] BYREF

  if ( (a3[3] & 0xFu) <= 4 )
  {
    v8 = 0;
    LODWORD(v43) = 0;
    v9 = 8;
    if ( ghGetAcpiTableVersion && (ghGetAcpiTableVersion(1413763908LL, &v43), (unsigned int)v43 >= 2) )
      v10 = 8;
    else
      v10 = 4;
    if ( *(_WORD *)(a4 + 2) )
    {
      if ( *(_WORD *)(a4 + 2) == 1 )
      {
        v11 = a4 + 16;
        goto LABEL_9;
      }
      if ( *(_WORD *)(a4 + 2) == 2 )
      {
        v9 = *(_DWORD *)(a4 + 24) - 1;
LABEL_67:
        v11 = *(_QWORD *)(a4 + 32);
LABEL_9:
        v40 = v11;
        if ( *(_WORD *)(a2 + 2) == 5 )
        {
          v12 = **(_QWORD **)(a2 + 32);
          if ( *(_WORD *)(v12 + 58) == 131 )
          {
            v13 = gpRSAccessHead;
            if ( gpRSAccessHead )
            {
              while ( *(_DWORD *)(v13 + 8) != *(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(v12 + 88) + 88LL) + 12LL) )
              {
                v13 = *(_QWORD *)v13;
                if ( !v13 )
                  goto LABEL_17;
              }
              if ( v13 && *(_QWORD *)(v13 + 32) && !*(_QWORD *)(v13 + 16) )
                return RawFieldAccess(a1, 0LL, a2);
            }
          }
        }
LABEL_17:
        v14 = 128;
        if ( a3[5] )
          v14 = a3[7] + 128;
        v15 = v14 + 16;
        v41 = 0LL;
        v16 = a1 + 432;
        v17 = 0LL;
        if ( v14 + 16 < v14 )
          goto LABEL_71;
        if ( v15 < 0x20 )
          v15 = 32;
        if ( v15 + 7 < v15 )
          goto LABEL_71;
        v18 = (v15 + 7) & 0xFFFFFFF8;
        byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        if ( v18 <= *(_DWORD *)(v16 + 8) - (int)v16 - 48 )
        {
          v22 = v16;
          v43 = v16;
          while ( 1 )
          {
            v23 = *(_QWORD *)(v22 + 40);
            v17 = 0LL;
            if ( v23 )
            {
              v33 = *(_QWORD *)(v22 + 40);
              while ( 1 )
              {
                v17 = v33 - 16;
                if ( v18 <= *(_DWORD *)(v33 - 12) )
                  break;
                v33 = *(_QWORD *)(v33 + 8);
                if ( v33 == v23 )
                {
                  if ( v18 > *(_DWORD *)(v17 + 4) )
                    v17 = 0LL;
                  break;
                }
              }
            }
            if ( v17 )
              break;
            if ( v18 <= *(_DWORD *)(v22 + 8) - *(_DWORD *)(v22 + 32) )
            {
              v17 = *(_QWORD *)(v22 + 32);
              *(_QWORD *)(v22 + 32) = v17 + v18;
              *(_DWORD *)(v17 + 4) = v18;
              goto LABEL_29;
            }
            v41 = v22;
            v22 = *(_QWORD *)(v22 + 24);
            v43 = v22;
            if ( !v22 )
              goto LABEL_29;
          }
          ListRemoveEntry((_QWORD **)(v17 + 16), v22 + 40);
          v19 = v18;
          if ( *(unsigned int *)(v17 + 4) >= (unsigned __int64)v18 + 32 )
          {
            v35 = v17 + v18;
            *(_DWORD *)v35 = 0;
            v36 = *(_DWORD *)(v17 + 4) - v18;
            *(_QWORD *)(v35 + 8) = v22;
            *(_DWORD *)(v35 + 4) = v36;
            *(_DWORD *)(v17 + 4) = v18;
            HeapInsertFreeList(v22, v35);
          }
LABEL_29:
          if ( v17 )
            goto LABEL_30;
          if ( v16 == gpheapGlobal )
            v34 = NewGlobalHeap(&v43);
          else
            v34 = NewLocalHeap(&v43, v19, v20, v21);
          if ( !v34 )
          {
            v22 = v43;
            *(_QWORD *)(v43 + 16) = v16;
            *(_QWORD *)(v41 + 24) = v22;
            v17 = *(_QWORD *)(v22 + 32);
            *(_QWORD *)(v22 + 32) = v17 + v18;
            *(_DWORD *)(v17 + 4) = v18;
LABEL_30:
            *(_DWORD *)v17 = 1297237576;
            *(_QWORD *)(v17 + 8) = v22;
            memset((void *)(v17 + 16), 0, v18 - 16LL);
          }
        }
        KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
        if ( v17 )
        {
          v24 = (_DWORD *)(v17 + 16);
          if ( v17 != -16 )
          {
            *(_QWORD *)(v17 + 24) = *(_QWORD *)(a1 + 416);
            *(_QWORD *)(a1 + 416) = v24;
            *(_QWORD *)(v17 + 40) = ReadFieldObj;
            *v24 = 1330004801;
            *(_QWORD *)(v17 + 48) = a2;
            *(_QWORD *)(v17 + 56) = v40;
            *(_QWORD *)(v17 + 64) = v40 + v9;
            v25 = a3[3] & 0xF;
            v26 = 1;
            if ( (unsigned int)(v25 - 1) <= 3 )
              v26 = 1 << (v25 - 1);
            v27 = 8 * v26;
            *(_DWORD *)(v17 + 72) = v26;
            v28 = 8 * v26 + a3[2] + a3[1] - 1;
            if ( v27 == 8 )
              v29 = v28 >> 3;
            else
              v29 = v28 / v27;
            *(_DWORD *)(v17 + 76) = v29;
            v30 = 8 * *(_DWORD *)(v17 + 72);
            if ( v30 >= 0x40 )
              v31 = 0LL;
            else
              v31 = 1LL << v30;
            *(_QWORD *)(v17 + 80) = v31 - 1;
            *(_DWORD *)(v17 + 88) = 8 * *(_DWORD *)(v17 + 72) - a3[1];
            *(_DWORD *)(v17 + 92) = a3[1];
            memmove((void *)(v17 + 112), a3, (unsigned int)(a3[7] + 32));
            return v8;
          }
        }
LABEL_71:
        LogError(3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
        return (unsigned int)-1072431102;
      }
      if ( *(_WORD *)(a4 + 2) != 3 )
      {
        LogError(3222536201LL);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a4 + 2));
        PrintDebugMessage(163, ObjectTypeName, 0, 0, 0LL);
        return 3222536201LL;
      }
    }
    else
    {
      if ( (a3[3] & 0x10000) == 0 && a3[2] <= (unsigned int)(8 * v10) )
      {
        *(_WORD *)(a4 + 2) = 1;
        v11 = a4 + 16;
        v9 = v10;
        goto LABEL_9;
      }
      *(_WORD *)(a4 + 2) = 3;
      v38 = (unsigned int)(a3[2] + 7) >> 3;
      *(_DWORD *)(a4 + 24) = v38;
      v39 = (void *)HeapAlloc(gpheapGlobal, 1179992648, v38);
      *(_QWORD *)(a4 + 32) = v39;
      if ( !v39 )
      {
        LogError(3221225626LL);
        PrintDebugMessage(161, *(_DWORD *)(a4 + 24), 0, 0, 0LL);
        return 3221225626LL;
      }
      memset(v39, 0, *(unsigned int *)(a4 + 24));
    }
    v9 = *(_DWORD *)(a4 + 24);
    goto LABEL_67;
  }
  if ( *(_WORD *)(a2 + 2) == 5 )
    return RawFieldAccess(a1, 0LL, a2);
  LogError(3222536209LL);
  PrintDebugMessage(162, a3[3], 0, 0, 0LL);
  return 3222536209LL;
}
