/*
 * XREFs of ?AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0012928
 * Callers:
 *     NtDCompositionAddCrossDeviceVisualChild @ 0x1C00128E0 (NtDCompositionAddCrossDeviceVisualChild.c)
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0013040 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C00130CC (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z @ 0x1C0013130 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0013BE8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateAndAddDuplicatedVisual@CApplicationChannel@DirectComposition@@IEAAJIIIHI@Z @ 0x1C001AD7C (-CreateAndAddDuplicatedVisual@CApplicationChannel@DirectComposition@@IEAAJIIIHI@Z.c)
 *     ?LookupSystemVisualForParent@CApplicationChannel@DirectComposition@@QEAAJIPEAI@Z @ 0x1C001B670 (-LookupSystemVisualForParent@CApplicationChannel@DirectComposition@@QEAAJIPEAI@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C001D8D4 (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0046E88 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::AddCrossDeviceVisualChild(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // r15d
  int v8; // ebx
  unsigned int v9; // r14d
  unsigned int v10; // esi
  DirectComposition::CApplicationChannel *v13; // rdi
  int v14; // eax
  struct DirectComposition::CApplicationChannel *v15; // rdi
  int v16; // eax
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v18; // rdi
  struct DirectComposition::CApplicationChannel *v20; // rdi
  int v21; // eax
  __int64 v22; // r15
  _QWORD *v23; // rax
  DirectComposition::CApplicationChannel *v24; // rdi
  PVOID v25; // rax
  struct DirectComposition::CResourceMarshaler *v26; // rdx
  unsigned int v27; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-2Ch] BYREF
  struct DirectComposition::CApplicationChannel *v29; // [rsp+38h] [rbp-28h] BYREF
  struct DirectComposition::CApplicationChannel *v30; // [rsp+40h] [rbp-20h] BYREF
  struct DirectComposition::CApplicationChannel *Buffer; // [rsp+48h] [rbp-18h] BYREF
  __int64 v32; // [rsp+50h] [rbp-10h]

  v7 = a7;
  v8 = 0;
  Buffer = 0LL;
  v9 = 0;
  v29 = 0LL;
  v10 = 0;
  v30 = 0LL;
  v27 = 0;
  v28 = 0;
  if ( !a6 || a6 == a1 )
    goto LABEL_3;
  v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a6, &v30);
  if ( v8 >= 0 )
  {
    v20 = v30;
    v21 = DirectComposition::CApplicationChannel::LookupSystemVisualForParent(v30, a7, &v27);
    v9 = v27;
    v8 = v21;
    if ( v21 >= 0 )
      DirectComposition::CConnection::ReferenceSystemResource(*((DirectComposition::CConnection **)v20 + 5), v27);
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v20)(v20);
    if ( v8 >= 0 )
    {
LABEL_3:
      if ( a1 != a3 )
      {
        v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a3, &v29);
        if ( v8 < 0 )
          goto LABEL_15;
        v13 = v29;
        v14 = DirectComposition::CConnection::CreateSystemResource(
                *((DirectComposition::CConnection **)v29 + 5),
                0x1Fu,
                &v28);
        v10 = v28;
        v8 = v14;
        if ( v14 >= 0 )
          v8 = DirectComposition::CApplicationChannel::CreateAndAddDuplicatedVisual(v13, v28, a4, 0, 0, 0);
        (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v13)(v13);
      }
      if ( v8 < 0 || (v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &Buffer), v8 < 0) )
      {
LABEL_33:
        if ( v10 && (int)DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a3, &v29) >= 0 )
        {
          v24 = v29;
          LODWORD(Buffer) = v10;
          v32 = 0LL;
          v25 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)v29 + 192), &Buffer);
          if ( v25 )
          {
            v26 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v25 + 1);
            if ( v26 )
              DirectComposition::CApplicationChannel::ReleaseResource(v24, v26);
          }
          (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v24)(v24);
        }
        goto LABEL_15;
      }
      v15 = Buffer;
      if ( v9 )
      {
        LODWORD(Buffer) = v9;
        v32 = 0LL;
        v22 = 0LL;
        v23 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)v15 + 192), &Buffer);
        if ( !v23 || (v22 = v23[1]) == 0 )
          v8 = -1073741811;
        if ( v8 < 0 )
        {
LABEL_14:
          (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v15)(v15);
          if ( v8 >= 0 )
            goto LABEL_15;
          goto LABEL_33;
        }
        v7 = *(_DWORD *)(v22 + 24);
      }
      if ( a1 == a3 )
        v16 = DirectComposition::CApplicationChannel::AddVisualChild(v15, a2, a4, a5, v7);
      else
        v16 = DirectComposition::CApplicationChannel::CreateAndAddDuplicatedVisual(v15, v10, a2, v7, a5, a3);
      v8 = v16;
      goto LABEL_14;
    }
  }
LABEL_15:
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  v18 = DefaultConnection;
  if ( DefaultConnection )
  {
    if ( v10 )
      DirectComposition::CConnection::ReleaseSystemResource(DefaultConnection, v10);
    if ( v9 )
      DirectComposition::CConnection::ReleaseSystemResource(v18, v9);
    DirectComposition::CConnection::Release(v18);
  }
  return (unsigned int)v8;
}
