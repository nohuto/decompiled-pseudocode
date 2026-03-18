/*
 * XREFs of WriteFieldObj @ 0x1C001AB70
 * Callers:
 *     <none>
 * Callees:
 *     HeapInsertFreeList @ 0x1C0019890 (HeapInsertFreeList.c)
 *     PushAccFieldObj @ 0x1C0019C90 (PushAccFieldObj.c)
 *     FreeNameSpaceObjects @ 0x1C0019DC0 (FreeNameSpaceObjects.c)
 *     AccessBaseField @ 0x1C001CA40 (AccessBaseField.c)
 *     GetFieldUnitRegionObj @ 0x1C001DC28 (GetFieldUnitRegionObj.c)
 *     WriteBuffField @ 0x1C001DF54 (WriteBuffField.c)
 *     ReadSystemMem @ 0x1C001F00C (ReadSystemMem.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     PushPreserveWriteObj @ 0x1C005DA1C (PushPreserveWriteObj.c)
 */

__int64 __fastcall WriteFieldObj(__int64 a1, __int64 a2, size_t a3)
{
  unsigned int FieldUnitRegionObj; // edi
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  size_t v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 SystemMem; // rax
  unsigned __int64 *v15; // rsi
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r15
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  void *v30; // rcx
  unsigned int v31; // ecx
  __int64 v32; // r10
  __int64 v33; // r9
  int v34; // r8d
  int v35; // edx
  __int64 v36; // r9
  int v37; // eax
  int v38; // eax
  __int64 v39; // rax
  int (__fastcall *v40)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v41; // rcx
  int v42; // [rsp+20h] [rbp-58h]
  __int64 v43; // [rsp+30h] [rbp-48h] BYREF
  __int64 v44[8]; // [rsp+38h] [rbp-40h] BYREF
  int v45; // [rsp+90h] [rbp+18h] BYREF

  FieldUnitRegionObj = a3;
  if ( (_DWORD)a3 )
  {
    v6 = 3;
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
    if ( !v6 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a2 + 80) >= *(_DWORD *)(a2 + 60) )
        {
          *(_DWORD *)(a2 + 16) += 3;
LABEL_27:
          v24 = *(_QWORD *)(a1 + 416);
          v25 = v24 - 16;
          *(_QWORD *)(a1 + 416) = *(_QWORD *)(v24 + 8);
          *(_DWORD *)(v24 - 16) = 0;
          byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          HeapInsertFreeList(*(_QWORD *)(v25 + 8), (unsigned int *)v25);
          KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
          return FieldUnitRegionObj;
        }
        v7 = *(_QWORD *)(a2 + 32);
        ++*(_DWORD *)(a2 + 16);
        if ( *(_WORD *)(v7 + 2) == 5 )
        {
          v8 = **(_QWORD **)(v7 + 32);
          if ( *(_WORD *)(v8 + 66) == 132 )
            return PushAccFieldObj(
                     a1,
                     (__int64)WriteFieldObj,
                     **(_QWORD **)(v8 + 96) + 64LL,
                     (_DWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 96) + 96LL) + 8LL),
                     a2 + 96,
                     4u);
        }
LABEL_6:
        ++*(_DWORD *)(a2 + 16);
        if ( *(_QWORD *)(a2 + 40) >= *(_QWORD *)(a2 + 48) )
        {
          SystemMem = 0LL;
        }
        else
        {
          v9 = *(unsigned int *)(a2 + 56);
          v10 = *(_QWORD *)(a2 + 64);
          v11 = *(_QWORD *)(a2 + 40);
          v45 = 0;
          v43 = 0LL;
          if ( (unsigned int)v9 <= 8 )
          {
            if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
              || (v40 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable
                                                                                                 + 144)) == 0LL
              || v40(0LL, v11, &v43, (unsigned int)v9, &v45) < 0 )
            {
              a3 = v9;
              if ( v9 == 1 )
                v12 = 0LL;
              else
                v12 = v11 % v9;
              if ( v12 )
              {
                memmove(&v43, (const void *)v11, v9);
              }
              else
              {
                switch ( (_DWORD)v9 )
                {
                  case 1:
                    v13 = *(unsigned __int8 *)v11;
                    goto LABEL_14;
                  case 4:
                    v13 = *(unsigned int *)v11;
                    goto LABEL_14;
                  case 2:
                    v13 = *(unsigned __int16 *)v11;
                    goto LABEL_14;
                  case 8:
                    v13 = *(_QWORD *)v11;
LABEL_14:
                    v43 = v13;
                    break;
                  default:
                    v43 = -1LL;
                    break;
                }
              }
            }
            SystemMem = v10 & v43;
            goto LABEL_16;
          }
          SystemMem = -1LL;
        }
