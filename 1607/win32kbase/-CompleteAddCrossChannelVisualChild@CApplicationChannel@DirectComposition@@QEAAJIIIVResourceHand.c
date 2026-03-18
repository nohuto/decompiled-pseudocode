/*
 * XREFs of ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C003EEB8
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C007E2F8 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C003F590 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C00405E0 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParentVisualMarshaler@2@VResourceHandle@@@Z @ 0x1C0042AC8 (-GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParent.c)
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C007EF7C (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00E45D8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CompleteAddCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8)
{
  __int64 CrossChannelVisualChildNoRef; // r15
  unsigned __int64 v9; // r10
  struct DirectComposition::CResourceMarshaler *v10; // rbp
  struct DirectComposition::CResourceMarshaler *v14; // r14
  bool v15; // zf
  struct DirectComposition::CResourceMarshaler *v16; // rax
  struct DirectComposition::CResourceMarshaler *v17; // rsi
  int v18; // ebx
  __int64 v19; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  DirectComposition::CResourceMarshaler *v23; // rbx
  char v24; // [rsp+78h] [rbp+10h] BYREF

  CrossChannelVisualChildNoRef = 0LL;
  v9 = (unsigned int)(a2 - 1);
  v10 = 0LL;
  if ( a2 && v9 < *((_QWORD *)a1 + 11) )
  {
    _mm_lfence();
    v14 = *(struct DirectComposition::CResourceMarshaler **)(v9 * *((_QWORD *)a1 + 12) + *((_QWORD *)a1 + 8));
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 )
    goto LABEL_32;
  if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v14 + 112LL))(
          v14,
          32LL) )
    goto LABEL_35;
  if ( a7 )
  {
    v21 = (unsigned int)(a7 - 1);
    if ( v21 < *((_QWORD *)a1 + 11) )
    {
      _mm_lfence();
      CrossChannelVisualChildNoRef = *(_QWORD *)(v21 * *((_QWORD *)a1 + 12) + *((_QWORD *)a1 + 8));
    }
    if ( !CrossChannelVisualChildNoRef )
      goto LABEL_32;
    v15 = (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)CrossChannelVisualChildNoRef + 112LL))(
            CrossChannelVisualChildNoRef,
            32LL) == 0;
  }
  else
  {
    if ( !a8 )
      goto LABEL_10;
    CrossChannelVisualChildNoRef = DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(v14);
    v15 = CrossChannelVisualChildNoRef == 0;
  }
  if ( v15 )
    goto LABEL_35;
LABEL_10:
  if ( a4 )
  {
    v22 = (unsigned int)(a4 - 1);
    if ( v22 >= *((_QWORD *)a1 + 11) )
    {
      v23 = 0LL;
    }
    else
    {
      _mm_lfence();
      v23 = *(DirectComposition::CResourceMarshaler **)(v22 * *((_QWORD *)a1 + 12) + *((_QWORD *)a1 + 8));
    }
    if ( v23 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v23 + 112LL))(
             v23,
             32LL) )
      {
        v10 = v23;
        DirectComposition::CResourceMarshaler::AddRef(v23);
LABEL_19:
        v19 = *(_QWORD *)v14;
        v24 = 0;
        v18 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, struct DirectComposition::CResourceMarshaler *, _QWORD, __int64, char *))(v19 + 232))(
                v14,
                a1,
                v10,
                a6,
                CrossChannelVisualChildNoRef,
                &v24);
        if ( v18 >= 0 && v24 )
          DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a1, v14);
        goto LABEL_22;
      }
LABEL_35:
      v18 = -1073741811;
      goto LABEL_22;
    }
LABEL_32:
    v18 = -1073741790;
    goto LABEL_22;
  }
  if ( a5 )
  {
    v16 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0xF8uLL);
    v17 = v16;
    if ( v16 )
    {
      memset(v16, 0, 0xF8uLL);
      *((_DWORD *)v17 + 6) = 0;
      *(_QWORD *)v17 = &DirectComposition::CCrossChannelParentVisualMarshaler::`vftable';
      *((_DWORD *)v17 + 5) = 1;
    }
    else
    {
      v17 = 0LL;
    }
    if ( !v17 )
    {
      v18 = -1073741801;
      goto LABEL_22;
    }
    v18 = DirectComposition::CCrossChannelParentVisualMarshaler::Initialize(v17, a1, a5, a3);
    if ( v18 < 0 || (v18 = DirectComposition::CApplicationChannel::RegisterResource(a1, v17), v18 < 0) )
    {
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v17 + 104LL))(
        v17,
        a1);
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v17 + 96LL))(
        v17,
        1LL);
    }
    else
    {
      v10 = v17;
    }
  }
  else
  {
    v18 = -1073741811;
  }
  if ( v18 >= 0 )
    goto LABEL_19;
LABEL_22:
  DirectComposition::CApplicationChannel::ReleaseResource(a1, v10);
  return (unsigned int)v18;
}
