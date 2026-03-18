/*
 * XREFs of ?xxxRefreshDisplayOrientation@CRotationMgr@@UEAAXXZ @ 0x1400F9598
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CDispBrokerRotationMgr@@UEAAXXZ @ 0x1400F9570 (-xxxRefreshDisplayOrientation@CDispBrokerRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     ?xxxSetAutoRotationDocked@CRotationMgr@@QEAAXH@Z @ 0x1400F9740 (-xxxSetAutoRotationDocked@CRotationMgr@@QEAAXH@Z.c)
 *     ?xxxSetAutoRotationConvertible@CRotationMgr@@QEAAXH@Z @ 0x1400F97C8 (-xxxSetAutoRotationConvertible@CRotationMgr@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall CRotationMgr::xxxRefreshDisplayOrientation(CRotationMgr *this, __int64 a2)
{
  int v3; // esi
  unsigned int v4; // ebx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  _DWORD v9[2]; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+64h] [rbp-1Ch]
  _DWORD *v15; // [rsp+68h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp-10h]

  if ( (unsigned int)dword_1403AAA30 > 5 )
  {
    a2 = 0x200000000001LL;
    if ( (qword_1403AAA40 & 0x200000000001LL) != 0 && (qword_1403AAA48 & 0x200000000001LL) == qword_1403AAA48 )
    {
      v9[0] = *((_DWORD *)this + 4);
      EventDescriptor.Keyword = 0x200000000001LL;
      v15 = v9;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1403AAA38;
      v16 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_1403AAA38;
      v12 = &unk_140373056;
      UserData.Reserved = 2;
      v13 = 59;
      v14 = 1;
      v9[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(qword_1403AAA50, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
    }
  }
  v3 = *((_DWORD *)this + 6);
  v4 = *((_DWORD *)this + 5);
  UserSessionState = W32GetUserSessionState(this, a2);
  CRotationMgr::xxxSetAutoRotationConvertible(
    this,
    (*(_DWORD *)(*(_QWORD *)(UserSessionState + 19904) + 2236LL) >> 3) & 1);
  v8 = W32GetUserSessionState(v7, v6);
  CRotationMgr::xxxSetAutoRotationDocked(this, (*(_DWORD *)(*(_QWORD *)(v8 + 19904) + 2236LL) >> 4) & 1);
  if ( !__PAIR64__(*((_DWORD *)this + 6), v4) )
  {
    if ( v3 )
      (*(void (__fastcall **)(CRotationMgr *))(*(_QWORD *)this + 8LL))(this);
  }
}
