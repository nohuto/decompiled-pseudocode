/*
 * XREFs of CmpQueryKeyName @ 0x140427100
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmVirtualKCBToRealPath @ 0x140657A00 (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rdi
  UNICODE_STRING *p_UnicodeString; // rsi
  char v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r8d
  _DWORD *v12; // r12
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rbx
  void *v16; // r9
  wchar_t *Buffer; // rdx
  unsigned int v18; // r15d
  unsigned int v19; // r12d
  unsigned int v20; // r15d
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  struct _KTHREAD *v24; // rdx
  __int16 v25; // ax
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-88h] BYREF
  __int64 v27; // [rsp+50h] [rbp-78h]
  _QWORD v28[2]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v29[2]; // [rsp+68h] [rbp-60h] BYREF
  int v30; // [rsp+78h] [rbp-50h]
  __int64 v31; // [rsp+80h] [rbp-48h]

  v5 = a4;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  p_UnicodeString = 0LL;
  v9 = 0;
  v28[1] = v28;
  v28[0] = v28;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
  {
    v12 = a5;
LABEL_4:
    CmpLockRegistry();
    v15 = *(_QWORD *)(a1 + 8);
    v27 = v15;
    if ( (v15 & 1) != 0 )
    {
      v15 ^= 1uLL;
      v27 = v15;
    }
    else if ( (*(_DWORD *)(a1 + 48) & 2) == 0 )
    {
      CmpLockKcbShared(v15);
      v9 = 1;
    }
    if ( (*(_DWORD *)(v15 + 4) & 0x20000) != 0 )
    {
      v19 = -1073741444;
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
        v19 = -1073740763;
      CmpUnlockRegistry();
      goto LABEL_18;
    }
    if ( CmpVEEnabled && (*(_WORD *)(v15 + 186) & 0x100) != 0 )
    {
      if ( (int)CmVirtualKCBToRealPath(v15, &UnicodeString) >= 0 )
        p_UnicodeString = &UnicodeString;
    }
    else
    {
      p_UnicodeString = (UNICODE_STRING *)CmpConstructName(v15);
    }
    if ( v9 )
    {
      CmpUnlockKcb((PVOID)v15);
      v9 = 0;
    }
    CmpUnlockRegistry();
    if ( p_UnicodeString )
    {
      if ( (unsigned int)v5 <= 0x10 )
      {
        *v12 = p_UnicodeString->Length + 18;
        v19 = -1073741820;
      }
      else
      {
        v16 = (void *)(a3 + 16);
        Buffer = p_UnicodeString->Buffer;
        v18 = p_UnicodeString->Length + 2;
        *v12 = p_UnicodeString->Length + 18;
        if ( v18 > (unsigned __int64)(v5 - 16) )
        {
          v18 = v5 - 16;
          v19 = -1073741820;
          if ( (unsigned int)(v5 - 16) < 2 )
            goto LABEL_18;
        }
        else
        {
          v19 = 0;
        }
        v20 = v18 - 2;
        memmove(v16, Buffer, v20);
        *(_WORD *)(a3 + 16 + 2 * ((unsigned __int64)v20 >> 1)) = 0;
        *(_WORD *)a3 = v20;
        *(_WORD *)(a3 + 2) = v20;
        *(_QWORD *)(a3 + 8) = a3 + 16;
      }
    }
    else
    {
      v19 = -1073741670;
    }
LABEL_18:
    if ( v9 )
      CmpUnlockKcb((PVOID)v15);
    CmPostCallbackNotification(48, a1, v19, (unsigned int)v29, (__int64)v28);
    v21 = KeGetCurrentThread();
    v22 = v21->KernelApcDisable + 1;
    v21->KernelApcDisable = v22;
    if ( !v22
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
      && !v21->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( UnicodeString.Buffer )
    {
      RtlFreeAnsiString(&UnicodeString);
    }
    else if ( p_UnicodeString )
    {
      ExFreePoolWithTag(p_UnicodeString, 0x624E4D43u);
    }
    return v19;
  }
  v29[0] = a1;
  v29[1] = a3;
  v30 = v5;
  v12 = a5;
  v31 = (__int64)a5;
  LOBYTE(v11) = 1;
  v13 = CmpCallCallBacks(47, (unsigned int)v29, v11, 48, a1, (__int64)v28);
  v14 = v13;
  if ( v13 >= 0 )
    goto LABEL_4;
  if ( v13 == -1073740541 )
    v14 = 0;
  v24 = KeGetCurrentThread();
  v25 = v24->KernelApcDisable + 1;
  v24->KernelApcDisable = v25;
  if ( !v25
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
    && !v24->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v14;
}
