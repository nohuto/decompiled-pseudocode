/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C014F270
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchLengthW @ 0x1C000A308 (RtlStringCchLengthW.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C00209A8 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C0198950 (DxgkMiracastQueryMiracastStatus.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceStatus(const wchar_t *Src, _DWORD *a2)
{
  char *v4; // rdi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  size_t v20; // rbx
  SIZE_T v21; // rax
  char *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  size_t v25; // rbx
  int v27; // [rsp+20h] [rbp-38h] BYREF
  char *v28; // [rsp+28h] [rbp-30h]
  size_t pcchLength[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v30; // [rsp+70h] [rbp+18h] BYREF
  int v31; // [rsp+78h] [rbp+20h]

  v4 = 0LL;
  v28 = 0LL;
  CurrentProcess = PsGetCurrentProcess(Src);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  v31 = DxgkNetDispAccessCheck(ProcessDxgProcess);
  if ( v31 >= 0 )
  {
    pcchLength[0] = 520LL;
    if ( ((unsigned __int8)Src & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(Src + 260) > MmUserProbeAddress || Src + 260 < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
    v13 = RtlStringCchLengthW(Src, 0x208uLL, pcchLength);
    v18 = v13;
    if ( v13 >= 0 )
    {
      v20 = pcchLength[0];
      v21 = 2 * (pcchLength[0] + 1);
      if ( !is_mul_ok(pcchLength[0] + 1, 2uLL) )
        v21 = -1LL;
      v22 = (char *)operator new(v21, 0x4B677844u, PagedPool);
      v4 = v22;
      v28 = v22;
      if ( v22 )
      {
        v25 = 2 * v20;
        memmove(v22, Src, v25);
        *(_WORD *)&v4[v25] = 0;
        v31 = DxgkMiracastQueryMiracastStatus(v4, &v27, &v30);
        if ( v31 >= 0 )
        {
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (_DWORD *)MmUserProbeAddress;
          *a2 = v27;
        }
      }
      else
      {
        v30 = -2147483638;
        v24 = WdLogNewEntry5_WdLowResource(v23);
        *(_QWORD *)(v24 + 24) = -2147483638LL;
        WdLogEvent5_WdLowResource(v24);
      }
    }
    else
    {
      v30 = -2147483640;
      v19 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      *(_QWORD *)(v19 + 24) = v18;
      WdLogEvent5_WdWarning(v19);
    }
  }
  else
  {
    v30 = -2147483643;
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = -2147483643LL;
    WdLogEvent5_WdWarning(v12);
  }
  if ( v4 )
    operator delete(v4);
  return v30;
}
