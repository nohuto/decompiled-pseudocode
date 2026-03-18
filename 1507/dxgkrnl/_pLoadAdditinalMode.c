/*
 * XREFs of _pLoadAdditinalMode @ 0x1C0184A38
 * Callers:
 *     _pGetAdditionalTiming @ 0x1C01848C4 (_pGetAdditionalTiming.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00CA76C (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     _pReadDetailTimingFromReg @ 0x1C0184E40 (_pReadDetailTimingFromReg.c)
 *     _pRegNameFromConnectorType @ 0x1C0184FE4 (_pRegNameFromConnectorType.c)
 */

__int64 __fastcall pLoadAdditinalMode(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  ULONG v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  const WCHAR *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  NTSTATUS appended; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  HANDLE v35; // rbx
  __int64 v36; // rax
  NTSTATUS v37; // eax
  __int64 v38; // rcx
  int v39; // r15d
  __int64 v40; // rcx
  _DWORD *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rcx
  wchar_t *v44; // r13
  __int64 v45; // rax
  NTSTATUS v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rax
  unsigned __int16 v52; // ax
  NTSTATUS v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-29h] BYREF
  _QWORD *v67; // [rsp+58h] [rbp-21h]
  _DWORD KeyInformation[12]; // [rsp+60h] [rbp-19h] BYREF

  v67 = a2;
  v3 = (int)a1;
  v4 = WdLogNewEntry5_WdDmmEvent(a1);
  *(_QWORD *)(v4 + 24) = v3;
  WdLogEvent5_WdDmmEvent(v4);
  if ( (_DWORD)v3 == -2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = 0;
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    WdLogEvent5_WdAssertion(v11);
  }
  *(_DWORD *)&Destination.Length = 15859712;
  Destination.Buffer = (wchar_t *)&unk_1C0047E60;
  if ( RtlAppendUnicodeToString(
         &Destination,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\AdditionalModeLists\\") < 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = (const WCHAR *)pRegNameFromConnectorType((unsigned int)v3);
  if ( !v17 )
  {
    v19 = WdLogNewEntry5_WdDmmEvent(v18);
    *(_QWORD *)(v19 + 24) = v3;
    WdLogEvent5_WdDmmEvent(v19);
    return 3221226021LL;
  }
  appended = RtlAppendUnicodeToString(&Destination, v17);
  v26 = appended;
  if ( appended < 0 )
  {
    if ( appended != -1073741789 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
      WdLogEvent5_WdAssertion(v27);
    }
    v28 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v28 + 24) = v3;
    *(_QWORD *)(v28 + 32) = v26;
    WdLogEvent5_WdError(v28);
    return (unsigned int)v26;
  }
  KeyHandle = 0LL;
  v29 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, 0LL, &Destination);
  v26 = v29;
  if ( v29 < 0 )
  {
    v34 = WdLogNewEntry5_WdDmmEvent(v31);
    *(_QWORD *)(v34 + 24) = v3;
    *(_QWORD *)(v34 + 32) = v26;
    WdLogEvent5_WdDmmEvent(v34);
    return (unsigned int)v26;
  }
  v35 = KeyHandle;
  if ( !KeyHandle )
  {
    v36 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
    WdLogEvent5_WdAssertion(v36);
    v35 = KeyHandle;
  }
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v37 = ZwQueryKey(v35, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  v26 = v37;
  if ( v37 < 0 )
  {
    v62 = WdLogNewEntry5_WdError(v38);
    *(_QWORD *)(v62 + 24) = v3;
    *(_QWORD *)(v62 + 32) = v26;
    WdLogEvent5_WdError(v62);
    goto LABEL_45;
  }
  if ( !KeyInformation[5] )
  {
    v61 = WdLogNewEntry5_WdDmmEvent(0LL);
    *(_QWORD *)(v61 + 24) = v3;
    WdLogEvent5_WdDmmEvent(v61);
    LODWORD(v26) = -1073741275;
    goto LABEL_45;
  }
  v39 = 0;
  v41 = operator new[]((unsigned int)(28 * (KeyInformation[5] - 1) + 48), 0x4D677844u, PagedPool);
  if ( !v41 )
  {
    v42 = WdLogNewEntry5_WdLowResource(v40);
    WdLogEvent5_WdLowResource(v42);
    ZwClose(KeyHandle);
    return 3221225495LL;
  }
  v44 = (wchar_t *)operator new[](0x96uLL, 0x4D677844u, PagedPool);
  if ( !v44 )
  {
    v45 = WdLogNewEntry5_WdLowResource(v43);
    WdLogEvent5_WdLowResource(v45);
    operator delete(v41);
    LODWORD(v26) = -1073741801;
    goto LABEL_45;
  }
  if ( !KeyInformation[5] )
    goto LABEL_41;
  while ( 1 )
  {
    v46 = ZwEnumerateKey(KeyHandle, v10, KeyBasicInformation, v44, 0x96u, &ResultLength);
    v26 = v46;
    if ( v46 == -2147483643 || v46 == -1073741789 )
    {
      v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, v49, v50);
LABEL_35:
      v58[4] = v10;
      v58[3] = v3;
      WdLogEvent5_WdWarning(v58);
      goto LABEL_36;
    }
    if ( v46 == -2147483622 )
      break;
    if ( v46 >= 0 )
    {
      v52 = v44[6];
      Handle = 0LL;
      Destination.MaximumLength = v52;
      Destination.Length = v52;
      Destination.Buffer = v44 + 8;
      v53 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, KeyHandle, &Destination);
      v26 = v53;
      if ( v53 >= 0 )
      {
        LODWORD(v26) = pReadDetailTimingFromReg(Handle);
        if ( (int)v26 >= 0 )
          ++v39;
        ZwClose(Handle);
        goto LABEL_36;
      }
      v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v54, v56, v57);
      v58[5] = v26;
      goto LABEL_35;
    }
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v48);
    v51[4] = v10;
    v51[3] = v3;
    v51[5] = v26;
    WdLogEvent5_WdError(v51);
LABEL_36:
    if ( ++v10 >= KeyInformation[5] )
      goto LABEL_39;
  }
  v59 = WdLogNewEntry5_WdWarning(v48, v47, v49, v50);
  *(_QWORD *)(v59 + 24) = v3;
  WdLogEvent5_WdWarning(v59);
LABEL_39:
  if ( v39 )
  {
    LODWORD(v26) = 0;
    *(_QWORD *)v41 = qword_1C0047F90;
    v60 = v67;
    v41[2] = v3;
    v41[3] = v39;
    qword_1C0047F90 = v41;
    *v60 = v41;
    goto LABEL_42;
  }
LABEL_41:
  operator delete(v41);
LABEL_42:
  operator delete(v44);
LABEL_45:
  ZwClose(KeyHandle);
  return (unsigned int)v26;
}
