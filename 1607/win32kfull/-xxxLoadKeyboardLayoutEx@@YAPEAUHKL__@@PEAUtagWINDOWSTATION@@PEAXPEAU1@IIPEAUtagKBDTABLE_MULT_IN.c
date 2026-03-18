/*
 * XREFs of ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00E67CC
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C00E66F4 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C00E7048 (SetGlobalKeyboardTableInfo.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C00E7090 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C00E728C (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ?xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00E7338 (-xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     HKLtoPKL @ 0x1C00E8460 (HKLtoPKL.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C00E84C0 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     xxxClientGetCharsetInfo @ 0x1C00E8FA4 (xxxClientGetCharsetInfo.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C00E9570 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     xxxImmLoadLayout @ 0x1C012EE1C (xxxImmLoadLayout.c)
 *     DestroyKF @ 0x1C01342F0 (DestroyKF.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C01D5290 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 */

HKL __fastcall xxxLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        void *a2,
        HKL a3,
        unsigned int a4,
        unsigned int a5,
        wchar_t *a6,
        PCWSTR SourceString,
        signed int DefaultLocaleId,
        unsigned int a9)
{
  __int64 v9; // rbx
  int v11; // r9d
  __int64 v13; // r10
  int v14; // esi
  unsigned int v15; // r14d
  struct tagKL *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 Layout; // r14
  const unsigned __int16 *v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  struct tagKBDFILE *KeyboardLayoutFile; // r12
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // r12d
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rax
  signed int v36; // eax
  struct tagKBDFILE *v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  ULONG Value; // [rsp+48h] [rbp-69h] BYREF
  int CharsetInfo; // [rsp+4Ch] [rbp-65h]
  _QWORD v43[3]; // [rsp+50h] [rbp-61h] BYREF
  int v44; // [rsp+68h] [rbp-49h]
  int v45; // [rsp+6Ch] [rbp-45h]
  __int64 v46; // [rsp+70h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-39h] BYREF
  UNICODE_STRING String; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v49[10]; // [rsp+98h] [rbp-19h] BYREF

  v9 = DefaultLocaleId;
  v11 = (int)a3;
  v13 = 0LL;
  if ( !DefaultLocaleId )
    return 0LL;
  if ( (*((_DWORD *)a1 + 8) & 4) != 0 )
    return 0LL;
  if ( a3 )
  {
    v13 = HKLtoPKL(gptiCurrent, a3);
    if ( !v13 )
      return 0LL;
  }
  if ( (_DWORD)v9 == v11 )
    return *(HKL *)(v13 + 40);
  v14 = a9;
  v15 = a9 & 0x40000000;
  if ( (a9 & 0x40000000) != 0 )
  {
    if ( PsGetThreadProcessId((PETHREAD)*gptiCurrent) != (HANDLE)gpidLogon )
    {
      UserSetLastError(1004LL);
      return 0LL;
    }
    xxxFreeImeKeyboardLayouts(a1);
    while ( 1 )
    {
      v16 = (struct tagKL *)HKLtoPKL(gptiCurrent, 1LL);
      if ( !v16 )
        break;
      xxxInternalUnloadKeyboardLayout(a1, v16, 0x80000000);
    }
  }
  v17 = *((_QWORD *)a1 + 5);
  v18 = v17;
  if ( v17 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v18 + 40) == v9 )
      {
        v19 = *(_DWORD *)(v18 + 32);
        if ( v19 >= 0 )
          break;
      }
      v18 = *(_QWORD *)(v18 + 16);
      if ( v18 == v17 )
        goto LABEL_28;
    }
    if ( (v19 & 0x20000000) != 0 )
    {
      v20 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v18;
      *(_BYTE *)(v20 + 17) &= ~1u;
      *(_DWORD *)(v18 + 32) &= ~0x20000000u;
    }
    else if ( !v15 )
    {
      v14 &= ~0x80u;
    }
