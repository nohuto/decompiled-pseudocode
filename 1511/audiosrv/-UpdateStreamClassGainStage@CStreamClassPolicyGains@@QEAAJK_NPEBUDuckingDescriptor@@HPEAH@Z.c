/*
 * XREFs of ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x180005668
 * Callers:
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z @ 0x180017E60 (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z.c)
 * Callees:
 *     ?RemoveGainStageReference@CGainStage@@QEAAKXZ @ 0x180005840 (-RemoveGainStageReference@CGainStage@@QEAAKXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18003266C (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 *     ?NewNode@?$CAtlList@PEAVCGainStage@@V?$CElementTraits@PEAVCGainStage@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCGainStage@@PEAV312@1@Z @ 0x180032694 (-NewNode@-$CAtlList@PEAVCGainStage@@V-$CElementTraits@PEAVCGainStage@@@ATL@@@ATL@@AEAAPEAVCNode@.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800399C4 (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AddGainStageReference@CGainStage@@QEAAKXZ @ 0x180071A2C (-AddGainStageReference@CGainStage@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamClassPolicyGains::UpdateStreamClassGainStage(
        CStreamClassPolicyGains *this,
        unsigned int a2,
        char a3,
        const struct DuckingDescriptor *a4,
        int a5,
        int *a6)
{
  __int64 v8; // r15
  unsigned int v10; // r14d
  int *v11; // r12
  bool v12; // zf
  char *v13; // rbx
  CGainStage *v14; // rcx
  __int64 *v15; // rbx
  int *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  int *v20; // rsi
  const struct DuckingDescriptor **v21; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  ATL::CAtlException *v24; // rbx
  ATL::CAtlException *v25; // rbx
  __int64 Next; // rax
  ATL::CAtlException *v27; // [rsp+30h] [rbp-48h] BYREF
  ATL::CAtlException *v28; // [rsp+38h] [rbp-40h] BYREF
  CStreamClassPolicyGains *v29; // [rsp+40h] [rbp-38h] BYREF
  char v30; // [rsp+48h] [rbp-30h]
  int *i; // [rsp+80h] [rbp+8h] BYREF
  int v32; // [rsp+90h] [rbp+18h]

  v8 = a2;
  v10 = 0;
  v29 = this;
  v30 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v29);
  v11 = a6;
  *a6 = 0;
  v12 = a3 == 0;
  v13 = (char *)this + 1048;
  if ( v12 )
    v13 = (char *)this + 40;
  v14 = (CGainStage *)(48 * v8);
  v15 = (__int64 *)&v13[48 * v8];
  if ( a5 )
  {
    v20 = (int *)*v15;
    for ( i = (int *)*v15; ; v20 = i )
    {
      if ( !v20 )
        goto LABEL_12;
      v21 = *(const struct DuckingDescriptor ***)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(
                                                   v14,
                                                   &i);
      if ( a4 == v21[6] )
        break;
    }
    if ( CGainStage::RemoveGainStageReference((CGainStage *)v21) )
      goto LABEL_12;
    v10 = 0;
    try
    {
      v22 = *(_QWORD *)v20;
      if ( v20 == (int *)*v15 )
        *v15 = v22;
      else
        **((_QWORD **)v20 + 1) = v22;
      v23 = *((_QWORD *)v20 + 1);
      if ( v20 == (int *)v15[1] )
        v15[1] = v23;
      else
        *(_QWORD *)(*(_QWORD *)v20 + 8LL) = v23;
      ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::FreeNode(v15, v20);
    }
    catch ( ATL::CAtlException *v28 )
    {
      v25 = v28;
      if ( *(_DWORD *)v28 == -1073741571 )
        _resetstkoflw();
      v32 = *(_DWORD *)v25;
      v10 = v32;
      if ( v32 < 0 )
        goto LABEL_12;
      v11 = a6;
    }
    CRefCountedObject::Release((CRefCountedObject *)v21);
    *v11 = 1;
    goto LABEL_12;
  }
  a6 = (int *)*v15;
  if ( a6 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v14, &a6);
      v14 = *(CGainStage **)Next;
      if ( a4 == *(const struct DuckingDescriptor **)(*(_QWORD *)Next + 48LL) )
        break;
      if ( !a6 )
        goto LABEL_5;
    }
    CGainStage::AddGainStageReference(v14);
  }
  else
  {
LABEL_5:
    v16 = (int *)operator new(0x38uLL);
    a6 = v16;
    if ( v16 )
    {
      v16[2] = 1;
      *(_QWORD *)v16 = &CGainStage::`vftable';
      *((_OWORD *)v16 + 1) = StreamClassVolumePolicyGuid;
      *((_BYTE *)v16 + 32) = 0;
      v16[9] = 1;
      *((_QWORD *)v16 + 5) = 0LL;
      *(_QWORD *)v16 = &CPBMStreamClassVolumeGainStage::`vftable';
      *((_QWORD *)v16 + 6) = a4;
    }
    a6 = v16;
    if ( v16 )
    {
      *v11 = 1;
      v10 = 0;
      try
      {
        v18 = ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::NewNode(v15, &a6, v17, *v15);
        if ( *v15 )
          *(_QWORD *)(*v15 + 8) = v18;
        else
          v15[1] = v18;
        *v15 = v18;
      }
      catch ( ATL::CAtlException *v27 )
      {
        v24 = v27;
        if ( *(_DWORD *)v27 == -1073741571 )
          _resetstkoflw();
        v32 = *(_DWORD *)v24;
        v10 = v32;
      }
    }
    else
    {
      v10 = -2147024882;
    }
  }
LABEL_12:
  if ( v30 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v29);
  return v10;
}
