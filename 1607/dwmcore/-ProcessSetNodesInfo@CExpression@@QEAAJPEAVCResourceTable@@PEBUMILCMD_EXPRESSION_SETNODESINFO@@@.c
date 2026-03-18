/*
 * XREFs of ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x18008B938
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18008874C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x180088B90 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800B0084 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 */

__int64 __fastcall CExpression::ProcessSetNodesInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETNODESINFO *a3)
{
  bool v3; // zf
  unsigned int v7; // edx
  CBitmapOfDeviceBitmaps *Resource; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  CBitmapOfDeviceBitmaps *v11; // rsi
  CMILCOMBase *v12; // rcx
  CMILCOMBase *v13; // rcx
  int v14; // eax
  void *v15; // rax
  unsigned int v16; // ecx
  int v18; // r9d
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  UINT32 cData; // [rsp+20h] [rbp-39h]
  unsigned int v22; // [rsp+30h] [rbp-29h] BYREF
  int TracingCookie; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *p_TracingCookie; // [rsp+60h] [rbp+7h]
  int v26; // [rsp+68h] [rbp+Fh]
  int v27; // [rsp+6Ch] [rbp+13h]
  unsigned int *v28; // [rsp+70h] [rbp+17h]
  int v29; // [rsp+78h] [rbp+1Fh]
  int v30; // [rsp+7Ch] [rbp+23h]

  v3 = *((_QWORD *)this + 36) == 0LL;
  v22 = -2147467259;
  if ( !v3 || (v7 = *((_DWORD *)a3 + 2)) == 0 )
  {
    cData = 212;
    goto LABEL_29;
  }
  Resource = (CBitmapOfDeviceBitmaps *)CResourceTable::GetResource((__int64)a2, v7, 0x5Fu);
  if ( !Resource )
  {
    cData = 219;
LABEL_29:
    v18 = -2003303421;
    goto LABEL_30;
  }
  v9 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 6), 0x5Fu);
  v10 = *((unsigned int *)a3 + 10);
  v11 = (CBitmapOfDeviceBitmaps *)v9;
  if ( !v9 )
  {
    if ( !(_DWORD)v10 )
      goto LABEL_6;
    goto LABEL_24;
  }
  if ( !(_DWORD)v10 )
  {
LABEL_24:
    cData = 231;
    goto LABEL_29;
  }
LABEL_6:
  if ( *((_DWORD *)a3 + 3) < 4u || *((unsigned int *)a3 + 7) < (unsigned __int64)(8 * v10) )
  {
    cData = 240;
    goto LABEL_29;
  }
  v12 = (CMILCOMBase *)*((_QWORD *)this + 36);
  if ( v12 )
    CMILCOMBase::InternalRelease(v12);
  *((_QWORD *)this + 36) = Resource;
  CBitmapOfDeviceBitmaps::AddRef(Resource);
  v13 = (CMILCOMBase *)*((_QWORD *)this + 39);
  if ( v13 )
    CMILCOMBase::InternalRelease(v13);
  *((_QWORD *)this + 39) = v11;
  if ( v11 )
    CBitmapOfDeviceBitmaps::AddRef(v11);
  *((_DWORD *)this + 74) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 75) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 76) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 83) = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 84) = *((_DWORD *)a3 + 11);
  v14 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  v22 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xFFu);
    goto LABEL_20;
  }
  if ( *((_DWORD *)a3 + 10) )
  {
    v15 = CSharedSection::ResolveAllocation(
            *((CSharedSection **)this + 39),
            *((unsigned int *)a3 + 8),
            *((unsigned int *)a3 + 7));
    *((_QWORD *)this + 40) = v15;
    if ( v15 )
    {
      v16 = *((_DWORD *)a3 + 7);
      *((_DWORD *)this + 82) = v16;
      if ( *((_DWORD *)a3 + 9) )
        memset_0(v15, 0, v16);
      goto LABEL_19;
    }
    v18 = -2147024882;
    cData = 265;
LABEL_30:
    v22 = v18;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, cData);
    goto LABEL_20;
  }
LABEL_19:
  v22 = 0;
LABEL_20:
  if ( (*(_DWORD *)(*((_QWORD *)this + 33) + 4LL) & 0x40000000) != 0
    && (unsigned int)pRelatedActivityId > 4
    && (qword_1801EAA90 & 1) != 0
    && (qword_1801EAA98 & 1) == qword_1801EAA98 )
  {
    v27 = 0;
    v30 = 0;
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    p_TracingCookie = &TracingCookie;
    v28 = &v22;
    v26 = 4;
    v29 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C44E4, v19, v20, 4u, &pData);
  }
  return v22;
}
