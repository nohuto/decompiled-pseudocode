/*
 * XREFs of _pLoadAdditinalMode @ 0x1C01B2C18
 * Callers:
 *     _pGetAdditionalTiming @ 0x1C01B2A98 (_pGetAdditionalTiming.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00F2F60 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     _pReadDetailTimingFromReg @ 0x1C01B2FFC (_pReadDetailTimingFromReg.c)
 *     _pRegNameFromConnectorType @ 0x1C01B31A0 (_pRegNameFromConnectorType.c)
 */

__int64 __fastcall pLoadAdditinalMode(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  ULONG v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  const WCHAR *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  NTSTATUS appended; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  HANDLE v23; // rbx
  __int64 v24; // rax
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // r15d
  __int64 v31; // rcx
  _DWORD *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  wchar_t *v35; // r13
  __int64 v36; // rax
  NTSTATUS v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rax
  unsigned __int16 v43; // ax
  NTSTATUS v44; // eax
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-41h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-29h] BYREF
  _QWORD *v53; // [rsp+58h] [rbp-21h]
  _DWORD KeyInformation[12]; // [rsp+60h] [rbp-19h] BYREF

  v53 = a2;
  v3 = (int)a1;
  v4 = WdLogNewEntry5_WdDmmEvent(a1);
  *(_QWORD *)(v4 + 24) = v3;
  WdLogEvent5_WdDmmEvent(v4);
  if ( (_DWORD)v3 == -2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = 0;
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v8);
  }
  *(_DWORD *)&Destination.Length = 15859712;
  Destination.Buffer = (wchar_t *)&unk_1C0058110;
  if ( RtlAppendUnicodeToString(
         &Destination,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\AdditionalModeLists\\") < 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = (const WCHAR *)pRegNameFromConnectorType((unsigned int)v3);
  if ( !v11 )
  {
    v13 = WdLogNewEntry5_WdDmmEvent(v12);
    *(_QWORD *)(v13 + 24) = v3;
    WdLogEvent5_WdDmmEvent(v13);
    return 3221226021LL;
  }
  appended = RtlAppendUnicodeToString(&Destination, v11);
  v17 = appended;
  if ( appended < 0 )
  {
    if ( appended != -1073741789 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v18);
    }
    v19 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v19 + 24) = v3;
    *(_QWORD *)(v19 + 32) = v17;
    WdLogEvent5_WdError(v19);
    return (unsigned int)v17;
  }
  KeyHandle = 0LL;
  v20 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, 0LL, &Destination);
  v17 = v20;
  if ( v20 < 0 )
  {
    v22 = WdLogNewEntry5_WdDmmEvent(v21);
    *(_QWORD *)(v22 + 24) = v3;
    *(_QWORD *)(v22 + 32) = v17;
    WdLogEvent5_WdDmmEvent(v22);
    return (unsigned int)v17;
  }
  v23 = KeyHandle;
  if ( !KeyHandle )
  {
    v24 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v24);
    v23 = KeyHandle;
  }
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v25 = ZwQueryKey(v23, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  v17 = v25;
  if ( v25 < 0 )
  {
    v48 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    *(_QWORD *)(v48 + 24) = v3;
    *(_QWORD *)(v48 + 32) = v17;
    WdLogEvent5_WdWarning(v48);
    goto LABEL_44;
  }
  if ( !KeyInformation[5] )
  {
    v47 = WdLogNewEntry5_WdDmmEvent(0LL);
    *(_QWORD *)(v47 + 24) = v3;
    WdLogEvent5_WdDmmEvent(v47);
    LODWORD(v17) = -1073741275;
    goto LABEL_44;
  }
  v30 = 0;
  v32 = operator new((unsigned int)(28 * (KeyInformation[5] - 1) + 48), 0x4D677844u, PagedPool);
  if ( !v32 )
  {
    v33 = WdLogNewEntry5_WdLowResource(v31);
    WdLogEvent5_WdLowResource(v33);
    ZwClose(KeyHandle);
    return 3221225495LL;
  }
  v35 = (wchar_t *)operator new(0x96uLL, 0x4D677844u, PagedPool);
  if ( !v35 )
  {
    v36 = WdLogNewEntry5_WdLowResource(v34);
    WdLogEvent5_WdLowResource(v36);
    operator delete(v32);
    LODWORD(v17) = -1073741801;
    goto LABEL_44;
  }
  if ( !KeyInformation[5] )
    goto LABEL_40;
  while ( 1 )
  {
    v37 = ZwEnumerateKey(KeyHandle, v7, KeyBasicInformation, v35, 0x96u, &ResultLength);
    v17 = v37;
    if ( v37 == -2147483643 || v37 == -1073741789 )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
      goto LABEL_34;
    }
    if ( v37 == -2147483622 )
      break;
    if ( v37 >= 0 )
    {
      v43 = v35[6];
      Handle = 0LL;
      Destination.MaximumLength = v43;
      Destination.Length = v43;
      Destination.Buffer = v35 + 8;
      v44 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, KeyHandle, &Destination);
      v17 = v44;
      if ( v44 >= 0 )
      {
        LODWORD(v17) = pReadDetailTimingFromReg(Handle);
        if ( (int)v17 >= 0 )
          ++v30;
        ZwClose(Handle);
        goto LABEL_35;
      }
    }
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
    v42[5] = v17;
LABEL_34:
    v42[4] = v7;
    v42[3] = v3;
    WdLogEvent5_WdWarning(v42);
LABEL_35:
    if ( ++v7 >= KeyInformation[5] )
      goto LABEL_38;
  }
  v45 = WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
  *(_QWORD *)(v45 + 24) = v3;
  WdLogEvent5_WdWarning(v45);
LABEL_38:
  if ( v30 )
  {
    LODWORD(v17) = 0;
    *(_QWORD *)v32 = qword_1C0058230;
    v46 = v53;
    v32[2] = v3;
    v32[3] = v30;
    qword_1C0058230 = v32;
    *v46 = v32;
    goto LABEL_41;
  }
LABEL_40:
  operator delete(v32);
LABEL_41:
  operator delete(v35);
LABEL_44:
  ZwClose(KeyHandle);
  return (unsigned int)v17;
}
