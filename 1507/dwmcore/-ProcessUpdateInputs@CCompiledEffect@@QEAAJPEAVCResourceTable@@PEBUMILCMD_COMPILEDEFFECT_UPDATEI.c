/*
 * XREFs of ?ProcessUpdateInputs@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180113574
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18006CEEC (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Lookup@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEBAPEAVInternalFilterInput@@AEBI@Z @ 0x180111E24 (-Lookup@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEBAPE.c)
 *     ?EmptyFilterInputMap@CCompiledEffect@@AEAAXXZ @ 0x18011259C (-EmptyFilterInputMap@CCompiledEffect@@AEAAXXZ.c)
 *     ?HasValidTemplate@CCompiledEffect@@QEBA_NXZ @ 0x180113374 (-HasValidTemplate@CCompiledEffect@@QEBA_NXZ.c)
 *     ?Update@InternalFilterInput@@QEAAXIAEBUtagRECT@@PEAVCResource@@@Z @ 0x180121EF0 (-Update@InternalFilterInput@@QEAAXIAEBUtagRECT@@PEAVCResource@@@Z.c)
 */

__int64 __fastcall CCompiledEffect::ProcessUpdateInputs(
        CCompiledEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPILEDEFFECT_UPDATEINPUTS *a3,
        char *a4,
        unsigned int a5)
{
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  int v12; // esi
  char *v13; // r14
  struct CResource **v14; // rbp
  CResourceTable *v15; // r11
  struct CResource *v16; // r15
  unsigned int v17; // edx
  struct CResource *ResourceWithoutType; // rax
  int v19; // eax
  unsigned int v21; // [rsp+20h] [rbp-38h]

  if ( !*((_QWORD *)this + 7) )
  {
    v8 = -2003303422;
    v21 = 197;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v21);
    goto LABEL_26;
  }
  if ( !CCompiledEffect::HasValidTemplate(this) )
  {
LABEL_24:
    v8 = 0;
    goto LABEL_25;
  }
  v11 = *(unsigned int *)(v9 + 12);
  if ( !is_mul_ok(v11, 0x1CuLL) )
  {
    v8 = -2147024362;
    v21 = 205;
    goto LABEL_3;
  }
  if ( 28 * v11 != a5 || a5 && !v10 )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xD0u);
    goto LABEL_26;
  }
  v12 = 0;
  if ( !(_DWORD)v11 )
  {
LABEL_23:
    CResource::NotifyOnChanged(this, 6u, 0LL);
    goto LABEL_24;
  }
  while ( 1 )
  {
    v13 = &a4[28 * v12];
    v14 = (struct CResource **)CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Lookup();
    if ( v14 )
      break;
LABEL_22:
    if ( (unsigned int)++v12 >= *((_DWORD *)a3 + 3) )
      goto LABEL_23;
  }
  v16 = 0LL;
  if ( (v13[24] & 2) == 0 )
  {
    v17 = *((_DWORD *)v13 + 1);
    if ( v17 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v15, v17);
      v16 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              79LL) )
      {
        v8 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xE2u);
        goto LABEL_26;
      }
    }
  }
  if ( v14[6] )
    --*((_DWORD *)this + 48);
  CResource::UnRegisterNotifierInternal(this, v14[6]);
  v14[6] = 0LL;
  InternalFilterInput::Update((InternalFilterInput *)v14, *((_DWORD *)v13 + 6), (const struct tagRECT *)(v13 + 8), v16);
  v19 = CResource::RegisterNotifier(this, v14[6]);
  v8 = v19;
  if ( v19 >= 0 )
  {
    if ( v14[6] )
      ++*((_DWORD *)this + 48);
    goto LABEL_22;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xF6u);
LABEL_25:
  if ( v8 < 0 )
LABEL_26:
    CCompiledEffect::EmptyFilterInputMap(this);
  return (unsigned int)v8;
}
