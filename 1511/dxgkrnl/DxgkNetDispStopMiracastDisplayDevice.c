/*
 * XREFs of DxgkNetDispStopMiracastDisplayDevice @ 0x1C0130F50
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchLengthW @ 0x1C00011C8 (RtlStringCchLengthW.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C0027700 (DxgkMiracastStopMiracastSession.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStopMiracastDisplayDevice(const wchar_t *Src, HANDLE Handle)
{
  WCHAR *v4; // rsi
  struct _KEVENT *v5; // r13
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  unsigned int v17; // ebx
  __int64 v18; // rax
  size_t v19; // rbx
  SIZE_T v20; // rax
  WCHAR *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  size_t v27; // rbx
  NTSTATUS v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  size_t pcchLength; // [rsp+90h] [rbp+18h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current || (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
  {
    v17 = -2147483643;
    v31 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v31 + 24) = -2147483643LL;
    WdLogEvent5_WdWarning(v31);
  }
  else
  {
    if ( ((unsigned __int8)Src & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(Src + 260) > MmUserProbeAddress || Src + 260 < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
    v11 = RtlStringCchLengthW(Src, 0x208uLL, &pcchLength);
    v16 = v11;
    if ( v11 >= 0 )
    {
      v19 = pcchLength;
      v20 = 2 * (pcchLength + 1);
      if ( !is_mul_ok(pcchLength + 1, 2uLL) )
        v20 = -1LL;
      v21 = (WCHAR *)operator new[](v20, 0x4B677844u, PagedPool);
      v4 = v21;
      if ( v21 )
      {
        v27 = v19;
        memmove(v21, Src, v27 * 2);
        v4[v27] = 0;
        if ( Handle
          && (v28 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL),
              v5 = (struct _KEVENT *)Object,
              v28 < 0) )
        {
          v17 = -2147483640;
          v30 = WdLogNewEntry5_WdError(v29);
          *(_QWORD *)(v30 + 24) = Handle;
          WdLogEvent5_WdError(v30);
        }
        else
        {
          v17 = DxgkMiracastStopMiracastSession(v4, v5);
        }
      }
      else
      {
        v17 = -2147483638;
        v26 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
        *(_QWORD *)(v26 + 24) = -2147483638LL;
        WdLogEvent5_WdLowResource(v26);
      }
    }
    else
    {
      v17 = -2147483640;
      v18 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      *(_QWORD *)(v18 + 24) = v16;
      WdLogEvent5_WdWarning(v18);
    }
  }
  if ( v4 )
    operator delete(v4);
  return v17;
}
