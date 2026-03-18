/*
 * XREFs of DxgkNetDispStopMiracastDisplayDevice @ 0x1C012AA10
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchLengthW @ 0x1C0008474 (RtlStringCchLengthW.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C0027A90 (DxgkMiracastStopMiracastSession.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkNetDispStopMiracastDisplayDevice(const wchar_t *Src, HANDLE Handle, KPROCESSOR_MODE AccessMode)
{
  WCHAR *v6; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  unsigned int v18; // ebx
  __int64 v19; // rax
  size_t v20; // rbx
  SIZE_T v21; // rax
  WCHAR *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  size_t v25; // rbx
  __int64 v26; // rax
  size_t pcchLength; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)Src);
  if ( !Current || (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
  {
    v18 = -2147483643;
    v26 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v26 + 24) = -2147483643LL;
    WdLogEvent5_WdWarning(v26);
  }
  else
  {
    if ( ((unsigned __int8)Src & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(Src + 260) > MmUserProbeAddress || Src + 260 < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
    v12 = RtlStringCchLengthW(Src, 0x208uLL, &pcchLength);
    v17 = v12;
    if ( v12 >= 0 )
    {
      v20 = pcchLength;
      v21 = 2 * (pcchLength + 1);
      if ( !is_mul_ok(pcchLength + 1, 2uLL) )
        v21 = -1LL;
      v22 = (WCHAR *)operator new[](v21, 0x4B677844u, PagedPool);
      v6 = v22;
      if ( v22 )
      {
        v25 = v20;
        memmove(v22, Src, v25 * 2);
        v6[v25] = 0;
        v18 = DxgkMiracastStopMiracastSession(v6, Handle, AccessMode);
      }
      else
      {
        v18 = -2147483638;
        v24 = WdLogNewEntry5_WdLowResource(v23);
        *(_QWORD *)(v24 + 24) = -2147483638LL;
        WdLogEvent5_WdLowResource(v24);
      }
    }
    else
    {
      v18 = -2147483640;
      v19 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      *(_QWORD *)(v19 + 24) = v17;
      WdLogEvent5_WdWarning(v19);
    }
  }
  if ( v6 )
    operator delete(v6);
  return v18;
}