LABEL_16:
        v15 = (unsigned __int64 *)(a2 + 88);
        if ( *(_DWORD *)(a2 + 80) )
        {
          *v15 = SystemMem >> *(_DWORD *)(a2 + 72);
          v29 = *(unsigned int *)(a2 + 56);
          *(_QWORD *)(a2 + 40) += v29;
          v30 = *(void **)(a2 + 40);
          if ( (unsigned __int64)v30 >= *(_QWORD *)(a2 + 48) )
            SystemMem = 0LL;
          else
            SystemMem = ReadSystemMem(v30, (unsigned int)v29);
        }
        else
        {
          *v15 = 0LL;
        }
        *v15 |= *(_QWORD *)(a2 + 64) & (SystemMem << *(_DWORD *)(a2 + 76));
        v16 = *(_QWORD *)(a2 + 32);
        if ( *(_WORD *)(v16 + 2) == 14 )
        {
          FieldUnitRegionObj = WriteBuffField(a1, *(_QWORD *)(v16 + 32), a2 + 96, *v15);
        }
        else
        {
          v17 = *(__int64 **)(v16 + 32);
          v44[0] = 0LL;
          v18 = *v17;
          if ( *(_WORD *)(*v17 + 66) == 132 )
          {
            v31 = *(_DWORD *)(a2 + 104);
            v32 = *(_QWORD *)(v18 + 96);
            if ( v31 >= 0x40 )
              v33 = 0LL;
            else
              v33 = 1LL << v31;
            v34 = *(_DWORD *)(a2 + 108);
            v35 = v34 & 0xF;
            v36 = ~((v33 - 1) << *(_DWORD *)(a2 + 100));
            v37 = 1;
            if ( (unsigned int)(v35 - 1) <= 3 )
              v37 = 1 << (v35 - 1);
            if ( 8 * v37 >= 64 )
            {
              v39 = 0LL;
            }
            else
            {
              LOBYTE(v38) = 1;
              if ( (unsigned int)(v35 - 1) <= 3 )
                v38 = 1 << (v35 - 1);
              v39 = 1LL << (8 * (unsigned __int8)v38);
            }
            if ( ((v39 - 1) & v36) != 0 && (v34 & 0x60) == 0 )
              FieldUnitRegionObj = PushPreserveWriteObj(a1, *(_QWORD *)(v32 + 8) + 64LL, *v15);
            else
              FieldUnitRegionObj = PushAccFieldObj(
                                     a1,
                                     (__int64)WriteFieldObj,
                                     *(_QWORD *)(v32 + 8) + 64LL,
                                     (_DWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 8) + 96LL) + 8LL),
                                     a2 + 88,
                                     4u);
          }
          else
          {
            FieldUnitRegionObj = GetFieldUnitRegionObj(v17, v44, a3);
            if ( !FieldUnitRegionObj )
            {
              v19 = v44[0];
              if ( v44[0] )
              {
                LOBYTE(v42) = 0;
                FieldUnitRegionObj = AccessBaseField(a1, v44[0], (int)a2 + 96, (int)a2 + 88, v42);
                if ( (gdwfAMLI & 4) != 0
                  && _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 112), 0xFFFFFFFF) == 1 )
                {
                  v41 = v44[0];
                  *(_WORD *)(v44[0] + 64) |= 4u;
                  if ( (*(_WORD *)(v41 + 64) & 0x40) == 0 )
                    FreeNameSpaceObjects((_QWORD *)v41);
                }
              }
            }
          }
        }
        if ( FieldUnitRegionObj == 32772 || a2 != *(_QWORD *)(a1 + 416) )
          return FieldUnitRegionObj;
LABEL_25:
        v20 = *(_DWORD *)(a2 + 56);
        *(_DWORD *)(a2 + 96) += v20;
        v21 = *(_DWORD *)(a2 + 100);
        ++*(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 100) = 0;
        v22 = v21 - 8 * v20;
        v23 = *(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 104) += v22;
        if ( v23 >= *(_DWORD *)(a2 + 60) )
        {
          ++*(_DWORD *)(a2 + 16);
          goto LABEL_27;
        }
        *(_DWORD *)(a2 + 16) -= 2;
      }
    }
  }
  v27 = v6 - 1;
  if ( !v27 )
    goto LABEL_6;
  v28 = v27 - 1;
  if ( !v28 )
    goto LABEL_25;
  if ( v28 == 1 )
    goto LABEL_27;
  return (unsigned int)a3;
}
