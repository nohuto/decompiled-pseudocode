/*
 * XREFs of MmEnumerateAddressSpaceAndReferenceImages @ 0x1404294F0
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x140429D0C (EtwpEnumerateAddressSpace.c)
 * Callees:
 *     MiUnlockVad @ 0x140014020 (MiUnlockVad.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002B9E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14002BA50 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     MiVadDeleted @ 0x14002BEF0 (MiVadDeleted.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiFillMapFileInfo @ 0x140657048 (MiFillMapFileInfo.c)
 */

PVOID __fastcall MmEnumerateAddressSpaceAndReferenceImages(__int64 a1, char a2)
{
  char v3; // bl
  struct _KTHREAD *CurrentThread; // rbp
  PVOID v5; // r12
  int v6; // edi
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  char *PoolWithTag; // rax
  _QWORD *v10; // rcx
  _QWORD *k; // rdi
  char *i; // r15
  _QWORD **v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rcx
  __int16 v16; // dx
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // r14
  unsigned __int64 v20; // rdx
  _QWORD *j; // rax
  __int64 v23; // rdx
  int v24; // r8d
  int v25; // r8d
  int v26; // r8d
  int v27; // eax
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  int v30; // [rsp+20h] [rbp-78h]
  PVOID v31; // [rsp+28h] [rbp-70h]
  _BYTE v32[48]; // [rsp+30h] [rbp-68h] BYREF

  v3 = (a2 & 1) != 0;
  if ( (a2 & 2) != 0 )
    v3 |= 2u;
  if ( (a2 & 4) != 0 )
    v3 |= 4u;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)a1 )
  {
    v6 = 0;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v32);
    v6 = 1;
  }
  v30 = v6;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  v7 = *(_QWORD *)(a1 + 1592);
  if ( v7 )
  {
    v8 = v7 + 1;
    if ( v8 <= 0x555555555555555LL )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 48 * v8, 0x3031704Du);
      v31 = PoolWithTag;
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        v10 = *(_QWORD **)(a1 + 1568);
        k = 0LL;
        for ( i = PoolWithTag; v10; v10 = (_QWORD *)*v10 )
          k = v10;
        if ( k )
        {
          while ( 1 )
          {
            v13 = (_QWORD **)k[1];
            v14 = (__int64)k;
            v15 = k;
            if ( v13 )
            {
              k = (_QWORD *)k[1];
              for ( j = *v13; j; j = (_QWORD *)*j )
                k = j;
            }
            else
            {
              for ( k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*k == v15 )
                  break;
                v15 = k;
              }
            }
            MiLockVad((__int64)CurrentThread, v14);
            if ( (unsigned int)MiVadDeleted(v14) == 1 || v18 == 1 )
            {
LABEL_28:
              MiUnlockVad((__int64)CurrentThread, v14);
              goto LABEL_29;
            }
            if ( v16 < 0 )
            {
              if ( (v3 & 4) == 0 )
                goto LABEL_28;
              *(_QWORD *)i = (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) << 12;
              *((_QWORD *)i + 1) = ((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32))
                                  - (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32))
                                  + 1) << 12;
              v23 = *(unsigned int *)(v14 + 52);
              LODWORD(v23) = v23 & 0x7FFFFFFF;
              if ( (v23 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) < 0x7FFFFFFFELL )
                *((_QWORD *)i + 3) = (v23 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) << 12;
              else
                *((_QWORD *)i + 3) = 0LL;
              *((_DWORD *)i + 4) = *(_DWORD *)(a1 + 744);
              *((_DWORD *)i + 5) = 0x2000;
              v24 = v18 - 3;
              if ( v24 )
              {
                v25 = v24 - 1;
                if ( v25 )
                {
                  v26 = v25 - 1;
                  if ( v26 )
                  {
                    if ( v26 == 1 )
                      *((_DWORD *)i + 5) = 8396800;
                  }
                  else
                  {
                    *((_DWORD *)i + 5) = 536879104;
                  }
                }
                else
                {
                  *((_DWORD *)i + 5) = 2105344;
                }
              }
              else
              {
                v27 = *((_DWORD *)i + 5);
                if ( (*(_DWORD *)(v14 + 48) & 0x40000) == 0 )
                  v27 = 4202496;
                *((_DWORD *)i + 5) = v27;
              }
              v29 = *(_QWORD *)i & 0xFFFFFFFFFFFFFFFCuLL | 2;
            }
            else
            {
              if ( v18 == 2 && (v16 & 0xF8) == 0x38 && (v3 & 1) != 0 )
              {
                v19 = **(_QWORD **)(v14 + 72);
                *(_QWORD *)i = MiReferenceControlAreaFile(v19);
                *((_QWORD *)i + 1) = (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) << 12;
                *((_QWORD *)i + 2) = *(_QWORD *)(*(_QWORD *)v19 + 32LL);
                *((_QWORD *)i + 3) = ((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32))
                                    - (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32))
                                    + 1) << 12;
                *((_DWORD *)i + 10) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v19 + 56LL) + 60LL);
                if ( (*(_DWORD *)(v14 + 64) & 0x8000000) != 0 )
                {
                  *((_QWORD *)i + 1) &= 0xFFFFFFFFFFFFE03FuLL;
                }
                else
                {
                  v20 = *((_QWORD *)i + 1) & 0xFFFFFFFFFFFFFC3FuLL | (4LL * (*(_BYTE *)(*(_QWORD *)v19 + 15LL) & 0xF0));
                  *((_QWORD *)i + 1) = v20;
                  *((_QWORD *)i + 1) = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)(*(unsigned __int8 *)(*(_QWORD *)v19 + 15LL) << 9)) & 0x1C00;
                }
                if ( (v3 & 2) != 0 )
                {
                  *((_QWORD *)i + 1) ^= (*((_DWORD *)i + 2) ^ *(unsigned __int8 *)(v14 + 67)) & 1;
                  *((_QWORD *)i + 1) ^= (*((_DWORD *)i + 2) ^ (*(_DWORD *)(v14 + 48) >> 2)) & 0x3E;
                  v28 = *(unsigned int *)(v14 + 52);
                  LODWORD(v28) = v28 & 0x7FFFFFFF;
                  *((_QWORD *)i + 4) = (v28 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) << 12;
                }
                goto LABEL_26;
              }
              if ( (v3 & 2) == 0 )
                goto LABEL_28;
              MiFillMapFileInfo(v17, i);
              v29 = *(_QWORD *)i & 0xFFFFFFFFFFFFFFFCuLL | 1;
            }
            *(_QWORD *)i = v29;
LABEL_26:
            MiUnlockVad((__int64)CurrentThread, v14);
            i += 48;
LABEL_29:
            if ( !k )
            {
              v5 = v31;
              break;
            }
          }
        }
        v6 = v30;
        *(_QWORD *)i = 0LL;
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v6 == 1 )
    KiUnstackDetachProcess((struct _KTHREAD *)v32, 0);
  return v5;
}
