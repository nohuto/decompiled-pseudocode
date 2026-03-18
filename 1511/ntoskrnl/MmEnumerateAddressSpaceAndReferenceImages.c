/*
 * XREFs of MmEnumerateAddressSpaceAndReferenceImages @ 0x1403F71D0
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x1403F4C98 (EtwpEnumerateAddressSpace.c)
 * Callees:
 *     MiUnlockVad @ 0x140038910 (MiUnlockVad.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14004AD10 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400627F0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     MiFillMapFileInfo @ 0x1406210BC (MiFillMapFileInfo.c)
 */

PVOID __fastcall MmEnumerateAddressSpaceAndReferenceImages(__int64 a1, char a2)
{
  char v3; // bl
  struct _KTHREAD *CurrentThread; // rbp
  PVOID v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  char *PoolWithTag; // rax
  _QWORD *v9; // rcx
  _QWORD *k; // rdi
  char *i; // r15
  _QWORD **v12; // rax
  __int64 v13; // rsi
  _QWORD *v14; // rcx
  __int16 v15; // dx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // r14
  unsigned __int64 v19; // rdx
  _QWORD *j; // rax
  __int64 v22; // rdx
  int v23; // r8d
  int v24; // r8d
  int v25; // r8d
  int v26; // ecx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-78h]
  PVOID v30; // [rsp+28h] [rbp-70h]
  $D4FCF91253F76F57393CBFE908971F67 v31; // [rsp+30h] [rbp-68h] BYREF

  v3 = (a2 & 1) != 0;
  if ( (a2 & 2) != 0 )
    v3 |= 2u;
  if ( (a2 & 4) != 0 )
    v3 |= 4u;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)a1 )
  {
    v29 = 0;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)&v31);
    v29 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  v6 = *(_QWORD *)(a1 + 1576);
  if ( v6 )
  {
    v7 = v6 + 1;
    if ( v7 <= 0x555555555555555LL )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 48 * v7, 0x3031704Du);
      v30 = PoolWithTag;
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        v9 = *(_QWORD **)(a1 + 1552);
        k = 0LL;
        for ( i = PoolWithTag; v9; v9 = (_QWORD *)*v9 )
          k = v9;
        if ( k )
        {
          while ( 1 )
          {
            v12 = (_QWORD **)k[1];
            v13 = (__int64)k;
            v14 = k;
            if ( v12 )
            {
              k = (_QWORD *)k[1];
              for ( j = *v12; j; j = (_QWORD *)*j )
                k = j;
            }
            else
            {
              for ( k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*k == v14 )
                  break;
                v14 = k;
              }
            }
            MiLockVad((__int64)CurrentThread, v13);
            if ( MiVadDeleted(v13) || v17 == 1 )
            {
LABEL_28:
              MiUnlockVad((__int64)CurrentThread, v13);
              goto LABEL_29;
            }
            if ( v15 < 0 )
            {
              if ( (v3 & 4) == 0 )
                goto LABEL_28;
              *(_QWORD *)i = (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) << 12;
              *((_QWORD *)i + 1) = ((*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32))
                                  - (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32))
                                  + 1) << 12;
              v22 = *(unsigned int *)(v13 + 52);
              LODWORD(v22) = v22 & 0x7FFFFFFF;
              if ( (v22 | ((unsigned __int64)*(unsigned __int8 *)(v13 + 34) << 31)) < 0x7FFFFFFFELL )
                *((_QWORD *)i + 3) = (v22 | ((unsigned __int64)*(unsigned __int8 *)(v13 + 34) << 31)) << 12;
              else
                *((_QWORD *)i + 3) = 0LL;
              *((_DWORD *)i + 4) = *(_DWORD *)(a1 + 744);
              *((_DWORD *)i + 5) = 0x2000;
              v23 = v17 - 3;
              if ( v23 )
              {
                v24 = v23 - 1;
                if ( v24 )
                {
                  v25 = v24 - 1;
                  if ( v25 )
                  {
                    if ( v25 == 1 )
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
                v26 = *((_DWORD *)i + 5);
                if ( (*(_DWORD *)(v13 + 48) & 0x40000) == 0 )
                  v26 = 4202496;
                *((_DWORD *)i + 5) = v26;
              }
              v28 = *(_QWORD *)i & 0xFFFFFFFFFFFFFFFCuLL | 2;
            }
            else
            {
              if ( v17 == 2 && (v15 & 0xF8) == 0x38 && (v3 & 1) != 0 )
              {
                v18 = **(_QWORD **)(v13 + 72);
                *(_QWORD *)i = MI_REFERENCE_CONTROL_AREA_FILE(v18);
                *((_QWORD *)i + 1) = (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) << 12;
                *((_QWORD *)i + 2) = *(_QWORD *)(*(_QWORD *)v18 + 32LL);
                *((_QWORD *)i + 3) = ((*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32))
                                    - (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32))
                                    + 1) << 12;
                *((_DWORD *)i + 10) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 56LL) + 60LL);
                if ( (*(_DWORD *)(v13 + 64) & 0x10000000) != 0 )
                {
                  *((_QWORD *)i + 1) &= 0xFFFFFFFFFFFFE03FuLL;
                }
                else
                {
                  v19 = *((_QWORD *)i + 1) & 0xFFFFFFFFFFFFFC3FuLL | (4LL * (*(_BYTE *)(*(_QWORD *)v18 + 15LL) & 0xF0));
                  *((_QWORD *)i + 1) = v19;
                  *((_QWORD *)i + 1) = v19 ^ ((unsigned __int16)v19 ^ (unsigned __int16)(*(unsigned __int8 *)(*(_QWORD *)v18 + 15LL) << 9)) & 0x1C00;
                }
                if ( (v3 & 2) != 0 )
                {
                  *((_QWORD *)i + 1) ^= (*((_DWORD *)i + 2) ^ *(unsigned __int8 *)(v13 + 67)) & 1;
                  *((_QWORD *)i + 1) ^= (*((_DWORD *)i + 2) ^ (*(_DWORD *)(v13 + 48) >> 2)) & 0x3E;
                  v27 = *(unsigned int *)(v13 + 52);
                  LODWORD(v27) = v27 & 0x7FFFFFFF;
                  *((_QWORD *)i + 4) = (v27 | ((unsigned __int64)*(unsigned __int8 *)(v13 + 34) << 31)) << 12;
                }
                goto LABEL_26;
              }
              if ( (v3 & 2) == 0 )
                goto LABEL_28;
              MiFillMapFileInfo(v16, i);
              v28 = *(_QWORD *)i & 0xFFFFFFFFFFFFFFFCuLL | 1;
            }
            *(_QWORD *)i = v28;
LABEL_26:
            MiUnlockVad((__int64)CurrentThread, v13);
            i += 48;
LABEL_29:
            if ( !k )
            {
              v5 = v30;
              break;
            }
          }
        }
        *(_QWORD *)i = 0LL;
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v29 == 1 )
    KiUnstackDetachProcess(&v31, 0LL);
  return v5;
}
