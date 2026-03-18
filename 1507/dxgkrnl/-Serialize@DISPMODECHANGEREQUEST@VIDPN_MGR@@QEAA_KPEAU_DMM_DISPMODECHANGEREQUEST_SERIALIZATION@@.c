/*
 * XREFs of ?Serialize@DISPMODECHANGEREQUEST@VIDPN_MGR@@QEAA_KPEAU_DMM_DISPMODECHANGEREQUEST_SERIALIZATION@@@Z @ 0x1C002BE60
 * Callers:
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01745D8 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 */

__int64 __fastcall VIDPN_MGR::DISPMODECHANGEREQUEST::Serialize(
        VIDPN_MGR::DISPMODECHANGEREQUEST *this,
        struct _DMM_DISPMODECHANGEREQUEST_SERIALIZATION *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rax

  *(_DWORD *)a2 = *((_DWORD *)this + 12);
  *(_OWORD *)((char *)a2 + 4) = *(_OWORD *)((char *)this + 52);
  *(_OWORD *)((char *)a2 + 20) = *(_OWORD *)((char *)this + 68);
  *(_QWORD *)((char *)a2 + 36) = *(_QWORD *)((char *)this + 84);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 23);
  *((_DWORD *)a2 + 12) = *((_DWORD *)this + 24);
  *((_DWORD *)a2 + 13) = *((_DWORD *)this + 25);
  *((_DWORD *)a2 + 14) = *((_DWORD *)this + 26);
  *((_QWORD *)a2 + 8) = *((_QWORD *)this + 14);
  *((_DWORD *)a2 + 23) = *((_DWORD *)this + 35);
  *(_OWORD *)((char *)a2 + 72) = *(_OWORD *)((char *)this + 120);
  *((_DWORD *)a2 + 22) = *((_DWORD *)this + 34);
  v3 = *((_DWORD *)this + 36);
  if ( !v3 )
    return 96LL;
  if ( v3 > 4 )
  {
    v4 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v4 + 24) = *((unsigned int *)this + 36);
    *(_QWORD *)(v4 + 32) = 4LL;
    WdLogEvent5_WdError(v4);
    return 96LL;
  }
  *((_BYTE *)a2 + 96) = v3;
  memmove((char *)a2 + 104, (char *)this + 152, 96LL * *((unsigned int *)this + 36));
  return 96LL * (unsigned int)(*((_DWORD *)this + 36) - 1) + 200;
}
