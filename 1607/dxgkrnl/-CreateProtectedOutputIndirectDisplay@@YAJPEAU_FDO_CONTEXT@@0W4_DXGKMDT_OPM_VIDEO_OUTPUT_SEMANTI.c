/*
 * XREFs of ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0031F10
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C00DCC84 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkOpmCreateHandle @ 0x1C00DCB18 (DxgkOpmCreateHandle.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C00DD544 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C00DD5B8 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00DF65C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00DF68C (DxgkReleaseAdapterDdiSync.c)
 *     DxgkOpmGetRedirectionInfo @ 0x1C0149C58 (DxgkOpmGetRedirectionInfo.c)
 */

__int64 __fastcall CreateProtectedOutputIndirectDisplay(
        struct _FDO_CONTEXT *a1,
        struct _FDO_CONTEXT *a2,
        unsigned int a3,
        unsigned int a4,
        void **a5,
        void **a6)
{
  __int64 v6; // rax
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 RedirectionInfo; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  int v23; // eax
  int v24; // eax
  void *v26; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v28[48]; // [rsp+50h] [rbp-39h] BYREF

  v6 = *((_QWORD *)a1 + 3);
  v26 = 0LL;
  v27 = 0LL;
  v10 = a4;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 64) + 168LL));
  if ( *((_DWORD *)a1 + 708) < 2u )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    RedirectionInfo = -1073741637LL;
LABEL_5:
    *(_QWORD *)(v15 + 24) = RedirectionInfo;
    WdLogEvent5_WdWarning(v15);
    return (unsigned int)RedirectionInfo;
  }
  v17 = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)a2 + 3), 0LL);
  RedirectionInfo = v17;
  if ( v17 < 0
    || (RedirectionInfo = (int)DxgkOpmGetRedirectionInfo(*((_QWORD *)a2 + 461), v10, &v27, v28),
        DpiReleaseCoreSyncAccessSafe(*((_QWORD *)a2 + 3), 0LL),
        (int)RedirectionInfo < 0) )
  {
LABEL_4:
    v15 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    goto LABEL_5;
  }
  if ( !v27 )
  {
    RedirectionInfo = -1073741637LL;
    goto LABEL_4;
  }
  v22 = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)a1 + 3), 0LL);
  RedirectionInfo = v22;
  if ( v22 < 0 )
    goto LABEL_4;
  DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)a1 + 461));
  DxgkAcquireAdapterDdiSync(*((_QWORD *)a1 + 461), 1LL);
  v23 = *((_DWORD *)a1 + 708);
  if ( v23 == 2 )
  {
    v24 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _BYTE *, _DWORD, void **))a1 + 369))(
            *((_QWORD *)a1 + 6),
            a3,
            v27,
            v28,
            v10,
            &v26);
  }
  else
  {
    if ( v23 != 3 )
    {
      LODWORD(RedirectionInfo) = -1073741637;
      goto LABEL_16;
    }
    v24 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _BYTE *, __int64, int, void **))a1 + 368))(
            *((_QWORD *)a1 + 6),
            a3,
            v27,
            v28,
            v10,
            15,
            &v26);
  }
  LODWORD(RedirectionInfo) = v24;
LABEL_16:
  if ( (int)RedirectionInfo >= 0 )
  {
    LODWORD(RedirectionInfo) = DxgkOpmCreateHandle(*((DXGADAPTER **)a1 + 461), v26, a5);
    if ( (int)RedirectionInfo < 0 )
      (*((void (__fastcall **)(_QWORD, void *))a1 + 367))(*((_QWORD *)a1 + 6), v26);
    else
      *a6 = v26;
  }
  DxgkReleaseAdapterDdiSync(*((_QWORD *)a1 + 461));
  DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)a1 + 461));
  DpiReleaseCoreSyncAccessSafe(*((_QWORD *)a1 + 3), 0LL);
  return (unsigned int)RedirectionInfo;
}
