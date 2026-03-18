/*
 * XREFs of sub_1C018924C @ 0x1C018924C
 * Callers:
 *     sub_1C01890D8 @ 0x1C01890D8 (sub_1C01890D8.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00E23E4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     sub_1C0189654 @ 0x1C0189654 (sub_1C0189654.c)
 *     sub_1C01897F8 @ 0x1C01897F8 (sub_1C01897F8.c)
 */

__int64 __fastcall sub_1C018924C(__int64 a1, _QWORD *a2)
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
  __int64 v26; // rcx
  int v27; // r15d
  __int64 v28; // rdx
  __int64 v29; // rcx
  _DWORD *v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  wchar_t *v38; // r13
  __int64 v39; // rax
  NTSTATUS v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  unsigned __int16 v46; // ax
  NTSTATUS v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-29h] BYREF
  _QWORD *v61; // [rsp+58h] [rbp-21h]
  _DWORD KeyInformation[12]; // [rsp+60h] [rbp-19h] BYREF

  v61 = a2;
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
  Destination.Buffer = (wchar_t *)&unk_1C0047EE0;
  if ( RtlAppendUnicodeToString(
         &Destination,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\AdditionalModeLists\\") < 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = (const WCHAR *)sub_1C01897F8((unsigned int)v3);
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
    v56 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v56 + 24) = v3;
    *(_QWORD *)(v56 + 32) = v17;
    WdLogEvent5_WdError(v56);
    goto LABEL_45;
  }
  if ( !KeyInformation[5] )
  {
    v55 = WdLogNewEntry5_WdDmmEvent(0LL);
    *(_QWORD *)(v55 + 24) = v3;
    WdLogEvent5_WdDmmEvent(v55);
    LODWORD(v17) = -1073741275;
    goto LABEL_45;
  }
  v27 = 0;
  v30 = operator new[]((unsigned int)(28 * (KeyInformation[5] - 1) + 48), 0x4D677844u, PagedPool);
  if ( !v30 )
  {
    v33 = WdLogNewEntry5_WdLowResource(v29, v28, v31, v32);
    WdLogEvent5_WdLowResource(v33);
    ZwClose(KeyHandle);
    return 3221225495LL;
  }
  v38 = (wchar_t *)operator new[](0x96uLL, 0x4D677844u, PagedPool);
  if ( !v38 )
  {
    v39 = WdLogNewEntry5_WdLowResource(v35, v34, v36, v37);
    WdLogEvent5_WdLowResource(v39);
    operator delete(v30);
    LODWORD(v17) = -1073741801;
    goto LABEL_45;
  }
  if ( !KeyInformation[5] )
    goto LABEL_41;
  while ( 1 )
  {
    v40 = ZwEnumerateKey(KeyHandle, v7, KeyBasicInformation, v38, 0x96u, &ResultLength);
    v17 = v40;
    if ( v40 == -2147483643 || v40 == -1073741789 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
LABEL_35:
      v52[4] = v7;
      v52[3] = v3;
      WdLogEvent5_WdWarning(v52);
      goto LABEL_36;
    }
    if ( v40 == -2147483622 )
      break;
    if ( v40 >= 0 )
    {
      v46 = v38[6];
      Handle = 0LL;
      Destination.MaximumLength = v46;
      Destination.Length = v46;
      Destination.Buffer = v38 + 8;
      v47 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, KeyHandle, &Destination);
      v17 = v47;
      if ( v47 >= 0 )
      {
        LODWORD(v17) = sub_1C0189654(Handle);
        if ( (int)v17 >= 0 )
          ++v27;
        ZwClose(Handle);
        goto LABEL_36;
      }
      v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
      v52[5] = v17;
      goto LABEL_35;
    }
    v45 = (_QWORD *)WdLogNewEntry5_WdError(v42);
    v45[4] = v7;
    v45[3] = v3;
    v45[5] = v17;
    WdLogEvent5_WdError(v45);
LABEL_36:
    if ( ++v7 >= KeyInformation[5] )
      goto LABEL_39;
  }
  v53 = WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
  *(_QWORD *)(v53 + 24) = v3;
  WdLogEvent5_WdWarning(v53);
LABEL_39:
  if ( v27 )
  {
    LODWORD(v17) = 0;
    *(_QWORD *)v30 = qword_1C0048010;
    v54 = v61;
    v30[2] = v3;
    v30[3] = v27;
    qword_1C0048010 = v30;
    *v54 = v30;
    goto LABEL_42;
  }
LABEL_41:
  operator delete(v30);
LABEL_42:
  operator delete(v38);
LABEL_45:
  ZwClose(KeyHandle);
  return (unsigned int)v17;
}
