/*
 * XREFs of ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800F7B14
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800F92C0 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x180129618 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
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
  const GUID *v15; // r8
  const GUID *v16; // r9
  void *v17; // rax
  int v18; // r9d
  int v19; // edx
  UINT32 cData; // [rsp+20h] [rbp-39h]
  unsigned int v22; // [rsp+30h] [rbp-29h] BYREF
  int v23; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v25; // [rsp+60h] [rbp+7h]
  int v26; // [rsp+68h] [rbp+Fh]
  int v27; // [rsp+6Ch] [rbp+13h]
  unsigned int *v28; // [rsp+70h] [rbp+17h]
  int v29; // [rsp+78h] [rbp+1Fh]
  int v30; // [rsp+7Ch] [rbp+23h]

  v3 = *((_QWORD *)this + 17) == 0LL;
  v22 = -2147467259;
  if ( !v3 || (v7 = *((_DWORD *)a3 + 2)) == 0 )
  {
    cData = 63;
    goto LABEL_27;
  }
  Resource = (CBitmapOfDeviceBitmaps *)CResourceTable::GetResource((__int64)a2, v7, 0x5Au);
  if ( !Resource )
  {
    cData = 70;
LABEL_27:
    v18 = -2003303421;
    goto LABEL_28;
  }
  v9 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 6), 0x5Au);
  v10 = *((unsigned int *)a3 + 10);
  v11 = (CBitmapOfDeviceBitmaps *)v9;
  if ( v9 )
  {
    if ( (_DWORD)v10 )
      goto LABEL_7;
LABEL_18:
    cData = 82;
    goto LABEL_27;
  }
  if ( (_DWORD)v10 )
    goto LABEL_18;
LABEL_7:
  if ( *((_DWORD *)a3 + 3) < 4u || *((unsigned int *)a3 + 7) < (unsigned __int64)(8 * v10) )
  {
    cData = 91;
    goto LABEL_27;
  }
  v12 = (CMILCOMBase *)*((_QWORD *)this + 17);
  if ( v12 )
    CMILCOMBase::InternalRelease(v12);
  *((_QWORD *)this + 17) = Resource;
  CBitmapOfDeviceBitmaps::AddRef(Resource);
  v13 = (CMILCOMBase *)*((_QWORD *)this + 20);
  if ( v13 )
    CMILCOMBase::InternalRelease(v13);
  *((_QWORD *)this + 20) = v11;
  if ( v11 )
    CBitmapOfDeviceBitmaps::AddRef(v11);
  *((_DWORD *)this + 36) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 37) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 7);
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 45) = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 46) = *((_DWORD *)a3 + 11);
  *((_DWORD *)this + 18) = *((_DWORD *)a3 + 12);
  v14 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  v22 = v14;
  if ( v14 >= 0 )
  {
    if ( *((_DWORD *)a3 + 10) )
    {
      v17 = CSharedSection::ResolveAllocation(
              *((CSharedSection **)this + 20),
              *((unsigned int *)a3 + 8),
              *((unsigned int *)this + 44));
      *((_QWORD *)this + 21) = v17;
      if ( !v17 )
      {
        v18 = -2147024882;
        cData = 119;
LABEL_28:
        v22 = v18;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, cData);
        goto LABEL_29;
      }
      if ( *((_DWORD *)a3 + 9) )
        memset_0(v17, 0, (size_t)v15);
    }
    v22 = 0;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x6Du);
  }
LABEL_29:
  v19 = *((_DWORD *)this + 30);
  if ( v19
    && (unsigned int)pRelatedActivityId > 4
    && (qword_18019E950 & 1) != 0
    && (qword_18019E958 & 1) == qword_18019E958 )
  {
    v27 = 0;
    v30 = 0;
    v25 = &v23;
    v28 = &v22;
    v23 = v19;
    v26 = 4;
    v29 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D903, v15, v16, 4u, &pData);
  }
  return v22;
}
