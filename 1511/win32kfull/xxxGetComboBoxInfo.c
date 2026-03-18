/*
 * XREFs of xxxGetComboBoxInfo @ 0x1C013EA10
 * Callers:
 *     NtUserGetComboBoxInfo @ 0x1C013E840 (NtUserGetComboBoxInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x1C013EB04 (unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall xxxGetComboBoxInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // rcx
  unsigned int v6; // r15d
  __int64 v7; // rdi
  PRKPROCESS *v9; // r14
  __int64 v10; // rcx
  int v11; // r14d
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // ecx
  int v25; // edx
  _BYTE v26[64]; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v27; // [rsp+90h] [rbp-68h]
  unsigned __int64 v28; // [rsp+98h] [rbp-60h]
  unsigned __int64 v29; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v30; // [rsp+B0h] [rbp-48h]
  PRKPROCESS *v31; // [rsp+118h] [rbp+20h]

  v4 = 0LL;
  *(_DWORD *)v26 = 64;
  memset(&v26[4], 0, 0x3CuLL);
  v6 = 0;
  if ( a1 )
  {
    if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x2A2 )
    {
      v7 = a1;
    }
    else
    {
      v5 = gpsi;
      v7 = 0LL;
      if ( *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) == *(_WORD *)(gpsi + 862LL) )
        v7 = a1;
    }
    if ( v7 )
      goto LABEL_10;
  }
  else
  {
    v7 = 0LL;
  }
  v4 = unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(a1);
  if ( !v4 )
  {
    _InterlockedIncrement(&glSendMessage);
    return xxxSendTransformableMessageTimeout((struct tagWND *)a1, 356LL, 0LL, a2, 0, 0, 0LL, 1, 1);
  }
LABEL_10:
  if ( *(_DWORD *)a2 != 64 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  v9 = *(PRKPROCESS **)(*(_QWORD *)(a1 + 16) + 376LL);
  v31 = v9;
  if ( v9 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v5) )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    KeAttachProcess(*v31);
  }
  if ( v7 )
  {
    v12 = *(_QWORD *)(v7 + 376);
LABEL_21:
    if ( v12 )
    {
      v14 = -PsGetCurrentProcessWow64Process(v10);
      v29 = (-(__int64)(v14 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      if ( ((v14 != 0 ? 0 : 3) & (unsigned int)v12) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = *(__int64 **)v12;
      v16 = -PsGetCurrentProcessWow64Process(W32UserProbeAddress);
      v30 = (-(__int64)(v16 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      if ( ((v16 != 0 ? 0 : 3) & (unsigned int)v15) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = 0LL;
      if ( v15 )
        v17 = *v15;
      *(_QWORD *)&v26[40] = v17;
      v18 = *(__int64 **)(v12 + 64);
      v19 = -PsGetCurrentProcessWow64Process(W32UserProbeAddress);
      v27 = (-(__int64)(v19 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      if ( ((v19 != 0 ? 0 : 3) & (unsigned int)v18) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = 0LL;
      if ( v18 )
        v20 = *v18;
      if ( v20 == *(_QWORD *)a1 )
        v20 = 0LL;
      *(_QWORD *)&v26[48] = v20;
      v21 = *(__int64 **)(v12 + 72);
      v22 = -PsGetCurrentProcessWow64Process(v20);
      v28 = (-(__int64)(v22 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      if ( ((v22 != 0 ? 0 : 3) & (unsigned int)v21) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = 0LL;
      if ( v21 )
        v23 = *v21;
      *(_QWORD *)&v26[56] = v23;
      *(_OWORD *)&v26[4] = *(_OWORD *)(v12 + 16);
      *(_OWORD *)&v26[20] = *(_OWORD *)(v12 + 32);
      *(_DWORD *)&v26[36] = 0;
      v24 = *(_DWORD *)(v12 + 80);
      v25 = 0;
      if ( (v24 & 3) == 1 )
        v25 = 0x8000;
      *(_DWORD *)&v26[36] = v25;
      if ( (v24 & 0x20) != 0 )
        *(_DWORD *)&v26[36] = v25 | 8;
      *(_OWORD *)a2 = *(_OWORD *)v26;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)&v26[16];
      *(_OWORD *)(a2 + 32) = *(_OWORD *)&v26[32];
      *(_OWORD *)(a2 + 48) = *(_OWORD *)&v26[48];
      v6 = 1;
    }
    goto LABEL_43;
  }
  v13 = *(_QWORD *)(v4 + 376);
  if ( v13 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v10) != 0 ? 0 : 3) & (unsigned int)v13) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = W32UserProbeAddress;
    v12 = *(_QWORD *)(v13 + 144);
    goto LABEL_21;
  }
LABEL_43:
  if ( v11 )
    KeDetachProcess();
  return v6;
}
