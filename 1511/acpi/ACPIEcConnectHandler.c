/*
 * XREFs of ACPIEcConnectHandler @ 0x1C007A360
 * Callers:
 *     ACPIEcInternalControl @ 0x1C0079DD4 (ACPIEcInternalControl.c)
 * Callees:
 *     memmove @ 0x1C0024E80 (memmove.c)
 */

__int64 __fastcall ACPIEcConnectHandler(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 *v4; // r14
  int v6; // ebp
  unsigned __int8 v7; // bl
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // r15d
  PVOID PoolWithTag; // r12
  const void *v12; // rdx
  unsigned __int8 v13; // r8
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // r15
  __int64 v17; // r9
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // r10
  char v20; // dl
  KIRQL NewIrql; // [rsp+68h] [rbp+10h]
  PVOID ImageSectionHandle; // [rsp+70h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(unsigned __int8 **)(v2 + 32);
  if ( *(_DWORD *)(v2 + 16) < 0x20u )
    return 3221225507LL;
  v6 = 1 << (*v4 & 0x1F);
  v7 = *v4 >> 5;
  ImageSectionHandle = MmLockPagableDataSection(ACPIEcConnectHandler);
  v8 = -1073741823;
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v9 = *(_DWORD *)(a1 + 4LL * v7 + 156);
  if ( (v9 & v6) == 0 )
  {
    v8 = 0;
    *(_DWORD *)(a1 + 4LL * v7 + 156) = v6 | v9;
    if ( !*(_BYTE *)(a1 + 446) )
    {
      v10 = *(unsigned __int8 *)(a1 + 447);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * (v10 + 4), 0x45706341u);
      if ( !PoolWithTag )
      {
        v8 = -1073741670;
        goto LABEL_19;
      }
      v12 = *(const void **)(a1 + 448);
      if ( v12 )
      {
        memmove(PoolWithTag, v12, 24LL * (unsigned __int8)v10);
        ExFreePoolWithTag(*(PVOID *)(a1 + 448), 0);
      }
      *(_BYTE *)(a1 + 447) += 4;
      v13 = 0;
      *(_QWORD *)(a1 + 448) = PoolWithTag;
      v14 = 24LL * (unsigned __int8)v10;
      do
      {
        *(_BYTE *)(v14 + *(_QWORD *)(a1 + 448)) = *(_BYTE *)(a1 + 446);
        v15 = v10 + v13++;
        *(_BYTE *)(a1 + 446) = v15;
        v14 += 24LL;
      }
      while ( v13 < 4u );
    }
    v16 = *(unsigned __int8 *)(a1 + 446);
    v17 = *(_QWORD *)(a1 + 448);
    *(_BYTE *)(a1 + 446) = *(_BYTE *)(v17 + 24 * v16);
    if ( *(_BYTE *)(*v4 + a1 + 188) )
    {
      *(_DWORD *)(a1 + 4LL * v7 + 124) &= ~v6;
      v18 = *(_BYTE *)(a1 + 444);
      if ( v18 )
      {
        v19 = *v4;
        while ( 1 )
        {
          v20 = *(_BYTE *)(v18 + a1 + 188);
          if ( v20 == v19 )
            break;
          v18 = *(_BYTE *)(v18 + a1 + 188);
          if ( !v20 )
            goto LABEL_18;
        }
        *(_BYTE *)(v18 + a1 + 188) = *(_BYTE *)(v19 + a1 + 188);
      }
    }
LABEL_18:
    *(_BYTE *)(*v4 + a1 + 188) = v16;
    *(_BYTE *)(v17 + 24 * v16) = 0;
    *(_BYTE *)(v17 + 24 * v16 + 1) = *v4;
    *(_QWORD *)(v17 + 24 * v16 + 8) = *((_QWORD *)v4 + 1);
    *(_QWORD *)(v17 + 24 * v16 + 16) = *((_QWORD *)v4 + 2);
    *((_QWORD *)v4 + 3) = v16;
  }
LABEL_19:
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), NewIrql);
  MmUnlockPagableImageSection(ImageSectionHandle);
  return v8;
}
