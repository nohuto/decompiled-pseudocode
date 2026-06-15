/*
 * XREFs of ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x18002DAF0
 * Callers:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18002D700 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 * Callees:
 *     ?Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z @ 0x18002E1A8 (-Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180039FE8 (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??A?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAAEAVCAudioSessionNotificationProcess@@_K@Z @ 0x18006637C (--A-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotificationPr.c)
 *     ??4?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z @ 0x1800663A4 (--4-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CDacl::PrepareAcesForACL(ATL::CDacl *this)
{
  unsigned __int64 v1; // r12
  const struct ATL::CDacl::CAccessAce *v2; // rbx
  ATL::CDacl *v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 i; // rax
  unsigned __int64 v6; // rdi
  _QWORD *v7; // r14
  __int64 v8; // rcx
  const struct ATL::CDacl::CAccessAce **v9; // r15
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  const struct ATL::CDacl::CAccessAce *v12; // r15
  const struct ATL::CDacl::CAccessAce **v13; // rbp
  unsigned __int128 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  const struct ATL::CDacl::CAccessAce *v18; // [rsp+78h] [rbp+10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h]
  __int64 v20; // [rsp+88h] [rbp+20h]

  v1 = *((_QWORD *)this + 4);
  v2 = 0LL;
  v18 = 0LL;
  v3 = this;
  v4 = 1LL;
  if ( v1 <= 4 )
    goto LABEL_6;
  for ( i = 4LL; i < v1; i += 2 * i + 1 )
    v4 = i;
  if ( v4 )
  {
    while ( 1 )
    {
      v3 = this;
LABEL_6:
      v6 = v4 - 1;
      if ( v4 - 1 < v1 )
        break;
LABEL_26:
      v14 = v4 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      v4 /= 3uLL;
      if ( !(*((_QWORD *)&v14 + 1) >> 1) )
        goto LABEL_27;
    }
    v7 = (_QWORD *)((char *)v3 + 24);
    v8 = -8LL * v4;
    v19 = -8LL * v4;
    while ( 1 )
    {
      if ( v6 >= v7[1] )
        ATL::AtlThrowImpl(-2147024809);
      v9 = (const struct ATL::CDacl::CAccessAce **)(*v7 + 8 * v6);
      if ( v2 != *v9 )
        break;
      if ( &v18 != v9 )
        goto LABEL_13;
LABEL_14:
      v10 = v6;
      if ( v6 >= v4 )
      {
        v11 = v8 + 8 * v6;
        v20 = v11;
        do
        {
          if ( v10 - v4 >= v7[1] )
            ATL::AtlThrowImpl(-2147024809);
          if ( (unsigned int)ATL::CDacl::CAccessAce::Order(*(const struct ATL::CDacl::CAccessAce **)(v11 + *v7), v2) != -1 )
            break;
          v15 = ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::operator[](
                  v7,
                  v10 - v4);
          v16 = ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::operator[](
                  v7,
                  v10);
          ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(v16, v15);
          v11 = v20 - 8 * v4;
          v10 -= v4;
          v20 = v11;
        }
        while ( v10 >= v4 );
        v8 = v19;
      }
      if ( v10 >= v7[1] )
        ATL::AtlThrowImpl(-2147024809);
      v12 = *(const struct ATL::CDacl::CAccessAce **)(*v7 + 8 * v10);
      v13 = (const struct ATL::CDacl::CAccessAce **)(*v7 + 8 * v10);
      if ( v12 == v2 )
      {
        if ( v13 == &v18 )
          goto LABEL_25;
      }
      else
      {
        if ( v12 )
        {
          (**(void (__fastcall ***)(const struct ATL::CDacl::CAccessAce *, __int64))v12)(v12, 1LL);
          v8 = v19;
        }
        *v13 = v2;
      }
      v2 = 0LL;
      v18 = 0LL;
LABEL_25:
      if ( ++v6 >= v1 )
        goto LABEL_26;
    }
    if ( v2 )
    {
      (**(void (__fastcall ***)(const struct ATL::CDacl::CAccessAce *, __int64))v2)(v2, 1LL);
      v8 = v19;
    }
    v2 = *v9;
    v18 = *v9;
LABEL_13:
    *v9 = 0LL;
    goto LABEL_14;
  }
LABEL_27:
  ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(&v18);
}
