/*
 * XREFs of CmpQueryKeyName @ 0x140420760
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     CmVirtualKCBToRealPath @ 0x1405E1C6C (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpQueryKeyName(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rdi
  _QWORD *p_UnicodeString; // r14
  char v9; // r15
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v11; // r12
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rbx
  void *v15; // r9
  const void *v16; // rdx
  unsigned int v17; // esi
  unsigned int v18; // r12d
  unsigned int v19; // esi
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-88h] BYREF
  __int64 v22; // [rsp+50h] [rbp-78h]
  _QWORD v23[2]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v24[7]; // [rsp+68h] [rbp-60h] BYREF

  v5 = (unsigned int)a4;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  memset(v24, 0, sizeof(v24));
  p_UnicodeString = 0LL;
  v9 = 0;
  v23[1] = v23;
  v23[0] = v23;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
  {
    v11 = a5;
LABEL_4:
    CmpLockRegistry(a1, a2, a3, a4);
    v14 = *(_QWORD *)(a1 + 8);
    v22 = v14;
    if ( (v14 & 1) != 0 )
    {
      v14 ^= 1uLL;
      v22 = v14;
    }
    else if ( (*(_DWORD *)(a1 + 48) & 2) == 0 )
    {
      CmpLockKcbShared(v14);
      v9 = 1;
    }
    if ( (*(_DWORD *)(v14 + 4) & 0x20000) != 0 )
    {
      v18 = -1073741444;
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
        v18 = -1073740763;
      CmpUnlockRegistry();
      goto LABEL_18;
    }
    if ( CmpVEEnabled && (*(_WORD *)(v14 + 186) & 0x100) != 0 )
    {
      if ( (int)CmVirtualKCBToRealPath(v14, &UnicodeString) >= 0 )
        p_UnicodeString = &UnicodeString;
    }
    else
    {
      p_UnicodeString = CmpConstructName(v14);
    }
    if ( v9 )
    {
      CmpUnlockKcb((char *)v14);
      v9 = 0;
    }
    CmpUnlockRegistry();
    if ( p_UnicodeString )
    {
      if ( (unsigned int)v5 <= 0x10 )
      {
        *v11 = *(unsigned __int16 *)p_UnicodeString + 18;
        v18 = -1073741820;
      }
      else
      {
        v15 = (void *)(a3 + 16);
        v16 = (const void *)p_UnicodeString[1];
        v17 = *(unsigned __int16 *)p_UnicodeString + 2;
        *v11 = *(unsigned __int16 *)p_UnicodeString + 18;
        if ( v17 > (unsigned __int64)(v5 - 16) )
        {
          v17 = v5 - 16;
          v18 = -1073741820;
          if ( (unsigned int)(v5 - 16) < 2 )
            goto LABEL_18;
        }
        else
        {
          v18 = 0;
        }
        v19 = v17 - 2;
        memmove(v15, v16, v19);
        *(_WORD *)(a3 + 16 + 2 * ((unsigned __int64)v19 >> 1)) = 0;
        *(_WORD *)a3 = v19;
        *(_WORD *)(a3 + 2) = v19;
        *(_QWORD *)(a3 + 8) = a3 + 16;
      }
    }
    else
    {
      v18 = -1073741670;
    }
LABEL_18:
    if ( v9 )
      CmpUnlockKcb((char *)v14);
    CmPostCallbackNotification(48, a1, v18, (unsigned int)v24, (__int64)v23);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( UnicodeString.Buffer )
    {
      RtlFreeAnsiString(&UnicodeString);
    }
    else if ( p_UnicodeString )
    {
      ExFreePoolWithTag(p_UnicodeString, 0x624E4D43u);
    }
    return v18;
  }
  v24[0] = a1;
  v24[1] = a3;
  LODWORD(v24[2]) = v5;
  v11 = a5;
  v24[3] = a5;
  v12 = CmpCallCallBacks(0x2Fu, (__int64)v24, 1, 0x30u, a1, (__int64)v23);
  v13 = v12;
  if ( v12 >= 0 )
    goto LABEL_4;
  if ( v12 == -1073740541 )
    v13 = 0;
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v13;
}
