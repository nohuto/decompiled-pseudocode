/*
 * XREFs of ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x180008670
 * Callers:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180008288 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 * Callees:
 *     ?Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z @ 0x180008024 (-Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180032158 (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??A?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAAEAVCAudioSessionNotificationProcess@@_K@Z @ 0x180067A64 (--A-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotificationPr.c)
 *     ??4?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z @ 0x180067A8C (--4-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CDacl::PrepareAcesForACL(ATL::CDacl *this)
{
  unsigned __int64 v1; // r13
  const struct ATL::CDacl::CAccessAce *v2; // rbx
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbp
  _QWORD *v6; // r15
  __int64 v7; // rcx
  const struct ATL::CDacl::CAccessAce **v8; // r14
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  const struct ATL::CDacl::CAccessAce **v11; // r12
  const struct ATL::CDacl::CAccessAce *v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rax
  ATL::CDacl *v15; // [rsp+70h] [rbp+8h]
  const struct ATL::CDacl::CAccessAce *v16; // [rsp+78h] [rbp+10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h]
  __int64 v18; // [rsp+88h] [rbp+20h]

  v15 = this;
  v1 = *((_QWORD *)this + 4);
  v2 = 0LL;
  v3 = 1LL;
  v16 = 0LL;
  v4 = 4LL;
  if ( v1 > 4 )
  {
    do
    {
      v3 = v4;
      v4 += 2 * v4 + 1;
    }
    while ( v4 < v1 );
    if ( !v3 )
      goto LABEL_23;
  }
  do
  {
    v5 = v3 - 1;
    if ( v3 - 1 >= v1 )
      goto LABEL_22;
    v6 = (_QWORD *)((char *)this + 24);
    v7 = -(__int64)v3;
    v18 = -(__int64)v3;
    do
    {
      if ( v5 >= v6[1] )
        ATL::AtlThrowImpl(-2147024809);
      v8 = (const struct ATL::CDacl::CAccessAce **)(8 * v5 + *v6);
      if ( v2 != *v8 )
      {
        if ( v2 )
        {
          (**(void (__fastcall ***)(const struct ATL::CDacl::CAccessAce *, __int64))v2)(v2, 1LL);
          v7 = v18;
        }
        v2 = *v8;
        v16 = *v8;
LABEL_9:
        *v8 = 0LL;
        goto LABEL_10;
      }
      if ( &v16 != v8 )
        goto LABEL_9;
LABEL_10:
      v9 = v5;
      if ( v5 >= v3 )
      {
        v10 = 8 * v5 + 8 * v7;
        v17 = v10;
        do
        {
          if ( v9 - v3 >= v6[1] )
            ATL::AtlThrowImpl(-2147024809);
          if ( (unsigned int)ATL::CDacl::CAccessAce::Order(*(const struct ATL::CDacl::CAccessAce **)(v10 + *v6), v2) != -1 )
            break;
          v13 = ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::operator[](
                  v6,
                  v9 - v3);
          v14 = ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::operator[](
                  v6,
                  v9);
          ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(v14, v13);
          v9 -= v3;
          v10 = v17 - 8 * v3;
          v17 = v10;
        }
        while ( v9 >= v3 );
      }
      if ( v9 >= v6[1] )
        ATL::AtlThrowImpl(-2147024809);
      v11 = (const struct ATL::CDacl::CAccessAce **)(*v6 + 8 * v9);
      v12 = *v11;
      if ( *v11 != v2 )
      {
        if ( v12 )
          (**(void (__fastcall ***)(const struct ATL::CDacl::CAccessAce *, __int64))v12)(*v11, 1LL);
        *v11 = v2;
LABEL_19:
        v2 = 0LL;
        v16 = 0LL;
        goto LABEL_20;
      }
      if ( v11 != &v16 )
        goto LABEL_19;
LABEL_20:
      v7 = v18;
      ++v5;
    }
    while ( v5 < v1 );
    this = v15;
LABEL_22:
    v3 /= 3uLL;
  }
  while ( v3 );
LABEL_23:
  ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(&v16);
}