LABEL_14:
    v49[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v49;
    v49[1] = v18;
    ++*(_DWORD *)(v18 + 8);
    if ( a3 )
    {
      v38 = HKLtoPKL(gptiCurrent, a3);
      if ( v38 )
      {
        v43[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v43;
        ++*(_DWORD *)(v38 + 8);
        v43[1] = v38;
        xxxSetPKLinThreads((struct tagKL *)v18, (struct tagKL *)v38);
        xxxInternalUnloadKeyboardLayout(a1, (struct tagKL *)v38, 0x80000000);
        ThreadUnlock1(v40, v39);
      }
    }
    if ( (v14 & 8) != 0 )
      ReorderKeyboardLayouts(a1, (struct tagKL *)v18);
    xxxWindowEvent(0x80000000, 0LL, 0, 0, 0);
    if ( (v14 & 0x80u) == 0 )
    {
      v21 = (unsigned int)(*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL));
      if ( ((*(_WORD *)(gptiCurrent + 600LL) | *(_WORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
      {
        xxxCallHook(8u, 0LL, 0LL, 0xAu);
        gLCIDSentToShell = 0LL;
      }
    }
    if ( (v14 & 1) != 0 )
      xxxInternalActivateKeyboardLayout(v18, (unsigned int)v14, 0LL);
    if ( (v14 & 0x40000000) != 0 )
    {
      SetGlobalKeyboardTableInfo(v18);
      HMAssignmentLock(gspklBaseLayout, v18);
      xxxSetPKLinThreads((struct tagKL *)v18, 0LL);
    }
    if ( v14 < 0 && !gspklBaseLayout )
      SetGlobalKeyboardTableInfo(v18);
    v23 = ThreadUnlock1(v22, v21);
    if ( v23 )
      return *(HKL *)(v23 + 40);
    return 0LL;
  }
LABEL_28:
  v46 = v9;
  if ( (WORD1(v9) & 0xF000) == 0xE000 || (*gpsi & 4) != 0 )
  {
    Layout = xxxImmLoadLayout(v9);
    if ( !Layout && (v14 & 0xC0000000) == 0 )
      return 0LL;
  }
  else
  {
    Layout = 0LL;
  }
  if ( !gSystemFS )
  {
    ZwQueryDefaultLocale(0, (PLCID)&DefaultLocaleId);
    if ( (unsigned int)xxxClientGetCharsetInfo((unsigned int)DefaultLocaleId, v43) )
    {
      gSystemFS = v44;
      gSystemCPCharSet = v43[0];
    }
    else
    {
      gSystemFS = 0xFFFF;
      gSystemCPCharSet = 0;
    }
  }
  RtlInitUnicodeString(&DestinationString, SourceString + 4);
  RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value);
  CharsetInfo = xxxClientGetCharsetInfo(Value, v43);
  KeyboardLayoutFile = LoadKeyboardLayoutFile(a2, a4, a5, v26, a6 + 290, 0, 0);
  if ( KeyboardLayoutFile )
  {
    LOBYTE(v28) = 13;
    v30 = HMAllocObject(0LL, 0LL, v28);
    v18 = v30;
    if ( v30 )
    {
      HMAssignmentLock(v30 + 56, KeyboardLayoutFile);
      v31 = *(unsigned int *)a6;
      v32 = 0;
      if ( (_DWORD)v31 )
      {
        v35 = Win32AllocPoolZInit(8 * v31, 1953198933LL);
        *(_QWORD *)(v18 + 96) = v35;
        if ( v35 )
        {
          v36 = 0;
          DefaultLocaleId = 0;
          if ( *(_DWORD *)a6 )
          {
            do
            {
              if ( *(_QWORD *)&a6[8 * v32 + 324] )
              {
                a6[36 * v32 + 33] = 0;
                v37 = LoadKeyboardLayoutFile(
                        *(void **)&a6[8 * v32 + 324],
                        *(_DWORD *)&a6[8 * v32 + 328],
                        *(_DWORD *)&a6[8 * v32 + 330],
                        (const unsigned __int16 *)(2LL * v32),
                        &a6[36 * v32 + 2],
                        *(_DWORD *)&a6[36 * v32 + 34],
                        *(_DWORD *)&a6[36 * v32 + 36]);
                if ( !v37 )
                  break;
                HMAssignmentLock(*(_QWORD *)(v18 + 96) + 8LL * (unsigned int)DefaultLocaleId++, v37);
              }
              ++v32;
            }
            while ( v32 < *(_DWORD *)a6 );
            v14 = a9;
            v36 = DefaultLocaleId;
          }
          *(_DWORD *)(v18 + 88) = v36;
        }
      }
      *(_QWORD *)(v18 + 40) = v46;
      *(_QWORD *)(v18 + 16) = v18;
      *(_QWORD *)(v18 + 24) = v18;
      *(_DWORD *)(v18 + 32) = 0;
      *(_WORD *)(v18 + 74) = 0;
      RtlInitUnicodeString(&String, SourceString);
      RtlUnicodeStringToInteger(&String, 0x10u, (PULONG)(v18 + 112));
      if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
        *(_DWORD *)(v18 + 32) |= 0x80000000;
      HMAssignmentLock(v18 + 48, *(_QWORD *)(v18 + 56));
      v33 = *(_QWORD *)(v18 + 48);
      *(_DWORD *)(v18 + 104) = *(_DWORD *)(*(_QWORD *)(v33 + 32) + 96LL);
      *(_DWORD *)(v18 + 108) = *(_DWORD *)(*(_QWORD *)(v33 + 32) + 100LL);
      *(_DWORD *)(*(_QWORD *)(v33 + 32) + 80LL) |= ((unsigned int)v14 >> 15) & 7;
      *(_QWORD *)(v18 + 80) = Layout;
      if ( CharsetInfo )
      {
        *(_WORD *)(v18 + 72) = WORD2(v43[0]);
        *(_DWORD *)(v18 + 64) = v45;
        *(_DWORD *)(v18 + 68) = v43[0];
      }
      else
      {
        *(_WORD *)(v18 + 72) = 0;
        *(_QWORD *)(v18 + 64) = 1LL;
      }
      v34 = *((_QWORD *)a1 + 5);
      if ( v34 )
      {
        *(_QWORD *)(v18 + 16) = v34;
        *(_QWORD *)(v18 + 24) = *(_QWORD *)(v34 + 24);
        *(_QWORD *)(*(_QWORD *)(v34 + 24) + 16LL) = v18;
        *(_QWORD *)(v34 + 24) = v18;
      }
      else
      {
        HMAssignmentLock((char *)a1 + 40, v18);
      }
      goto LABEL_14;
    }
    DestroyKF(KeyboardLayoutFile);
  }
  if ( Layout )
    Win32FreePool(Layout, v27, v28);
  return 0LL;
}
