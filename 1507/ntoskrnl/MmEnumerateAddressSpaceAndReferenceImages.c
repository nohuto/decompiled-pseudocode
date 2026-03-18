/*
 * XREFs of MmEnumerateAddressSpaceAndReferenceImages @ 0x1404B4A40
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x140425680 (EtwpEnumerateAddressSpace.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MiUnlockVad @ 0x1400894F0 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140089560 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400895D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x14008964C (MiVadDeleted.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiFillMapFileInfo @ 0x1406A0750 (MiFillMapFileInfo.c)
 */

PVOID __fastcall MmEnumerateAddressSpaceAndReferenceImages(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  struct _KTHREAD *CurrentThread; // rbp
  PVOID v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  PVOID PoolWithTag; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rcx
  _QWORD *k; // rdi
  ULONG_PTR *i; // r15
  _QWORD **v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // rcx
  __int16 v19; // dx
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // r14
  unsigned __int64 v23; // rdx
  _QWORD *j; // rax
  __int64 v26; // rdx
  int v27; // r8d
  int v28; // r8d
  int v29; // r8d
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-68h]
  _BYTE v33[48]; // [rsp+28h] [rbp-60h] BYREF

  v5 = (a2 & 1) != 0;
  if ( (a2 & 2) != 0 )
    v5 |= 2u;
  if ( (a2 & 4) != 0 )
    v5 |= 4u;
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)a1 )
  {
    v32 = 0;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v33);
    v32 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, a3, a4);
  v8 = *(_QWORD *)(a1 + 1568);
  if ( v8 )
  {
    v9 = v8 + 1;
    if ( v9 <= 0x555555555555555LL )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48 * v9, 0x3031704Du);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        v13 = *(_QWORD **)(a1 + 1544);
        k = 0LL;
        for ( i = (ULONG_PTR *)PoolWithTag; v13; v13 = (_QWORD *)*v13 )
          k = v13;
        while ( k )
        {
          v16 = (_QWORD **)k[1];
          v17 = (__int64)k;
          v18 = k;
          if ( v16 )
          {
            k = (_QWORD *)k[1];
            for ( j = *v16; j; j = (_QWORD *)*j )
              k = j;
          }
          else
          {
            for ( k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( (_QWORD *)*k == v18 )
                break;
              v18 = k;
            }
          }
          MiLockVad((__int64)CurrentThread, v17, v11, v12);
          if ( (unsigned int)MiVadDeleted(v17) == 1 || v21 == 1 )
          {
LABEL_33:
            MiUnlockVad((__int64)CurrentThread, v17);
            continue;
          }
          if ( v19 < 0 )
          {
            if ( (v5 & 4) == 0 )
              goto LABEL_33;
            *i = (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32)) << 12;
            i[1] = ((*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32))
                  - (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32))
                  + 1) << 12;
            v26 = *(unsigned int *)(v17 + 52);
            LODWORD(v26) = v26 & 0x7FFFFFFF;
            if ( (v26 | ((unsigned __int64)*(unsigned __int8 *)(v17 + 34) << 31)) < 0x7FFFFFFFELL )
              i[3] = (v26 | ((unsigned __int64)*(unsigned __int8 *)(v17 + 34) << 31)) << 12;
            else
              i[3] = 0LL;
            *((_DWORD *)i + 4) = *(_DWORD *)(a1 + 744);
            *((_DWORD *)i + 5) = 0x2000;
            v27 = v21 - 3;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                v29 = v28 - 1;
                if ( v29 )
                {
                  if ( v29 == 1 )
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
              *((_DWORD *)i + 5) = 4202496;
            }
            v31 = *i & 0xFFFFFFFFFFFFFFFCuLL | 2;
          }
          else
          {
            if ( v21 == 2 && (v19 & 0xF8) == 0x38 && (v5 & 1) != 0 )
            {
              v22 = **(_QWORD **)(v17 + 72);
              *i = MI_REFERENCE_CONTROL_AREA_FILE(v22);
              i[1] = (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32)) << 12;
              i[2] = *(_QWORD *)(*(_QWORD *)v22 + 32LL);
              i[3] = ((*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32))
                    - (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32))
                    + 1) << 12;
              *((_DWORD *)i + 10) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 56LL) + 60LL);
              if ( (*(_DWORD *)(v17 + 64) & 0x10000000) != 0 )
              {
                i[1] &= 0xFFFFFFFFFFFFE03FuLL;
              }
              else
              {
                v23 = i[1] & 0xFFFFFFFFFFFFFC3FuLL | (4LL * (*(_BYTE *)(*(_QWORD *)v22 + 15LL) & 0xF0));
                i[1] = v23;
                i[1] = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)(*(unsigned __int8 *)(*(_QWORD *)v22 + 15LL) << 9)) & 0x1C00;
              }
              if ( (v5 & 2) != 0 )
              {
                i[1] ^= (*((_DWORD *)i + 2) ^ *(unsigned __int8 *)(v17 + 67)) & 1;
                i[1] ^= (*((_DWORD *)i + 2) ^ (*(_DWORD *)(v17 + 48) >> 2)) & 0x3E;
                v30 = *(unsigned int *)(v17 + 52);
                LODWORD(v30) = v30 & 0x7FFFFFFF;
                i[4] = (v30 | ((unsigned __int64)*(unsigned __int8 *)(v17 + 34) << 31)) << 12;
              }
              goto LABEL_26;
            }
            if ( (v5 & 2) == 0 )
              goto LABEL_33;
            MiFillMapFileInfo(v20, i);
            v31 = *i & 0xFFFFFFFFFFFFFFFCuLL | 1;
          }
          *i = v31;
LABEL_26:
          MiUnlockVad((__int64)CurrentThread, v17);
          i += 6;
        }
        *i = 0LL;
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v32 == 1 )
    KiUnstackDetachProcess((struct _KTHREAD *)v33, 0);
  return v7;
}
