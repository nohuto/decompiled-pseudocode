/*
 * XREFs of CmpQueryKeyName @ 0x140403390
 * Callers:
 *     <none>
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpConstructNameWithStatus @ 0x1404365E0 (CmpConstructNameWithStatus.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     CmVirtualKCBToRealPath @ 0x140600410 (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rdi
  _QWORD *p_UnicodeString; // rsi
  char v9; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r8d
  _DWORD *v12; // r12
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r14d
  unsigned __int64 v17; // r14
  int v18; // eax
  void *v19; // r9
  const void *v20; // rdx
  unsigned int v21; // ebx
  unsigned int v22; // r12d
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-98h] BYREF
  PVOID P; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-80h]
  _QWORD v31[2]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v32[7]; // [rsp+70h] [rbp-68h] BYREF

  v5 = a4;
  p_UnicodeString = 0LL;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  memset(v32, 0, sizeof(v32));
  v9 = 0;
  v31[1] = v31;
  v31[0] = v31;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
  {
    v12 = a5;
LABEL_4:
    CmpLockRegistry();
    v17 = *(_QWORD *)(a1 + 8);
    v30 = v17;
    if ( (v17 & 1) != 0 )
    {
      v17 ^= 1uLL;
      v30 = v17;
    }
    else if ( (*(_DWORD *)(a1 + 48) & 2) == 0 )
    {
      CmpLockKcbShared(v17);
      v9 = 1;
    }
    v18 = *(_DWORD *)(a1 + 48);
    if ( (v18 & 9) != 0 )
    {
      v22 = -1073741444;
      if ( (v18 & 1) != 0 )
        v22 = -1073740763;
      CmpUnlockRegistry();
      goto LABEL_18;
    }
    if ( CmpVEEnabled && (*(_WORD *)(v17 + 178) & 0x100) != 0 )
    {
      if ( (int)CmVirtualKCBToRealPath(v17, &UnicodeString) >= 0 )
        p_UnicodeString = &UnicodeString;
    }
    else
    {
      P = 0LL;
      CmpConstructNameWithStatus(v17, &P);
      p_UnicodeString = P;
    }
    if ( v9 )
    {
      CmpUnlockKcb((PVOID)v17);
      v9 = 0;
    }
    CmpUnlockRegistry();
    if ( p_UnicodeString )
    {
      if ( (unsigned int)v5 <= 0x10 )
      {
        *v12 = *(unsigned __int16 *)p_UnicodeString + 18;
        v22 = -1073741820;
      }
      else
      {
        v19 = (void *)(a3 + 16);
        v20 = (const void *)p_UnicodeString[1];
        v21 = *(unsigned __int16 *)p_UnicodeString + 2;
        *v12 = *(unsigned __int16 *)p_UnicodeString + 18;
        if ( v21 > (unsigned __int64)(v5 - 16) )
        {
          v21 = v5 - 16;
          v22 = -1073741820;
          if ( (unsigned int)(v5 - 16) < 2 )
            goto LABEL_18;
        }
        else
        {
          v22 = 0;
        }
        v23 = v21 - 2;
        memmove(v19, v20, v23);
        *(_WORD *)(a3 + 16 + 2 * ((unsigned __int64)v23 >> 1)) = 0;
        *(_WORD *)a3 = v23;
        *(_WORD *)(a3 + 2) = v23;
        *(_QWORD *)(a3 + 8) = a3 + 16;
      }
    }
    else
    {
      v22 = -1073741670;
    }
LABEL_18:
    if ( v9 )
      CmpUnlockKcb((PVOID)v17);
    CmPostCallbackNotification(48, a1, v22, (unsigned int)v32, (__int64)v31);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v24, v25, v26);
    if ( UnicodeString.Buffer )
    {
      RtlFreeAnsiString(&UnicodeString);
    }
    else if ( p_UnicodeString )
    {
      CmpFreeTransientPoolWithTag(p_UnicodeString, 0x624E4D43u);
    }
    return v22;
  }
  v32[0] = a1;
  v32[1] = a3;
  LODWORD(v32[2]) = v5;
  v12 = a5;
  v32[3] = a5;
  LOBYTE(v11) = 1;
  v13 = CmpCallCallBacks(47, (unsigned int)v32, v11, 48, a1, (__int64)v31);
  v16 = v13;
  if ( v13 >= 0 )
    goto LABEL_4;
  if ( v13 == -1073740541 )
    v16 = 0;
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), 0LL, v14, v15);
  return v16;
}
