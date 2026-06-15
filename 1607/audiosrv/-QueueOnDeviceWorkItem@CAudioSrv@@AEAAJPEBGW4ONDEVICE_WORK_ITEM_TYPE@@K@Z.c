/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x18005352C
 * Callers:
 *     ?OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z @ 0x180052A90 (-OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z @ 0x180052AB0 (-OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z @ 0x180052AD0 (-OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180051E30 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCOnDeviceWorkItem@@PEAV312@1@Z @ 0x1800549F0 (-NewNode@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(__int64 a1, WCHAR *a2, int a3, int a4)
{
  __int64 v7; // r14
  int v8; // r10d
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  int v14; // edi
  __int64 v15; // rax
  __int64 *v16; // rcx
  ATL::CAtlException *v18; // rbx
  _QWORD *v19; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-A8h]
  LPCRITICAL_SECTION v22; // [rsp+48h] [rbp-A0h] BYREF
  char v23; // [rsp+50h] [rbp-98h]
  __int64 v24; // [rsp+58h] [rbp-90h]
  ATL::CAtlException *v25; // [rsp+60h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+90h] [rbp-58h] BYREF
  _QWORD *v28; // [rsp+A0h] [rbp-48h]
  int v29; // [rsp+A8h] [rbp-40h]
  int v30; // [rsp+ACh] [rbp-3Ch]
  _QWORD *v31; // [rsp+B0h] [rbp-38h]
  int v32; // [rsp+B8h] [rbp-30h]
  int v33; // [rsp+BCh] [rbp-2Ch]

  v24 = -2LL;
  v7 = a1;
  v21 = a1;
  if ( dword_1800CA040 > 4u )
  {
    TlgCreateWsz(&v27, a2);
    LODWORD(v19) = a3;
    v28 = &v19;
    v29 = v8;
    v30 = 0;
    LODWORD(v20) = a4;
    v31 = &v20;
    v32 = v8;
    v33 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A7D3E, v9, v10, 5u, &pData);
  }
  if ( a3 == 1 )
  {
    v11 = operator new(0x20uLL);
    v12 = v11;
    v20 = v11;
    if ( v11 )
    {
      COnDeviceWorkItem::COnDeviceWorkItem(v11, (char *)a2, 1);
      *v12 = &COnDeviceStateChangedWorkItem::`vftable';
      *((_DWORD *)v12 + 6) = a4;
    }
    else
    {
      v12 = 0LL;
    }
  }
  else
  {
    v13 = operator new(0x18uLL);
    v20 = v13;
    if ( v13 )
      v12 = COnDeviceWorkItem::COnDeviceWorkItem(v13, (char *)a2, a3);
    else
      v12 = 0LL;
  }
  v19 = v12;
  if ( !v12 )
    goto LABEL_24;
  if ( !*(_DWORD *)(v12[1] - 16LL) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v12)(v12, 1LL);
LABEL_24:
    v14 = -2147024882;
    goto LABEL_25;
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v22, (struct _RTL_CRITICAL_SECTION *)(v7 + 112));
  v14 = 0;
  try
  {
    v15 = ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::NewNode(
            v7 + 152,
            &v19,
            *(_QWORD *)(v7 + 160));
    v16 = *(__int64 **)(v7 + 160);
    if ( v16 )
      *v16 = v15;
    else
      *(_QWORD *)(v7 + 152) = v15;
    *(_QWORD *)(v7 + 160) = v15;
  }
  catch ( ATL::CAtlException *v25 )
  {
    v18 = v25;
    if ( *(_DWORD *)v25 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v20) = *(_DWORD *)v18;
    v14 = (int)v20;
    v12 = v19;
    v7 = v21;
  }
  if ( v23 )
    ATL::CCritSecLock::Unlock(&v22);
  if ( *(_QWORD *)(v7 + 200) )
  {
    (*(void (__fastcall **)(CAudioThreadPool *))(*(_QWORD *)ThreadPool + 72LL))(ThreadPool);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v12)(v12, 1LL);
    if ( v14 >= 0 )
      return (unsigned int)v14;
    AudSrvTraceLoggingErrorHelper("CAudioSrv::QueueOnDeviceWorkItem", 1701, v14);
  }
LABEL_25:
  if ( v14 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::QueueOnDeviceWorkItem", 1710, v14);
  return (unsigned int)v14;
}
