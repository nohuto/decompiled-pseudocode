/*
 * XREFs of MiPurgeImageSection @ 0x1401D8B68
 * Callers:
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiLockLeafPage @ 0x1400A2340 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiDereferenceControlAreaPfn @ 0x1400B5418 (MiDereferenceControlAreaPfn.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     MiInvalidateCollidedIos @ 0x1400F16AC (MiInvalidateCollidedIos.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiPurgeImageSection(__int64 a1)
{
  __int64 v1; // r12
  unsigned __int8 v2; // si
  __int64 v3; // rdi
  __int64 i; // r13
  unsigned __int16 v5; // cx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rax
  ULONG_PTR v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  _DWORD *v15; // rcx
  unsigned __int64 v16; // rsi
  __int64 v17; // r12
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // [rsp+20h] [rbp-78h]
  int *v23; // [rsp+28h] [rbp-70h]
  __int64 v24; // [rsp+30h] [rbp-68h]
  __int64 v25; // [rsp+38h] [rbp-60h]
  __int64 v26; // [rsp+40h] [rbp-58h]
  unsigned __int64 v27; // [rsp+48h] [rbp-50h]
  unsigned __int8 v29; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v30; // [rsp+B0h] [rbp+18h]
  unsigned int v31; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v23 = MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF);
  v2 = 17;
  v22 = 0LL;
  v3 = 0LL;
  v29 = 17;
  for ( i = v1 + 120; ; i = *(_QWORD *)(i + 16) )
  {
    v24 = i;
    if ( !i )
      break;
    v5 = *(_WORD *)(i + 34);
    if ( (v5 & 2) != 0 )
    {
      v6 = *(_WORD *)(i + 32) & 0x3E;
      v31 = 0;
      v30 = 0;
      v7 = 16LL * (unsigned int)v6;
      v8 = v7;
      v25 = v7;
      if ( *(_DWORD *)(i + 36) )
      {
        v8 = 16 * (v6 | (i << 12) | 0x40);
        v31 = (*(_DWORD *)(i + 40) << 9) | (v5 >> 4);
      }
      v9 = *(_QWORD *)(i + 8);
      v27 = v9 + 8LL * *(unsigned int *)(i + 44);
      if ( v9 < v27 )
      {
        v10 = v22;
        do
        {
          if ( (v9 & 0xFFF) == 0 || v2 == 17 )
          {
            if ( v2 != 17 )
              MiUnlockProtoPoolPage(v10, v2);
            v22 = MiLockProtoPoolPage(v9, &v29);
            v10 = v22;
            if ( !v22 )
            {
              do
              {
                MmAccessFault(2uLL, v9, 0, 0LL);
                v11 = MiLockProtoPoolPage(v9, &v29);
                v22 = v11;
              }
              while ( !v11 );
              v7 = v25;
              v10 = v11;
            }
            v2 = v29;
          }
          v12 = MiLockLeafPage(v9, 0);
          v13 = MI_READ_PTE_LOCK_FREE((__int64 *)v9);
          v14 = v13;
          if ( !v13 )
            break;
          if ( v12 )
          {
            if ( (*(_BYTE *)(v12 + 34) & 0x10) != 0 || (*(_DWORD *)(v12 + 16) & 0x400LL) == 0 )
            {
              v15 = (_DWORD *)(v12 + 16);
              if ( (*(_DWORD *)(v12 + 16) & 0x400LL) != 0 )
              {
                MiDereferenceControlAreaPfn(v1, 0LL, 2);
                v15 = (_DWORD *)(v12 + 16);
              }
              v16 = 0LL;
              v17 = 0LL;
              v26 = *(_QWORD *)(v12 + 40) & 0xFFFFFFFFFLL;
              if ( *(_WORD *)(v12 + 32) )
              {
                *(_QWORD *)(v12 + 24) |= 0x4000000000000000uLL;
                v18 = *(_BYTE *)(v12 + 34);
                if ( (v18 & 0x20) != 0 && (v18 & 8) == 0 )
                {
                  v17 = *(_QWORD *)v12 - 32LL;
                  if ( *(_QWORD *)(v17 + 16) == v17 + 16 )
                    v17 = 0LL;
                }
                if ( (*v15 & 0x400LL) == 0 )
                  MiChargeCommit((unsigned __int64)v23, 1uLL, 4uLL);
              }
              else
              {
                MiUnlinkPageFromList(v12, 0);
                if ( (*(_DWORD *)(v12 + 16) & 0x400LL) == 0 )
                  v16 = MiCapturePageFileInfoInline((unsigned __int64 *)(v12 + 16), 0, 1);
                MiInsertPageInFreeOrZeroedList((v14 >> 12) & 0xFFFFFFFFFLL, 2uLL);
              }
              *(_QWORD *)v9 = v8;
              if ( (unsigned int)MiPteInShadowRange(v9) )
                MiWritePteShadow(v9, v8);
              _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v17 )
                MiInvalidateCollidedIos(v17);
              v21 = 48 * v26 - 0x58000000000LL;
              MiLockPageAtDpcInline(v21, v19, v20);
              MiDecrementShareCount(v21);
              _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v16 )
                MiReleasePageFileInfo((__int64)v23, v16, 1);
              v2 = v29;
              v1 = a1;
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v2 = v29;
            }
          }
          else if ( (v13 & 0x400) == 0 && v13 != 768 )
          {
            MiReleasePageFileSpace((__int64)v23, v13, 1);
            *(_QWORD *)v9 = v8;
            if ( (unsigned int)MiPteInShadowRange(v9) )
              MiWritePteShadow(v9, v8);
          }
          v9 += 8LL;
          v30 += 4096;
          if ( v30 >= v31 )
            v8 = v7;
        }
        while ( v9 < v27 );
        i = v24;
        v3 = v22;
      }
      if ( v2 != 17 )
      {
        MiUnlockProtoPoolPage(v3, v2);
        v2 = 17;
        v29 = 17;
      }
    }
  }
}
