/*
 * XREFs of ?AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0023C08
 * Callers:
 *     NtDCompositionAddCrossDeviceVisualChild @ 0x1C0023E40 (NtDCompositionAddCrossDeviceVisualChild.c)
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0022C34 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0022CC0 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z @ 0x1C0022D28 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0023418 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0023438 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C002CF70 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateAndAddDuplicatedVisual@CApplicationChannel@DirectComposition@@IEAAJIIIHI@Z @ 0x1C002DA24 (-CreateAndAddDuplicatedVisual@CApplicationChannel@DirectComposition@@IEAAJIIIHI@Z.c)
 *     ?LookupSystemVisualForParent@CApplicationChannel@DirectComposition@@QEAAJIPEAI@Z @ 0x1C002E44C (-LookupSystemVisualForParent@CApplicationChannel@DirectComposition@@QEAAJIPEAI@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C003070C (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v18; // edx
  DirectComposition::CConnection *v19; // rdi
  struct DirectComposition::CApplicationChannel *v21; // rdi
  int v22; // eax
  __int64 v23; // r15
  _QWORD *v24; // rax
  DirectComposition::CApplicationChannel *v25; // rdi
  PVOID v26; // rax
  struct DirectComposition::CResourceMarshaler *v27; // rdx
  unsigned int v28; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-2Ch] BYREF
  struct DirectComposition::CApplicationChannel *v30; // [rsp+38h] [rbp-28h] BYREF
  struct DirectComposition::CApplicationChannel *v31; // [rsp+40h] [rbp-20h] BYREF
  struct DirectComposition::CApplicationChannel *Buffer; // [rsp+48h] [rbp-18h] BYREF
  __int64 v33; // [rsp+50h] [rbp-10h]

  v7 = a7;
  v8 = 0;
  Buffer = 0LL;
  v9 = 0;
  v30 = 0LL;
  v10 = 0;
  v31 = 0LL;
  v28 = 0;
  v29 = 0;
  if ( !a6 || a6 == a1 )
    goto LABEL_3;
  v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a6, &v31);
  if ( v8 >= 0 )
  {
    v21 = v31;
    v22 = DirectComposition::CApplicationChannel::LookupSystemVisualForParent(v31, a7, &v28);
    v9 = v28;
    v8 = v22;
    if ( v22 >= 0 )
      DirectComposition::CConnection::ReferenceSystemResource(*((DirectComposition::CConnection **)v21 + 5), v28);
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v21)(v21);
    if ( v8 >= 0 )
    {
LABEL_3:
      if ( a1 != a3 )
      {
        v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a3, &v30);
        if ( v8 < 0 )
          goto LABEL_15;
        v13 = v30;
        v14 = DirectComposition::CConnection::CreateSystemResource(
                *((DirectComposition::CConnection **)v30 + 5),
                0x1Fu,
                &v29);
        v10 = v29;
        v8 = v14;
        if ( v14 >= 0 )
          v8 = DirectComposition::CApplicationChannel::CreateAndAddDuplicatedVisual(v13, v29, a4, 0, 0, 0);
        (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v13)(v13);
      }
      if ( v8 < 0 || (v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &Buffer), v8 < 0) )
      {
LABEL_33:
        if ( v10 && (int)DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a3, &v30) >= 0 )
        {
          v25 = v30;
          LODWORD(Buffer) = v10;
          v33 = 0LL;
          v26 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)v30 + 192), &Buffer);
          if ( v26 )
          {
            v27 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v26 + 1);
            if ( v27 )
              DirectComposition::CApplicationChannel::ReleaseResource(v25, v27);
          }
          (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v25)(v25);
        }
        goto LABEL_15;
      }
      v15 = Buffer;
      if ( v9 )
      {
        LODWORD(Buffer) = v9;
        v33 = 0LL;
        v23 = 0LL;
        v24 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)v15 + 192), &Buffer);
        if ( !v24 || (v23 = v24[1]) == 0 )
          v8 = -1073741811;
        if ( v8 < 0 )
        {
LABEL_14:
          (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v15)(v15);
          if ( v8 >= 0 )
            goto LABEL_15;
          goto LABEL_33;
        }
        v7 = *(_DWORD *)(v23 + 24);
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
  v19 = DefaultConnection;
  if ( DefaultConnection )
  {
    if ( v10 )
      DirectComposition::CConnection::ReleaseSystemResource(DefaultConnection, v10);
    if ( v9 )
      DirectComposition::CConnection::ReleaseSystemResource(v19, v9);
    DirectComposition::CConnection::Release(v19, v18);
  }
  return (unsigned int)v8;
}
