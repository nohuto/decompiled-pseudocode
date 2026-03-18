/*
 * XREFs of ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x18010FB94
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800DCEA0 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x18010E4C4 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x18010F2C8 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall CExpression::ProcessSetNodesInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETNODESINFO *a3)
{
  unsigned int v6; // edx
  CBitmapOfDeviceBitmaps *Resource; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  CBitmapOfDeviceBitmaps *v10; // r15
  volatile signed __int32 *v11; // r14
  volatile signed __int32 *v12; // r14
  int v13; // eax
  int v14; // eax
  const GUID *v15; // r8
  const GUID *v16; // r9
  int v17; // eax
  unsigned __int64 v18; // rdx
  CSharedSection *v19; // rcx
  void *v20; // rax
  int v21; // r9d
  unsigned int v22; // ecx
  size_t v23; // r8
  UINT32 cData; // [rsp+20h] [rbp-49h]
  unsigned int v26; // [rsp+30h] [rbp-39h] BYREF
  int v27; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v29; // [rsp+60h] [rbp-9h]
  __int64 v30; // [rsp+68h] [rbp-1h]
  unsigned int *v31; // [rsp+70h] [rbp+7h]
  __int64 v32; // [rsp+78h] [rbp+Fh]

  v26 = -2147467259;
  if ( *((_QWORD *)this + 17) || (v6 = *((_DWORD *)a3 + 2)) == 0 )
  {
    cData = 64;
    goto LABEL_37;
  }
  Resource = (CBitmapOfDeviceBitmaps *)CResourceTable::GetResource((__int64)a2, v6, 82LL);
  if ( !Resource )
  {
    cData = 71;
LABEL_37:
    v21 = -2003303421;
    goto LABEL_38;
  }
  v8 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 6), 82LL);
  v9 = *((unsigned int *)a3 + 10);
  v10 = (CBitmapOfDeviceBitmaps *)v8;
  if ( v8 )
  {
    if ( (_DWORD)v9 )
      goto LABEL_7;
LABEL_22:
    cData = 83;
    goto LABEL_37;
  }
  if ( (_DWORD)v9 )
    goto LABEL_22;
LABEL_7:
  if ( *((_DWORD *)a3 + 3) < 4u || *((unsigned int *)a3 + 7) < (unsigned __int64)(8 * v9) )
  {
    cData = 92;
    goto LABEL_37;
  }
  v11 = (volatile signed __int32 *)*((_QWORD *)this + 17);
  if ( v11 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
  {
    --*((_DWORD *)v11 + 2);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
  }
  *((_QWORD *)this + 17) = Resource;
  CBitmapOfDeviceBitmaps::AddRef(Resource);
  v12 = (volatile signed __int32 *)*((_QWORD *)this + 20);
  if ( v12 && _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
  {
    --*((_DWORD *)v12 + 2);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
  }
  *((_QWORD *)this + 20) = v10;
  if ( v10 )
    CBitmapOfDeviceBitmaps::AddRef(v10);
  *((_DWORD *)this + 36) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 37) = *((_DWORD *)a3 + 4);
  LOBYTE(v13) = EvaluateCurrentState((int **)&g_Feature_3198205243_57931441_FeatureDescriptorDetails);
  if ( !v13 )
    *((_DWORD *)this + 44) = *((_DWORD *)a3 + 7);
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 45) = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 46) = *((_DWORD *)a3 + 11);
  *((_DWORD *)this + 18) = *((_DWORD *)a3 + 12);
  v14 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  v26 = v14;
  if ( v14 >= 0 )
  {
    if ( *((_DWORD *)a3 + 10) )
    {
      LOBYTE(v17) = EvaluateCurrentState((int **)&g_Feature_3198205243_57931441_FeatureDescriptorDetails);
      v18 = *((unsigned int *)a3 + 8);
      v19 = (CSharedSection *)*((_QWORD *)this + 20);
      if ( v17 )
      {
        v20 = CSharedSection::ResolveAllocation(v19, v18, *((unsigned int *)a3 + 7));
        *((_QWORD *)this + 21) = v20;
        if ( !v20 )
        {
          v21 = -2147024882;
          cData = 125;
LABEL_38:
          v26 = v21;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, cData);
          goto LABEL_39;
        }
        v22 = *((_DWORD *)a3 + 7);
        *((_DWORD *)this + 44) = v22;
        if ( *((_DWORD *)a3 + 9) )
        {
          v23 = v22;
LABEL_33:
          memset_0(v20, 0, v23);
        }
      }
      else
      {
        v20 = CSharedSection::ResolveAllocation(v19, v18, *((unsigned int *)this + 44));
        *((_QWORD *)this + 21) = v20;
        if ( !v20 )
        {
          v21 = -2147024882;
          cData = 138;
          goto LABEL_38;
        }
        if ( *((_DWORD *)a3 + 9) )
        {
          v23 = *((unsigned int *)this + 44);
          goto LABEL_33;
        }
      }
    }
    v26 = 0;
    goto LABEL_39;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x71u);
LABEL_39:
  if ( *((_DWORD *)this + 30)
    && (unsigned int)pRelatedActivityId > 4
    && (qword_180190AC0 & 1) != 0
    && (qword_180190AC8 & 1) == qword_180190AC8 )
  {
    v27 = *((_DWORD *)this + 30);
    v29 = &v27;
    v31 = &v26;
    v30 = 4LL;
    v32 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016E7B7, v15, v16, 4u, &pData);
  }
  return v26;
}
