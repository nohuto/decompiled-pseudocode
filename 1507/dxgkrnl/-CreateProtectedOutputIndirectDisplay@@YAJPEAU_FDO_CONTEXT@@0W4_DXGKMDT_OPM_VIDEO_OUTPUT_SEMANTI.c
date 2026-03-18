/*
 * XREFs of ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX@Z @ 0x1C002AF74
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C00B2490 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkOpmCreateHandle @ 0x1C00B231C (DxgkOpmCreateHandle.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C00B2C10 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C00B2C84 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00BBA54 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00BBBBC (DxgkReleaseAdapterDdiSync.c)
 *     DxgkOpmGetRedirectionInfo @ 0x1C012ABD8 (DxgkOpmGetRedirectionInfo.c)
 */

__int64 __fastcall CreateProtectedOutputIndirectDisplay(
        struct _FDO_CONTEXT *a1,
        struct _FDO_CONTEXT *a2,
        unsigned int a3,
        unsigned int a4,
        void **a5)
{
  __int64 v5; // rax
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 RedirectionInfo; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  int v22; // eax
  int v23; // eax
  void *v25; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v27[48]; // [rsp+50h] [rbp-21h] BYREF

  v5 = *((_QWORD *)a1 + 3);
  v25 = 0LL;
  v26 = 0LL;
  v9 = a4;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 64) + 168LL));
  if ( *((_DWORD *)a1 + 412) < 2u )
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    RedirectionInfo = -1073741637LL;
LABEL_9:
    *(_QWORD *)(v14 + 24) = DpiPdoHandleOpmIoctls;
    *(_QWORD *)(v14 + 32) = RedirectionInfo;
    WdLogEvent5_WdWarning(v14);
    return (unsigned int)RedirectionInfo;
  }
  v16 = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)a2 + 3), 0LL);
  RedirectionInfo = v16;
  if ( v16 < 0
    || (RedirectionInfo = (int)DxgkOpmGetRedirectionInfo(*((_QWORD *)a2 + 313), v9, &v26, v27),
        DpiReleaseCoreSyncAccessSafe(*((_QWORD *)a2 + 3), 0LL),
        (int)RedirectionInfo < 0) )
  {
LABEL_8:
    v14 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    goto LABEL_9;
  }
  if ( !v26 )
  {
    RedirectionInfo = -1073741637LL;
    goto LABEL_8;
  }
  v21 = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)a1 + 3), 0LL);
  RedirectionInfo = v21;
  if ( v21 < 0 )
    goto LABEL_8;
  DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)a1 + 313));
  DxgkAcquireAdapterDdiSync(*((_QWORD *)a1 + 313), 1LL);
  v22 = *((_DWORD *)a1 + 412);
  if ( v22 == 2 )
  {
    v23 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _BYTE *, _DWORD, void **))a1 + 221))(
            *((_QWORD *)a1 + 6),
            a3,
            v26,
            v27,
            v9,
            &v25);
LABEL_14:
    LODWORD(RedirectionInfo) = v23;
    goto LABEL_16;
  }
  if ( v22 == 3 )
  {
    v23 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _BYTE *, __int64, int, void **))a1 + 220))(
            *((_QWORD *)a1 + 6),
            a3,
            v26,
            v27,
            v9,
            15,
            &v25);
    goto LABEL_14;
  }
  LODWORD(RedirectionInfo) = -1073741637;
LABEL_16:
  if ( (int)RedirectionInfo >= 0 )
  {
    LODWORD(RedirectionInfo) = DxgkOpmCreateHandle(*((DXGADAPTER **)a1 + 313), v25, a5);
    if ( (int)RedirectionInfo < 0 )
      (*((void (__fastcall **)(_QWORD, void *))a1 + 219))(*((_QWORD *)a1 + 6), v25);
  }
  DxgkReleaseAdapterDdiSync(*((_QWORD *)a1 + 313));
  DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)a1 + 313));
  DpiReleaseCoreSyncAccessSafe(*((_QWORD *)a1 + 3), 0LL);
  return (unsigned int)RedirectionInfo;
}
