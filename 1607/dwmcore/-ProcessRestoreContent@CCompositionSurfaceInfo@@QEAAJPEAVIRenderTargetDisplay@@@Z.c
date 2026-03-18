/*
 * XREFs of ?ProcessRestoreContent@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180005DB0
 * Callers:
 *     ?ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180005CD0 (-ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::ProcessRestoreContent(
        CCompositionSurfaceInfo *this,
        struct IRenderTargetDisplay *a2)
{
  __int64 (__fastcall ***v2)(CBitmapRealization *__hidden, const struct _GUID *, void **); // r9
  unsigned int v3; // ebx
  __int64 (__fastcall *v5)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(CBitmapRealization *__hidden, const struct _GUID *, void **); // r8
  __int64 (__fastcall *v9)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // edi
  __int64 (__fastcall ***v14)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rcx
  int v16; // eax
  int v17; // eax
  __int64 (__fastcall ***v18)(CBitmapRealization *__hidden, const struct _GUID *, void **); // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **))*((_QWORD *)this + 15);
  v3 = 0;
  v18 = 0LL;
  if ( !v2 )
    return v3;
  v5 = **v2;
  if ( v5 != CBitmapRealization::QueryInterface )
  {
    v13 = v5((CBitmapRealization *)v2, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, (void **)&v18);
LABEL_24:
    v14 = v18;
    goto LABEL_19;
  }
  v6 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4;
  v7 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
     - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v7 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
       - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v7 )
  {
    v18 = v2;
    v13 = 0;
LABEL_27:
    ((void (__fastcall *)(__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **), __int64))(*v2)[1])(
      v2,
      v6);
    goto LABEL_24;
  }
  v8 = CBitmapRealization::HrFindInterface;
  v9 = (*v2)[4];
  if ( v9 == CBitmapRealization::HrFindInterface )
  {
    v10 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
        - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
    if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
      v10 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
          - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
    if ( v10 )
    {
      v11 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
          - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
      if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
        v11 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
            - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
      if ( v11 )
      {
        v12 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
            - *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1;
        if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1 )
          v12 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
              - *(_QWORD *)GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data4;
        if ( v12 )
        {
          v2 = 0LL;
          v18 = 0LL;
          v13 = -2147467263;
        }
        else
        {
          v2 += 2;
          v13 = 0;
          v18 = v2;
        }
      }
      else
      {
        v2 += 15;
        v13 = 0;
        v18 = v2;
      }
    }
    else
    {
      v2 += 14;
      v13 = 0;
      v18 = v2;
    }
  }
  else
  {
    v16 = v9((CBitmapRealization *)v2, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, (void **)&v18);
    v2 = v18;
    v13 = v16;
  }
  if ( v13 >= 0 )
    goto LABEL_27;
  v14 = 0LL;
  v18 = 0LL;
LABEL_19:
  if ( v13 >= 0 )
  {
    v17 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **), struct IRenderTargetDisplay *, __int64 (__fastcall *)(CBitmapRealization *__hidden, const struct _GUID *, void **), __int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **)))(*v14)[7])(
            v14,
            a2,
            v8,
            v2);
    v3 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xCFu);
    v14 = v18;
  }
  if ( v14 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **), __int64, __int64 (__fastcall *)(CBitmapRealization *__hidden, const struct _GUID *, void **), __int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **)))(*v14)[2])(
      v14,
      v6,
      v8,
      v2);
  return v3;
}
