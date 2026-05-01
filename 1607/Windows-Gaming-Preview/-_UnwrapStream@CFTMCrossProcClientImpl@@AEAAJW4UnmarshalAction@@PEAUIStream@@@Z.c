/*
 * XREFs of ?_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z @ 0x180020D8C
 * Callers:
 *     ?UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x180020BF0 (-UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ReleaseMarshalData@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@@Z @ 0x180020C50 (-ReleaseMarshalData@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180020124 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     CoTaskMemFree_0 @ 0x18002716E (CoTaskMemFree_0.c)
 *     RoGetAgileReference_0 @ 0x180027192 (RoGetAgileReference_0.c)
 *     CoReleaseMarshalData_0 @ 0x18002719E (CoReleaseMarshalData_0.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcClientImpl::_UnwrapStream(ULONG *a1, unsigned int a2, IStream *a3)
{
  HRESULT AgileReference_0; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  LPVOID v9; // rcx
  ULONG *v10; // r14
  SIZE_T v11; // rcx
  BYTE *v12; // rbx
  int v13; // eax
  IStream *v14; // rax
  __int64 v15; // rcx
  IStream *v16; // rdi
  IStream *v17; // r8
  __int64 v19; // [rsp+20h] [rbp-10h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+48h] BYREF

  if ( a2 )
  {
    AgileReference_0 = CoReleaseMarshalData_0(a3);
    goto LABEL_14;
  }
  ppv = 0LL;
  AgileReference_0 = CoUnmarshalInterface(a3, &GUID_00000000_0000_0000_c000_000000000046, &ppv);
  if ( AgileReference_0 < 0 )
    goto LABEL_11;
  v7 = *((_QWORD *)a1 + 7);
  if ( v7 )
  {
    *((_QWORD *)a1 + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  AgileReference_0 = 0;
  if ( ppv )
  {
    v19 = 0LL;
    AgileReference_0 = RoGetAgileReference_0(0LL, &GUID_00000000_0000_0000_c000_000000000046, ppv, &v19);
    if ( AgileReference_0 < 0 )
    {
      v8 = v19;
    }
    else
    {
      v8 = *((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 7) = v19;
    }
    if ( v8 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
LABEL_11:
    v9 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
LABEL_14:
  if ( AgileReference_0 >= 0 )
  {
    v10 = a1 + 6;
    AgileReference_0 = IStream_Read(a3, a1 + 6, 4u);
    if ( AgileReference_0 >= 0 )
    {
      v11 = *v10;
      v12 = 0LL;
      ppv = 0LL;
      if ( is_mul_ok(v11, 1uLL) )
      {
        v13 = CTCoAllocPolicy::Alloc((IMalloc *)v11, (v11 * (unsigned __int128)1uLL) >> 64, v11, &ppv);
        v12 = (BYTE *)ppv;
        AgileReference_0 = v13;
        if ( v13 >= 0 )
        {
          if ( *v10 )
            AgileReference_0 = IStream_Read(a3, ppv, *v10);
          if ( AgileReference_0 >= 0 )
          {
            v14 = SHCreateMemStream(v12, *v10);
            v15 = *((_QWORD *)a1 + 8);
            v16 = v14;
            if ( v15 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
            *((_QWORD *)a1 + 8) = v16;
            v17 = v16;
            AgileReference_0 = v16 == 0LL ? 0x8007000E : 0;
            if ( AgileReference_0 >= 0 )
              AgileReference_0 = (*(__int64 (__fastcall **)(ULONG *, _QWORD, IStream *))(*(_QWORD *)a1 + 96LL))(
                                   a1,
                                   a2,
                                   v17);
          }
        }
      }
      else
      {
        AgileReference_0 = -2147024362;
      }
      CoTaskMemFree_0(v12);
    }
  }
  return (unsigned int)AgileReference_0;
}
