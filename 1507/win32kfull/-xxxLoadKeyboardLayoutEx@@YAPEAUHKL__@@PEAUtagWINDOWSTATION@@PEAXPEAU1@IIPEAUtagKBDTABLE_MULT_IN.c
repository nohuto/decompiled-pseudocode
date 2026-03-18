/*
 * XREFs of ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0139D2C
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0139C54 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     HKLtoPKL @ 0x1C00DAB90 (HKLtoPKL.c)
 *     DestroyKF @ 0x1C0131F90 (DestroyKF.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C013A708 (SetGlobalKeyboardTableInfo.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C013A750 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C013AE4C (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ?xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C013AEF8 (-xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxClientGetCharsetInfo @ 0x1C013B1D4 (xxxClientGetCharsetInfo.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C013B2F0 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C013BB3C (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     xxxImmLoadLayout @ 0x1C013C690 (xxxImmLoadLayout.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C01DD37C (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 */

HKL __fastcall xxxLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        wchar_t *a6,
        PCWSTR SourceString,
        signed int DefaultLocaleId,
        unsigned int a9)
{
  __int64 v9; // rbx
  int v11; // r9d
  struct tagWINDOWSTATION *v12; // r13
  __int64 v13; // r10
  int v15; // esi
  unsigned int v16; // r14d
  struct tagKL *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  bool i; // zf
  int v21; // eax
  __int64 v22; // rdx
  __int64 Layout; // r14
  const unsigned __int16 *v24; // r9
  __int64 v25; // r8
  struct tagKBDFILE *KeyboardLayoutFile; // r12
  __int64 v27; // rax
  unsigned int v28; // r12d
  __int64 v29; // rax
  __int64 v30; // r13
  struct tagKBDFILE *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  ULONG Value; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v41[3]; // [rsp+50h] [rbp-61h] BYREF
  int v42; // [rsp+68h] [rbp-49h]
  int v43; // [rsp+6Ch] [rbp-45h]
  __int64 v44; // [rsp+70h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v46[3]; // [rsp+88h] [rbp-29h] BYREF
  UNICODE_STRING String; // [rsp+A0h] [rbp-11h] BYREF

  v9 = DefaultLocaleId;
  v11 = a3;
  v12 = a1;
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
  v15 = a9;
  v16 = a9 & 0x40000000;
  if ( (a9 & 0x40000000) == 0 )
  {
LABEL_13:
    v18 = *((_QWORD *)v12 + 5);
    v19 = v18;
    for ( i = v18 == 0; ; i = v19 == v18 )
    {
      if ( i )
      {
        v44 = v9;
        if ( (WORD1(v9) & 0xF000) == 0xE000 || (*gpsi & 4) != 0 )
        {
          Layout = xxxImmLoadLayout(v9);
          if ( !Layout && (v15 & 0xC0000000) == 0 )
            return 0LL;
        }
        else
        {
          Layout = 0LL;
        }
        if ( !gSystemFS )
        {
          ZwQueryDefaultLocale(0, (PLCID)&DefaultLocaleId);
          if ( (unsigned int)xxxClientGetCharsetInfo((unsigned int)DefaultLocaleId, v41) )
          {
            gSystemFS = v42;
            gSystemCPCharSet = v41[0];
          }
          else
          {
            gSystemFS = 0xFFFF;
            gSystemCPCharSet = 0;
          }
        }
        RtlInitUnicodeString(&DestinationString, SourceString + 4);
        RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value);
        DefaultLocaleId = xxxClientGetCharsetInfo(Value, v41);
        KeyboardLayoutFile = LoadKeyboardLayoutFile(a2, a4, a5, v24, a6 + 290, 0, 0);
        if ( KeyboardLayoutFile )
        {
          LOBYTE(v25) = 13;
          v27 = HMAllocObject(0LL, 0LL, v25, 120LL);
          v19 = v27;
          if ( v27 )
          {
            HMAssignmentLock(v27 + 56, KeyboardLayoutFile);
            v28 = 0;
            if ( *(_DWORD *)a6 )
            {
              v29 = Win32AllocPoolZInit(8LL * *(unsigned int *)a6, 1953198933LL);
              *(_QWORD *)(v19 + 96) = v29;
              if ( v29 )
              {
                v30 = 0LL;
                if ( *(_DWORD *)a6 )
                {
                  do
                  {
                    if ( *(_QWORD *)&a6[8 * v28 + 324] )
                    {
                      a6[36 * v28 + 33] = 0;
                      v31 = LoadKeyboardLayoutFile(
                              *(void **)&a6[8 * v28 + 324],
                              *(_DWORD *)&a6[8 * v28 + 328],
                              *(_DWORD *)&a6[8 * v28 + 330],
                              (const unsigned __int16 *)(2LL * v28),
                              &a6[36 * v28 + 2],
                              *(_DWORD *)&a6[36 * v28 + 34],
                              *(_DWORD *)&a6[36 * v28 + 36]);
                      if ( !v31 )
                        break;
                      HMAssignmentLock(*(_QWORD *)(v19 + 96) + 8 * v30, v31);
                      v30 = (unsigned int)(v30 + 1);
                    }
                    ++v28;
                  }
                  while ( v28 < *(_DWORD *)a6 );
                  v15 = a9;
                }
                *(_DWORD *)(v19 + 88) = v30;
                v12 = a1;
              }
            }
            *(_QWORD *)(v19 + 40) = v44;
            *(_QWORD *)(v19 + 16) = v19;
            *(_QWORD *)(v19 + 24) = v19;
            *(_DWORD *)(v19 + 32) = 0;
            *(_WORD *)(v19 + 74) = 0;
            RtlInitUnicodeString(&String, SourceString);
            RtlUnicodeStringToInteger(&String, 0x10u, (PULONG)(v19 + 112));
            if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
              *(_DWORD *)(v19 + 32) |= 0x80000000;
            HMAssignmentLock(v19 + 48, *(_QWORD *)(v19 + 56));
            v32 = *(_QWORD *)(v19 + 48);
            *(_DWORD *)(v19 + 104) = *(_DWORD *)(*(_QWORD *)(v32 + 32) + 96LL);
            *(_DWORD *)(v19 + 108) = *(_DWORD *)(*(_QWORD *)(v32 + 32) + 100LL);
            *(_DWORD *)(*(_QWORD *)(v32 + 32) + 80LL) |= ((unsigned int)v15 >> 15) & 7;
            *(_QWORD *)(v19 + 80) = Layout;
            if ( DefaultLocaleId )
            {
              *(_WORD *)(v19 + 72) = WORD2(v41[0]);
              *(_DWORD *)(v19 + 64) = v43;
              *(_DWORD *)(v19 + 68) = v41[0];
            }
            else
            {
              *(_WORD *)(v19 + 72) = 0;
              *(_QWORD *)(v19 + 64) = 1LL;
            }
            v33 = *((_QWORD *)v12 + 5);
            if ( v33 )
            {
              *(_QWORD *)(v19 + 16) = v33;
              *(_QWORD *)(v19 + 24) = *(_QWORD *)(v33 + 24);
              *(_QWORD *)(*(_QWORD *)(v33 + 24) + 16LL) = v19;
              *(_QWORD *)(v33 + 24) = v19;
            }
            else
            {
              HMAssignmentLock((char *)v12 + 40, v19);
            }
            goto LABEL_54;
          }
          DestroyKF((__int64)KeyboardLayoutFile);
        }
        if ( Layout )
          Win32FreePool(Layout);
        return 0LL;
      }
      if ( *(_QWORD *)(v19 + 40) == v9 )
      {
        v21 = *(_DWORD *)(v19 + 32);
        if ( v21 >= 0 )
          break;
      }
      v19 = *(_QWORD *)(v19 + 16);
    }
    if ( (v21 & 0x20000000) != 0 )
    {
      v22 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v19;
      *(_BYTE *)(v22 + 17) &= ~1u;
      *(_DWORD *)(v19 + 32) &= ~0x20000000u;
    }
    else if ( !v16 )
    {
      v15 &= ~0x80u;
    }
LABEL_54:
    v46[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v46;
    v46[1] = v19;
    ++*(_DWORD *)(v19 + 8);
    if ( a3 )
    {
      v34 = HKLtoPKL(gptiCurrent, a3);
      if ( v34 )
      {
        v41[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v41;
        ++*(_DWORD *)(v34 + 8);
        v41[1] = v34;
        xxxSetPKLinThreads((struct tagKL *)v19, (struct tagKL *)v34);
        xxxInternalUnloadKeyboardLayout(v12, (struct tagKL *)v34, 0x80000000);
        ThreadUnlock1(v36, v35);
      }
    }
    if ( (v15 & 8) != 0 )
      ReorderKeyboardLayouts(v12, (struct tagKL *)v19);
    xxxWindowEvent(0x80000000, 0LL, 0, 0, 0);
    if ( (v15 & 0x80u) == 0 )
    {
      v37 = (unsigned int)(*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL));
      if ( ((*(_WORD *)(gptiCurrent + 608LL) | *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x800) != 0 )
      {
        xxxCallHook(8, 0, 0LL, 0xAu);
        gLCIDSentToShell = 0LL;
      }
    }
    if ( (v15 & 1) != 0 )
      xxxInternalActivateKeyboardLayout(v19, (unsigned int)v15, 0LL);
    if ( (v15 & 0x40000000) != 0 )
    {
      SetGlobalKeyboardTableInfo(v19);
      HMAssignmentLock(gspklBaseLayout, v19);
      xxxSetPKLinThreads((struct tagKL *)v19, 0LL);
    }
    if ( v15 < 0 && !gspklBaseLayout )
      SetGlobalKeyboardTableInfo(v19);
    v39 = ThreadUnlock1(v38, v37);
    if ( v39 )
      return *(HKL *)(v39 + 40);
    return 0LL;
  }
  if ( PsGetThreadProcessId((PETHREAD)*gptiCurrent) == (HANDLE)gpidLogon )
  {
    xxxFreeImeKeyboardLayouts(v12);
    while ( 1 )
    {
      v17 = (struct tagKL *)HKLtoPKL(gptiCurrent, 1LL);
      if ( !v17 )
        break;
      xxxInternalUnloadKeyboardLayout(v12, v17, 0x80000000);
    }
    goto LABEL_13;
  }
  UserSetLastError(1004);
  return 0LL;
}
