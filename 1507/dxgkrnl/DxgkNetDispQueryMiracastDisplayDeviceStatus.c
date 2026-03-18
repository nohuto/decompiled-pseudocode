/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C012A470
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchLengthW @ 0x1C0008474 (RtlStringCchLengthW.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C016AC50 (DxgkMiracastQueryMiracastStatus.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceStatus(const wchar_t *Src, _DWORD *a2)
{
  char *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rax
  size_t v16; // rbx
  SIZE_T v17; // rax
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  size_t v21; // rbx
  __int64 v22; // rax
  size_t pcchLength[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v25; // [rsp+70h] [rbp+18h] BYREF
  int v26; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( !DXGPROCESS::GetCurrent((__int64)Src) || (unsigned int)_guard_dispatch_icall_fptr() )
  {
    v25 = -2147483643;
    v22 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    *(_QWORD *)(v22 + 24) = -2147483643LL;
    WdLogEvent5_WdWarning(v22);
  }
  else
  {
    if ( ((unsigned __int8)Src & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(Src + 260) > MmUserProbeAddress || Src + 260 < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
    v9 = RtlStringCchLengthW(Src, 0x208uLL, pcchLength);
    v14 = v9;
    if ( v9 >= 0 )
    {
      v16 = pcchLength[0];
      v17 = 2 * (pcchLength[0] + 1);
      if ( !is_mul_ok(pcchLength[0] + 1, 2uLL) )
        v17 = -1LL;
      v18 = (char *)operator new[](v17, 0x4B677844u, PagedPool);
      v4 = v18;
      if ( v18 )
      {
        v21 = 2 * v16;
        memmove(v18, Src, v21);
        *(_WORD *)&v4[v21] = 0;
        if ( (int)DxgkMiracastQueryMiracastStatus(v4, &v26, &v25) >= 0 )
        {
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (_DWORD *)MmUserProbeAddress;
          *a2 = v26;
        }
      }
      else
      {
        v25 = -2147483638;
        v20 = WdLogNewEntry5_WdLowResource(v19);
        *(_QWORD *)(v20 + 24) = -2147483638LL;
        WdLogEvent5_WdLowResource(v20);
      }
    }
    else
    {
      v25 = -2147483640;
      v15 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      *(_QWORD *)(v15 + 24) = v14;
      WdLogEvent5_WdWarning(v15);
    }
  }
  if ( v4 )
    operator delete(v4);
  return v25;
}
