/*
 * XREFs of ?OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18008E124
 * Callers:
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x18008E100 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18002EF60 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     Template_pq @ 0x18006B0B4 (Template_pq.c)
 *     Template_p @ 0x18008E364 (Template_p.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CKsSoftwareNotificationsMonitor::OnVolumeLimitCapsChange(CKsSoftwareNotificationsMonitor *this)
{
  __int64 v2; // rcx
  int v3; // esi
  __int64 v4; // rcx
  NTSTATUS v5; // eax
  signed int v6; // eax
  LPVOID pv; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C8h] BYREF
  int v10; // [rsp+48h] [rbp-C0h] BYREF
  int v11; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h]
  int v13; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v14[240]; // [rsp+5Ch] [rbp-ACh] BYREF
  int v15; // [rsp+23Ch] [rbp+134h]

  v12 = -2LL;
  pv = 0LL;
  v9 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
    Template_p(this, &EVT_VOLUME_LIMIT_CHANGED_ENTER, this);
  v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4), &v11);
  if ( v3 >= 0 )
  {
    if ( v11 )
    {
      v3 = -2147467259;
    }
    else
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), &v10);
      if ( v3 >= 0 )
      {
        v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 4) + 96LL))(*((_QWORD *)this + 4), &v9);
        if ( v3 >= 0 )
        {
          v3 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v9 + 64LL))(v9, &pv);
          if ( v3 >= 0 )
          {
            v4 = -1LL;
            do
              ++v4;
            while ( *((_WORD *)pv + v4) );
            v15 = v10;
            v13 = 2 * v4 + 2;
            v3 = StringCbCopyW((char *)v14, 0x1E0uLL, (char *)pv);
            if ( v3 >= 0 )
            {
              if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
                Template_p(v2, &EVT_VOLUME_LIMIT_PUBLISH_WNF_AVLC_STATE, this);
              v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(
                     WNF_AVLC_DRIVER_REQUEST,
                     0LL,
                     &v13,
                     488LL,
                     0LL);
              if ( v5 < 0 )
              {
                v6 = RtlNtStatusToDosError(v5);
                v3 = v6;
                if ( v6 > 0 )
                  v3 = (unsigned __int16)v6 | 0x80070000;
              }
            }
          }
        }
      }
    }
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
    Template_pq(v2, (__int64)&EVT_VOLUME_LIMIT_CHANGED_EXIT, (__int64)this, v3);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v3;
}
