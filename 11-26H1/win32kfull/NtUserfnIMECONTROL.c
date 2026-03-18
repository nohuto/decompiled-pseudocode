/*
 * XREFs of NtUserfnIMECONTROL @ 0x1401F6D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z @ 0x1402A0F5C (-ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtUserfnIMECONTROL(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        struct tagSOFTKBDDATA *a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // rcx
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v16; // rax
  SIZE_T v17; // rdx
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+38h] [rbp-100h] BYREF
  void (*v21)(void *); // [rsp+48h] [rbp-F0h]
  __int64 v22; // [rsp+50h] [rbp-E8h]
  __int128 v23; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+70h] [rbp-C8h]
  int v25; // [rsp+78h] [rbp-C0h]
  __int128 v26; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v27; // [rsp+90h] [rbp-A8h]
  _OWORD v28[5]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-48h]
  int v30; // [rsp+F8h] [rbp-40h]

  v26 = 0LL;
  v27 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0;
  memset_0(v28, 0, 0x5CuLL);
  PtiCurrent(v10);
  if ( a2 != 643 || a3 > 0x22 )
    return 0LL;
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
  switch ( a3 )
  {
    case 7uLL:
      v17 = 32LL;
      goto LABEL_28;
    case 8uLL:
      v12 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (struct tagSOFTKBDDATA *)MmUserProbeAddress;
      v26 = *(_OWORD *)a4;
      v27 = *((_OWORD *)a4 + 1);
      a4 = (struct tagSOFTKBDDATA *)&v26;
      goto LABEL_29;
    case 9uLL:
      goto LABEL_23;
    case 0xAuLL:
      v12 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (struct tagSOFTKBDDATA *)MmUserProbeAddress;
      v28[0] = *(_OWORD *)a4;
      v28[1] = *((_OWORD *)a4 + 1);
      v28[2] = *((_OWORD *)a4 + 2);
      v28[3] = *((_OWORD *)a4 + 3);
      v28[4] = *((_OWORD *)a4 + 4);
      v29 = *((_QWORD *)a4 + 10);
      v30 = *((_DWORD *)a4 + 22);
      a4 = (struct tagSOFTKBDDATA *)v28;
      goto LABEL_29;
    case 0xBuLL:
      v17 = 28LL;
LABEL_28:
      ProbeForWrite(a4, v17, 1u);
      goto LABEL_29;
    case 0xCuLL:
      v12 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (struct tagSOFTKBDDATA *)MmUserProbeAddress;
      v23 = *(_OWORD *)a4;
      v24 = *((_QWORD *)a4 + 2);
      v25 = *((_DWORD *)a4 + 6);
      a4 = (struct tagSOFTKBDDATA *)&v23;
      goto LABEL_29;
    case 0x11uLL:
LABEL_23:
      v17 = 92LL;
      goto LABEL_28;
  }
  if ( a3 != 24 )
  {
LABEL_29:
    UserSessionState = W32GetUserSessionState(v12, v11);
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, struct tagSOFTKBDDATA *, __int64))(UserSessionState + 8LL * ((a6 + 6) & 0x1F) + 70904))(
            a1,
            643LL,
            a3,
            a4,
            a5);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
    return v14;
  }
  a4 = ProbeAndCaptureSoftKbdData(a4);
  v14 = 0LL;
  if ( a4 )
  {
    if ( v21 != (void (*)(void *))-1LL )
    {
      BugCheckParameter4 = PtiCurrent(v13);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)a4, (ULONG_PTR)BugCheckParameter4);
    }
    v16 = PtiCurrent(v13);
    BugCheckParameter2[0] = *((_QWORD *)v16 + 47);
    v12 = (ULONG64)BugCheckParameter2;
    *((_QWORD *)v16 + 47) = BugCheckParameter2;
    BugCheckParameter2[1] = (ULONG_PTR)a4;
    v21 = Win32FreePool;
    goto LABEL_29;
  }
  v22 = 0LL;
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  return v14;
}
