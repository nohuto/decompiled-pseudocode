/*
 * XREFs of ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x1800707D4
 * Callers:
 *     ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800706B0 (-Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z @ 0x180071134 (-RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z.c)
 *     ?IsTouchTestModeEnabled@RIMRawInputProvider@@AEAA_NXZ @ 0x180071234 (-IsTouchTestModeEnabled@RIMRawInputProvider@@AEAA_NXZ.c)
 *     ??0RIMDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180071D54 (--0RIMDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x180071F60 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 *     ?Create@TouchDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180073BB4 (-Create@TouchDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180074348 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x180074968 (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@SpatialInputControllerCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x180077DE0 (-Create@SpatialInputControllerCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMe.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18007BD4C (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18007CAE8 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18007D6D0 (-Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18007DAE4 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x18007DBB0 (-Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall RIMRawInputProvider::Initialize(RIMRawInputProvider *this, int a2)
{
  __int16 v2; // r13
  int v4; // eax
  RIMRawInputProvider *v5; // rcx
  int (*v6)(void *, unsigned int, void *); // r8
  unsigned int v7; // ebx
  int v8; // r9d
  bool IsTouchTestModeEnabled; // al
  int v10; // r12d
  struct IRawInputClient *v11; // r15
  void **v12; // rax
  RIMDeviceCollection *v13; // rax
  RIMDeviceCollection *v14; // rbx
  int v15; // r15d
  int v16; // eax
  int v17; // eax
  struct IRawInputClient *v18; // r15
  void **v19; // rax
  RIMDeviceCollection *v20; // rax
  RIMDeviceCollection *v21; // rbx
  int v22; // eax
  int v23; // eax
  struct IRawInputClient *v24; // r15
  void **v25; // r13
  HIDDeviceCollection *v26; // rax
  HIDDeviceCollection *v27; // rbx
  _DWORD *v28; // rax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int (*v32)(void *, unsigned int, void *); // r8
  int v33; // eax
  int v34; // eax
  int (*v35)(void *, unsigned int, void *); // r8
  int v36; // eax
  int v37; // eax
  int (*v38)(void *, unsigned int, void *); // r8
  int v39; // eax
  int v40; // eax
  int (*v41)(void *, unsigned int, void *); // r8
  int v42; // eax
  int v43; // eax
  int (*v44)(void *, unsigned int, void *); // r8
  int v45; // eax
  int v46; // eax
  int (*v47)(void *, unsigned int, void *); // r8
  int v48; // eax
  void **v49; // r15
  int v50; // eax
  int v51; // eax
  int (*v52)(void *, unsigned int, void *); // r8
  int v53; // eax
  char v55; // [rsp+20h] [rbp-38h]
  int pvData; // [rsp+A0h] [rbp+48h] BYREF
  int v57; // [rsp+A8h] [rbp+50h]
  HIDDeviceCollection *pcbData; // [rsp+B0h] [rbp+58h] BYREF
  void *v59; // [rsp+B8h] [rbp+60h] BYREF

  v57 = a2;
  v2 = a2;
  v59 = 0LL;
  v4 = CoreUICreate((char *)this + 40);
  v7 = v4;
  if ( v4 >= 0 )
  {
    pvData = v2 & 8;
    if ( (v2 & 8) != 0 )
    {
      IsTouchTestModeEnabled = RIMRawInputProvider::IsTouchTestModeEnabled(v5);
      *((_BYTE *)this + 24) = IsTouchTestModeEnabled;
      if ( IsTouchTestModeEnabled )
        RIMSetTestModeStatus(1LL);
    }
    v10 = -2147024882;
    if ( (v2 & 4) == 0 )
      goto LABEL_38;
    v11 = (struct IRawInputClient *)*((_QWORD *)this + 4);
    v12 = (void **)((char *)this + 48);
    if ( !v11 || this == (RIMRawInputProvider *)-48LL )
    {
      v15 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_30:
        v7 = v15;
        if ( v15 < 0 )
          goto LABEL_31;
        if ( (gdwMitConfig & 2) == 0 )
        {
          v17 = RIMRawInputProvider::RegisterWaitHandler(this, v59, v6, *v12);
          v7 = v17;
          if ( v17 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              return v7;
            v55 = v17;
            v8 = 134;
            goto LABEL_4;
          }
        }
LABEL_38:
        if ( (v2 & 2) == 0 )
          goto LABEL_66;
        v18 = (struct IRawInputClient *)*((_QWORD *)this + 4);
        v19 = (void **)((char *)this + 56);
        if ( !v18 || this == (RIMRawInputProvider *)-56LL )
        {
          v15 = -2147024809;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          {
LABEL_60:
            v7 = v15;
            if ( v15 < 0 )
              goto LABEL_61;
            v23 = RIMRawInputProvider::RegisterWaitHandler(this, v59, v6, *v19);
            v7 = v23;
            if ( v23 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                return v7;
              v55 = v23;
              v8 = 149;
              goto LABEL_4;
            }
LABEL_66:
            if ( (v2 & 0x20) == 0 )
              goto LABEL_94;
            v24 = (struct IRawInputClient *)*((_QWORD *)this + 4);
            v25 = (void **)((char *)this + 64);
            if ( !v24 || this == (RIMRawInputProvider *)-64LL )
            {
              v10 = -2147024809;
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                Template_qqq((__int64)v5, &MinInput_Warning_CheckResult, 0, 28, 87);
                goto LABEL_86;
              }
            }
            else
            {
              v26 = (HIDDeviceCollection *)malloc(0xAE0uLL);
              v27 = v26;
              if ( v26 )
                memset(v26, 0, 0xAE0uLL);
              pcbData = v27;
              if ( v27 )
              {
                HIDDeviceCollection::HIDDeviceCollection(v27, v24);
                *(_QWORD *)v27 = &PTPDeviceCollection::`vftable';
                *((_DWORD *)v27 + 694) = 0xFFFF;
                v28 = operator new[](0x10uLL);
                *((_QWORD *)v27 + 345) = v28;
                *v28 = *((_DWORD *)v27 + 694);
                *((_DWORD *)v27 + 692) = 1;
                *((_DWORD *)v27 + 693) = 0;
                *((_QWORD *)v27 + 3) = this;
                v29 = HIDDeviceCollection::Initialize(v27, 8u, 0x3A8u, &v59);
                v10 = v29;
                if ( v29 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                  Template_qqq((__int64)v5, &MinInput_Warning_CheckResult, 0, 82, v29);
                if ( v10 >= 0 )
                {
                  *v25 = v27;
                }
                else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                {
                  Template_qqq((__int64)v5, &MinInput_Warning_CheckResult, 0, 37, v10);
                }
                if ( v10 < 0 )
                  (*(void (__fastcall **)(HIDDeviceCollection *, __int64))(*(_QWORD *)v27 + 24LL))(v27, 1LL);
                goto LABEL_87;
              }
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                Template_qqq((__int64)v5, &MinInput_Warning_CheckResult, 0, 34, 14);
LABEL_86:
                v7 = v10;
LABEL_88:
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  return v7;
                v55 = v10;
                v8 = 158;
                goto LABEL_4;
              }
            }
LABEL_87:
            v7 = v10;
            if ( v10 < 0 )
              goto LABEL_88;
            v30 = RIMRawInputProvider::RegisterWaitHandler(this, v59, v6, *v25);
            v7 = v30;
            if ( v30 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                return v7;
              v55 = v30;
              v8 = 163;
              goto LABEL_4;
            }
            v2 = v57;
LABEL_94:
            if ( pvData )
            {
              v31 = TouchDeviceCollection::Create(
                      *((struct IRawInputClient **)this + 4),
                      this,
                      &v59,
                      (struct TouchDeviceCollection **)this + 9);
              v7 = v31;
              if ( v31 < 0 )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  return v7;
                v55 = v31;
                v8 = 172;
                goto LABEL_4;
              }
              v33 = RIMRawInputProvider::RegisterWaitHandler(this, v59, v32, *((void **)this + 9));
              v7 = v33;
              if ( v33 < 0 )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  return v7;
                v55 = v33;
                v8 = 177;
                goto LABEL_4;
              }
            }
            if ( (v2 & 0x10) != 0 )
            {
              v34 = PenDeviceCollection::Create(
                      *((struct IRawInputClient **)this + 4),
                      this,
                      &v59,
                      (struct PenDeviceCollection **)this + 10);
              v7 = v34;
              if ( v34 < 0 )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  return v7;
                v55 = v34;
                v8 = 186;
                goto LABEL_4;
              }
              v36 = RIMRawInputProvider::RegisterWaitHandler(this, v59, v35, *((void **)this + 10));
              v7 = v36;
              if ( v36 < 0 )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  return v7;
                v55 = v36;
                v8 = 191;
                goto LABEL_4;
              }
            }
            if ( (v2 & 0x400) != 0 )
            {
              v37 = AugmentedInputDeviceCollection::Create(
                      *((struct IRawInputClient **)this + 4),
                      &v59,
                      (struct AugmentedInputDeviceCollection **)this + 12);
              v7 = v37;
              if ( v37 < 0 )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  return v7;
                v55 = v37;
                v8 = 214;
                goto LABEL_4;
              }
              v39 = RIMRawInputProvider::RegisterWaitHandler(this, v59, v38, *((void **)this + 12));
              v7 = v39;
              if ( v39 < 0 )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  return v7;
                v55 = v39;
                v8 = 219;
                goto LABEL_4;
              }
            }
            if ( (v2 & 0x2000) != 0 )
            {
              pvData = 0;
              LODWORD(pcbData) = 4;
              if ( RegGetValueW(
                     HKEY_LOCAL_MACHINE,
                     L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Holographic",
                     L"ISM_DisableMPCSpatialControllers",
                     0x18u,
                     0LL,
                     &pvData,
                     (LPDWORD)&pcbData)
                || !pvData )
              {
                v40 = SpatialInputControllerCollection::Create(
                        *((struct IRawInputClient **)this + 4),
                        this,
                        *((struct IMessageSession **)this + 5),
                        &v59,
                        (struct SpatialInputControllerCollection **)this + 13);
                v7 = v40;
                if ( v40 < 0 )
                {
                  if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                    return v7;
                  v55 = v40;
                  v8 = 233;
                  goto LABEL_4;
                }
                v42 = RIMRawInputProvider::RegisterWaitHandler(this, v59, v41, *((void **)this + 13));
                v7 = v42;
                if ( v42 < 0 )
                {
                  if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                    return v7;
                  v55 = v42;
                  v8 = 238;
                  goto LABEL_4;
                }
              }
            }
            if ( (v2 & 0x80u) != 0 )
            {
              v43 = MobileButtonDeviceCollection::Create(
                      *((struct IRawInputClient **)this + 4),
                      this,
                      &v59,
                      (struct MobileButtonDeviceCollection **)this + 11);
              v7 = v43;
              if ( v43 < 0 )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  return v7;
                v55 = v43;
                v8 = 255;
                goto LABEL_4;
              }
              v45 = RIMRawInputProvider::RegisterWaitHandler(this, v59, v44, *((void **)this + 11));
              v7 = v45;
              if ( v45 < 0 )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  return v7;
                v55 = v45;
                v8 = 260;
                goto LABEL_4;
              }
              v46 = ConsumerControlDeviceCollection::Create(
                      *((struct IRawInputClient **)this + 4),
                      this,
                      &v59,
                      (struct ConsumerControlDeviceCollection **)this + 14);
              v7 = v46;
              if ( v46 < 0 )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  return v7;
                v55 = v46;
                v8 = 266;
                goto LABEL_4;
              }
              v48 = RIMRawInputProvider::RegisterWaitHandler(this, v59, v47, *((void **)this + 14));
              v7 = v48;
              if ( v48 < 0 )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  return v7;
                v55 = v48;
                v8 = 271;
                goto LABEL_4;
              }
            }
            if ( (v2 & 0x800) == 0 )
              return 0;
            v49 = (void **)((char *)this + 120);
            v50 = HeatDeviceCollection::Create(
                    *((struct IRawInputClient **)this + 4),
                    this,
                    &v59,
                    (struct HeatDeviceCollection **)this + 15);
            v7 = v50;
            if ( v50 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                return v7;
              v55 = v50;
              v8 = 280;
              goto LABEL_4;
            }
            v51 = (*(__int64 (__fastcall **)(void *, void **))(*(_QWORD *)*v49 + 48LL))(*v49, &v59);
            v7 = v51;
            if ( v51 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                return v7;
              v55 = v51;
              v8 = 287;
              goto LABEL_4;
            }
            v53 = RIMRawInputProvider::RegisterWaitHandler(this, v59, v52, *v49);
            v7 = v53;
            if ( v53 >= 0 )
              return 0;
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              return v7;
            v55 = v53;
            v8 = 292;
LABEL_4:
            Template_qqq((__int64)v5, &MinInput_Warning_CheckResult, 0, v8, v55);
            return v7;
          }
          Template_qqq((__int64)v5, &MinInput_Warning_CheckResult, 0, 30, 87);
          v7 = -2147024809;
        }
        else
        {
          v20 = (RIMDeviceCollection *)malloc(0xAB8uLL);
          v21 = v20;
          if ( v20 )
            memset(v20, 0, 0xAB8uLL);
          if ( v21 )
          {
            RIMDeviceCollection::RIMDeviceCollection(v21, v18);
            *(_QWORD *)v21 = &MouseDeviceCollection::`vftable';
            *((_QWORD *)v21 + 3) = this;
            v22 = RIMDeviceCollection::Initialize(v21, 1u, 0xF0u, &v59);
            v15 = v22;
            if ( v22 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq((__int64)v5, &MinInput_Warning_CheckResult, 0, 78, v22);
            if ( v15 >= 0 )
            {
              v19 = (void **)((char *)this + 56);
              *((_QWORD *)this + 7) = v21;
            }
            else
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                Template_qqq((__int64)v5, &MinInput_Warning_CheckResult, 0, 39, v15);
              v19 = (void **)((char *)this + 56);
            }
            if ( v15 >= 0 )
              goto LABEL_60;
            (*(void (__fastcall **)(RIMDeviceCollection *, __int64))(*(_QWORD *)v21 + 24LL))(v21, 1LL);
            goto LABEL_59;
          }
          v15 = -2147024882;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          {
LABEL_59:
            v19 = (void **)((char *)this + 56);
            goto LABEL_60;
          }
          Template_qqq((__int64)v5, &MinInput_Warning_CheckResult, 0, 36, 14);
          v7 = -2147024882;
        }
LABEL_61:
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v7;
        v8 = 144;
LABEL_33:
        v55 = v15;
        goto LABEL_4;
      }
      Template_qqq((__int64)v5, &MinInput_Warning_CheckResult, 0, 30, 87);
      v7 = -2147024809;
    }
    else
    {
      v13 = (RIMDeviceCollection *)malloc(0xAB8uLL);
      v14 = v13;
      if ( v13 )
        memset(v13, 0, 0xAB8uLL);
      if ( v14 )
      {
        RIMDeviceCollection::RIMDeviceCollection(v14, v11);
        *(_QWORD *)v14 = &KeyboardDeviceCollection::`vftable';
        *((_QWORD *)v14 + 3) = this;
        v16 = RIMDeviceCollection::Initialize(v14, 2u, 0x78u, &v59);
        v15 = v16;
        if ( v16 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq((__int64)v5, &MinInput_Warning_CheckResult, 0, 78, v16);
        if ( v15 >= 0 )
        {
          v12 = (void **)((char *)this + 48);
          *((_QWORD *)this + 6) = v14;
        }
        else
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq((__int64)v5, &MinInput_Warning_CheckResult, 0, 39, v15);
          v12 = (void **)((char *)this + 48);
        }
        if ( v15 >= 0 )
          goto LABEL_30;
        (*(void (__fastcall **)(RIMDeviceCollection *, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1LL);
        goto LABEL_29;
      }
      v15 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_29:
        v12 = (void **)((char *)this + 48);
        goto LABEL_30;
      }
      Template_qqq((__int64)v5, &MinInput_Warning_CheckResult, 0, 36, 14);
      v7 = -2147024882;
    }
LABEL_31:
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v7;
    v8 = 127;
    goto LABEL_33;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v55 = v4;
    v8 = 104;
    goto LABEL_4;
  }
  return v7;
}
