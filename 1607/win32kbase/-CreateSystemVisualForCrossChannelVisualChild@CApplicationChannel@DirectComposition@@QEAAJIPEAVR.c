/*
 * XREFs of ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C003F160
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C007E2F8 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0018958 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C00189C0 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C003F590 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C00405E0 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0044430 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateSystemVisualForCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        struct ResourceHandle *a3)
{
  unsigned __int64 v4; // rcx
  __int64 v6; // r14
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  int SystemResource; // edi
  DirectComposition::CApplicationChannel **v10; // rdx
  DirectComposition::CApplicationChannel *v11; // rax
  __int64 v12; // rax
  char v14; // [rsp+68h] [rbp+10h] BYREF

  v4 = (unsigned int)(a2 - 1);
  if ( a2 && v4 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v6 = *(_QWORD *)(v4 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 112LL))(v6, 32LL) )
    {
      v7 = Win32AllocPoolWithQuotaZInit(0x108uLL);
      v8 = v7;
      if ( v7 )
      {
        v7[6] = 0;
        v7[5] = 1;
        *(_QWORD *)v7 = &DirectComposition::CCrossChannelChildVisualMarshaler::`vftable';
        v7[60] = 0;
        *((_QWORD *)v7 + 32) = v7 + 62;
        *((_QWORD *)v7 + 31) = v7 + 62;
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        SystemResource = DirectComposition::CVisualMarshaler::Initialize((DirectComposition::CVisualMarshaler *)v8);
        if ( SystemResource >= 0 )
          SystemResource = DirectComposition::CConnection::CreateSystemResource(
                             *((DirectComposition::CConnection **)this + 5),
                             0x20u,
                             (struct ResourceHandle *)(v8 + 60));
        if ( SystemResource < 0
          || (SystemResource = DirectComposition::CApplicationChannel::RegisterResource(
                                 this,
                                 (struct DirectComposition::CResourceMarshaler *)v8),
              SystemResource < 0) )
        {
          (*(void (__fastcall **)(_DWORD *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v8 + 104LL))(v8, this);
          (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v8 + 96LL))(v8, 1LL);
          v8 = 0LL;
        }
        else
        {
          v10 = (DirectComposition::CApplicationChannel **)*((_QWORD *)this + 33);
          v11 = (DirectComposition::CApplicationChannel *)(v8 + 62);
          if ( *v10 != (DirectComposition::CApplicationChannel *)((char *)this + 256) )
            __fastfail(3u);
          *(_QWORD *)v11 = (char *)this + 256;
          *((_QWORD *)v8 + 32) = v10;
          *v10 = v11;
          *((_QWORD *)this + 33) = v11;
        }
        if ( SystemResource < 0
          || (v12 = *(_QWORD *)v8,
              v14 = 0,
              SystemResource = (*(__int64 (__fastcall **)(_DWORD *, DirectComposition::CApplicationChannel *, __int64, _QWORD, _QWORD, char *))(v12 + 232))(
                                 v8,
                                 this,
                                 v6,
                                 0LL,
                                 0LL,
                                 &v14),
              SystemResource < 0) )
        {
          if ( v8 )
            DirectComposition::CApplicationChannel::ReleaseResource(
              this,
              (struct DirectComposition::CResourceMarshaler *)v8);
        }
        else
        {
          if ( v14 )
            DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
              this,
              (struct DirectComposition::CResourceMarshaler *)v8);
          DirectComposition::CConnection::ReferenceSystemResource(*((_QWORD *)this + 5), v8[60]);
          *(_DWORD *)a3 = v8[60];
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)SystemResource;
}
